/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2016-2017, The Linux Foundation. All rights reserved.
 */

#ifndef _DT_BINDINGS_CLOCK_IPQ_GCC_8074_H
#define _DT_BINDINGS_CLOCK_IPQ_GCC_8074_H

#define GPLL0					0
#define GPLL0_MAIN				1
#define GCC_SLEEP_CLK_SRC			2
#define BLSP1_QUP1_I2C_APPS_CLK_SRC		3
#define BLSP1_QUP1_SPI_APPS_CLK_SRC		4
#define BLSP1_QUP2_I2C_APPS_CLK_SRC		5
#define BLSP1_QUP2_SPI_APPS_CLK_SRC		6
#define BLSP1_QUP3_I2C_APPS_CLK_SRC		7
#define BLSP1_QUP3_SPI_APPS_CLK_SRC		8
#define BLSP1_QUP4_I2C_APPS_CLK_SRC		9
#define BLSP1_QUP4_SPI_APPS_CLK_SRC		10
#define BLSP1_QUP5_I2C_APPS_CLK_SRC		11
#define BLSP1_QUP5_SPI_APPS_CLK_SRC		12
#define BLSP1_QUP6_I2C_APPS_CLK_SRC		13
#define BLSP1_QUP6_SPI_APPS_CLK_SRC		14
#define BLSP1_UART1_APPS_CLK_SRC		15
#define BLSP1_UART2_APPS_CLK_SRC		16
#define BLSP1_UART3_APPS_CLK_SRC		17
#define BLSP1_UART4_APPS_CLK_SRC		18
#define BLSP1_UART5_APPS_CLK_SRC		19
#define BLSP1_UART6_APPS_CLK_SRC		20
#define GCC_BLSP1_AHB_CLK			21
#define GCC_BLSP1_QUP1_I2C_APPS_CLK		22
#define GCC_BLSP1_QUP1_SPI_APPS_CLK		23
#define GCC_BLSP1_QUP2_I2C_APPS_CLK		24
#define GCC_BLSP1_QUP2_SPI_APPS_CLK		25
#define GCC_BLSP1_QUP3_I2C_APPS_CLK		26
#define GCC_BLSP1_QUP3_SPI_APPS_CLK		27
#define GCC_BLSP1_QUP4_I2C_APPS_CLK		28
#define GCC_BLSP1_QUP4_SPI_APPS_CLK		29
#define GCC_BLSP1_QUP5_I2C_APPS_CLK		30
#define GCC_BLSP1_QUP5_SPI_APPS_CLK		31
#define GCC_BLSP1_QUP6_I2C_APPS_CLK		32
#define GCC_BLSP1_QUP6_SPI_APPS_CLK		33
#define GCC_BLSP1_UART1_APPS_CLK		34
#define GCC_BLSP1_UART2_APPS_CLK		35
#define GCC_BLSP1_UART3_APPS_CLK		36
#define GCC_BLSP1_UART4_APPS_CLK		37
#define GCC_BLSP1_UART5_APPS_CLK		38
#define GCC_BLSP1_UART6_APPS_CLK		39
#define GCC_PRNG_AHB_CLK			40
#define GCC_QPIC_AHB_CLK			41
#define GCC_QPIC_CLK				42
#define PCNOC_BFDCD_CLK_SRC			43
#define GPLL2_MAIN				44
#define GPLL2					45
#define GPLL4_MAIN				46
#define GPLL4					47
#define GPLL6_MAIN				48
#define GPLL6					49
#define UBI32_PLL_MAIN				50
#define UBI32_PLL				51
#define NSS_CRYPTO_PLL_MAIN			52
#define NSS_CRYPTO_PLL				53
#define PCIE0_AXI_CLK_SRC			54
#define PCIE0_AUX_CLK_SRC			55
#define PCIE0_PIPE_CLK_SRC			56
#define PCIE1_AXI_CLK_SRC			57
#define PCIE1_AUX_CLK_SRC			58
#define PCIE1_PIPE_CLK_SRC			59
#define SDCC1_APPS_CLK_SRC			60
#define SDCC1_ICE_CORE_CLK_SRC			61
#define SDCC2_APPS_CLK_SRC			62
#define USB0_MASTER_CLK_SRC			63
#define USB0_AUX_CLK_SRC			64
#define USB0_MOCK_UTMI_CLK_SRC			65
#define USB0_PIPE_CLK_SRC			66
#define USB1_MASTER_CLK_SRC			67
#define USB1_AUX_CLK_SRC			68
#define USB1_MOCK_UTMI_CLK_SRC			69
#define USB1_PIPE_CLK_SRC			70
#define GCC_XO_CLK_SRC				71
#define SYSTEM_NOC_BFDCD_CLK_SRC		72
#define NSS_CE_CLK_SRC				73
#define NSS_NOC_BFDCD_CLK_SRC			74
#define NSS_CRYPTO_CLK_SRC			75
#define NSS_UBI0_CLK_SRC			76
#define NSS_UBI0_DIV_CLK_SRC			77
#define NSS_UBI1_CLK_SRC			78
#define NSS_UBI1_DIV_CLK_SRC			79
#define UBI_MPT_CLK_SRC				80
#define NSS_IMEM_CLK_SRC			81
#define NSS_PPE_CLK_SRC				82
#define NSS_PORT1_RX_CLK_SRC			83
#define NSS_PORT1_RX_DIV_CLK_SRC		84
#define NSS_PORT1_TX_CLK_SRC			85
#define NSS_PORT1_TX_DIV_CLK_SRC		86
#define NSS_PORT2_RX_CLK_SRC			87
#define NSS_PORT2_RX_DIV_CLK_SRC		88
#define NSS_PORT2_TX_CLK_SRC			89
#define NSS_PORT2_TX_DIV_CLK_SRC		90
#define NSS_PORT3_RX_CLK_SRC			91
#define NSS_PORT3_RX_DIV_CLK_SRC		92
#define NSS_PORT3_TX_CLK_SRC			93
#define NSS_PORT3_TX_DIV_CLK_SRC		94
#define NSS_PORT4_RX_CLK_SRC			95
#define NSS_PORT4_RX_DIV_CLK_SRC		96
#define NSS_PORT4_TX_CLK_SRC			97
#define NSS_PORT4_TX_DIV_CLK_SRC		98
#define NSS_PORT5_RX_CLK_SRC			99
#define NSS_PORT5_RX_DIV_CLK_SRC		100
#define NSS_PORT5_TX_CLK_SRC			101
#define NSS_PORT5_TX_DIV_CLK_SRC		102
#define NSS_PORT6_RX_CLK_SRC			103
#define NSS_PORT6_RX_DIV_CLK_SRC		104
#define NSS_PORT6_TX_CLK_SRC			105
#define NSS_PORT6_TX_DIV_CLK_SRC		106
#define CRYPTO_CLK_SRC				107
#define GP1_CLK_SRC				108
#define GP2_CLK_SRC				109
#define GP3_CLK_SRC				110
#define GCC_PCIE0_AHB_CLK			111
#define GCC_PCIE0_AUX_CLK			112
#define GCC_PCIE0_AXI_M_CLK			113
#define GCC_PCIE0_AXI_S_CLK			114
#define GCC_PCIE0_PIPE_CLK			115
#define GCC_SYS_NOC_PCIE0_AXI_CLK		116
#define GCC_PCIE1_AHB_CLK			117
#define GCC_PCIE1_AUX_CLK			118
#define GCC_PCIE1_AXI_M_CLK			119
#define GCC_PCIE1_AXI_S_CLK			120
#define GCC_PCIE1_PIPE_CLK			121
#define GCC_SYS_NOC_PCIE1_AXI_CLK		122
#define GCC_USB0_AUX_CLK			123
#define GCC_SYS_NOC_USB0_AXI_CLK		124
#define GCC_USB0_MASTER_CLK			125
#define GCC_USB0_MOCK_UTMI_CLK			126
#define GCC_USB0_PHY_CFG_AHB_CLK		127
#define GCC_USB0_PIPE_CLK			128
#define GCC_USB0_SLEEP_CLK			129
#define GCC_USB1_AUX_CLK			130
#define GCC_SYS_NOC_USB1_AXI_CLK		131
#define GCC_USB1_MASTER_CLK			132
#define GCC_USB1_MOCK_UTMI_CLK			133
#define GCC_USB1_PHY_CFG_AHB_CLK		134
#define GCC_USB1_PIPE_CLK			135
#define GCC_USB1_SLEEP_CLK			136
#define GCC_SDCC1_AHB_CLK			137
#define GCC_SDCC1_APPS_CLK			138
#define GCC_SDCC1_ICE_CORE_CLK			139
#define GCC_SDCC2_AHB_CLK			140
#define GCC_SDCC2_APPS_CLK			141
#define GCC_MEM_NOC_NSS_AXI_CLK			142
#define GCC_NSS_CE_APB_CLK			143
#define GCC_NSS_CE_AXI_CLK			144
#define GCC_NSS_CFG_CLK				145
#define GCC_NSS_CRYPTO_CLK			146
#define GCC_NSS_CSR_CLK				147
#define GCC_NSS_EDMA_CFG_CLK			148
#define GCC_NSS_EDMA_CLK			149
#define GCC_NSS_IMEM_CLK			150
#define GCC_NSS_NOC_CLK				151
#define GCC_NSS_PPE_BTQ_CLK			152
#define GCC_NSS_PPE_CFG_CLK			153
#define GCC_NSS_PPE_CLK				154
#define GCC_NSS_PPE_IPE_CLK			155
#define GCC_NSS_PTP_REF_CLK			156
#define GCC_NSSNOC_CE_APB_CLK			157
#define GCC_NSSNOC_CE_AXI_CLK			158
#define GCC_NSSNOC_CRYPTO_CLK			159
#define GCC_NSSNOC_PPE_CFG_CLK			160
#define GCC_NSSNOC_PPE_CLK			161
#define GCC_NSSNOC_QOSGEN_REF_CLK		162
#define GCC_NSSNOC_SNOC_CLK			163
#define GCC_NSSNOC_TIMEOUT_REF_CLK		164
#define GCC_NSSNOC_UBI0_AHB_CLK			165
#define GCC_NSSNOC_UBI1_AHB_CLK			166
#define GCC_UBI0_AHB_CLK			167
#define GCC_UBI0_AXI_CLK			168
#define GCC_UBI0_NC_AXI_CLK			169
#define GCC_UBI0_CORE_CLK			170
#define GCC_UBI0_MPT_CLK			171
#define GCC_UBI1_AHB_CLK			172
#define GCC_UBI1_AXI_CLK			173
#define GCC_UBI1_NC_AXI_CLK			174
#define GCC_UBI1_CORE_CLK			175
#define GCC_UBI1_MPT_CLK			176
#define GCC_CMN_12GPLL_AHB_CLK			177
#define GCC_CMN_12GPLL_SYS_CLK			178
#define GCC_MDIO_AHB_CLK			179
#define GCC_UNIPHY0_AHB_CLK			180
#define GCC_UNIPHY0_SYS_CLK			181
#define GCC_UNIPHY1_AHB_CLK			182
#define GCC_UNIPHY1_SYS_CLK			183
#define GCC_UNIPHY2_AHB_CLK			184
#define GCC_UNIPHY2_SYS_CLK			185
#define GCC_NSS_PORT1_RX_CLK			186
#define GCC_NSS_PORT1_TX_CLK			187
#define GCC_NSS_PORT2_RX_CLK			188
#define GCC_NSS_PORT2_TX_CLK			189
#define GCC_NSS_PORT3_RX_CLK			190
#define GCC_NSS_PORT3_TX_CLK			191
#define GCC_NSS_PORT4_RX_CLK			192
#define GCC_NSS_PORT4_TX_CLK			193
#define GCC_NSS_PORT5_RX_CLK			194
#define GCC_NSS_PORT5_TX_CLK			195
#define GCC_NSS_PORT6_RX_CLK			196
#define GCC_NSS_PORT6_TX_CLK			197
#define GCC_PORT1_MAC_CLK			198
#define GCC_PORT2_MAC_CLK			199
#define GCC_PORT3_MAC_CLK			200
#define GCC_PORT4_MAC_CLK			201
#define GCC_PORT5_MAC_CLK			202
#define GCC_PORT6_MAC_CLK			203
#define GCC_UNIPHY0_PORT1_RX_CLK		204
#define GCC_UNIPHY0_PORT1_TX_CLK		205
#define GCC_UNIPHY0_PORT2_RX_CLK		206
#define GCC_UNIPHY0_PORT2_TX_CLK		207
#define GCC_UNIPHY0_PORT3_RX_CLK		208
#define GCC_UNIPHY0_PORT3_TX_CLK		209
#define GCC_UNIPHY0_PORT4_RX_CLK		210
#define GCC_UNIPHY0_PORT4_TX_CLK		211
#define GCC_UNIPHY0_PORT5_RX_CLK		212
#define GCC_UNIPHY0_PORT5_TX_CLK		213
#define GCC_UNIPHY1_PORT5_RX_CLK		214
#define GCC_UNIPHY1_PORT5_TX_CLK		215
#define GCC_UNIPHY2_PORT6_RX_CLK		216
#define GCC_UNIPHY2_PORT6_TX_CLK		217
#define GCC_CRYPTO_AHB_CLK			218
#define GCC_CRYPTO_AXI_CLK			219
#define GCC_CRYPTO_CLK				220
#define GCC_GP1_CLK				221
#define GCC_GP2_CLK				222
#define GCC_GP3_CLK				223

