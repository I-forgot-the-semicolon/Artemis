# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Art_dev.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Art_dev.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Art_dev.dir\flags.make

CMakeFiles\Art_dev.dir\main.cpp.obj: CMakeFiles\Art_dev.dir\flags.make
CMakeFiles\Art_dev.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Art_dev.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Art_dev.dir\main.cpp.obj /FdCMakeFiles\Art_dev.dir\ /FS -c C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\main.cpp
<<

CMakeFiles\Art_dev.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Art_dev.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Art_dev.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\main.cpp
<<

CMakeFiles\Art_dev.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Art_dev.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Art_dev.dir\main.cpp.s /c C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\main.cpp
<<

CMakeFiles\Art_dev.dir\Engine\Window\Window.cpp.obj: CMakeFiles\Art_dev.dir\flags.make
CMakeFiles\Art_dev.dir\Engine\Window\Window.cpp.obj: ..\Engine\Window\Window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Art_dev.dir/Engine/Window/Window.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Art_dev.dir\Engine\Window\Window.cpp.obj /FdCMakeFiles\Art_dev.dir\ /FS -c C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\Window\Window.cpp
<<

CMakeFiles\Art_dev.dir\Engine\Window\Window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Art_dev.dir/Engine/Window/Window.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Art_dev.dir\Engine\Window\Window.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\Window\Window.cpp
<<

CMakeFiles\Art_dev.dir\Engine\Window\Window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Art_dev.dir/Engine/Window/Window.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Art_dev.dir\Engine\Window\Window.cpp.s /c C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\Window\Window.cpp
<<

CMakeFiles\Art_dev.dir\Engine\Window\WindowClass.cpp.obj: CMakeFiles\Art_dev.dir\flags.make
CMakeFiles\Art_dev.dir\Engine\Window\WindowClass.cpp.obj: ..\Engine\Window\WindowClass.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Art_dev.dir/Engine/Window/WindowClass.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Art_dev.dir\Engine\Window\WindowClass.cpp.obj /FdCMakeFiles\Art_dev.dir\ /FS -c C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\Window\WindowClass.cpp
<<

CMakeFiles\Art_dev.dir\Engine\Window\WindowClass.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Art_dev.dir/Engine/Window/WindowClass.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Art_dev.dir\Engine\Window\WindowClass.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\Window\WindowClass.cpp
<<

CMakeFiles\Art_dev.dir\Engine\Window\WindowClass.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Art_dev.dir/Engine/Window/WindowClass.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Art_dev.dir\Engine\Window\WindowClass.cpp.s /c C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\Window\WindowClass.cpp
<<

CMakeFiles\Art_dev.dir\Engine\ErrorHandlers\ErrorHandler.cpp.obj: CMakeFiles\Art_dev.dir\flags.make
CMakeFiles\Art_dev.dir\Engine\ErrorHandlers\ErrorHandler.cpp.obj: ..\Engine\ErrorHandlers\ErrorHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Art_dev.dir/Engine/ErrorHandlers/ErrorHandler.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Art_dev.dir\Engine\ErrorHandlers\ErrorHandler.cpp.obj /FdCMakeFiles\Art_dev.dir\ /FS -c C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\ErrorHandlers\ErrorHandler.cpp
<<

CMakeFiles\Art_dev.dir\Engine\ErrorHandlers\ErrorHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Art_dev.dir/Engine/ErrorHandlers/ErrorHandler.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Art_dev.dir\Engine\ErrorHandlers\ErrorHandler.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\ErrorHandlers\ErrorHandler.cpp
<<

CMakeFiles\Art_dev.dir\Engine\ErrorHandlers\ErrorHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Art_dev.dir/Engine/ErrorHandlers/ErrorHandler.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Art_dev.dir\Engine\ErrorHandlers\ErrorHandler.cpp.s /c C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\ErrorHandlers\ErrorHandler.cpp
<<

CMakeFiles\Art_dev.dir\Engine\Input\Input.cpp.obj: CMakeFiles\Art_dev.dir\flags.make
CMakeFiles\Art_dev.dir\Engine\Input\Input.cpp.obj: ..\Engine\Input\Input.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Art_dev.dir/Engine/Input/Input.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Art_dev.dir\Engine\Input\Input.cpp.obj /FdCMakeFiles\Art_dev.dir\ /FS -c C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\Input\Input.cpp
<<

CMakeFiles\Art_dev.dir\Engine\Input\Input.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Art_dev.dir/Engine/Input/Input.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Art_dev.dir\Engine\Input\Input.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\Input\Input.cpp
<<

CMakeFiles\Art_dev.dir\Engine\Input\Input.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Art_dev.dir/Engine/Input/Input.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Art_dev.dir\Engine\Input\Input.cpp.s /c C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\Input\Input.cpp
<<

CMakeFiles\Art_dev.dir\Engine\App\GameLoop.cpp.obj: CMakeFiles\Art_dev.dir\flags.make
CMakeFiles\Art_dev.dir\Engine\App\GameLoop.cpp.obj: ..\Engine\App\GameLoop.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Art_dev.dir/Engine/App/GameLoop.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Art_dev.dir\Engine\App\GameLoop.cpp.obj /FdCMakeFiles\Art_dev.dir\ /FS -c C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\App\GameLoop.cpp
<<

CMakeFiles\Art_dev.dir\Engine\App\GameLoop.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Art_dev.dir/Engine/App/GameLoop.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Art_dev.dir\Engine\App\GameLoop.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\App\GameLoop.cpp
<<

CMakeFiles\Art_dev.dir\Engine\App\GameLoop.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Art_dev.dir/Engine/App/GameLoop.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Art_dev.dir\Engine\App\GameLoop.cpp.s /c C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\App\GameLoop.cpp
<<

