# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\lunke\OneDrive\Documents\Github\OOP\small_project_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\lunke\OneDrive\Documents\Github\OOP\small_project_1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/small_project_1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/small_project_1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/small_project_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/small_project_1.dir/flags.make

CMakeFiles/small_project_1.dir/bucaro_mark_assignment_1.cpp.obj: CMakeFiles/small_project_1.dir/flags.make
CMakeFiles/small_project_1.dir/bucaro_mark_assignment_1.cpp.obj: ../bucaro_mark_assignment_1.cpp
CMakeFiles/small_project_1.dir/bucaro_mark_assignment_1.cpp.obj: CMakeFiles/small_project_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lunke\OneDrive\Documents\Github\OOP\small_project_1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/small_project_1.dir/bucaro_mark_assignment_1.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/small_project_1.dir/bucaro_mark_assignment_1.cpp.obj -MF CMakeFiles\small_project_1.dir\bucaro_mark_assignment_1.cpp.obj.d -o CMakeFiles\small_project_1.dir\bucaro_mark_assignment_1.cpp.obj -c C:\Users\lunke\OneDrive\Documents\Github\OOP\small_project_1\bucaro_mark_assignment_1.cpp

CMakeFiles/small_project_1.dir/bucaro_mark_assignment_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/small_project_1.dir/bucaro_mark_assignment_1.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lunke\OneDrive\Documents\Github\OOP\small_project_1\bucaro_mark_assignment_1.cpp > CMakeFiles\small_project_1.dir\bucaro_mark_assignment_1.cpp.i

CMakeFiles/small_project_1.dir/bucaro_mark_assignment_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/small_project_1.dir/bucaro_mark_assignment_1.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\lunke\OneDrive\Documents\Github\OOP\small_project_1\bucaro_mark_assignment_1.cpp -o CMakeFiles\small_project_1.dir\bucaro_mark_assignment_1.cpp.s

# Object files for target small_project_1
small_project_1_OBJECTS = \
"CMakeFiles/small_project_1.dir/bucaro_mark_assignment_1.cpp.obj"

# External object files for target small_project_1
small_project_1_EXTERNAL_OBJECTS =

small_project_1.exe: CMakeFiles/small_project_1.dir/bucaro_mark_assignment_1.cpp.obj
small_project_1.exe: CMakeFiles/small_project_1.dir/build.make
small_project_1.exe: CMakeFiles/small_project_1.dir/linklibs.rsp
small_project_1.exe: CMakeFiles/small_project_1.dir/objects1.rsp
small_project_1.exe: CMakeFiles/small_project_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\lunke\OneDrive\Documents\Github\OOP\small_project_1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable small_project_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\small_project_1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/small_project_1.dir/build: small_project_1.exe
.PHONY : CMakeFiles/small_project_1.dir/build

CMakeFiles/small_project_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\small_project_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/small_project_1.dir/clean

CMakeFiles/small_project_1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\lunke\OneDrive\Documents\Github\OOP\small_project_1 C:\Users\lunke\OneDrive\Documents\Github\OOP\small_project_1 C:\Users\lunke\OneDrive\Documents\Github\OOP\small_project_1\cmake-build-debug C:\Users\lunke\OneDrive\Documents\Github\OOP\small_project_1\cmake-build-debug C:\Users\lunke\OneDrive\Documents\Github\OOP\small_project_1\cmake-build-debug\CMakeFiles\small_project_1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/small_project_1.dir/depend
