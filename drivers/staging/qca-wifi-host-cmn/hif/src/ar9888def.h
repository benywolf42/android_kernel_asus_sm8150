/*
 * Copyright (c) 2011-2016 The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _AR9888DEF_H_
#define _AR9888DEF_H_

/* Base Addresses */
#define AR9888_RTC_SOC_BASE_ADDRESS                     0x00004000
#define AR9888_RTC_WMAC_BASE_ADDRESS                    0x00005000
#define AR9888_MAC_COEX_BASE_ADDRESS                    0x00006000
#define AR9888_BT_COEX_BASE_ADDRESS                     0x00007000
#define AR9888_SOC_PCIE_BASE_ADDRESS                    0x00008000
#define AR9888_SOC_CORE_BASE_ADDRESS                    0x00009000
#define AR9888_WLAN_UART_BASE_ADDRESS                   0x0000c000
#define AR9888_WLAN_SI_BASE_ADDRESS                     0x00010000
#define AR9888_WLAN_GPIO_BASE_ADDRESS                   0x00014000
#define AR9888_WLAN_ANALOG_INTF_BASE_ADDRESS            0x0001c000
#define AR9888_WLAN_MAC_BASE_ADDRESS                    0x00020000
#define AR9888_EFUSE_BASE_ADDRESS                       0x00030000
#define AR9888_FPGA_REG_BASE_ADDRESS                    0x00039000
#define AR9888_WLAN_UART2_BASE_ADDRESS                  0x00054c00
#if defined(HIF_PCI) || defined(HIF_SNOC) || defined(HIF_AHB)
#define AR9888_CE_WRAPPER_BASE_ADDRESS                  0x00057000
#define AR9888_CE0_BASE_ADDRESS                         0x00057400
#define AR9888_CE1_BASE_ADDRESS                         0x00057800
#define AR9888_CE2_BASE_ADDRESS                         0x00057c00
#define AR9888_CE3_BASE_ADDRESS                         0x00058000
#define AR9888_CE4_BASE_ADDRESS                         0x00058400
#define AR9888_CE5_BASE_ADDRESS                         0x00058800
#define AR9888_CE6_BASE_ADDRESS                         0x00058c00
#define AR9888_CE7_BASE_ADDRESS                         0x00059000
#define AR9888_WLAN_ANALOG_INTF_PCIE_BASE_ADDRESS       0x0006c000
#define AR9888_CE_CTRL1_ADDRESS                         0x0010
#define AR9888_CE_CTRL1_DMAX_LENGTH_MASK                0x0000ffff
#define AR9888_CE_WRAPPER_INTERRUPT_SUMMARY_ADDRESS     0x0000
#define AR9888_CE_WRAPPER_INTERRUPT_SUMMARY_HOST_MSI_MASK 0x0000ff00
#define AR9888_CE_WRAPPER_INTERRUPT_SUMMARY_HOST_MSI_LSB  8
#define AR9888_CE_CTRL1_DMAX_LENGTH_LSB                 0
#define AR9888_CE_CTRL1_SRC_RING_BYTE_SWAP_EN_MASK      0x00010000
#define AR9888_CE_CTRL1_DST_RING_BYTE_SWAP_EN_MASK      0x00020000
#define AR9888_CE_CTRL1_SRC_RING_BYTE_SWAP_EN_LSB       16
#define AR9888_CE_CTRL1_DST_RING_BYTE_SWAP_EN_LSB       17
#define AR9888_SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_MASK 0x00000004
#define AR9888_SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_LSB  2
#define AR9888_PCIE_SOC_WAKE_RESET                      0x00000000
#define AR9888_PCIE_SOC_WAKE_ADDRESS                    0x0004
#define AR9888_PCIE_SOC_WAKE_V_MASK                     0x00000001
#define AR9888_PCIE_INTR_ENABLE_ADDRESS                 0x0008
#define AR9888_PCIE_INTR_CLR_ADDRESS                    0x0014
#define AR9888_PCIE_INTR_FIRMWARE_MASK                  0x00000400
#define AR9888_PCIE_INTR_CE0_MASK                       0x00000800
#define AR9888_PCIE_INTR_CE_MASK_ALL                    0x0007f800
#define AR9888_PCIE_INTR_CAUSE_ADDRESS                  0x000c
#define AR9888_MUX_ID_MASK                              0x0000
#define AR9888_TRANSACTION_ID_MASK                      0x3fff
#define AR9888_PCIE_LOCAL_BASE_ADDRESS                  0x80000
#define AR9888_SOC_RESET_CONTROL_CE_RST_MASK            0x00040000
#define AR9888_PCIE_INTR_CE_MASK(n) (AR9888_PCIE_INTR_CE0_MASK << (n))
#endif
#define AR9888_DBI_BASE_ADDRESS                         0x00060000
#define AR9888_SCRATCH_3_ADDRESS                        0x0030
#define AR9888_TARG_DRAM_START                          0x00400000
#define AR9888_SOC_SYSTEM_SLEEP_OFFSET                  0x000000c4
#define AR9888_SOC_RESET_CONTROL_OFFSET                 0x00000000
#define AR9888_SOC_CLOCK_CONTROL_OFFSET                 0x00000028
#define AR9888_SOC_CLOCK_CONTROL_SI0_CLK_MASK           0x00000001
#define AR9888_SOC_RESET_CONTROL_SI0_RST_MASK           0x00000001
#define AR9888_WLAN_GPIO_BASE_ADDRESS                   0x00014000
#define AR9888_WLAN_GPIO_PIN0_ADDRESS                   0x00000028
#define AR9888_WLAN_GPIO_PIN1_ADDRESS                   0x0000002c
#define AR9888_WLAN_GPIO_PIN0_CONFIG_MASK               0x00007800
#define AR9888_WLAN_GPIO_PIN1_CONFIG_MASK               0x00007800
#define AR9888_WLAN_SI_BASE_ADDRESS                     0x00010000
#define AR9888_SOC_CPU_CLOCK_OFFSET                     0x00000020
#define AR9888_SOC_LPO_CAL_OFFSET                       0x000000e0
#define AR9888_WLAN_GPIO_PIN10_ADDRESS                  0x00000050
#define AR9888_WLAN_GPIO_PIN11_ADDRESS                  0x00000054
#define AR9888_WLAN_GPIO_PIN12_ADDRESS                  0x00000058
#define AR9888_WLAN_GPIO_PIN13_ADDRESS                  0x0000005c
#define AR9888_SOC_CPU_CLOCK_STANDARD_LSB               0
#define AR9888_SOC_CPU_CLOCK_STANDARD_MASK              0x00000003
#define AR9888_SOC_LPO_CAL_ENABLE_LSB                   20
#define AR9888_SOC_LPO_CAL_ENABLE_MASK                  0x00100000
#define AR9888_WLAN_ANALOG_INTF_BASE_ADDRESS            0x0001c000

