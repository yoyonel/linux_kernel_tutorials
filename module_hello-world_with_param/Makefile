MODULENAME=Hello

obj-m += $(MODULENAME).o

KDIR = /usr/src/linux-headers-3.13.0-24-generic

all:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules

clean:
	rm -rf .*.o.* *.ko *.mod.* *.symvers *.order .tmp* .*.ko.*

install:
	sudo insmod $(MODULENAME).ko param_var=1234

uninstall:
	sudo rmmod $(MODULENAME)
