@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2016a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2016a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=shapeAnalyser_mex
set MEX_NAME=shapeAnalyser_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for shapeAnalyser > shapeAnalyser_mex.mki
echo COMPILER=%COMPILER%>> shapeAnalyser_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> shapeAnalyser_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> shapeAnalyser_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> shapeAnalyser_mex.mki
echo LINKER=%LINKER%>> shapeAnalyser_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> shapeAnalyser_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> shapeAnalyser_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> shapeAnalyser_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> shapeAnalyser_mex.mki
echo BORLAND=%BORLAND%>> shapeAnalyser_mex.mki
echo OMPFLAGS= >> shapeAnalyser_mex.mki
echo OMPLINKFLAGS= >> shapeAnalyser_mex.mki
echo EMC_COMPILER=msvc100>> shapeAnalyser_mex.mki
echo EMC_CONFIG=optim>> shapeAnalyser_mex.mki
"C:\Program Files\MATLAB\R2016a\bin\win64\gmake" -B -f shapeAnalyser_mex.mk