#define AR9888_WLAN_SYSTEM_SLEEP_DISABLE_LSB            0
#define AR9888_WLAN_SYSTEM_SLEEP_DISABLE_MASK           0x00000001
#define AR9888_WLAN_RESET_CONTROL_COLD_RST_MASK         0x00000008
#define AR9888_WLAN_RESET_CONTROL_WARM_RST_MASK         0x00000004
#define AR9888_SI_CONFIG_BIDIR_OD_DATA_LSB              18
#define AR9888_SI_CONFIG_BIDIR_OD_DATA_MASK             0x00040000
#define AR9888_SI_CONFIG_I2C_LSB                        16
#define AR9888_SI_CONFIG_I2C_MASK                       0x00010000
#define AR9888_SI_CONFIG_POS_SAMPLE_LSB                 7
#define AR9888_SI_CONFIG_POS_SAMPLE_MASK                0x00000080
#define AR9888_SI_CONFIG_INACTIVE_CLK_LSB               4
#define AR9888_SI_CONFIG_INACTIVE_CLK_MASK              0x00000010
#define AR9888_SI_CONFIG_INACTIVE_DATA_LSB              5
#define AR9888_SI_CONFIG_INACTIVE_DATA_MASK             0x00000020
#define AR9888_SI_CONFIG_DIVIDER_LSB                    0
#define AR9888_SI_CONFIG_DIVIDER_MASK                   0x0000000f
#define AR9888_SI_CONFIG_OFFSET                         0x00000000
#define AR9888_SI_TX_DATA0_OFFSET                       0x00000008
#define AR9888_SI_TX_DATA1_OFFSET                       0x0000000c
#define AR9888_SI_RX_DATA0_OFFSET                       0x00000010
#define AR9888_SI_RX_DATA1_OFFSET                       0x00000014
#define AR9888_SI_CS_OFFSET                             0x00000004
#define AR9888_SI_CS_DONE_ERR_MASK                      0x00000400
#define AR9888_SI_CS_DONE_INT_MASK                      0x00000200
#define AR9888_SI_CS_START_LSB                          8
#define AR9888_SI_CS_START_MASK                         0x00000100
#define AR9888_SI_CS_RX_CNT_LSB                         4
#define AR9888_SI_CS_RX_CNT_MASK                        0x000000f0
#define AR9888_SI_CS_TX_CNT_LSB                         0
#define AR9888_SI_CS_TX_CNT_MASK                        0x0000000f
#define AR9888_CE_COUNT                                 8
#define AR9888_SR_WR_INDEX_ADDRESS                      0x003c
#define AR9888_DST_WATERMARK_ADDRESS                    0x0050
#define AR9888_RX_MSDU_END_4_FIRST_MSDU_LSB             14
#define AR9888_RX_MSDU_END_4_FIRST_MSDU_MASK            0x00004000
#define AR9888_RX_MPDU_START_0_SEQ_NUM_LSB              16
#define AR9888_RX_MPDU_START_0_SEQ_NUM_MASK             0x0fff0000
#define AR9888_RX_MPDU_START_2_PN_47_32_LSB             0
#define AR9888_RX_MPDU_START_2_PN_47_32_MASK            0x0000ffff
#define AR9888_RX_MSDU_END_1_KEY_ID_OCT_MASK            0x000000ff
#define AR9888_RX_MSDU_END_1_KEY_ID_OCT_LSB             0
#define AR9888_RX_MSDU_END_1_EXT_WAPI_PN_63_48_LSB      16
#define AR9888_RX_MSDU_END_1_EXT_WAPI_PN_63_48_MASK     0xffff0000
#define AR9888_RX_MSDU_END_4_LAST_MSDU_LSB              15
#define AR9888_RX_MSDU_END_4_LAST_MSDU_MASK             0x00008000
#define AR9888_RX_ATTENTION_0_MCAST_BCAST_LSB           2
#define AR9888_RX_ATTENTION_0_MCAST_BCAST_MASK          0x00000004
#define AR9888_RX_ATTENTION_0_FRAGMENT_LSB              13
#define AR9888_RX_ATTENTION_0_FRAGMENT_MASK             0x00002000
#define AR9888_RX_ATTENTION_0_MPDU_LENGTH_ERR_MASK      0x08000000
#define AR9888_RX_FRAG_INFO_0_RING2_MORE_COUNT_LSB      16
#define AR9888_RX_FRAG_INFO_0_RING2_MORE_COUNT_MASK     0x00ff0000
#define AR9888_RX_MSDU_START_0_MSDU_LENGTH_LSB          0
#define AR9888_RX_MSDU_START_0_MSDU_LENGTH_MASK         0x00003fff
#define AR9888_RX_MSDU_START_2_DECAP_FORMAT_OFFSET      0x00000008
#define AR9888_RX_MSDU_START_2_DECAP_FORMAT_LSB         8
#define AR9888_RX_MSDU_START_2_DECAP_FORMAT_MASK        0x00000300
#define AR9888_RX_MPDU_START_0_ENCRYPTED_LSB            13
#define AR9888_RX_MPDU_START_0_ENCRYPTED_MASK           0x00002000
#define AR9888_RX_ATTENTION_0_MORE_DATA_MASK            0x00000400
#define AR9888_RX_ATTENTION_0_MSDU_DONE_MASK            0x80000000
#define AR9888_RX_ATTENTION_0_TCP_UDP_CHKSUM_FAIL_MASK  0x00040000
#define AR9888_DST_WR_INDEX_ADDRESS                     0x0040
#define AR9888_SRC_WATERMARK_ADDRESS                    0x004c
#define AR9888_SRC_WATERMARK_LOW_MASK                   0xffff0000
#define AR9888_SRC_WATERMARK_HIGH_MASK                  0x0000ffff
#define AR9888_DST_WATERMARK_LOW_MASK                   0xffff0000
#define AR9888_DST_WATERMARK_HIGH_MASK                  0x0000ffff
#define AR9888_CURRENT_SRRI_ADDRESS                     0x0044
#define AR9888_CURRENT_DRRI_ADDRESS                     0x0048
#define AR9888_HOST_IS_SRC_RING_HIGH_WATERMARK_MASK     0x00000002
#define AR9888_HOST_IS_SRC_RING_LOW_WATERMARK_MASK      0x00000004
#define AR9888_HOST_IS_DST_RING_HIGH_WATERMARK_MASK     0x00000008
#define AR9888_HOST_IS_DST_RING_LOW_WATERMARK_MASK      0x00000010
#define AR9888_HOST_IS_ADDRESS                          0x0030
#define AR9888_HOST_IS_COPY_COMPLETE_MASK               0x00000001
#define AR9888_HOST_IE_ADDRESS                          0x002c
#define AR9888_HOST_IE_COPY_COMPLETE_MASK               0x00000001
#define AR9888_SR_BA_ADDRESS                            0x0000
#define AR9888_SR_SIZE_ADDRESS                          0x0004
#define AR9888_DR_BA_ADDRESS                            0x0008
#define AR9888_DR_SIZE_ADDRESS                          0x000c
#define AR9888_MISC_IE_ADDRESS                          0x0034
#define AR9888_MISC_IS_AXI_ERR_MASK                     0x00000400
#define AR9888_MISC_IS_DST_ADDR_ERR_MASK                0x00000200
#define AR9888_MISC_IS_SRC_LEN_ERR_MASK                 0x00000100
#define AR9888_MISC_IS_DST_MAX_LEN_VIO_MASK             0x00000080
#define AR9888_MISC_IS_DST_RING_OVERFLOW_MASK           0x00000040
#define AR9888_MISC_IS_SRC_RING_OVERFLOW_MASK           0x00000020
#define AR9888_SRC_WATERMARK_LOW_LSB                    16
#define AR9888_SRC_WATERMARK_HIGH_LSB                   0
#define AR9888_DST_WATERMARK_LOW_LSB                    16
#define AR9888_DST_WATERMARK_HIGH_LSB                   0
#define AR9888_SOC_GLOBAL_RESET_ADDRESS                 0x0008
#define AR9888_RTC_STATE_ADDRESS                        0x0000
#define AR9888_RTC_STATE_COLD_RESET_MASK                0x00000400

