/*******************************************************************************
* File Name: cycfg_peripherals.h
*
* Description:
* Peripheral Hardware Block configuration
* This file was automatically generated and should not be modified.
* 
********************************************************************************
* Copyright 2017-2019 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_PERIPHERALS_H)
#define CYCFG_PERIPHERALS_H

#include "cycfg_notices.h"
#include "cy_sysclk.h"
#include "cy_csd.h"
#include "cy_scb_ezi2c.h"
#include "cy_scb_uart.h"
#include "cy_smif.h"
#include "cy_mcwdt.h"
#include "cy_rtc.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define CY_BLE_CORE_CORTEX_M4 4U
#define CY_BLE_CORE_CORTEX_M0P 0U
#define CY_BLE_CORE_DUAL 255U
#ifndef CY_BLE_CORE
	#define CY_BLE_CORE 4U
#endif
#define CY_BLE_IRQ bless_interrupt_IRQn
#define CY_CAPSENSE_CORE 4u
#define CY_CAPSENSE_CPU_CLK 100000000u
#define CY_CAPSENSE_PERI_CLK 50000000u
#define CY_CAPSENSE_VDDA_MV 3300u
#define CY_CAPSENSE_PERI_DIV_TYPE CY_SYSCLK_DIV_8_BIT
#define CY_CAPSENSE_PERI_DIV_INDEX 0u
#define Cmod_PORT GPIO_PRT7
#define CintA_PORT GPIO_PRT7
#define CintB_PORT GPIO_PRT7
#define Button0_Rx0_PORT GPIO_PRT8
#define Button0_Tx_PORT GPIO_PRT1
#define Button1_Rx0_PORT GPIO_PRT8
#define Button1_Tx_PORT GPIO_PRT1
#define LinearSlider0_Sns0_PORT GPIO_PRT8
#define LinearSlider0_Sns1_PORT GPIO_PRT8
#define LinearSlider0_Sns2_PORT GPIO_PRT8
#define LinearSlider0_Sns3_PORT GPIO_PRT8
#define LinearSlider0_Sns4_PORT GPIO_PRT8
#define Cmod_PIN 7u
#define CintA_PIN 1u
#define CintB_PIN 2u
#define Button0_Rx0_PIN 1u
#define Button0_Tx_PIN 0u
#define Button1_Rx0_PIN 2u
#define Button1_Tx_PIN 0u
#define LinearSlider0_Sns0_PIN 3u
#define LinearSlider0_Sns1_PIN 4u
#define LinearSlider0_Sns2_PIN 5u
#define LinearSlider0_Sns3_PIN 6u
#define LinearSlider0_Sns4_PIN 7u
#define Cmod_PORT_NUM 7u
#define CintA_PORT_NUM 7u
#define CintB_PORT_NUM 7u
#define CapSense_HW CSD0
#define CapSense_IRQ csd_interrupt_IRQn
#define CSD_COMM_HW SCB3
#define CSD_COMM_IRQ scb_3_interrupt_IRQn
#define KITPROG_UART_HW SCB5
#define KITPROG_UART_IRQ scb_5_interrupt_IRQn
#define QSPI_HW SMIF0
#define QSPI_IRQ smif_interrupt_IRQn
#define QSPI_MEMORY_MODE_ALIGMENT_ERROR (0UL)
#define QSPI_RX_DATA_FIFO_UNDERFLOW (0UL)
#define QSPI_TX_COMMAND_FIFO_OVERFLOW (0UL)
#define QSPI_TX_DATA_FIFO_OVERFLOW (0UL)
#define QSPI_RX_FIFO_TRIGEER_LEVEL (0UL)
#define QSPI_TX_FIFO_TRIGEER_LEVEL (0UL)
#define QSPI_DATALINES0_1 (1UL)
#define QSPI_DATALINES2_3 (1UL)
#define QSPI_DATALINES4_5 (0UL)
#define QSPI_DATALINES6_7 (0UL)
#define QSPI_SS0 (1UL)
#define QSPI_SS1 (0UL)
#define QSPI_SS2 (0UL)
#define QSPI_SS3 (0UL)
#define QSPI_DESELECT_DELAY 7
#define MCWDT0_HW MCWDT_STRUCT0
#define RTC_10_MONTH_OFFSET (28U)
#define RTC_MONTH_OFFSET (24U)
#define RTC_10_DAY_OFFSET (20U)
#define RTC_DAY_OFFSET (16U)
#define RTC_1000_YEAR_OFFSET (12U)
#define RTC_100_YEAR_OFFSET (8U)
#define RTC_10_YEAR_OFFSET (4U)
#define RTC_YEAR_OFFSET (0U)

extern cy_stc_csd_context_t cy_csd_0_context;
extern const cy_stc_scb_ezi2c_config_t CSD_COMM_config;
extern const cy_stc_scb_uart_config_t KITPROG_UART_config;
extern const cy_stc_smif_config_t QSPI_config;
extern const cy_stc_mcwdt_config_t MCWDT0_config;
extern const cy_stc_rtc_config_t RTC_config;

void init_cycfg_peripherals(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PERIPHERALS_H */