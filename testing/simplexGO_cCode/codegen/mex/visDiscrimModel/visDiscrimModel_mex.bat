@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2015a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2015a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=visDiscrimModel_mex_test
set MEX_NAME=visDiscrimModel_mex_test
set MEX_EXT=.mexw64
call "C:\PROGRA~1\MATLAB\R2015a\sys\lcc64\lcc64\mex\lcc64opts.bat"
echo # Make settings for visDiscrimModel > visDiscrimModel_mex.mki
echo COMPILER=%COMPILER%>> visDiscrimModel_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> visDiscrimModel_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> visDiscrimModel_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> visDiscrimModel_mex.mki
echo LINKER=%LINKER%>> visDiscrimModel_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> visDiscrimModel_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> visDiscrimModel_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> visDiscrimModel_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> visDiscrimModel_mex.mki
echo BORLAND=%BORLAND%>> visDiscrimModel_mex.mki
echo OMPFLAGS= >> visDiscrimModel_mex.mki
echo OMPLINKFLAGS= >> visDiscrimModel_mex.mki
echo EMC_COMPILER=lcc64>> visDiscrimModel_mex.mki
echo EMC_CONFIG=optim>> visDiscrimModel_mex.mki
"C:\Program Files\MATLAB\R2015a\bin\win64\gmake" -B -f visDiscrimModel_mex.mk