#define AR9888_RTC_STATE_V_MASK                         0x00000007
#define AR9888_RTC_STATE_V_LSB                          0
#define AR9888_RTC_STATE_V_ON                           3
#define AR9888_FW_IND_EVENT_PENDING                     1
#define AR9888_FW_IND_INITIALIZED                       2
#define AR9888_CPU_INTR_ADDRESS                         0x0010
#define AR9888_SOC_LF_TIMER_CONTROL0_ADDRESS            0x00000050
#define AR9888_SOC_LF_TIMER_CONTROL0_ENABLE_MASK        0x00000004
#define AR9888_SOC_RESET_CONTROL_ADDRESS                0x00000000
#define AR9888_SOC_RESET_CONTROL_CPU_WARM_RST_MASK      0x00000040
#define AR9888_CORE_CTRL_ADDRESS                        0x0000
#define AR9888_CORE_CTRL_CPU_INTR_MASK                  0x00002000
#define AR9888_LOCAL_SCRATCH_OFFSET                     0x18
#define AR9888_CLOCK_GPIO_OFFSET                        0xffffffff
#define AR9888_CLOCK_GPIO_BT_CLK_OUT_EN_LSB             0
#define AR9888_CLOCK_GPIO_BT_CLK_OUT_EN_MASK            0

#define AR9888_FW_EVENT_PENDING_ADDRESS \
	(AR9888_SOC_CORE_BASE_ADDRESS + AR9888_SCRATCH_3_ADDRESS)
#define AR9888_DRAM_BASE_ADDRESS AR9888_TARG_DRAM_START
#define AR9888_FW_INDICATOR_ADDRESS \
	(AR9888_SOC_CORE_BASE_ADDRESS + AR9888_SCRATCH_3_ADDRESS)
