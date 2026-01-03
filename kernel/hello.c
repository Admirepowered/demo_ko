#include <linux/module.h>
#include <linux/init.h>

static int __init hello_init(void)
{
    pr_info("hello GKI 6.12 arm64\n");
    return 0;
}

static void __exit hello_exit(void)
{
    pr_info("bye GKI\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("demo");
MODULE_DESCRIPTION("GKI hello module");
