LD:=ld


CPP:=gcc


CPPFLAGS:= -c -fPIC
# the libfile name is libDemo.so
LIB:=libDemo.so
#the jni.h path
pathlix:=-I/usr/java/jdk1.8.0_144/include/
pathinclude:=-I/usr/java/jdk1.8.0_144/include/linux


objects:=JNIDemo.o


edit:$(objects)
	$(LD) -shared -o $(LIB) $(objects)


JNIDemo.o:JNIDemo.c JNIDemo.h
	$(CPP)  $(pathlix) $(pathinclude) $(CPPFLAGS)  JNIDemo.c


clean:
	rm -f $(objects)  *.o *.so *.class
