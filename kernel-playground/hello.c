#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("WTFPL");

static int hello_init(void) {
	printk(KERN_INFO "Hello world 1.\n");
	return 0;
}

static void hello_exit(void) {
	printk(KERN_INFO "Goodbye world 1.\n");
}

module_init(hello_init);
module_exit(hello_exit);
