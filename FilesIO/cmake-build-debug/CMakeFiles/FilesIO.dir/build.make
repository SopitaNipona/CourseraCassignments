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
CMAKE_SOURCE_DIR = /home/diego/Documentos/CForEveryone1/FilesIO

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/diego/Documentos/CForEveryone1/FilesIO/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FilesIO.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/FilesIO.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/FilesIO.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FilesIO.dir/flags.make

CMakeFiles/FilesIO.dir/main.c.o: CMakeFiles/FilesIO.dir/flags.make
CMakeFiles/FilesIO.dir/main.c.o: /home/diego/Documentos/CForEveryone1/FilesIO/main.c
CMakeFiles/FilesIO.dir/main.c.o: CMakeFiles/FilesIO.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/diego/Documentos/CForEveryone1/FilesIO/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/FilesIO.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/FilesIO.dir/main.c.o -MF CMakeFiles/FilesIO.dir/main.c.o.d -o CMakeFiles/FilesIO.dir/main.c.o -c /home/diego/Documentos/CForEveryone1/FilesIO/main.c

CMakeFiles/FilesIO.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/FilesIO.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/diego/Documentos/CForEveryone1/FilesIO/main.c > CMakeFiles/FilesIO.dir/main.c.i

CMakeFiles/FilesIO.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/FilesIO.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/diego/Documentos/CForEveryone1/FilesIO/main.c -o CMakeFiles/FilesIO.dir/main.c.s

# Object files for target FilesIO
FilesIO_OBJECTS = \
"CMakeFiles/FilesIO.dir/main.c.o"

# External object files for target FilesIO
FilesIO_EXTERNAL_OBJECTS =

FilesIO: CMakeFiles/FilesIO.dir/main.c.o
FilesIO: CMakeFiles/FilesIO.dir/build.make
FilesIO: CMakeFiles/FilesIO.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/diego/Documentos/CForEveryone1/FilesIO/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable FilesIO"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FilesIO.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FilesIO.dir/build: FilesIO
.PHONY : CMakeFiles/FilesIO.dir/build

CMakeFiles/FilesIO.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FilesIO.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FilesIO.dir/clean

CMakeFiles/FilesIO.dir/depend:
	cd /home/diego/Documentos/CForEveryone1/FilesIO/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diego/Documentos/CForEveryone1/FilesIO /home/diego/Documentos/CForEveryone1/FilesIO /home/diego/Documentos/CForEveryone1/FilesIO/cmake-build-debug /home/diego/Documentos/CForEveryone1/FilesIO/cmake-build-debug /home/diego/Documentos/CForEveryone1/FilesIO/cmake-build-debug/CMakeFiles/FilesIO.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/FilesIO.dir/depend

