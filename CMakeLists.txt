cmake_minimum_required ( VERSION 2.7 )

project ( detect_train )

set ( CMAKE_CXX_STANDARD 11 )

find_package ( OpenCV REQUIRED )

include_directories ( ${PROJECT_BINARY_DIR} )
add_library ( sample sample.cpp )

add_executable ( fillpos fillpos.cpp )
target_link_libraries ( fillpos sample ${OpenCV_LIBS} )
