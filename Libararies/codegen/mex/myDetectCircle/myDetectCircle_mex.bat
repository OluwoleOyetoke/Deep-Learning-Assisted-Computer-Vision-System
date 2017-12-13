@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2016a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2016a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=myDetectCircle_mex
set MEX_NAME=myDetectCircle_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for myDetectCircle > myDetectCircle_mex.mki
echo COMPILER=%COMPILER%>> myDetectCircle_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> myDetectCircle_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> myDetectCircle_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> myDetectCircle_mex.mki
echo LINKER=%LINKER%>> myDetectCircle_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> myDetectCircle_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> myDetectCircle_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> myDetectCircle_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> myDetectCircle_mex.mki
echo BORLAND=%BORLAND%>> myDetectCircle_mex.mki
echo OMPFLAGS= >> myDetectCircle_mex.mki
echo OMPLINKFLAGS= >> myDetectCircle_mex.mki
echo EMC_COMPILER=msvc100>> myDetectCircle_mex.mki
echo EMC_CONFIG=optim>> myDetectCircle_mex.mki
"C:\Program Files\MATLAB\R2016a\bin\win64\gmake" -B -f myDetectCircle_mex.mk
