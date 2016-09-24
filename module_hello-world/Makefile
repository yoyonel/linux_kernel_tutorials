MODULENAME=Hello

obj-m += $(MODULENAME).o

#KDIR = /usr/src/linux-headers-3.13.0-24-generic
KDIR=/lib/modules/$(shell uname -r)/build 

all:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules

clean:
	rm -rf *.o *.ko *.mod.* *.symvers *.order

install:
	sudo insmod $(MODULENAME).ko

uninstall:
	sudo rmmod $(MODULENAME)
