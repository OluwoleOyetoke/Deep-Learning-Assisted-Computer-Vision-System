@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2016a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2016a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=detectCircle_mex
set MEX_NAME=detectCircle_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for detectCircle > detectCircle_mex.mki
echo COMPILER=%COMPILER%>> detectCircle_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> detectCircle_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> detectCircle_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> detectCircle_mex.mki
echo LINKER=%LINKER%>> detectCircle_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> detectCircle_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> detectCircle_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> detectCircle_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> detectCircle_mex.mki
echo BORLAND=%BORLAND%>> detectCircle_mex.mki
echo OMPFLAGS=/openmp >> detectCircle_mex.mki
echo OMPLINKFLAGS=/nodefaultlib:vcomp /LIBPATH:"C:\PROGRA~1\MATLAB\R2016a\bin\win64" >> detectCircle_mex.mki
echo EMC_COMPILER=msvc100>> detectCircle_mex.mki
echo EMC_CONFIG=optim>> detectCircle_mex.mki
"C:\Program Files\MATLAB\R2016a\bin\win64\gmake" -B -f detectCircle_mex.mk
