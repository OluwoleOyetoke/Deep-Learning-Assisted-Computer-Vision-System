@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2016a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2016a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=sumTest_mex
set MEX_NAME=sumTest_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for sumTest > sumTest_mex.mki
echo COMPILER=%COMPILER%>> sumTest_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> sumTest_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> sumTest_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> sumTest_mex.mki
echo LINKER=%LINKER%>> sumTest_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> sumTest_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> sumTest_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> sumTest_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> sumTest_mex.mki
echo BORLAND=%BORLAND%>> sumTest_mex.mki
echo OMPFLAGS= >> sumTest_mex.mki
echo OMPLINKFLAGS= >> sumTest_mex.mki
echo EMC_COMPILER=msvc140>> sumTest_mex.mki
echo EMC_CONFIG=optim>> sumTest_mex.mki
"C:\Program Files\MATLAB\R2016a\bin\win64\gmake" -B -f sumTest_mex.mk
