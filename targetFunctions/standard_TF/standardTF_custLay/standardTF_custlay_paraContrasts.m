function [outSsubs,backgs,qshifts,sfs,nbas,nbss,resols,chis,...
            reflectivity,Simulation,shifted_data,layerSlds,sldProfiles,...
            allLayers,allRoughs] = ...
            standardTF_custlay_single...
            (resample,numberOfContrasts,geometry,repeatLayers,cBacks, ...
            cShifts,cScales,cNbas,cNbss,cRes,backs,shifts,sf,nba,nbs, ...
            res,dataPresent,allData,dataLimits,simLimits,nParams, ...
            params,contrastLayers,numberOfLayers,layersDetails,problemDef_limits, ...
            fname,lang,path,backsType,calcSld)

                     
% Pre-Allocation of output arrays...
%   --- Begin Memory Allocation ---
backgs = zeros(numberOfContrasts,1);
qshifts = zeros(numberOfContrasts,1);
sfs = zeros(numberOfContrasts,1);
nbas = zeros(numberOfContrasts,1);
nbss = zeros(numberOfContrasts,1);
resols = zeros(numberOfContrasts,1);
allRoughs = zeros(numberOfContrasts,1);
outSsubs = zeros(numberOfContrasts,1);
chis =  zeros(numberOfContrasts,1);
allLayers = cell(numberOfContrasts,1); 
layerSlds = cell(numberOfContrasts,1);
sldProfiles = cell(numberOfContrasts,1);
shifted_data = cell(numberOfContrasts,1);

reflectivity = cell(numberOfContrasts,1);
for i = 1:numberOfContrasts
    reflectivity{i} = [1 1 ; 1 1];
end
coder.varsize('reflectivity{:}',[10000 2],[1 0]);

Simulation = cell(numberOfContrasts,1);
for i = 1:numberOfContrasts
    Simulation{i} = [1 1 ; 1 1];
end
coder.varsize('Simulation{:}',[10000 2],[1 0]);

allLayers = cell(numberOfContrasts,1);
for i = 1:numberOfContrasts
    allLayers{i} = [1 ; 1];
end
coder.varsize('allLayers{:}',[10000 3],[1 1]);
%   --- End Memory Allocation ---

% Parallelise  over all contrasts
for i = 1:numberOfContrasts
    % Extract the relevant parameter values for this contrast
    % from the input arrays.
    % First need to decide which values of the backrounds, scalefactors
    % data shifts and bulk contrasts are associated with this contrast
    [thisBackground,thisQshift,thisSf,thisNba,thisNbs,thisResol] = backSort(cBacks(i),cShifts(i),cScales(i),cNbas(i),cNbss(i),cRes(i),backs,shifts,sf,nba,nbs,res);
    
    % Call the custom layers function to get the layers array...
    [outLayers,allRoughs(i)] = call_customLayers(params,i,fname,path,thisNba,thisNbs,lang);
    allLayers{i} = outLayers;
    thisContrastLayers = outLayers;
    
    % For the other parameters, we extract the correct ones from the input
    % arrays
    thisRough = allRoughs(i);      % Substrate roughness is always first parameter for custom layers
    thisRepeatLayers = repeatLayers{i};
    thisResample = resample(i);
    thisCalcSld = calcSld;
    thisData = allData{i};
    thisDataPresent = dataPresent(i);
    thisDataLimits = dataLimits{i};
    thisSimLimits = simLimits{i};
    thisBacksType = backsType(i);
    
    % Now call the core standardTF_stanlay reflectivity calculation
    % In this case we are single cored, so we do not parallelise over
    % points
    paralellPoints = 'single';
    
    % Call the reflectivity calculation
    [sldProfile,reflect,Simul,shifted_dat,layerSld,thisChiSquared,thisSsubs] = ...
    standardTF_layers_core...
    (thisContrastLayers, thisRough, ...
    geometry, thisNba, thisNbs, thisResample, thisCalcSld, thisSf, thisQshift,...
    thisDataPresent, thisData, thisDataLimits, thisSimLimits, thisRepeatLayers,...
    thisBackground,thisResol,thisBacksType,nParams,paralellPoints);
   
    % Store returned values for this contrast in the output arrays.
    % As well as the calculated profiles, we also store a record of 
    % the other values (background, scalefactors etc) for each contrast
    % for future use.
    outSsubs(i) = thisSsubs;
    sldProfiles{i} = sldProfile;
    reflectivity{i} = reflect;
    Simulation{i} = Simul;
    shifted_data{i} = shifted_dat;
    layerSlds{i} = layerSld;
    chis(i) = thisChiSquared;
    backgs(i) = thisBackground;
    qshifts(i) = thisQshift;
    sfs(i) = thisSf;
    nbas(i) = thisNba;
    nbss(i) = thisNbs;
    resols(i) = thisResol;
    allRoughs(i) = thisRough;

end


end