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
include CMakeFiles/launch_me.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/launch_me.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/launch_me.dir/flags.make

CMakeFiles/launch_me.dir/src/LaserBeam.cc.o: CMakeFiles/launch_me.dir/flags.make
CMakeFiles/launch_me.dir/src/LaserBeam.cc.o: ../src/LaserBeam.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/louis.burguieres/wdc_workspace/Mirrors/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/launch_me.dir/src/LaserBeam.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/launch_me.dir/src/LaserBeam.cc.o -c /home/louis.burguieres/wdc_workspace/Mirrors/src/LaserBeam.cc

CMakeFiles/launch_me.dir/src/LaserBeam.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/launch_me.dir/src/LaserBeam.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/louis.burguieres/wdc_workspace/Mirrors/src/LaserBeam.cc > CMakeFiles/launch_me.dir/src/LaserBeam.cc.i

CMakeFiles/launch_me.dir/src/LaserBeam.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/launch_me.dir/src/LaserBeam.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/louis.burguieres/wdc_workspace/Mirrors/src/LaserBeam.cc -o CMakeFiles/launch_me.dir/src/LaserBeam.cc.s

CMakeFiles/launch_me.dir/src/Safe.cc.o: CMakeFiles/launch_me.dir/flags.make
CMakeFiles/launch_me.dir/src/Safe.cc.o: ../src/Safe.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/louis.burguieres/wdc_workspace/Mirrors/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/launch_me.dir/src/Safe.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/launch_me.dir/src/Safe.cc.o -c /home/louis.burguieres/wdc_workspace/Mirrors/src/Safe.cc

CMakeFiles/launch_me.dir/src/Safe.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/launch_me.dir/src/Safe.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/louis.burguieres/wdc_workspace/Mirrors/src/Safe.cc > CMakeFiles/launch_me.dir/src/Safe.cc.i

CMakeFiles/launch_me.dir/src/Safe.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/launch_me.dir/src/Safe.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/louis.burguieres/wdc_workspace/Mirrors/src/Safe.cc -o CMakeFiles/launch_me.dir/src/Safe.cc.s

CMakeFiles/launch_me.dir/src/main.cc.o: CMakeFiles/launch_me.dir/flags.make
CMakeFiles/launch_me.dir/src/main.cc.o: ../src/main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/louis.burguieres/wdc_workspace/Mirrors/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/launch_me.dir/src/main.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/launch_me.dir/src/main.cc.o -c /home/louis.burguieres/wdc_workspace/Mirrors/src/main.cc

CMakeFiles/launch_me.dir/src/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/launch_me.dir/src/main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/louis.burguieres/wdc_workspace/Mirrors/src/main.cc > CMakeFiles/launch_me.dir/src/main.cc.i

CMakeFiles/launch_me.dir/src/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/launch_me.dir/src/main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/louis.burguieres/wdc_workspace/Mirrors/src/main.cc -o CMakeFiles/launch_me.dir/src/main.cc.s

# Object files for target launch_me
launch_me_OBJECTS = \
"CMakeFiles/launch_me.dir/src/LaserBeam.cc.o" \
"CMakeFiles/launch_me.dir/src/Safe.cc.o" \
"CMakeFiles/launch_me.dir/src/main.cc.o"

# External object files for target launch_me
launch_me_EXTERNAL_OBJECTS =

launch_me: CMakeFiles/launch_me.dir/src/LaserBeam.cc.o
launch_me: CMakeFiles/launch_me.dir/src/Safe.cc.o
launch_me: CMakeFiles/launch_me.dir/src/main.cc.o
launch_me: CMakeFiles/launch_me.dir/build.make
launch_me: CMakeFiles/launch_me.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/louis.burguieres/wdc_workspace/Mirrors/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable launch_me"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/launch_me.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/launch_me.dir/build: launch_me

.PHONY : CMakeFiles/launch_me.dir/build

CMakeFiles/launch_me.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/launch_me.dir/cmake_clean.cmake
.PHONY : CMakeFiles/launch_me.dir/clean

CMakeFiles/launch_me.dir/depend:
	cd /home/louis.burguieres/wdc_workspace/Mirrors/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/louis.burguieres/wdc_workspace/Mirrors /home/louis.burguieres/wdc_workspace/Mirrors /home/louis.burguieres/wdc_workspace/Mirrors/build /home/louis.burguieres/wdc_workspace/Mirrors/build /home/louis.burguieres/wdc_workspace/Mirrors/build/CMakeFiles/launch_me.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/launch_me.dir/depend