#define AR9888_SYSTEM_SLEEP_OFFSET        AR9888_SOC_SYSTEM_SLEEP_OFFSET
#define AR9888_WLAN_SYSTEM_SLEEP_OFFSET   AR9888_SOC_SYSTEM_SLEEP_OFFSET
#define AR9888_WLAN_RESET_CONTROL_OFFSET  AR9888_SOC_RESET_CONTROL_OFFSET
#define AR9888_CLOCK_CONTROL_OFFSET       AR9888_SOC_CLOCK_CONTROL_OFFSET
#define AR9888_CLOCK_CONTROL_SI0_CLK_MASK AR9888_SOC_CLOCK_CONTROL_SI0_CLK_MASK
#define AR9888_RESET_CONTROL_MBOX_RST_MASK MISSING
#define AR9888_RESET_CONTROL_SI0_RST_MASK AR9888_SOC_RESET_CONTROL_SI0_RST_MASK
#define AR9888_GPIO_BASE_ADDRESS          AR9888_WLAN_GPIO_BASE_ADDRESS
#define AR9888_GPIO_PIN0_OFFSET           AR9888_WLAN_GPIO_PIN0_ADDRESS
#define AR9888_GPIO_PIN1_OFFSET           AR9888_WLAN_GPIO_PIN1_ADDRESS
#define AR9888_GPIO_PIN0_CONFIG_MASK      AR9888_WLAN_GPIO_PIN0_CONFIG_MASK
#define AR9888_GPIO_PIN1_CONFIG_MASK      AR9888_WLAN_GPIO_PIN1_CONFIG_MASK
#define AR9888_SI_BASE_ADDRESS            AR9888_WLAN_SI_BASE_ADDRESS
#define AR9888_SCRATCH_BASE_ADDRESS       AR9888_SOC_CORE_BASE_ADDRESS
#define AR9888_CPU_CLOCK_OFFSET           AR9888_SOC_CPU_CLOCK_OFFSET
#define AR9888_LPO_CAL_OFFSET             AR9888_SOC_LPO_CAL_OFFSET
#define AR9888_GPIO_PIN10_OFFSET          AR9888_WLAN_GPIO_PIN10_ADDRESS
#define AR9888_GPIO_PIN11_OFFSET          AR9888_WLAN_GPIO_PIN11_ADDRESS
#define AR9888_GPIO_PIN12_OFFSET          AR9888_WLAN_GPIO_PIN12_ADDRESS
#define AR9888_GPIO_PIN13_OFFSET          AR9888_WLAN_GPIO_PIN13_ADDRESS
#define AR9888_CPU_CLOCK_STANDARD_LSB     AR9888_SOC_CPU_CLOCK_STANDARD_LSB
#define AR9888_CPU_CLOCK_STANDARD_MASK    AR9888_SOC_CPU_CLOCK_STANDARD_MASK
#define AR9888_LPO_CAL_ENABLE_LSB         AR9888_SOC_LPO_CAL_ENABLE_LSB
#define AR9888_LPO_CAL_ENABLE_MASK        AR9888_SOC_LPO_CAL_ENABLE_MASK
#define AR9888_ANALOG_INTF_BASE_ADDRESS   AR9888_WLAN_ANALOG_INTF_BASE_ADDRESS
#define AR9888_MBOX_BASE_ADDRESS                       MISSING
#define AR9888_INT_STATUS_ENABLE_ERROR_LSB             MISSING
#define AR9888_INT_STATUS_ENABLE_ERROR_MASK            MISSING
#define AR9888_INT_STATUS_ENABLE_CPU_LSB               MISSING
#define AR9888_INT_STATUS_ENABLE_CPU_MASK              MISSING
#define AR9888_INT_STATUS_ENABLE_COUNTER_LSB           MISSING
#define AR9888_INT_STATUS_ENABLE_COUNTER_MASK          MISSING
#define AR9888_INT_STATUS_ENABLE_MBOX_DATA_LSB         MISSING
#define AR9888_INT_STATUS_ENABLE_MBOX_DATA_MASK        MISSING
#define AR9888_ERROR_STATUS_ENABLE_RX_UNDERFLOW_LSB    MISSING
#define AR9888_ERROR_STATUS_ENABLE_RX_UNDERFLOW_MASK   MISSING
#define AR9888_ERROR_STATUS_ENABLE_TX_OVERFLOW_LSB     MISSING
#define AR9888_ERROR_STATUS_ENABLE_TX_OVERFLOW_MASK    MISSING
#define AR9888_COUNTER_INT_STATUS_ENABLE_BIT_LSB       MISSING
#define AR9888_COUNTER_INT_STATUS_ENABLE_BIT_MASK      MISSING
#define AR9888_INT_STATUS_ENABLE_ADDRESS               MISSING
#define AR9888_CPU_INT_STATUS_ENABLE_BIT_LSB           MISSING
#define AR9888_CPU_INT_STATUS_ENABLE_BIT_MASK          MISSING
#define AR9888_HOST_INT_STATUS_ADDRESS                 MISSING
#define AR9888_CPU_INT_STATUS_ADDRESS                  MISSING
#define AR9888_ERROR_INT_STATUS_ADDRESS                MISSING
#define AR9888_ERROR_INT_STATUS_WAKEUP_MASK            MISSING
#define AR9888_ERROR_INT_STATUS_WAKEUP_LSB             MISSING
#define AR9888_ERROR_INT_STATUS_RX_UNDERFLOW_MASK      MISSING
#define AR9888_ERROR_INT_STATUS_RX_UNDERFLOW_LSB       MISSING
#define AR9888_ERROR_INT_STATUS_TX_OVERFLOW_MASK       MISSING
#define AR9888_ERROR_INT_STATUS_TX_OVERFLOW_LSB        MISSING
#define AR9888_COUNT_DEC_ADDRESS                       MISSING
#define AR9888_HOST_INT_STATUS_CPU_MASK                MISSING
#define AR9888_HOST_INT_STATUS_CPU_LSB                 MISSING
#define AR9888_HOST_INT_STATUS_ERROR_MASK              MISSING
#define AR9888_HOST_INT_STATUS_ERROR_LSB               MISSING
#define AR9888_HOST_INT_STATUS_COUNTER_MASK            MISSING
#define AR9888_HOST_INT_STATUS_COUNTER_LSB             MISSING
#define AR9888_RX_LOOKAHEAD_VALID_ADDRESS              MISSING
#define AR9888_WINDOW_DATA_ADDRESS                     MISSING
#define AR9888_WINDOW_READ_ADDR_ADDRESS                MISSING
#define AR9888_WINDOW_WRITE_ADDR_ADDRESS               MISSING
#define AR9888_HOST_INT_STATUS_MBOX_DATA_MASK          0x0f
#define AR9888_HOST_INT_STATUS_MBOX_DATA_LSB           0

