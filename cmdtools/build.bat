@echo off
setlocal
set CPP_PROJECT_WS_ROOT_DIR=%~dp0\..\..\
set CPP_PROJECT_NAME=NorthernForce-Robot-2013
set CPP_PROJECT_ROOT_DIR=%CPP_PROJECT_WS_ROOT_DIR%%CPP_PROJECT_NAME%
C:\Python27\python.exe ucpp_gen_makefile.py > ..\PPC603gnu\cmdlineMakefile
C:\WindRiver\wrenv.exe -p vxworks-6.3 make -C ..\PPC603gnu -f cmdlineMakefile %1
