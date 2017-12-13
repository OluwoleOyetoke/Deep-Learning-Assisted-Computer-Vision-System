@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2016a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2016a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=detectEdge_mex
set MEX_NAME=detectEdge_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for detectEdge > detectEdge_mex.mki
echo COMPILER=%COMPILER%>> detectEdge_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> detectEdge_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> detectEdge_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> detectEdge_mex.mki
echo LINKER=%LINKER%>> detectEdge_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> detectEdge_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> detectEdge_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> detectEdge_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> detectEdge_mex.mki
echo BORLAND=%BORLAND%>> detectEdge_mex.mki
echo OMPFLAGS=/openmp >> detectEdge_mex.mki
echo OMPLINKFLAGS=/nodefaultlib:vcomp /LIBPATH:"C:\PROGRA~1\MATLAB\R2016a\bin\win64" >> detectEdge_mex.mki
echo EMC_COMPILER=msvc100>> detectEdge_mex.mki
echo EMC_CONFIG=optim>> detectEdge_mex.mki
"C:\Program Files\MATLAB\R2016a\bin\win64\gmake" -B -f detectEdge_mex.mk
