# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.2.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.2.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = H:\Code\C++\C++Primer\Unit03\3.36

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = H:\Code\C++\C++Primer\Unit03\3.36\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/3_36.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/3_36.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/3_36.dir/flags.make

CMakeFiles/3_36.dir/main.cpp.obj: CMakeFiles/3_36.dir/flags.make
CMakeFiles/3_36.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=H:\Code\C++\C++Primer\Unit03\3.36\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/3_36.dir/main.cpp.obj"
	C:\TDM-GCC-64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\3_36.dir\main.cpp.obj -c H:\Code\C++\C++Primer\Unit03\3.36\main.cpp

CMakeFiles/3_36.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3_36.dir/main.cpp.i"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E H:\Code\C++\C++Primer\Unit03\3.36\main.cpp > CMakeFiles\3_36.dir\main.cpp.i

CMakeFiles/3_36.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3_36.dir/main.cpp.s"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S H:\Code\C++\C++Primer\Unit03\3.36\main.cpp -o CMakeFiles\3_36.dir\main.cpp.s

CMakeFiles/3_36.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/3_36.dir/main.cpp.obj.requires

CMakeFiles/3_36.dir/main.cpp.obj.provides: CMakeFiles/3_36.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\3_36.dir\build.make CMakeFiles/3_36.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/3_36.dir/main.cpp.obj.provides

CMakeFiles/3_36.dir/main.cpp.obj.provides.build: CMakeFiles/3_36.dir/main.cpp.obj


# Object files for target 3_36
3_36_OBJECTS = \
"CMakeFiles/3_36.dir/main.cpp.obj"

# External object files for target 3_36
3_36_EXTERNAL_OBJECTS =

3_36.exe: CMakeFiles/3_36.dir/main.cpp.obj
3_36.exe: CMakeFiles/3_36.dir/build.make
3_36.exe: CMakeFiles/3_36.dir/linklibs.rsp
3_36.exe: CMakeFiles/3_36.dir/objects1.rsp
3_36.exe: CMakeFiles/3_36.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=H:\Code\C++\C++Primer\Unit03\3.36\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 3_36.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\3_36.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/3_36.dir/build: 3_36.exe

.PHONY : CMakeFiles/3_36.dir/build

CMakeFiles/3_36.dir/requires: CMakeFiles/3_36.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/3_36.dir/requires

CMakeFiles/3_36.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\3_36.dir\cmake_clean.cmake
.PHONY : CMakeFiles/3_36.dir/clean

CMakeFiles/3_36.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" H:\Code\C++\C++Primer\Unit03\3.36 H:\Code\C++\C++Primer\Unit03\3.36 H:\Code\C++\C++Primer\Unit03\3.36\cmake-build-debug H:\Code\C++\C++Primer\Unit03\3.36\cmake-build-debug H:\Code\C++\C++Primer\Unit03\3.36\cmake-build-debug\CMakeFiles\3_36.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/3_36.dir/depend