struct targetdef_s ar9888_targetdef = {
	.d_RTC_SOC_BASE_ADDRESS = AR9888_RTC_SOC_BASE_ADDRESS,
	.d_RTC_WMAC_BASE_ADDRESS = AR9888_RTC_WMAC_BASE_ADDRESS,
	.d_SYSTEM_SLEEP_OFFSET = AR9888_WLAN_SYSTEM_SLEEP_OFFSET,
	.d_WLAN_SYSTEM_SLEEP_OFFSET = AR9888_WLAN_SYSTEM_SLEEP_OFFSET,
	.d_WLAN_SYSTEM_SLEEP_DISABLE_LSB =
		AR9888_WLAN_SYSTEM_SLEEP_DISABLE_LSB,
	.d_WLAN_SYSTEM_SLEEP_DISABLE_MASK =
		AR9888_WLAN_SYSTEM_SLEEP_DISABLE_MASK,
	.d_CLOCK_CONTROL_OFFSET = AR9888_CLOCK_CONTROL_OFFSET,
	.d_CLOCK_CONTROL_SI0_CLK_MASK = AR9888_CLOCK_CONTROL_SI0_CLK_MASK,
	.d_RESET_CONTROL_OFFSET = AR9888_SOC_RESET_CONTROL_OFFSET,
	.d_RESET_CONTROL_MBOX_RST_MASK = AR9888_RESET_CONTROL_MBOX_RST_MASK,
	.d_RESET_CONTROL_SI0_RST_MASK = AR9888_RESET_CONTROL_SI0_RST_MASK,
	.d_WLAN_RESET_CONTROL_OFFSET = AR9888_WLAN_RESET_CONTROL_OFFSET,
	.d_WLAN_RESET_CONTROL_COLD_RST_MASK =
		AR9888_WLAN_RESET_CONTROL_COLD_RST_MASK,
	.d_WLAN_RESET_CONTROL_WARM_RST_MASK =
		AR9888_WLAN_RESET_CONTROL_WARM_RST_MASK,
	.d_GPIO_BASE_ADDRESS = AR9888_GPIO_BASE_ADDRESS,
	.d_GPIO_PIN0_OFFSET = AR9888_GPIO_PIN0_OFFSET,
	.d_GPIO_PIN1_OFFSET = AR9888_GPIO_PIN1_OFFSET,
	.d_GPIO_PIN0_CONFIG_MASK = AR9888_GPIO_PIN0_CONFIG_MASK,
	.d_GPIO_PIN1_CONFIG_MASK = AR9888_GPIO_PIN1_CONFIG_MASK,
	.d_SI_CONFIG_BIDIR_OD_DATA_LSB = AR9888_SI_CONFIG_BIDIR_OD_DATA_LSB,
	.d_SI_CONFIG_BIDIR_OD_DATA_MASK = AR9888_SI_CONFIG_BIDIR_OD_DATA_MASK,
	.d_SI_CONFIG_I2C_LSB = AR9888_SI_CONFIG_I2C_LSB,
	.d_SI_CONFIG_I2C_MASK = AR9888_SI_CONFIG_I2C_MASK,
	.d_SI_CONFIG_POS_SAMPLE_LSB = AR9888_SI_CONFIG_POS_SAMPLE_LSB,
	.d_SI_CONFIG_POS_SAMPLE_MASK = AR9888_SI_CONFIG_POS_SAMPLE_MASK,
	.d_SI_CONFIG_INACTIVE_CLK_LSB = AR9888_SI_CONFIG_INACTIVE_CLK_LSB,
	.d_SI_CONFIG_INACTIVE_CLK_MASK = AR9888_SI_CONFIG_INACTIVE_CLK_MASK,
	.d_SI_CONFIG_INACTIVE_DATA_LSB = AR9888_SI_CONFIG_INACTIVE_DATA_LSB,
	.d_SI_CONFIG_INACTIVE_DATA_MASK = AR9888_SI_CONFIG_INACTIVE_DATA_MASK,
	.d_SI_CONFIG_DIVIDER_LSB = AR9888_SI_CONFIG_DIVIDER_LSB,
	.d_SI_CONFIG_DIVIDER_MASK = AR9888_SI_CONFIG_DIVIDER_MASK,
	.d_SI_BASE_ADDRESS = AR9888_SI_BASE_ADDRESS,
	.d_SI_CONFIG_OFFSET = AR9888_SI_CONFIG_OFFSET,
	.d_SI_TX_DATA0_OFFSET = AR9888_SI_TX_DATA0_OFFSET,
	.d_SI_TX_DATA1_OFFSET = AR9888_SI_TX_DATA1_OFFSET,
	.d_SI_RX_DATA0_OFFSET = AR9888_SI_RX_DATA0_OFFSET,
	.d_SI_RX_DATA1_OFFSET = AR9888_SI_RX_DATA1_OFFSET,
	.d_SI_CS_OFFSET = AR9888_SI_CS_OFFSET,
	.d_SI_CS_DONE_ERR_MASK = AR9888_SI_CS_DONE_ERR_MASK,
	.d_SI_CS_DONE_INT_MASK = AR9888_SI_CS_DONE_INT_MASK,
	.d_SI_CS_START_LSB = AR9888_SI_CS_START_LSB,
	.d_SI_CS_START_MASK = AR9888_SI_CS_START_MASK,
	.d_SI_CS_RX_CNT_LSB = AR9888_SI_CS_RX_CNT_LSB,
	.d_SI_CS_RX_CNT_MASK = AR9888_SI_CS_RX_CNT_MASK,
	.d_SI_CS_TX_CNT_LSB = AR9888_SI_CS_TX_CNT_LSB,
	.d_SI_CS_TX_CNT_MASK = AR9888_SI_CS_TX_CNT_MASK,
	.d_BOARD_DATA_SZ = AR9888_BOARD_DATA_SZ,
	.d_BOARD_EXT_DATA_SZ = AR9888_BOARD_EXT_DATA_SZ,
	.d_MBOX_BASE_ADDRESS = AR9888_MBOX_BASE_ADDRESS,
	.d_LOCAL_SCRATCH_OFFSET = AR9888_LOCAL_SCRATCH_OFFSET,
	.d_CPU_CLOCK_OFFSET = AR9888_CPU_CLOCK_OFFSET,
	.d_LPO_CAL_OFFSET = AR9888_LPO_CAL_OFFSET,
	.d_GPIO_PIN10_OFFSET = AR9888_GPIO_PIN10_OFFSET,
	.d_GPIO_PIN11_OFFSET = AR9888_GPIO_PIN11_OFFSET,
	.d_GPIO_PIN12_OFFSET = AR9888_GPIO_PIN12_OFFSET,
	.d_GPIO_PIN13_OFFSET = AR9888_GPIO_PIN13_OFFSET,
	.d_CLOCK_GPIO_OFFSET = AR9888_CLOCK_GPIO_OFFSET,
	.d_CPU_CLOCK_STANDARD_LSB = AR9888_CPU_CLOCK_STANDARD_LSB,
	.d_CPU_CLOCK_STANDARD_MASK = AR9888_CPU_CLOCK_STANDARD_MASK,
	.d_LPO_CAL_ENABLE_LSB = AR9888_LPO_CAL_ENABLE_LSB,
	.d_LPO_CAL_ENABLE_MASK = AR9888_LPO_CAL_ENABLE_MASK,
	.d_CLOCK_GPIO_BT_CLK_OUT_EN_LSB = AR9888_CLOCK_GPIO_BT_CLK_OUT_EN_LSB,
	.d_CLOCK_GPIO_BT_CLK_OUT_EN_MASK =
		AR9888_CLOCK_GPIO_BT_CLK_OUT_EN_MASK,
	.d_ANALOG_INTF_BASE_ADDRESS = AR9888_ANALOG_INTF_BASE_ADDRESS,
	.d_WLAN_MAC_BASE_ADDRESS = AR9888_WLAN_MAC_BASE_ADDRESS,
	.d_FW_INDICATOR_ADDRESS = AR9888_FW_INDICATOR_ADDRESS,
	.d_DRAM_BASE_ADDRESS = AR9888_DRAM_BASE_ADDRESS,
	.d_SOC_CORE_BASE_ADDRESS = AR9888_SOC_CORE_BASE_ADDRESS,
	.d_CORE_CTRL_ADDRESS = AR9888_CORE_CTRL_ADDRESS,
#if defined(HIF_PCI) || defined(HIF_SNOC) || defined(HIF_AHB)
	.d_MSI_NUM_REQUEST = MSI_NUM_REQUEST,
	.d_MSI_ASSIGN_FW = MSI_ASSIGN_FW,
#endif
	.d_CORE_CTRL_CPU_INTR_MASK = AR9888_CORE_CTRL_CPU_INTR_MASK,
	.d_SR_WR_INDEX_ADDRESS = AR9888_SR_WR_INDEX_ADDRESS,
	.d_DST_WATERMARK_ADDRESS = AR9888_DST_WATERMARK_ADDRESS,
	/* htt_rx.c */
	.d_RX_MSDU_END_4_FIRST_MSDU_MASK =
		AR9888_RX_MSDU_END_4_FIRST_MSDU_MASK,
	.d_RX_MSDU_END_4_FIRST_MSDU_LSB = AR9888_RX_MSDU_END_4_FIRST_MSDU_LSB,
	.d_RX_MPDU_START_0_SEQ_NUM_MASK = AR9888_RX_MPDU_START_0_SEQ_NUM_MASK,
	.d_RX_MPDU_START_0_SEQ_NUM_LSB = AR9888_RX_MPDU_START_0_SEQ_NUM_LSB,
	.d_RX_MPDU_START_2_PN_47_32_LSB = AR9888_RX_MPDU_START_2_PN_47_32_LSB,
	.d_RX_MPDU_START_2_PN_47_32_MASK =
		AR9888_RX_MPDU_START_2_PN_47_32_MASK,
	.d_RX_MSDU_END_1_EXT_WAPI_PN_63_48_MASK =
		AR9888_RX_MSDU_END_1_EXT_WAPI_PN_63_48_MASK,
	.d_RX_MSDU_END_1_EXT_WAPI_PN_63_48_LSB =
		AR9888_RX_MSDU_END_1_EXT_WAPI_PN_63_48_LSB,
	.d_RX_MSDU_END_1_KEY_ID_OCT_MASK =
		AR9888_RX_MSDU_END_1_KEY_ID_OCT_MASK,
	.d_RX_MSDU_END_1_KEY_ID_OCT_LSB = AR9888_RX_MSDU_END_1_KEY_ID_OCT_LSB,
	.d_RX_MSDU_END_4_LAST_MSDU_MASK = AR9888_RX_MSDU_END_4_LAST_MSDU_MASK,
	.d_RX_MSDU_END_4_LAST_MSDU_LSB = AR9888_RX_MSDU_END_4_LAST_MSDU_LSB,
	.d_RX_ATTENTION_0_MCAST_BCAST_MASK =
		AR9888_RX_ATTENTION_0_MCAST_BCAST_MASK,
	.d_RX_ATTENTION_0_MCAST_BCAST_LSB =
		AR9888_RX_ATTENTION_0_MCAST_BCAST_LSB,
	.d_RX_ATTENTION_0_FRAGMENT_MASK = AR9888_RX_ATTENTION_0_FRAGMENT_MASK,
	.d_RX_ATTENTION_0_FRAGMENT_LSB = AR9888_RX_ATTENTION_0_FRAGMENT_LSB,
	.d_RX_ATTENTION_0_MPDU_LENGTH_ERR_MASK =
		AR9888_RX_ATTENTION_0_MPDU_LENGTH_ERR_MASK,
	.d_RX_FRAG_INFO_0_RING2_MORE_COUNT_MASK =
		AR9888_RX_FRAG_INFO_0_RING2_MORE_COUNT_MASK,
	.d_RX_FRAG_INFO_0_RING2_MORE_COUNT_LSB =
		AR9888_RX_FRAG_INFO_0_RING2_MORE_COUNT_LSB,
	.d_RX_MSDU_START_0_MSDU_LENGTH_MASK =
		AR9888_RX_MSDU_START_0_MSDU_LENGTH_MASK,
	.d_RX_MSDU_START_0_MSDU_LENGTH_LSB =
		AR9888_RX_MSDU_START_0_MSDU_LENGTH_LSB,
	.d_RX_MSDU_START_2_DECAP_FORMAT_OFFSET =
		AR9888_RX_MSDU_START_2_DECAP_FORMAT_OFFSET,
	.d_RX_MSDU_START_2_DECAP_FORMAT_MASK =
		AR9888_RX_MSDU_START_2_DECAP_FORMAT_MASK,
	.d_RX_MSDU_START_2_DECAP_FORMAT_LSB =
		AR9888_RX_MSDU_START_2_DECAP_FORMAT_LSB,
	.d_RX_MPDU_START_0_ENCRYPTED_MASK =
		AR9888_RX_MPDU_START_0_ENCRYPTED_MASK,
	.d_RX_MPDU_START_0_ENCRYPTED_LSB =
		AR9888_RX_MPDU_START_0_ENCRYPTED_LSB,
	.d_RX_ATTENTION_0_MORE_DATA_MASK =
		AR9888_RX_ATTENTION_0_MORE_DATA_MASK,
	.d_RX_ATTENTION_0_MSDU_DONE_MASK =
		AR9888_RX_ATTENTION_0_MSDU_DONE_MASK,
	.d_RX_ATTENTION_0_TCP_UDP_CHKSUM_FAIL_MASK =
		AR9888_RX_ATTENTION_0_TCP_UDP_CHKSUM_FAIL_MASK,
#if defined(HIF_PCI) || defined(HIF_SNOC) || defined(HIF_AHB)
	.d_CE_COUNT = AR9888_CE_COUNT,
	.d_MSI_ASSIGN_CE_INITIAL = MSI_ASSIGN_CE_INITIAL,
	.d_PCIE_INTR_ENABLE_ADDRESS = AR9888_PCIE_INTR_ENABLE_ADDRESS,
	.d_PCIE_INTR_CLR_ADDRESS = AR9888_PCIE_INTR_CLR_ADDRESS,
	.d_PCIE_INTR_FIRMWARE_MASK = AR9888_PCIE_INTR_FIRMWARE_MASK,
	.d_PCIE_INTR_CE_MASK_ALL = AR9888_PCIE_INTR_CE_MASK_ALL,
	.d_PCIE_INTR_CAUSE_ADDRESS = AR9888_PCIE_INTR_CAUSE_ADDRESS,
	.d_SOC_RESET_CONTROL_ADDRESS = AR9888_SOC_RESET_CONTROL_ADDRESS,
	.d_SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_MASK =
		AR9888_SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_MASK,
	.d_SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_LSB =
		AR9888_SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_LSB,
	.d_SOC_RESET_CONTROL_CE_RST_MASK =
		AR9888_SOC_RESET_CONTROL_CE_RST_MASK,
#endif
	.d_SOC_RESET_CONTROL_CPU_WARM_RST_MASK =
		AR9888_SOC_RESET_CONTROL_CPU_WARM_RST_MASK,
	.d_CPU_INTR_ADDRESS = AR9888_CPU_INTR_ADDRESS,
	.d_SOC_LF_TIMER_CONTROL0_ADDRESS =
		AR9888_SOC_LF_TIMER_CONTROL0_ADDRESS,
	.d_SOC_LF_TIMER_CONTROL0_ENABLE_MASK =
		AR9888_SOC_LF_TIMER_CONTROL0_ENABLE_MASK,
};

