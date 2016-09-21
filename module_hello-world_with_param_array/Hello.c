#include <linux/kernel.h>
#include <linux/module.h>
//
#include <linux/moduleparam.h>

//
int param_array[3] = { 0, 0, 0 };

//
//module_param_array(name_array, type, _, permissions)
/*
	S_IRUSR
	S_IWUSR
	S_IXUSR
	S_IWGRP
	S_IRGRP

	S_IRUSR | S_IWUSR
*/
// exemple
module_param_array(param_array, int, NULL, S_IRUSR | S_IWUSR);

void display(void);
//
void display(void) {
	printk(KERN_ALERT "TEST: param_array[0] = %d\n", param_array[0]);

	printk(KERN_ALERT "TEST: param_array[1] = %d\n", param_array[1]);	
	
	printk(KERN_ALERT "TEST: param_array[2] = %d\n", param_array[2]);
}

static int hello_init(void) {
	printk(KERN_ALERT "TEST: Hello world !\n");
	display();
	return 0;
}

static void hello_exit(void) {
	printk(KERN_ALERT "TEST: Good bye !\n");
}

module_init(hello_init);
module_exit(hello_exit);

//
MODULE_AUTHOR("YoYoNeL");
MODULE_DESCRIPTION("Kernel Module Demonstration");
MODULE_LICENSE("GPL");	// type of license	->	General Public Licence