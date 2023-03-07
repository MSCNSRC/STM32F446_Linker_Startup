/* 
*    Minimum requirement sections
*	    -> .text
*	    -> .data
*	    -> .bss
*	    -> .rodata
*	    -> .commnet or .metadata
*/


ENTRY(ResetHandler)

/* We have to define MEMORY which include Flash and Ram memory. */ 
MEMORY
{
	/* This area defines RAM memory which included physically exist on MCU.   */
	RAM		(RW): ORIGIN =0x20000000, LENGTH =0x20000 
	
	/* This area defines flash memory which included physically exist on MCU. */
	FLASH	(RX): ORIGIN =0x08000000, LENGTH =0x80000    
}

_ram_base_addr_ = ORIGIN(RAM);
_ram_end_addr_  = ORIGIN(RAM) + LENGTH(RAM);

SECTIONS
{
	.text :
	{
		. = ALIGN(4)                         ;
		
		KEEP(*(._user_defined_vector_table_))
		*(.text)
		*(.text*)
		*(.rodata)
		*(.rodata*)
		*(.metadata)
		*(.metadata*)
		_end_of_text_section = .             ;
	
	}>FLASH AT>FLASH
	
	.data :
	{
    	. = ALIGN(4);
    	*(.data)           /* .data sections */
    	*(.data*)          /* .data* sections */
	_end_of_data_section_ = .            ;
		
	}>RAM AT>FLASH
	
	.bss :
	{
		. = ALIGN(4)                         ;
		_start_of_bss_section_      = .        ; 
    	*(.bss)
    	*(.bss*)                              
		_end_of_bss_section_      = .        ;
	}>RAM AT>RAM

/* 
	If standart malloc function will be used, pls define _Min_Stack_Size, _estack and _end. 
	We will define our safety malloc functions, so don't have to define this sybols.
*/

/*
	Set the Stack Pointer addres as top of the ram memory. 
*/	
	
}

/*
*	NOTE: Pls go to :
*             Project Settings -> C/C++ Buid -> Settings -> MCU GCC Linker -> General
*             and change the Linker Script file name.
*/






