#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init hello_init(void)
{
    pr_info("[gki-hello] init called\n");
    return 0;
}

static void __exit hello_exit(void)
{
    pr_info("[gki-hello] exit called\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("gki-test");
MODULE_DESCRIPTION("Minimal GKI compatible test module");