CMakeFiles\Art_dev.dir\Engine\Math\Vector2.cpp.obj: CMakeFiles\Art_dev.dir\flags.make
CMakeFiles\Art_dev.dir\Engine\Math\Vector2.cpp.obj: ..\Engine\Math\Vector2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Art_dev.dir/Engine/Math/Vector2.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Art_dev.dir\Engine\Math\Vector2.cpp.obj /FdCMakeFiles\Art_dev.dir\ /FS -c C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\Math\Vector2.cpp
<<

CMakeFiles\Art_dev.dir\Engine\Math\Vector2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Art_dev.dir/Engine/Math/Vector2.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Art_dev.dir\Engine\Math\Vector2.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\Math\Vector2.cpp
<<

CMakeFiles\Art_dev.dir\Engine\Math\Vector2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Art_dev.dir/Engine/Math/Vector2.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Art_dev.dir\Engine\Math\Vector2.cpp.s /c C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\Math\Vector2.cpp
<<

CMakeFiles\Art_dev.dir\Engine\Window\Context.cpp.obj: CMakeFiles\Art_dev.dir\flags.make
CMakeFiles\Art_dev.dir\Engine\Window\Context.cpp.obj: ..\Engine\Window\Context.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Art_dev.dir/Engine/Window/Context.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Art_dev.dir\Engine\Window\Context.cpp.obj /FdCMakeFiles\Art_dev.dir\ /FS -c C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\Window\Context.cpp
<<

CMakeFiles\Art_dev.dir\Engine\Window\Context.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Art_dev.dir/Engine/Window/Context.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Art_dev.dir\Engine\Window\Context.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\Window\Context.cpp
<<

CMakeFiles\Art_dev.dir\Engine\Window\Context.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Art_dev.dir/Engine/Window/Context.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Art_dev.dir\Engine\Window\Context.cpp.s /c C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\Window\Context.cpp
<<

CMakeFiles\Art_dev.dir\Engine\Time\Time.cpp.obj: CMakeFiles\Art_dev.dir\flags.make
CMakeFiles\Art_dev.dir\Engine\Time\Time.cpp.obj: ..\Engine\Time\Time.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Art_dev.dir/Engine/Time/Time.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Art_dev.dir\Engine\Time\Time.cpp.obj /FdCMakeFiles\Art_dev.dir\ /FS -c C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\Time\Time.cpp
<<

CMakeFiles\Art_dev.dir\Engine\Time\Time.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Art_dev.dir/Engine/Time/Time.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Art_dev.dir\Engine\Time\Time.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\Time\Time.cpp
<<

CMakeFiles\Art_dev.dir\Engine\Time\Time.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Art_dev.dir/Engine/Time/Time.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Art_dev.dir\Engine\Time\Time.cpp.s /c C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\Engine\Time\Time.cpp
<<

# Object files for target Art_dev
Art_dev_OBJECTS = \
"CMakeFiles\Art_dev.dir\main.cpp.obj" \
"CMakeFiles\Art_dev.dir\Engine\Window\Window.cpp.obj" \
"CMakeFiles\Art_dev.dir\Engine\Window\WindowClass.cpp.obj" \
"CMakeFiles\Art_dev.dir\Engine\ErrorHandlers\ErrorHandler.cpp.obj" \
"CMakeFiles\Art_dev.dir\Engine\Input\Input.cpp.obj" \
"CMakeFiles\Art_dev.dir\Engine\App\GameLoop.cpp.obj" \
"CMakeFiles\Art_dev.dir\Engine\Math\Vector2.cpp.obj" \
"CMakeFiles\Art_dev.dir\Engine\Window\Context.cpp.obj" \
"CMakeFiles\Art_dev.dir\Engine\Time\Time.cpp.obj"

# External object files for target Art_dev
Art_dev_EXTERNAL_OBJECTS =

Art_dev.exe: CMakeFiles\Art_dev.dir\main.cpp.obj
Art_dev.exe: CMakeFiles\Art_dev.dir\Engine\Window\Window.cpp.obj
Art_dev.exe: CMakeFiles\Art_dev.dir\Engine\Window\WindowClass.cpp.obj
Art_dev.exe: CMakeFiles\Art_dev.dir\Engine\ErrorHandlers\ErrorHandler.cpp.obj
Art_dev.exe: CMakeFiles\Art_dev.dir\Engine\Input\Input.cpp.obj
Art_dev.exe: CMakeFiles\Art_dev.dir\Engine\App\GameLoop.cpp.obj
Art_dev.exe: CMakeFiles\Art_dev.dir\Engine\Math\Vector2.cpp.obj
Art_dev.exe: CMakeFiles\Art_dev.dir\Engine\Window\Context.cpp.obj
Art_dev.exe: CMakeFiles\Art_dev.dir\Engine\Time\Time.cpp.obj
Art_dev.exe: CMakeFiles\Art_dev.dir\build.make
Art_dev.exe: CMakeFiles\Art_dev.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable Art_dev.exe"
	"C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Art_dev.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Art_dev.dir\objects1.rsp @<<
 /out:Art_dev.exe /implib:Art_dev.lib /pdb:C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\cmake-build-debug\Art_dev.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:windows  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Art_dev.dir\build: Art_dev.exe

.PHONY : CMakeFiles\Art_dev.dir\build

CMakeFiles\Art_dev.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Art_dev.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Art_dev.dir\clean

CMakeFiles\Art_dev.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\cmake-build-debug C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\cmake-build-debug C:\Users\warl0\Desktop\Escritorio\Coding\C++\Art-dev\cmake-build-debug\CMakeFiles\Art_dev.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Art_dev.dir\depend

