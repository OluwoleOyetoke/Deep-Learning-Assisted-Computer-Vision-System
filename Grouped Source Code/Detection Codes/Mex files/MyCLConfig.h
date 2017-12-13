#ifndef GUARD1
#define GUARD1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <stdarg.h>   
#endif

#ifndef GUARD2
#define GUARD2
#include "SetUpBase.h"
#define MAX_SOURCE_SIZE (0x100000)
#endif

#ifndef GUARD3
#define GUARD3
//Make guard for windows and Mac OS
#ifdef __APPLE__
#include <OpenCL/opencl.h>
#else
//Allow the use of depricated functions even if target device is in confromance witha  higher OpenCL standard
//#define CL_USE_DEPRECATED_OPENCL_1_0_APIS 
#include <CL/cl.h>
#endif
#endif

