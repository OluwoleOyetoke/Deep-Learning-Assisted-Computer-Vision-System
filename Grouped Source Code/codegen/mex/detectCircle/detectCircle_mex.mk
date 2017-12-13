START_DIR = C:\Users\OLUWOL~1\Desktop\UNIVER~1\MAINPR~1\PROJEC~1\MATCON~2

MATLAB_ROOT = C:\PROGRA~1\MATLAB\R2016a
MAKEFILE = detectCircle_mex.mk

include detectCircle_mex.mki


SRC_FILES =  \
	detectCircle_mexutil.c \
	detectCircle_data.c \
	detectCircle_initialize.c \
	detectCircle_terminate.c \
	detectCircle.c \
	imfindcircles.c \
	validateattributes.c \
	eml_int_forloop_overflow_check.c \
	warning.c \
	chaccum.c \
	all.c \
	isequal.c \
	imfilter.c \
	scalexpAlloc.c \
	repmat.c \
	assertValidSizeArg.c \
	abs.c \
	indexShapeCheck.c \
	multithresh.c \
	any.c \
	sort1.c \
	sortIdx.c \
	sum.c \
	error.c \
	sub2ind.c \
	log.c \
	exp.c \
	chcenters.c \
	ordfilt2.c \
	regionprops.c \
	bwconncomp.c \
	round.c \
	chradiiphcode.c \
	_coder_detectCircle_info.c \
	_coder_detectCircle_api.c \
	_coder_detectCircle_mex.c \
	detectCircle_emxutil.c

MEX_FILE_NAME_WO_EXT = detectCircle_mex
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
TARGET = $(MEX_FILE_NAME)

BlockModules_LIBS = "$(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwippfilter.lib" "$(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwgrayto8.lib" "$(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwtbbhist.lib" "$(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwimfilter.lib" "$(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwgetnumcores.lib" "$(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwordfilt2.lib" "$(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwimregionalmax.lib" "$(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwippreconstruct.lib" 
SYS_LIBS = $(BlockModules_LIBS) 


#
#====================================================================
# gmake makefile fragment for building MEX functions using MSVC
# Copyright 2007-2015 The MathWorks, Inc.
#====================================================================
#
SHELL = cmd
OBJEXT = obj
CC = $(COMPILER)
LD = $(LINKER)
.SUFFIXES: .$(OBJEXT)

OBJLISTC = $(SRC_FILES:.c=.$(OBJEXT))
OBJLIST  = $(OBJLISTC:.cpp=.$(OBJEXT))

ifneq (,$(findstring $(EMC_COMPILER),msvc80 msvc90 msvc100 msvc100free msvc110 msvc120 msvc140 msvcsdk))
  TARGETMT = $(TARGET).manifest
  MEX = $(TARGETMT)
  STRICTFP = /fp:strict
else
  MEX = $(TARGET)
  STRICTFP = /Op
endif

target: $(MEX)

MATLAB_INCLUDES = /I "$(MATLAB_ROOT)\simulink\include"
MATLAB_INCLUDES+= /I "$(MATLAB_ROOT)\toolbox\shared\simtargets"
SYS_INCLUDE = $(MATLAB_INCLUDES)

# Additional includes

SYS_INCLUDE += /I "$(START_DIR)"
SYS_INCLUDE += /I "$(START_DIR)\codegen\mex\detectCircle"
SYS_INCLUDE += /I ".\interface"
SYS_INCLUDE += /I "$(MATLAB_ROOT)\extern\include"
SYS_INCLUDE += /I "."

DIRECTIVES = $(MEX_FILE_NAME_WO_EXT)_mex.arf
COMP_FLAGS = $(COMPFLAGS) $(OMPFLAGS)
LINK_FLAGS = $(filter-out /export:mexFunction, $(LINKFLAGS))
LINK_FLAGS += /NODEFAULTLIB:LIBCMT
ifeq ($(EMC_CONFIG),optim)
  COMP_FLAGS += $(OPTIMFLAGS) $(STRICTFP)
  LINK_FLAGS += $(LINKOPTIMFLAGS)
else
  COMP_FLAGS += $(DEBUGFLAGS)
  LINK_FLAGS += $(LINKDEBUGFLAGS)
endif
LINK_FLAGS += $(OMPLINKFLAGS)
LINK_FLAGS += /OUT:$(TARGET)
LINK_FLAGS += 

CFLAGS =  $(COMP_FLAGS) $(USER_INCLUDE) $(SYS_INCLUDE)
CPPFLAGS =  $(CFLAGS)

%.$(OBJEXT) : %.c
	$(CC) $(CFLAGS) "$<"

%.$(OBJEXT) : %.cpp
	$(CC) $(CPPFLAGS) "$<"

# Additional sources

%.$(OBJEXT) : $(START_DIR)/%.c
	$(CC) $(CFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)\codegen\mex\detectCircle/%.c
	$(CC) $(CFLAGS) "$<"

%.$(OBJEXT) : interface/%.c
	$(CC) $(CFLAGS) "$<"



%.$(OBJEXT) : $(START_DIR)/%.cpp
	$(CC) $(CPPFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)\codegen\mex\detectCircle/%.cpp
	$(CC) $(CPPFLAGS) "$<"

%.$(OBJEXT) : interface/%.cpp
	$(CC) $(CPPFLAGS) "$<"



$(TARGET): $(OBJLIST) $(MAKEFILE) $(DIRECTIVES)
	$(LD) $(LINK_FLAGS) $(OBJLIST) $(USER_LIBS) $(SYS_LIBS) @$(DIRECTIVES)
	@cmd /C "echo Build completed using compiler $(EMC_COMPILER)"

$(TARGETMT): $(TARGET)
	mt -outputresource:"$(TARGET);2" -manifest "$(TARGET).manifest"

#====================================================================

