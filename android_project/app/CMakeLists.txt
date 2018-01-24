# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.

file(GLOB calculator_sources
    ../../deps/djinni/support-lib/jni/*.cpp
    ../../jni/*.cpp
    ../../src/cpp/*.cpp
)

add_library( # Sets the name of the library.
             calculator

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             ${calculator_sources} )

include_directories(
    ../../deps/djinni/support-lib/
    ../../deps/djinni/support-lib/jni/
    ../../cpp/
    ../../jni/
    ../../src/cpp/
)

target_link_libraries(calculator)