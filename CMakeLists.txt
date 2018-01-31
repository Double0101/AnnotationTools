cmake_minimum_required ( VERSION 2.7 )

project ( detect_train )

set ( CMAKE_CXX_STANDARD 11 )
set ( EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin )

find_package ( OpenCV REQUIRED )

include_directories ( ${PROJECT_SOURCE_DIR}/include )

add_subdirectory ( lib )
add_subdirectory ( src )
