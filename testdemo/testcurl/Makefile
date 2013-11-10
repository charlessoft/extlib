CXXSOURCES=./main.cpp \
		   ./CService.cpp
SOURCES=$(CXXSOURCES)
GXX=cl
CPPFLAGS=-I. -I../../curl/include -I../../jsoncpp/include -D "_CURL_" /D "WIN_PLATFORM" /ZI /nologo /W3 /WX- /Od /Oy- /D "WIN32" /D "_CONSOLE" /D "_UNICODE" /D "UNICODE" /Gm /EHsc /GS /Gd  /D "BUILDING_LIBCURL" /D "HTTP_ONLY"
LDFLAGS=/LIBPATH:. /LIBPATH:C:/cygwin/home/charles/extlib/curl/vs/vc10/lib/Debug /LIBPATH:C:/cygwin/home/charles/extlib/openssl/dbg/lib /LIBPATH:C:/cygwin/home/charles/extlib/jsoncpp/build/vs10/debug/lib_json
LIBS="libcurl.lib" \
	 "libeay32.lib" \
	 "ssleay32.lib" \
	 "json_vc10_libmtd.lib" \
	 "ws2_32.lib" \
	 "winmm.lib" \
	 "wldap32.lib" \
	 "Advapi32.lib"
target: src_cpp
	link /out:main.exe *.obj $(LDFLAGS) $(LIBS)
src_cpp:
	$(GXX) -c $(SOURCES) $(CPPFLAGS) 
clean:
	del main.exe *.obj









