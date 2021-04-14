/*
 * Non-Degree Granting Education License -- for use at non-degree
 * granting, nonprofit, educational organizations only. Not for
 * government, commercial, or other organizational use.
 *
 * standardTF_stanlay_parallel_types.h
 *
 * Code generation for function 'standardTF_stanlay_parallel'
 *
 */

#ifndef STANDARDTF_STANLAY_PARALLEL_TYPES_H
#define STANDARDTF_STANLAY_PARALLEL_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_cell_wrap_0
#define typedef_cell_wrap_0

typedef struct {
  double f1[2];
} cell_wrap_0;

#endif                                 /*typedef_cell_wrap_0*/

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  double *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

#ifndef typedef_cell_wrap_1
#define typedef_cell_wrap_1

typedef struct {
  emxArray_real_T *f1;
} cell_wrap_1;

#endif                                 /*typedef_cell_wrap_1*/

#ifndef struct_emxArray_real_T_1x5
#define struct_emxArray_real_T_1x5

struct emxArray_real_T_1x5
{
  double data[5];
  int size[2];
};

#endif                                 /*struct_emxArray_real_T_1x5*/

#ifndef typedef_emxArray_real_T_1x5
#define typedef_emxArray_real_T_1x5

typedef struct emxArray_real_T_1x5 emxArray_real_T_1x5;

#endif                                 /*typedef_emxArray_real_T_1x5*/

#ifndef typedef_cell_wrap_2
#define typedef_cell_wrap_2

typedef struct {
  emxArray_real_T_1x5 f1;
} cell_wrap_2;

#endif                                 /*typedef_cell_wrap_2*/

#ifndef typedef_cell_wrap_3
#define typedef_cell_wrap_3

typedef struct {
  emxArray_real_T *f1;
} cell_wrap_3;

#endif                                 /*typedef_cell_wrap_3*/

#ifndef struct_emxArray_real_T_2x5
#define struct_emxArray_real_T_2x5

struct emxArray_real_T_2x5
{
  double data[10];
  int size[2];
};

#endif                                 /*struct_emxArray_real_T_2x5*/

#ifndef typedef_emxArray_real_T_2x5
#define typedef_emxArray_real_T_2x5

typedef struct emxArray_real_T_2x5 emxArray_real_T_2x5;

#endif                                 /*typedef_emxArray_real_T_2x5*/

#ifndef struct_sOIH0ElkLJgjuq7Uuo7V2CD
#define struct_sOIH0ElkLJgjuq7Uuo7V2CD

struct sOIH0ElkLJgjuq7Uuo7V2CD
{
  emxArray_real_T_2x5 f1;
};

#endif                                 /*struct_sOIH0ElkLJgjuq7Uuo7V2CD*/

#ifndef typedef_cell_wrap_4
#define typedef_cell_wrap_4

typedef struct sOIH0ElkLJgjuq7Uuo7V2CD cell_wrap_4;

#endif                                 /*typedef_cell_wrap_4*/

#ifndef struct_emxArray__common
#define struct_emxArray__common

struct emxArray__common
{
  void *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray__common*/

#ifndef typedef_emxArray__common
#define typedef_emxArray__common

typedef struct emxArray__common emxArray__common;

#endif                                 /*typedef_emxArray__common*/

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T

struct emxArray_boolean_T
{
  boolean_T *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_boolean_T*/

#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T

typedef struct emxArray_boolean_T emxArray_boolean_T;

#endif                                 /*typedef_emxArray_boolean_T*/

#ifndef struct_emxArray_cell_wrap_0
#define struct_emxArray_cell_wrap_0

struct emxArray_cell_wrap_0
{
  cell_wrap_0 *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_cell_wrap_0*/

#ifndef typedef_emxArray_cell_wrap_0
#define typedef_emxArray_cell_wrap_0

typedef struct emxArray_cell_wrap_0 emxArray_cell_wrap_0;

#endif                                 /*typedef_emxArray_cell_wrap_0*/

#ifndef struct_emxArray_cell_wrap_1
#define struct_emxArray_cell_wrap_1

struct emxArray_cell_wrap_1
{
  cell_wrap_1 *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_cell_wrap_1*/

#ifndef typedef_emxArray_cell_wrap_1
#define typedef_emxArray_cell_wrap_1

typedef struct emxArray_cell_wrap_1 emxArray_cell_wrap_1;

#endif                                 /*typedef_emxArray_cell_wrap_1*/

#ifndef struct_emxArray_cell_wrap_2
#define struct_emxArray_cell_wrap_2

struct emxArray_cell_wrap_2
{
  cell_wrap_2 *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_cell_wrap_2*/

#ifndef typedef_emxArray_cell_wrap_2
#define typedef_emxArray_cell_wrap_2

typedef struct emxArray_cell_wrap_2 emxArray_cell_wrap_2;

#endif                                 /*typedef_emxArray_cell_wrap_2*/

#ifndef struct_emxArray_cell_wrap_3
#define struct_emxArray_cell_wrap_3

struct emxArray_cell_wrap_3
{
  cell_wrap_3 *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_cell_wrap_3*/

#ifndef typedef_emxArray_cell_wrap_3
#define typedef_emxArray_cell_wrap_3

typedef struct emxArray_cell_wrap_3 emxArray_cell_wrap_3;

#endif                                 /*typedef_emxArray_cell_wrap_3*/

#ifndef struct_emxArray_cell_wrap_4
#define struct_emxArray_cell_wrap_4

struct emxArray_cell_wrap_4
{
  cell_wrap_4 *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_cell_wrap_4*/

#ifndef typedef_emxArray_cell_wrap_4
#define typedef_emxArray_cell_wrap_4

typedef struct emxArray_cell_wrap_4 emxArray_cell_wrap_4;

#endif                                 /*typedef_emxArray_cell_wrap_4*/

#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T

struct emxArray_char_T
{
  char *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_char_T*/

#ifndef typedef_emxArray_char_T
#define typedef_emxArray_char_T

typedef struct emxArray_char_T emxArray_char_T;

#endif                                 /*typedef_emxArray_char_T*/

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int32_T*/

#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T

typedef struct emxArray_int32_T emxArray_int32_T;

#endif                                 /*typedef_emxArray_int32_T*/

#ifndef struct_emxArray_uint32_T
#define struct_emxArray_uint32_T

struct emxArray_uint32_T
{
  unsigned int *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_uint32_T*/

#ifndef typedef_emxArray_uint32_T
#define typedef_emxArray_uint32_T

typedef struct emxArray_uint32_T emxArray_uint32_T;

#endif                                 /*typedef_emxArray_uint32_T*/
#endif

/* End of code generation (standardTF_stanlay_parallel_types.h) */