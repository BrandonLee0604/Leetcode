# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Self Learning\Leetcode\CPP\121. Best Time to Buy and Sell Stock"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Self Learning\Leetcode\CPP\121. Best Time to Buy and Sell Stock\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/121__Best_Time_to_Buy_and_Sell_Stock.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/121__Best_Time_to_Buy_and_Sell_Stock.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/121__Best_Time_to_Buy_and_Sell_Stock.dir/flags.make

CMakeFiles/121__Best_Time_to_Buy_and_Sell_Stock.dir/main.cpp.obj: CMakeFiles/121__Best_Time_to_Buy_and_Sell_Stock.dir/flags.make
CMakeFiles/121__Best_Time_to_Buy_and_Sell_Stock.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Self Learning\Leetcode\CPP\121. Best Time to Buy and Sell Stock\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/121__Best_Time_to_Buy_and_Sell_Stock.dir/main.cpp.obj"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\121__Best_Time_to_Buy_and_Sell_Stock.dir\main.cpp.obj -c "D:\Self Learning\Leetcode\CPP\121. Best Time to Buy and Sell Stock\main.cpp"

CMakeFiles/121__Best_Time_to_Buy_and_Sell_Stock.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/121__Best_Time_to_Buy_and_Sell_Stock.dir/main.cpp.i"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Self Learning\Leetcode\CPP\121. Best Time to Buy and Sell Stock\main.cpp" > CMakeFiles\121__Best_Time_to_Buy_and_Sell_Stock.dir\main.cpp.i

CMakeFiles/121__Best_Time_to_Buy_and_Sell_Stock.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/121__Best_Time_to_Buy_and_Sell_Stock.dir/main.cpp.s"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Self Learning\Leetcode\CPP\121. Best Time to Buy and Sell Stock\main.cpp" -o CMakeFiles\121__Best_Time_to_Buy_and_Sell_Stock.dir\main.cpp.s

# Object files for target 121__Best_Time_to_Buy_and_Sell_Stock
121__Best_Time_to_Buy_and_Sell_Stock_OBJECTS = \
"CMakeFiles/121__Best_Time_to_Buy_and_Sell_Stock.dir/main.cpp.obj"

# External object files for target 121__Best_Time_to_Buy_and_Sell_Stock
121__Best_Time_to_Buy_and_Sell_Stock_EXTERNAL_OBJECTS =

121__Best_Time_to_Buy_and_Sell_Stock.exe: CMakeFiles/121__Best_Time_to_Buy_and_Sell_Stock.dir/main.cpp.obj
121__Best_Time_to_Buy_and_Sell_Stock.exe: CMakeFiles/121__Best_Time_to_Buy_and_Sell_Stock.dir/build.make
121__Best_Time_to_Buy_and_Sell_Stock.exe: CMakeFiles/121__Best_Time_to_Buy_and_Sell_Stock.dir/linklibs.rsp
121__Best_Time_to_Buy_and_Sell_Stock.exe: CMakeFiles/121__Best_Time_to_Buy_and_Sell_Stock.dir/objects1.rsp
121__Best_Time_to_Buy_and_Sell_Stock.exe: CMakeFiles/121__Best_Time_to_Buy_and_Sell_Stock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Self Learning\Leetcode\CPP\121. Best Time to Buy and Sell Stock\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 121__Best_Time_to_Buy_and_Sell_Stock.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\121__Best_Time_to_Buy_and_Sell_Stock.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/121__Best_Time_to_Buy_and_Sell_Stock.dir/build: 121__Best_Time_to_Buy_and_Sell_Stock.exe

.PHONY : CMakeFiles/121__Best_Time_to_Buy_and_Sell_Stock.dir/build

CMakeFiles/121__Best_Time_to_Buy_and_Sell_Stock.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\121__Best_Time_to_Buy_and_Sell_Stock.dir\cmake_clean.cmake
.PHONY : CMakeFiles/121__Best_Time_to_Buy_and_Sell_Stock.dir/clean

CMakeFiles/121__Best_Time_to_Buy_and_Sell_Stock.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Self Learning\Leetcode\CPP\121. Best Time to Buy and Sell Stock" "D:\Self Learning\Leetcode\CPP\121. Best Time to Buy and Sell Stock" "D:\Self Learning\Leetcode\CPP\121. Best Time to Buy and Sell Stock\cmake-build-debug" "D:\Self Learning\Leetcode\CPP\121. Best Time to Buy and Sell Stock\cmake-build-debug" "D:\Self Learning\Leetcode\CPP\121. Best Time to Buy and Sell Stock\cmake-build-debug\CMakeFiles\121__Best_Time_to_Buy_and_Sell_Stock.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/121__Best_Time_to_Buy_and_Sell_Stock.dir/depend