#define GCC_BLSP1_BCR				0
#define GCC_BLSP1_QUP1_BCR			1
#define GCC_BLSP1_UART1_BCR			2
#define GCC_BLSP1_QUP2_BCR			3
#define GCC_BLSP1_UART2_BCR			4
#define GCC_BLSP1_QUP3_BCR			5
#define GCC_BLSP1_UART3_BCR			6
#define GCC_BLSP1_QUP4_BCR			7
#define GCC_BLSP1_UART4_BCR			8
#define GCC_BLSP1_QUP5_BCR			9
#define GCC_BLSP1_UART5_BCR			10
#define GCC_BLSP1_QUP6_BCR			11
#define GCC_BLSP1_UART6_BCR			12
#define GCC_IMEM_BCR				13
#define GCC_SMMU_BCR				14
#define GCC_APSS_TCU_BCR			15
#define GCC_SMMU_XPU_BCR			16
#define GCC_PCNOC_TBU_BCR			17
#define GCC_SMMU_CFG_BCR			18
#define GCC_PRNG_BCR				19
#define GCC_BOOT_ROM_BCR			20
#define GCC_CRYPTO_BCR				21
#define GCC_WCSS_BCR				22
#define GCC_WCSS_Q6_BCR				23
#define GCC_NSS_BCR				24
#define GCC_SEC_CTRL_BCR			25
#define GCC_ADSS_BCR				26
#define GCC_DDRSS_BCR				27
#define GCC_SYSTEM_NOC_BCR			28
#define GCC_PCNOC_BCR				29
#define GCC_TCSR_BCR				30
#define GCC_QDSS_BCR				31
#define GCC_DCD_BCR				32
#define GCC_MSG_RAM_BCR				33
#define GCC_MPM_BCR				34
#define GCC_SPMI_BCR				35
#define GCC_SPDM_BCR				36
#define GCC_RBCPR_BCR				37
#define GCC_RBCPR_MX_BCR			38
#define GCC_TLMM_BCR				39
#define GCC_RBCPR_WCSS_BCR			40
#define GCC_USB0_PHY_BCR			41
#define GCC_USB3PHY_0_PHY_BCR			42
#define GCC_USB0_BCR				43
#define GCC_USB1_PHY_BCR			44
#define GCC_USB3PHY_1_PHY_BCR			45
#define GCC_USB1_BCR				46
#define GCC_QUSB2_0_PHY_BCR			47
#define GCC_QUSB2_1_PHY_BCR			48
#define GCC_SDCC1_BCR				49
#define GCC_SDCC2_BCR				50
#define GCC_SNOC_BUS_TIMEOUT0_BCR		51
#define GCC_SNOC_BUS_TIMEOUT2_BCR		52
#define GCC_SNOC_BUS_TIMEOUT3_BCR		53
#define GCC_PCNOC_BUS_TIMEOUT0_BCR		54
#define GCC_PCNOC_BUS_TIMEOUT1_BCR		55
#define GCC_PCNOC_BUS_TIMEOUT2_BCR		56
#define GCC_PCNOC_BUS_TIMEOUT3_BCR		57
#define GCC_PCNOC_BUS_TIMEOUT4_BCR		58
#define GCC_PCNOC_BUS_TIMEOUT5_BCR		59
#define GCC_PCNOC_BUS_TIMEOUT6_BCR		60
#define GCC_PCNOC_BUS_TIMEOUT7_BCR		61
#define GCC_PCNOC_BUS_TIMEOUT8_BCR		62
#define GCC_PCNOC_BUS_TIMEOUT9_BCR		63
#define GCC_UNIPHY0_BCR				64
#define GCC_UNIPHY1_BCR				65
#define GCC_UNIPHY2_BCR				66
#define GCC_CMN_12GPLL_BCR			67
#define GCC_QPIC_BCR				68
#define GCC_MDIO_BCR				69
#define GCC_PCIE1_TBU_BCR			70
#define GCC_WCSS_CORE_TBU_BCR			71
#define GCC_WCSS_Q6_TBU_BCR			72
#define GCC_USB0_TBU_BCR			73
#define GCC_USB1_TBU_BCR			74
#define GCC_PCIE0_TBU_BCR			75
#define GCC_NSS_NOC_TBU_BCR			76
#define GCC_PCIE0_BCR				77
#define GCC_PCIE0_PHY_BCR			78
#define GCC_PCIE0PHY_PHY_BCR			79
#define GCC_PCIE0_LINK_DOWN_BCR			80
#define GCC_PCIE1_BCR				81
#define GCC_PCIE1_PHY_BCR			82
#define GCC_PCIE1PHY_PHY_BCR			83
#define GCC_PCIE1_LINK_DOWN_BCR			84
#define GCC_DCC_BCR				85
#define GCC_APC0_VOLTAGE_DROOP_DETECTOR_BCR	86
#define GCC_APC1_VOLTAGE_DROOP_DETECTOR_BCR	87
#define GCC_SMMU_CATS_BCR			88
#define GCC_UBI0_AXI_ARES			89
#define GCC_UBI0_AHB_ARES			90
#define GCC_UBI0_NC_AXI_ARES			91
#define GCC_UBI0_DBG_ARES			92
#define GCC_UBI0_CORE_CLAMP_ENABLE		93
#define GCC_UBI0_CLKRST_CLAMP_ENABLE		94
#define GCC_UBI1_AXI_ARES			95
#define GCC_UBI1_AHB_ARES			96
#define GCC_UBI1_NC_AXI_ARES			97
#define GCC_UBI1_DBG_ARES			98
#define GCC_UBI1_CORE_CLAMP_ENABLE		99
#define GCC_UBI1_CLKRST_CLAMP_ENABLE		100
#define GCC_NSS_CFG_ARES			101
#define GCC_NSS_IMEM_ARES			102
#define GCC_NSS_NOC_ARES			103
#define GCC_NSS_CRYPTO_ARES			104
#define GCC_NSS_CSR_ARES			105
#define GCC_NSS_CE_APB_ARES			106
#define GCC_NSS_CE_AXI_ARES			107
#define GCC_NSSNOC_CE_APB_ARES			108
#define GCC_NSSNOC_CE_AXI_ARES			109
#define GCC_NSSNOC_UBI0_AHB_ARES		110
#define GCC_NSSNOC_UBI1_AHB_ARES		111
#define GCC_NSSNOC_SNOC_ARES			112
#define GCC_NSSNOC_CRYPTO_ARES			113
#define GCC_NSSNOC_ATB_ARES			114
#define GCC_NSSNOC_QOSGEN_REF_ARES		115
#define GCC_NSSNOC_TIMEOUT_REF_ARES		116
#define GCC_PCIE0_PIPE_ARES			117
#define GCC_PCIE0_SLEEP_ARES			118
#define GCC_PCIE0_CORE_STICKY_ARES		119
#define GCC_PCIE0_AXI_MASTER_ARES		120
#define GCC_PCIE0_AXI_SLAVE_ARES		121
#define GCC_PCIE0_AHB_ARES			122
#define GCC_PCIE0_AXI_MASTER_STICKY_ARES	123
#define GCC_PCIE1_PIPE_ARES			124
#define GCC_PCIE1_SLEEP_ARES			125
#define GCC_PCIE1_CORE_STICKY_ARES		126
#define GCC_PCIE1_AXI_MASTER_ARES		127
#define GCC_PCIE1_AXI_SLAVE_ARES		128
#define GCC_PCIE1_AHB_ARES			129
#define GCC_PCIE1_AXI_MASTER_STICKY_ARES	130

#endif