struct hostdef_s ar9888_hostdef = {
	.d_INT_STATUS_ENABLE_ERROR_LSB = AR9888_INT_STATUS_ENABLE_ERROR_LSB,
	.d_INT_STATUS_ENABLE_ERROR_MASK = AR9888_INT_STATUS_ENABLE_ERROR_MASK,
	.d_INT_STATUS_ENABLE_CPU_LSB = AR9888_INT_STATUS_ENABLE_CPU_LSB,
	.d_INT_STATUS_ENABLE_CPU_MASK = AR9888_INT_STATUS_ENABLE_CPU_MASK,
	.d_INT_STATUS_ENABLE_COUNTER_LSB =
		AR9888_INT_STATUS_ENABLE_COUNTER_LSB,
	.d_INT_STATUS_ENABLE_COUNTER_MASK =
		AR9888_INT_STATUS_ENABLE_COUNTER_MASK,
	.d_INT_STATUS_ENABLE_MBOX_DATA_LSB =
		AR9888_INT_STATUS_ENABLE_MBOX_DATA_LSB,
	.d_INT_STATUS_ENABLE_MBOX_DATA_MASK =
		AR9888_INT_STATUS_ENABLE_MBOX_DATA_MASK,
	.d_ERROR_STATUS_ENABLE_RX_UNDERFLOW_LSB =
		AR9888_ERROR_STATUS_ENABLE_RX_UNDERFLOW_LSB,
	.d_ERROR_STATUS_ENABLE_RX_UNDERFLOW_MASK =
		AR9888_ERROR_STATUS_ENABLE_RX_UNDERFLOW_MASK,
	.d_ERROR_STATUS_ENABLE_TX_OVERFLOW_LSB =
		AR9888_ERROR_STATUS_ENABLE_TX_OVERFLOW_LSB,
	.d_ERROR_STATUS_ENABLE_TX_OVERFLOW_MASK =
		AR9888_ERROR_STATUS_ENABLE_TX_OVERFLOW_MASK,
	.d_COUNTER_INT_STATUS_ENABLE_BIT_LSB =
		AR9888_COUNTER_INT_STATUS_ENABLE_BIT_LSB,
	.d_COUNTER_INT_STATUS_ENABLE_BIT_MASK =
		AR9888_COUNTER_INT_STATUS_ENABLE_BIT_MASK,
	.d_INT_STATUS_ENABLE_ADDRESS = AR9888_INT_STATUS_ENABLE_ADDRESS,
	.d_CPU_INT_STATUS_ENABLE_BIT_LSB =
		AR9888_CPU_INT_STATUS_ENABLE_BIT_LSB,
	.d_CPU_INT_STATUS_ENABLE_BIT_MASK =
		AR9888_CPU_INT_STATUS_ENABLE_BIT_MASK,
	.d_HOST_INT_STATUS_ADDRESS = AR9888_HOST_INT_STATUS_ADDRESS,
	.d_CPU_INT_STATUS_ADDRESS = AR9888_CPU_INT_STATUS_ADDRESS,
	.d_ERROR_INT_STATUS_ADDRESS = AR9888_ERROR_INT_STATUS_ADDRESS,
	.d_ERROR_INT_STATUS_WAKEUP_MASK = AR9888_ERROR_INT_STATUS_WAKEUP_MASK,
	.d_ERROR_INT_STATUS_WAKEUP_LSB = AR9888_ERROR_INT_STATUS_WAKEUP_LSB,
	.d_ERROR_INT_STATUS_RX_UNDERFLOW_MASK =
		AR9888_ERROR_INT_STATUS_RX_UNDERFLOW_MASK,
	.d_ERROR_INT_STATUS_RX_UNDERFLOW_LSB =
		AR9888_ERROR_INT_STATUS_RX_UNDERFLOW_LSB,
	.d_ERROR_INT_STATUS_TX_OVERFLOW_MASK =
		AR9888_ERROR_INT_STATUS_TX_OVERFLOW_MASK,
	.d_ERROR_INT_STATUS_TX_OVERFLOW_LSB =
		AR9888_ERROR_INT_STATUS_TX_OVERFLOW_LSB,
	.d_COUNT_DEC_ADDRESS = AR9888_COUNT_DEC_ADDRESS,
	.d_HOST_INT_STATUS_CPU_MASK = AR9888_HOST_INT_STATUS_CPU_MASK,
	.d_HOST_INT_STATUS_CPU_LSB = AR9888_HOST_INT_STATUS_CPU_LSB,
	.d_HOST_INT_STATUS_ERROR_MASK = AR9888_HOST_INT_STATUS_ERROR_MASK,
	.d_HOST_INT_STATUS_ERROR_LSB = AR9888_HOST_INT_STATUS_ERROR_LSB,
	.d_HOST_INT_STATUS_COUNTER_MASK = AR9888_HOST_INT_STATUS_COUNTER_MASK,
	.d_HOST_INT_STATUS_COUNTER_LSB = AR9888_HOST_INT_STATUS_COUNTER_LSB,
	.d_RX_LOOKAHEAD_VALID_ADDRESS = AR9888_RX_LOOKAHEAD_VALID_ADDRESS,
	.d_WINDOW_DATA_ADDRESS = AR9888_WINDOW_DATA_ADDRESS,
	.d_WINDOW_READ_ADDR_ADDRESS = AR9888_WINDOW_READ_ADDR_ADDRESS,
	.d_WINDOW_WRITE_ADDR_ADDRESS = AR9888_WINDOW_WRITE_ADDR_ADDRESS,
	.d_SOC_GLOBAL_RESET_ADDRESS = AR9888_SOC_GLOBAL_RESET_ADDRESS,
	.d_RTC_STATE_ADDRESS = AR9888_RTC_STATE_ADDRESS,
	.d_RTC_STATE_COLD_RESET_MASK = AR9888_RTC_STATE_COLD_RESET_MASK,
	.d_RTC_STATE_V_MASK = AR9888_RTC_STATE_V_MASK,
	.d_RTC_STATE_V_LSB = AR9888_RTC_STATE_V_LSB,
	.d_FW_IND_EVENT_PENDING = AR9888_FW_IND_EVENT_PENDING,
	.d_FW_IND_INITIALIZED = AR9888_FW_IND_INITIALIZED,
	.d_RTC_STATE_V_ON = AR9888_RTC_STATE_V_ON,
#if defined(SDIO_3_0)
	.d_HOST_INT_STATUS_MBOX_DATA_MASK =
		AR9888_HOST_INT_STATUS_MBOX_DATA_MASK,
	.d_HOST_INT_STATUS_MBOX_DATA_LSB =
		AR9888_HOST_INT_STATUS_MBOX_DATA_LSB,
#endif
#if defined(HIF_PCI) || defined(HIF_SNOC) || defined(HIF_AHB)
	.d_MUX_ID_MASK = AR9888_MUX_ID_MASK,
	.d_TRANSACTION_ID_MASK = AR9888_TRANSACTION_ID_MASK,
	.d_PCIE_LOCAL_BASE_ADDRESS = AR9888_PCIE_LOCAL_BASE_ADDRESS,
	.d_PCIE_SOC_WAKE_RESET = AR9888_PCIE_SOC_WAKE_RESET,
	.d_PCIE_SOC_WAKE_ADDRESS = AR9888_PCIE_SOC_WAKE_ADDRESS,
	.d_PCIE_SOC_WAKE_V_MASK = AR9888_PCIE_SOC_WAKE_V_MASK,
	.d_PCIE_SOC_RDY_STATUS_ADDRESS = PCIE_SOC_RDY_STATUS_ADDRESS,
	.d_PCIE_SOC_RDY_STATUS_BAR_MASK = PCIE_SOC_RDY_STATUS_BAR_MASK,
	.d_SOC_PCIE_BASE_ADDRESS = SOC_PCIE_BASE_ADDRESS,
	.d_MSI_MAGIC_ADR_ADDRESS = MSI_MAGIC_ADR_ADDRESS,
	.d_MSI_MAGIC_ADDRESS = MSI_MAGIC_ADDRESS,
	.d_HOST_CE_COUNT = 8,
	.d_ENABLE_MSI = 0,
#endif
};

