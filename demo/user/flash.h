/**
  **************************************************************************
  * @file     flash.h
  * @brief    flash header file
  **************************************************************************


/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __FLASH_H__
#define __FLASH_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "at32f403a_407_board.h"

/** @addtogroup AT32F403A_periph_examples
  * @{
  */

/** @addtogroup 403A_FLASH_write_read
  * @{
  */


/** @defgroup FLASH_write_read_functions
  * @{
  */

void flash_read(uint32_t read_addr, uint16_t *p_buffer, uint16_t num_read);
error_status flash_write_nocheck(uint32_t write_addr, uint16_t *p_buffer, uint16_t num_write);
error_status flash_write(uint32_t write_addr,uint16_t *p_Buffer, uint16_t num_write);

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif

















