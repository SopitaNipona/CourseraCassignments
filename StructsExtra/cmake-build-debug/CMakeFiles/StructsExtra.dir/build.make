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
CMAKE_SOURCE_DIR = /home/diego/Documentos/CForEveryone1/StructsExtra

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/diego/Documentos/CForEveryone1/StructsExtra/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/StructsExtra.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/StructsExtra.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/StructsExtra.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StructsExtra.dir/flags.make

CMakeFiles/StructsExtra.dir/main.c.o: CMakeFiles/StructsExtra.dir/flags.make
CMakeFiles/StructsExtra.dir/main.c.o: /home/diego/Documentos/CForEveryone1/StructsExtra/main.c
CMakeFiles/StructsExtra.dir/main.c.o: CMakeFiles/StructsExtra.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/diego/Documentos/CForEveryone1/StructsExtra/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/StructsExtra.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/StructsExtra.dir/main.c.o -MF CMakeFiles/StructsExtra.dir/main.c.o.d -o CMakeFiles/StructsExtra.dir/main.c.o -c /home/diego/Documentos/CForEveryone1/StructsExtra/main.c

CMakeFiles/StructsExtra.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/StructsExtra.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/diego/Documentos/CForEveryone1/StructsExtra/main.c > CMakeFiles/StructsExtra.dir/main.c.i

CMakeFiles/StructsExtra.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/StructsExtra.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/diego/Documentos/CForEveryone1/StructsExtra/main.c -o CMakeFiles/StructsExtra.dir/main.c.s

# Object files for target StructsExtra
StructsExtra_OBJECTS = \
"CMakeFiles/StructsExtra.dir/main.c.o"

# External object files for target StructsExtra
StructsExtra_EXTERNAL_OBJECTS =

StructsExtra: CMakeFiles/StructsExtra.dir/main.c.o
StructsExtra: CMakeFiles/StructsExtra.dir/build.make
StructsExtra: CMakeFiles/StructsExtra.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/diego/Documentos/CForEveryone1/StructsExtra/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable StructsExtra"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/StructsExtra.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StructsExtra.dir/build: StructsExtra
.PHONY : CMakeFiles/StructsExtra.dir/build

CMakeFiles/StructsExtra.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/StructsExtra.dir/cmake_clean.cmake
.PHONY : CMakeFiles/StructsExtra.dir/clean

CMakeFiles/StructsExtra.dir/depend:
	cd /home/diego/Documentos/CForEveryone1/StructsExtra/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diego/Documentos/CForEveryone1/StructsExtra /home/diego/Documentos/CForEveryone1/StructsExtra /home/diego/Documentos/CForEveryone1/StructsExtra/cmake-build-debug /home/diego/Documentos/CForEveryone1/StructsExtra/cmake-build-debug /home/diego/Documentos/CForEveryone1/StructsExtra/cmake-build-debug/CMakeFiles/StructsExtra.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/StructsExtra.dir/depend

