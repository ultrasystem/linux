/*
 * linux/arch/arm/mach-exynos4/setup-i2c5.c
 *
 * Copyright (c) 2010 Samsung Electronics Co., Ltd.
 *
 * I2C5 GPIO configuration.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

struct platform_device; /* don't need the contents */

#include <linux/gpio.h>
#include <plat/iic.h>
#include <plat/gpio-cfg.h>

void s3c_i2c5_cfg_gpio(struct platform_device *dev)
{
	/* modify by cym 20140314 */
#if 0
	s3c_gpio_cfgall_range(EXYNOS4_GPB(6), 2,
			      S3C_GPIO_SFN(3), S3C_GPIO_PULL_UP);
#else
	s3c_gpio_cfgall_range(EXYNOS4_GPB(2), 2,
			      S3C_GPIO_SFN(3), S3C_GPIO_PULL_UP);
#endif
	/* end modify */
}
