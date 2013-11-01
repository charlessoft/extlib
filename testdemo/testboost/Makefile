CXXSROUCES=./main.cpp
SOURCES=$(CXXSROUCES)
GXX=cl
CPPFLAGS=/MT -I"C:\cq\boost_1_54_0_32"
LPDFLAGS=
LIBS=
target : main.o
	link /out:main.exe main.obj /LIBPATH:"C:\cq\boost_1_54_0_32\stage\lib" libboost_filesystem-vc100-mt-s-1_54.lib
main.o:
#	cl -c /ZI /nologo /W3 /WX- /Od /Oy- /D "WIN32" /D "_WINDOWS" /Gm /EHsc /RTC1 /MT /GS $(SOURCES) /DBOOST_ALL_NO_LIB -DBOOST_SYSTEM_DYN_LINK -DBOOST_FILESYSTEM_DYN_LINK $(CPPFLAGS)
	cl -c  $(SOURCES) $(CPPFLAGS) /ZI /nologo /W3 /WX- /Od /Oy- /D "WIN32" /D "_CONSOLE" /D "_UNICODE" /D "UNICODE" /Gm /EHsc /GS /Gd 
clean:
	del *.obj main.exe

#	link /out:main.exe main.obj  /LIBPATH:"C:\cq\boost_1_54_0_32\stage\lib" "boost_filesystem-vc100-1_54.lib" "boost_filesystem-vc100-gd-1_54.lib" "boost_filesystem-vc100-mt-1_54.lib" "boost_filesystem-vc100-mt-gd-1_54.lib" "boost_system-vc100-1_54.lib" "boost_system-vc100-gd-1_54.lib" "boost_system-vc100-mt-1_54.lib" "boost_system-vc100-mt-gd-1_54.lib" "libboost_filesystem-vc100-1_54.lib" "libboost_filesystem-vc100-gd-1_54.lib" "libboost_filesystem-vc100-mt-1_54.lib" "libboost_filesystem-vc100-mt-gd-1_54.lib" "libboost_filesystem-vc100-mt-s-1_54.lib" "libboost_filesystem-vc100-mt-sgd-1_54.lib" "libboost_filesystem-vc100-s-1_54.lib" "libboost_filesystem-vc100-sgd-1_54.lib" "libboost_system-vc100-1_54.lib" "libboost_system-vc100-gd-1_54.lib" "libboost_system-vc100-mt-1_54.lib" "libboost_system-vc100-mt-gd-1_54.lib" "libboost_system-vc100-mt-s-1_54.lib" "libboost_system-vc100-mt-sgd-1_54.lib" "libboost_system-vc100-s-1_54.lib" "libboost_system-vc100-sgd-1_54.lib" "C:\cq\boost_1_54_0_32\bin.v2\libs\system\build\msvc-10.0\release\threading-multi\boost_system-vc100-mt-1_54.lib" 
