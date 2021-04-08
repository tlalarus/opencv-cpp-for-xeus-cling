#pragma cling add_library_path("/usr/local/lib")
#pragma cling add_include_path("/usr/local/include")
#pragma cling add_include_path("/usr/local/include/opencv2")

#pragma cling load("/usr/local/lib/libopencv_highgui.so.3.4.6")
#pragma cling load("/usr/local/lib/libopencv_core.so.3.4.6")
#pragma cling load("/usr/local/lib/libopencv_imgproc.so.3.4")
