/*
 * (C) Copyright 2014 Xilinx, Inc.
 * Michal Simek <michal.simek@xilinx.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef _ASM_ARCH_SYS_PROTO_H
#define _ASM_ARCH_SYS_PROTO_H

/* Setup clk for network */
static inline void zynq_slcr_gem_clk_setup(u32 gem_id, unsigned long clk_rate)
{
}

extern int zynq_sdhci_init(u32 regbase);

extern unsigned int zynqmp_get_silicon_version(void);

#endif /* _ASM_ARCH_SYS_PROTO_H */
