
/* auto-generated by gen_syscalls.py, don't edit */
#ifndef Z_INCLUDE_SYSCALLS_I2C_H
#define Z_INCLUDE_SYSCALLS_I2C_H


#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <syscall_macros.h>

#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic push
#endif

#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern int z_impl_i2c_configure(struct device * dev, u32_t dev_config);
static inline int i2c_configure(struct device * dev, u32_t dev_config)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		return (int) z_arch_syscall_invoke2(*(u32_t *)&dev, *(u32_t *)&dev_config, K_SYSCALL_I2C_CONFIGURE);
	}
#endif
	compiler_barrier();
	return z_impl_i2c_configure(dev, dev_config);
}


extern int z_impl_i2c_transfer(struct device * dev, struct i2c_msg * msgs, u8_t num_msgs, u16_t addr);
static inline int i2c_transfer(struct device * dev, struct i2c_msg * msgs, u8_t num_msgs, u16_t addr)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		return (int) z_arch_syscall_invoke4(*(u32_t *)&dev, *(u32_t *)&msgs, *(u32_t *)&num_msgs, *(u32_t *)&addr, K_SYSCALL_I2C_TRANSFER);
	}
#endif
	compiler_barrier();
	return z_impl_i2c_transfer(dev, msgs, num_msgs, addr);
}


extern int z_impl_i2c_slave_register(struct device * dev, struct i2c_slave_config * cfg);
static inline int i2c_slave_register(struct device * dev, struct i2c_slave_config * cfg)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		return (int) z_arch_syscall_invoke2(*(u32_t *)&dev, *(u32_t *)&cfg, K_SYSCALL_I2C_SLAVE_REGISTER);
	}
#endif
	compiler_barrier();
	return z_impl_i2c_slave_register(dev, cfg);
}


extern int z_impl_i2c_slave_unregister(struct device * dev, struct i2c_slave_config * cfg);
static inline int i2c_slave_unregister(struct device * dev, struct i2c_slave_config * cfg)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		return (int) z_arch_syscall_invoke2(*(u32_t *)&dev, *(u32_t *)&cfg, K_SYSCALL_I2C_SLAVE_UNREGISTER);
	}
#endif
	compiler_barrier();
	return z_impl_i2c_slave_unregister(dev, cfg);
}


extern int z_impl_i2c_slave_driver_register(struct device * dev);
static inline int i2c_slave_driver_register(struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		return (int) z_arch_syscall_invoke1(*(u32_t *)&dev, K_SYSCALL_I2C_SLAVE_DRIVER_REGISTER);
	}
#endif
	compiler_barrier();
	return z_impl_i2c_slave_driver_register(dev);
}


extern int z_impl_i2c_slave_driver_unregister(struct device * dev);
static inline int i2c_slave_driver_unregister(struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		return (int) z_arch_syscall_invoke1(*(u32_t *)&dev, K_SYSCALL_I2C_SLAVE_DRIVER_UNREGISTER);
	}
#endif
	compiler_barrier();
	return z_impl_i2c_slave_driver_unregister(dev);
}


#ifdef __cplusplus
}
#endif

#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic pop
#endif

#endif
#endif /* include guard */
