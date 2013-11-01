CXXSROUCES=./main.cpp
SOURCES=$(CXXSROUCES)
GXX=cl
CPPFLAGS=-I"..\..\..\jsoncpp\jsoncpp\include"
LPDFLAGS=
LIBS=
target : main.o
	link /out:main.exe main.obj  /LIBPATH:"..\..\..\jsoncpp\jsoncpp\rel\lib_json" json_vc71_libmt.lib
main.o:
	cl -c $(SOURCES) $(CPPFLAGS)
clean:
	del *.obj main.exe

