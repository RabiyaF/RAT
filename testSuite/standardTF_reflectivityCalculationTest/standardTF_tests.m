% Class based unit tests from matlab.unittest.TestCase

classdef standardTF_tests < matlab.unittest.TestCase

    properties
        % Test data
        stanLayInputs;
        expectedOutputs;
        problemDef;
        problemDef_cells;
        problemDef_limits;
        controls;
        

        expectedProblem;
        expectedResult;
    end

    methods (TestMethodSetup)
        function standLayInputs = load_test_data_inputs(testCase)
            % Load test data
            testCase.stanLayInputs = load('standardLayersInputs.mat');
        end
        
        function expectedOutputs = load_test_data_outputs(testCase)
            % Expected outputs
            testCase.expectedOutputs = load('standardLayersOutput.mat');
        end
  
        function problemDef = setProblemDef(testCase)
            % Expected outputs
            testCase.problemDef = testCase.stanLayInputs.standardLayersInputs.problemDef;
        end
        function problemDef_cells = setProblemDef_cells(testCase)

            testCase.problemDef_cells = testCase.stanLayInputs.standardLayersInputs.problemDef_cells;
        end
        
        
        function problemDef_limits = setProblemDef_limits(testCase)

            testCase.problemDef_limits = testCase.stanLayInputs.standardLayersInputs.problemDef_limits;
        end

        function controls = setControl(testCase)

            testCase.controls = testCase.stanLayInputs.standardLayersInputs.controls;
        end
        function expectedProblem = setexpectedProblem(testCase)

            testCase.expectedProblem = testCase.expectedOutputs.standardLayersOutput.problem;
        end
        
        function expectedResult = setexpectedResult(testCase)
            testCase.expectedResult = testCase.expectedOutputs.standardLayersOutput.result;
        end
    end


    methods (Test)
    
        
        function standardLayers_single_MATLAB(testCase)
            % Test if the input is similar to the exercised output
        
  
            
            whichParallel = 'single';
            useCompiled = false;
            % Call the function
            [testOutProblem1,testOutResult1] = reflectivity_calculation_testing_wrapper(testCase.problemDef, testCase.problemDef_cells,testCase.problemDef_limits,...
            testCase.controls, useCompiled, whichParallel);

            testCase.verifyEqual(testOutProblem1,testCase.expectedProblem);
            testCase.verifyEqual(testOutResult1,testCase.expectedResult);


        end

        function standardLayers_single_MEX(testCase)

            % now with the compiled version
            whichParallel = 'single';
            useCompiled = true;
            [testOutProblem2,testOutResult2] = reflectivity_calculation_testing_wrapper(testCase.problemDef, testCase.problemDef_cells,testCase.problemDef_limits,...
            testCase.controls, useCompiled, whichParallel);

            % Check the outputs are the same
            
            testCase.verifyEqual(testOutProblem2,testCase.expectedProblem);
            
            testCase.verifyEqual(testOutResult2,testCase.expectedResult);
                       
        end

        function standardLayers_parallel_points_MATLAB(testCase)
            % Test if the input is similar to the exercised output

            whichParallel = 'points';
            useCompiled = false;
            % Call the function
            [testOutProblem1,testOutResult1] = reflectivity_calculation_testing_wrapper(testCase.problemDef, testCase.problemDef_cells,testCase.problemDef_limits,...
            testCase.controls, useCompiled, whichParallel);

            testCase.verifyEqual(testOutProblem1,testCase.expectedProblem);
            testCase.verifyEqual(testOutResult1,testCase.expectedResult);

        end

        function standardLayers_parallel_points_MEX(testCase)


            % now with the compiled version
            whichParallel = 'points';
            useCompiled = true;
            [testOutProblem2,testOutResult2] = reflectivity_calculation_testing_wrapper(testCase.problemDef, testCase.problemDef_cells,testCase.problemDef_limits,...
            testCase.controls, useCompiled, whichParallel);

            % Check the outputs are the same
            
            testCase.verifyEqual(testOutProblem2,testCase.expectedProblem);
            
            testCase.verifyEqual(testOutResult2,testCase.expectedResult);

        end

        function standardLayers_parallel_contrasts_MATLAB(testCase)
            % Test if the input is similar to the exercised output

            whichParallel = 'contrasts';
            useCompiled = false;
            % Call the function
            [testOutProblem1,testOutResult1] = reflectivity_calculation_testing_wrapper(testCase.problemDef, testCase.problemDef_cells,testCase.problemDef_limits,...
            testCase.controls, useCompiled, whichParallel);

            testCase.verifyEqual(testOutProblem1,testCase.expectedProblem);
            testCase.verifyEqual(testOutResult1,testCase.expectedResult);
        end
        function standardLayers_parallel_contrasts_MEX(testCase)
            % now with the compiled version
            useCompiled = true;
            [testOutProblem2,testOutResult2] = reflectivity_calculation_testing_wrapper(testCase.problemDef, testCase.problemDef_cells,testCase.problemDef_limits,...
            testCase.controls, useCompiled, whichParallel);

            % Check the outputs are the same

            testCase.verifyEqual(testOutProblem2,testCase.expectedProblem);
            testCase.verifyEqual(testOutResult2,testCase.expectedResult);
            
        end



        
    end
    
end


%{
                problemDef = testCase.stanLayInputs.standardLayersInputs.problemDef;
            problemDef_cells = testCase.stanLayInputs.standardLayersInputs.problemDef_cells;
            problemDef_limits = testCase.stanLayInputs.standardLayersInputs.problemDef_limits;
            controls = testCase.stanLayInputs.standardLayersInputs.controls;
            

            expectedProblem = testCase.expectedOutputs.standardLayersOutput.problem;
            expectedResult = testCase.expectedOutputs.standardLayersOutput.result;
%}
