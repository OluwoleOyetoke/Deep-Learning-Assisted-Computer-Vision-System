@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2016a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2016a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=detectCorner_mex
set MEX_NAME=detectCorner_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for detectCorner > detectCorner_mex.mki
echo COMPILER=%COMPILER%>> detectCorner_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> detectCorner_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> detectCorner_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> detectCorner_mex.mki
echo LINKER=%LINKER%>> detectCorner_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> detectCorner_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> detectCorner_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> detectCorner_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> detectCorner_mex.mki
echo BORLAND=%BORLAND%>> detectCorner_mex.mki
echo OMPFLAGS=/openmp >> detectCorner_mex.mki
echo OMPLINKFLAGS=/nodefaultlib:vcomp /LIBPATH:"C:\PROGRA~1\MATLAB\R2016a\bin\win64" >> detectCorner_mex.mki
echo EMC_COMPILER=msvc100>> detectCorner_mex.mki
echo EMC_CONFIG=optim>> detectCorner_mex.mki
"C:\Program Files\MATLAB\R2016a\bin\win64\gmake" -B -f detectCorner_mex.mk
