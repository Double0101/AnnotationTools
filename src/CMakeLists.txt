add_executable ( fillpos fillpos.cpp )
add_executable ( croppic croppic.cpp )

target_link_libraries ( fillpos sample ${OpenCV_LIBS} )
target_link_libraries ( croppic sample ${OpenCV_LIBS} )
