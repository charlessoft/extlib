CXXSOURCES=./json_internalarray.inl \
		   ./json_internalmap.inl \
		   ./json_reader.cpp \
		   ./json_value.cpp \
		   ./json_valueiterator.inl \
		   ./json_writer.cpp 
CPPFLAGS=-I../../include
LDFLAGS=
LIBS=
target:
	g++ -c  $(CPPFLAGS) $(CXXSOURCES) 
	ar r libjsoncpp.a *.o
clean:
	rm *.o libjsoncpp.a -rf
install:
	mkdir /usr/local/include/jsoncpp -p
	mkdir /usr/local/lib/jsoncpp -p
	cp ../../include/ /usr/local/include/jsoncpp -r
	cp ./libjsoncpp.a /usr/local/lib/jsoncpp
