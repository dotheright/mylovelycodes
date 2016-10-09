obj-m+=ebbchar.o

all:
	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) modules
	$(CC)  testebbchar.c -o test.out
clean:
	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) clean
	rm *.out
