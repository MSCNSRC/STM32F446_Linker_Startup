/*
 * startup.c
 *
 *  Created on: 26 Oca 2023
 *      Author: Musa
 */


/*
 * Startup dosyasında yer alacak olan reset foksiyonunuda neler yapmamız gerekiyor ?
 * TODO List:
 *
 * 1) Set to MSP top of the ram. This process will be done by firt element of vector table.
 * STM32 vector table indicate main stack pointer address value as the first element.
 * Cpu will be do;
 * 	- Sets the MSP stack pointer value with firt element of vector table.
 * 	- Sets the PC value with second elementf of vector table.
 * Theese will be done automatically by hardware. So that we will not do this step.
 *
 * 2) .data section is loaded at the flash. At the runtme, .data section is running
 * at the RAM memory. We have to load .data section to the RAM memory.
 *
 * 3) .bss section address range must be set by zero at the RAM memory.
 *
 * 4) Branch to Main function handler.
 */

#include "startup.h"
#include "stdint.h"
#include "types.h"

void ResetHandler(void)
{
	extern unsigned int *_ram_base_addr_        ;
	extern unsigned int *_end_of_text_section   ;
	extern unsigned int *_end_of_data_section_  ;
	extern unsigned int *_end_of_bss_section_   ;
	extern unsigned int *_start_of_bss_section_ ;

	uint8_t  *pC_AddrPointer = (uint8_t*)&_start_of_bss_section_;

	/* Init .bss by 0 value */
	for (uint32_t size_of_ram_byte = 0; size_of_ram_byte < ((uint32_t)&_end_of_bss_section_ - (uint32_t)&_start_of_bss_section_); size_of_ram_byte++)
	{
		*(pC_AddrPointer + size_of_ram_byte) = (uint8_t)0;
	}

	/* Init .data section */
	 uint8_t  *puC_DestAddr   = (uint8_t*)&_ram_base_addr_      ;
	 uint8_t  *puC_SourceAddr = (uint8_t*)&_end_of_text_section + 0x08 ;
	 uint32_t  uI_SizeOfDataSection = (uint32_t)&_end_of_data_section_ - (uint32_t)&_ram_base_addr_;

	 for (uint32_t uI_Counter = 0; uI_Counter < uI_SizeOfDataSection; uI_Counter++)
	 {
		 *(puC_DestAddr + uI_Counter) = *(puC_SourceAddr + uI_Counter);
	 }



	main();
}

void DefaultFaultHandler(void)
{
	while(1);
}

void DefaultHandler(void)
{

}


