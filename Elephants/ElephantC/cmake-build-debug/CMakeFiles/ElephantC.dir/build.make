# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/diego/.local/share/JetBrains/Toolbox/apps/clion/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /home/diego/.local/share/JetBrains/Toolbox/apps/clion/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/diego/Documentos/Github/CourseraCassignments/Elephants/ElephantC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/diego/Documentos/Github/CourseraCassignments/Elephants/ElephantC/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ElephantC.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ElephantC.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ElephantC.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ElephantC.dir/flags.make

CMakeFiles/ElephantC.dir/main.c.o: CMakeFiles/ElephantC.dir/flags.make
CMakeFiles/ElephantC.dir/main.c.o: /home/diego/Documentos/Github/CourseraCassignments/Elephants/ElephantC/main.c
CMakeFiles/ElephantC.dir/main.c.o: CMakeFiles/ElephantC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/diego/Documentos/Github/CourseraCassignments/Elephants/ElephantC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ElephantC.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/ElephantC.dir/main.c.o -MF CMakeFiles/ElephantC.dir/main.c.o.d -o CMakeFiles/ElephantC.dir/main.c.o -c /home/diego/Documentos/Github/CourseraCassignments/Elephants/ElephantC/main.c

CMakeFiles/ElephantC.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/ElephantC.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/diego/Documentos/Github/CourseraCassignments/Elephants/ElephantC/main.c > CMakeFiles/ElephantC.dir/main.c.i

CMakeFiles/ElephantC.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/ElephantC.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/diego/Documentos/Github/CourseraCassignments/Elephants/ElephantC/main.c -o CMakeFiles/ElephantC.dir/main.c.s

# Object files for target ElephantC
ElephantC_OBJECTS = \
"CMakeFiles/ElephantC.dir/main.c.o"

# External object files for target ElephantC
ElephantC_EXTERNAL_OBJECTS =

ElephantC: CMakeFiles/ElephantC.dir/main.c.o
ElephantC: CMakeFiles/ElephantC.dir/build.make
ElephantC: CMakeFiles/ElephantC.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/diego/Documentos/Github/CourseraCassignments/Elephants/ElephantC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ElephantC"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ElephantC.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ElephantC.dir/build: ElephantC
.PHONY : CMakeFiles/ElephantC.dir/build

CMakeFiles/ElephantC.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ElephantC.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ElephantC.dir/clean

CMakeFiles/ElephantC.dir/depend:
	cd /home/diego/Documentos/Github/CourseraCassignments/Elephants/ElephantC/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diego/Documentos/Github/CourseraCassignments/Elephants/ElephantC /home/diego/Documentos/Github/CourseraCassignments/Elephants/ElephantC /home/diego/Documentos/Github/CourseraCassignments/Elephants/ElephantC/cmake-build-debug /home/diego/Documentos/Github/CourseraCassignments/Elephants/ElephantC/cmake-build-debug /home/diego/Documentos/Github/CourseraCassignments/Elephants/ElephantC/cmake-build-debug/CMakeFiles/ElephantC.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/ElephantC.dir/depend

