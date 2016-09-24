# linux_kernel_tutorials
Dépôts pour des tests d'écriture de kernel, modules, etc ...


## TinyCore Linux

### Install

```
tce-load -iw linux-kernel_sources-env.tcz
cliorx linux-kernel-sources-env.sh
```

Dans les Makefile:
```
-C /lib/modules/$(shell uname -r)/build
```