#if defined(HIF_PCI) || defined(HIF_SNOC) || defined(HIF_AHB)
struct ce_reg_def ar9888_ce_targetdef = {
	/* copy_engine.c  */
	.d_DST_WR_INDEX_ADDRESS = AR9888_DST_WR_INDEX_ADDRESS,
	.d_SRC_WATERMARK_ADDRESS = AR9888_SRC_WATERMARK_ADDRESS,
	.d_SRC_WATERMARK_LOW_MASK = AR9888_SRC_WATERMARK_LOW_MASK,
	.d_SRC_WATERMARK_HIGH_MASK = AR9888_SRC_WATERMARK_HIGH_MASK,
	.d_DST_WATERMARK_LOW_MASK = AR9888_DST_WATERMARK_LOW_MASK,
	.d_DST_WATERMARK_HIGH_MASK = AR9888_DST_WATERMARK_HIGH_MASK,
	.d_CURRENT_SRRI_ADDRESS = AR9888_CURRENT_SRRI_ADDRESS,
	.d_CURRENT_DRRI_ADDRESS = AR9888_CURRENT_DRRI_ADDRESS,
	.d_HOST_IS_SRC_RING_HIGH_WATERMARK_MASK =
		AR9888_HOST_IS_SRC_RING_HIGH_WATERMARK_MASK,
	.d_HOST_IS_SRC_RING_LOW_WATERMARK_MASK =
		AR9888_HOST_IS_SRC_RING_LOW_WATERMARK_MASK,
	.d_HOST_IS_DST_RING_HIGH_WATERMARK_MASK =
		AR9888_HOST_IS_DST_RING_HIGH_WATERMARK_MASK,
	.d_HOST_IS_DST_RING_LOW_WATERMARK_MASK =
		AR9888_HOST_IS_DST_RING_LOW_WATERMARK_MASK,
	.d_HOST_IS_ADDRESS = AR9888_HOST_IS_ADDRESS,
	.d_HOST_IS_COPY_COMPLETE_MASK = AR9888_HOST_IS_COPY_COMPLETE_MASK,
	.d_CE_WRAPPER_BASE_ADDRESS = AR9888_CE_WRAPPER_BASE_ADDRESS,
	.d_CE_WRAPPER_INTERRUPT_SUMMARY_ADDRESS =
		AR9888_CE_WRAPPER_INTERRUPT_SUMMARY_ADDRESS,
	.d_HOST_IE_ADDRESS = AR9888_HOST_IE_ADDRESS,
	.d_HOST_IE_COPY_COMPLETE_MASK = AR9888_HOST_IE_COPY_COMPLETE_MASK,
	.d_SR_BA_ADDRESS = AR9888_SR_BA_ADDRESS,
	.d_SR_SIZE_ADDRESS = AR9888_SR_SIZE_ADDRESS,
	.d_CE_CTRL1_ADDRESS = AR9888_CE_CTRL1_ADDRESS,
	.d_CE_CTRL1_DMAX_LENGTH_MASK = AR9888_CE_CTRL1_DMAX_LENGTH_MASK,
	.d_DR_BA_ADDRESS = AR9888_DR_BA_ADDRESS,
	.d_DR_SIZE_ADDRESS = AR9888_DR_SIZE_ADDRESS,
	.d_MISC_IE_ADDRESS = AR9888_MISC_IE_ADDRESS,
	.d_MISC_IS_AXI_ERR_MASK = AR9888_MISC_IS_AXI_ERR_MASK,
	.d_MISC_IS_DST_ADDR_ERR_MASK = AR9888_MISC_IS_DST_ADDR_ERR_MASK,
	.d_MISC_IS_SRC_LEN_ERR_MASK = AR9888_MISC_IS_SRC_LEN_ERR_MASK,
	.d_MISC_IS_DST_MAX_LEN_VIO_MASK = AR9888_MISC_IS_DST_MAX_LEN_VIO_MASK,
	.d_MISC_IS_DST_RING_OVERFLOW_MASK =
		AR9888_MISC_IS_DST_RING_OVERFLOW_MASK,
	.d_MISC_IS_SRC_RING_OVERFLOW_MASK =
		AR9888_MISC_IS_SRC_RING_OVERFLOW_MASK,
	.d_SRC_WATERMARK_LOW_LSB = AR9888_SRC_WATERMARK_LOW_LSB,
	.d_SRC_WATERMARK_HIGH_LSB = AR9888_SRC_WATERMARK_HIGH_LSB,
	.d_DST_WATERMARK_LOW_LSB = AR9888_DST_WATERMARK_LOW_LSB,
	.d_DST_WATERMARK_HIGH_LSB = AR9888_DST_WATERMARK_HIGH_LSB,
	.d_CE_WRAPPER_INTERRUPT_SUMMARY_HOST_MSI_MASK =
		AR9888_CE_WRAPPER_INTERRUPT_SUMMARY_HOST_MSI_MASK,
	.d_CE_WRAPPER_INTERRUPT_SUMMARY_HOST_MSI_LSB =
		AR9888_CE_WRAPPER_INTERRUPT_SUMMARY_HOST_MSI_LSB,
	.d_CE_CTRL1_DMAX_LENGTH_LSB = AR9888_CE_CTRL1_DMAX_LENGTH_LSB,
	.d_CE_CTRL1_SRC_RING_BYTE_SWAP_EN_MASK =
		AR9888_CE_CTRL1_SRC_RING_BYTE_SWAP_EN_MASK,
	.d_CE_CTRL1_DST_RING_BYTE_SWAP_EN_MASK =
		AR9888_CE_CTRL1_DST_RING_BYTE_SWAP_EN_MASK,
	.d_CE_CTRL1_SRC_RING_BYTE_SWAP_EN_LSB =
		AR9888_CE_CTRL1_SRC_RING_BYTE_SWAP_EN_LSB,
	.d_CE_CTRL1_DST_RING_BYTE_SWAP_EN_LSB =
		AR9888_CE_CTRL1_DST_RING_BYTE_SWAP_EN_LSB,
	.d_CE0_BASE_ADDRESS = AR9888_CE0_BASE_ADDRESS,
	.d_CE1_BASE_ADDRESS = AR9888_CE1_BASE_ADDRESS,

};
#endif
#endif
