########################################################################
####################### Makefile Template ##############################
########################################################################

# Compiler settings - Can be customized.
CXX = g++
CXXFLAGS = -std=c++11 -Wall
LDFLAGS = 

AR = ar
ARFLAGS = cr

# Makefile settings - Can be customized.
APPNAME = $(notdir $(shell pwd))
EXT = .cpp
SRCDIR = src
OBJDIR = obj
DEPDIR = dep
INCDIR = include
LIBDIR = lib
BUILDDIR = build
MAINFILE = main

############## Do not change anything from here downwards! #############
SRC = $(wildcard $(SRCDIR)/*$(EXT))
OBJ = $(SRC:$(SRCDIR)/%$(EXT)=$(OBJDIR)/%.o)
INC = $(SRC:$(SRCDIR)/%$(EXT)=$(INCDIR)/%.h)
DEP = $(OBJ:$(OBJDIR)/%.o=$(DEPDIR)/%.d)
LIB = $(filter-out lib/lib$(MAINFILE).a, $(OBJ:$(OBJDIR)/%.o=$(LIBDIR)/lib%.a))
LIBLINK = -L./$(LIBDIR) $(patsubst lib/lib%.a,-l%,$(wildcard $(LIBDIR)/*.a))
# UNIX-based OS variables & settings
RM = rm
DELOBJ = $(OBJ)
DELLIB = $(LIB)
DELDEP = $(DEP)
APP = $(BUILDDIR)/$(APPNAME)
# Windows OS variables & settings
DEL = del
EXE = .exe
WDELOBJ = $(SRC:$(SRCDIR)/%$(EXT)=$(OBJDIR)\\%.o)
WDELLIB = $(OBJ:$(OBJDIR)/%.o=$(LIBDIR)\\lib%.a)
WDELDEP = $(OBJ:$(OBJDIR)/%.o=$(DEPDIR)\\%.d)
WAPP = $(BUILDDIR)\\$(APPNAME)$(EXE)
########################################################################
####################### Targets beginning here ##################################
########################################################################

all: $(APP)

# Builds the app
$(APP): $(OBJ) $(LIB)
	$(CXX) $(CXXFLAGS) $(OBJDIR)/$(MAINFILE).o $(LIBLINK) -o $@ $(LDFLAGS)

# Creates the dependency rules
$(DEPDIR)/%.d: $(SRCDIR)/%$(EXT)
	@$(CPP) $(CFLAGS) -I./$(INCDIR) $< -MM -MT $(@:%.d=$(OBJDIR)/%.o) >$@

# Building rule for .o files and its .c/.cpp in combination with all .h
$(OBJDIR)/%.o: $(SRCDIR)/%$(EXT)
	$(CXX) $(CXXFLAGS) -I./$(INCDIR) -o $@ -c $<

# Building rule for .a files
$(LIBDIR)/lib%.a: $(OBJDIR)/%.o
	@$(AR) $(ARFLAGS) $@ $<

# Includes all .h files
-include $(DEP)

################### Cleaning rules for Unix-based OS ###################
# Cleans complete project
.PHONY: clean
clean:
	$(RM) $(DELOBJ) $(DELDEP) $(DELLIB) $(APP)

# Cleans only all files with the extension .d
.PHONY: cleandep
cleandep:
	$(RM) $(DELDEP)

# Cleans only all files with the extension .o
.PHONY: cleanobj
cleanobj:
	$(RM) $(DELOBJ)

# Cleans only all files with the extension .lib
.PHONY: cleanlib
cleanlib:
	$(RM) $(DELLIB)
#################### Cleaning rules for Windows OS #####################
# Cleans complete project
.PHONY: cleanw
cleanw:
	$(DEL) $(WDELLIB) $(WDELOBJ) $(WDELDEP) $(APPNAME)$(EXE)

# Cleans only all files with the extension .d
.PHONY: cleandepw
cleandepw:
	$(DEL) $(WDELDEP)

# Cleans only all files with the extension .o
.PHONY: cleanobjw
cleanobjw:
	$(DEL) $(WDELOBJ)

# Cleans only all files with the extension .lib
.PHONY: cleanlibw
cleanlibw:
	$(DEL) $(WDELLIB)
