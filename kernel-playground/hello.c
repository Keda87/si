#include <linux/module.h>
#include <linux/init.h>

#define DRIVER_AUTHOR "Adiyat Mubarak <adiyatmubarak@gmail.com>"
#define DRIVER_DESC "example kernel"

static int hello_init(void) {
	printk(KERN_INFO "Hello world 1.\n");
	return 0;
}

static void hello_exit(void) {
	printk(KERN_INFO "Goodbye world 1.\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
