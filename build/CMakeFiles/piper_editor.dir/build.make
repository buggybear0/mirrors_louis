# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/louis.burguieres/wdc_workspace/Mirrors

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/louis.burguieres/wdc_workspace/Mirrors/build

# Include any dependencies generated for this target.
include CMakeFiles/piper_editor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/piper_editor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/piper_editor.dir/flags.make

CMakeFiles/piper_editor.dir/src/main.cc.o: CMakeFiles/piper_editor.dir/flags.make
CMakeFiles/piper_editor.dir/src/main.cc.o: ../src/main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/louis.burguieres/wdc_workspace/Mirrors/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/piper_editor.dir/src/main.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/piper_editor.dir/src/main.cc.o -c /home/louis.burguieres/wdc_workspace/Mirrors/src/main.cc

CMakeFiles/piper_editor.dir/src/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/piper_editor.dir/src/main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/louis.burguieres/wdc_workspace/Mirrors/src/main.cc > CMakeFiles/piper_editor.dir/src/main.cc.i

CMakeFiles/piper_editor.dir/src/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/piper_editor.dir/src/main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/louis.burguieres/wdc_workspace/Mirrors/src/main.cc -o CMakeFiles/piper_editor.dir/src/main.cc.s

# Object files for target piper_editor
piper_editor_OBJECTS = \
"CMakeFiles/piper_editor.dir/src/main.cc.o"

# External object files for target piper_editor
piper_editor_EXTERNAL_OBJECTS =

piper_editor: CMakeFiles/piper_editor.dir/src/main.cc.o
piper_editor: CMakeFiles/piper_editor.dir/build.make
piper_editor: libpiper.a
piper_editor: CMakeFiles/piper_editor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/louis.burguieres/wdc_workspace/Mirrors/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable piper_editor"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/piper_editor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/piper_editor.dir/build: piper_editor

.PHONY : CMakeFiles/piper_editor.dir/build

CMakeFiles/piper_editor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/piper_editor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/piper_editor.dir/clean

CMakeFiles/piper_editor.dir/depend:
	cd /home/louis.burguieres/wdc_workspace/Mirrors/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/louis.burguieres/wdc_workspace/Mirrors /home/louis.burguieres/wdc_workspace/Mirrors /home/louis.burguieres/wdc_workspace/Mirrors/build /home/louis.burguieres/wdc_workspace/Mirrors/build /home/louis.burguieres/wdc_workspace/Mirrors/build/CMakeFiles/piper_editor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/piper_editor.dir/depend

