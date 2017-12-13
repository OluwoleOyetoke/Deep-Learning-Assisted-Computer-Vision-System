@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2016a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2016a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=analyseCriticalAreas_mex
set MEX_NAME=analyseCriticalAreas_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for analyseCriticalAreas > analyseCriticalAreas_mex.mki
echo COMPILER=%COMPILER%>> analyseCriticalAreas_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> analyseCriticalAreas_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> analyseCriticalAreas_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> analyseCriticalAreas_mex.mki
echo LINKER=%LINKER%>> analyseCriticalAreas_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> analyseCriticalAreas_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> analyseCriticalAreas_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> analyseCriticalAreas_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> analyseCriticalAreas_mex.mki
echo BORLAND=%BORLAND%>> analyseCriticalAreas_mex.mki
echo OMPFLAGS=/openmp >> analyseCriticalAreas_mex.mki
echo OMPLINKFLAGS=/nodefaultlib:vcomp /LIBPATH:"C:\PROGRA~1\MATLAB\R2016a\bin\win64" >> analyseCriticalAreas_mex.mki
echo EMC_COMPILER=msvc100>> analyseCriticalAreas_mex.mki
echo EMC_CONFIG=optim>> analyseCriticalAreas_mex.mki
"C:\Program Files\MATLAB\R2016a\bin\win64\gmake" -B -f analyseCriticalAreas_mex.mk
