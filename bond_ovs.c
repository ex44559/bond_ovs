#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/moduleparam.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sun Bo <sunbo.90s@gmail.com>");
MODULE_DESCRIPTION("OVS-compatible load balancing bonding");

static int __init bond_ovs_init(void)
{
	printk(KERN_INFO "bond ovs init\n");
	return 0;
}

static void __exit bond_ovs_exit(void)
{
	printk(KERN_INFO "bond ovs exit\n");
}

module_init(bond_ovs_init);
module_exit(bond_ovs_exit);

