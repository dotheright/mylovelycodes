objects = main.o display.o
head = defs.h display.h

main : $(objects)

main.o :  $(head)
	cc -c  main.c
display.o :  $(head)
	cc -c display.c
.PHONY : clean
clean :
	-rm main $(objects)
