/* 
*    Minimum requirement sections
*	    -> .text
*	    -> .data
*	    -> .bss
*	    -> .rodata
*	    -> .commnet or .metadata
*/


ENTRY(reset)

/* We have to define MEMORY which include Flash and Ram memory. */ 
MEMORY
{
	/* This area defines RAM memory which included physically exist on MCU.   */
	RAM		(RW): ORIGIN =0x20000000, LENGTH =0x20000 
	
	/* This area defines flash memory which included physically exist on MCU. */
	FLASH	(RX): ORIGIN =0x08000000, LENGTH =0x80000    
}

SECTIONS
{
	.text :
	{
		_start_of_text_section = .           ;
		. = ALIGN(4)                         ;
		
		KEEP(*(._user_defined_vector_table_))
		*(.text)
		*(.rodata)
		*(metadata)
		
		. = ALIGN(4)                         ;
		_end_of_text_section = .             ;
	
	}>FLASH AT>FLASH
	
	.data :
	{
		. = ALIGN(4)                         ;
		_start_of_data_section_ = .          ;
		
		*(.data)
		
		. = ALIGN(4)                         ;
		_end_of_data_section_ = .            ;
		
	}>RAM AT>FLASH
	
	.bss :
	{
		. = ALIGN(4)                         ; 
		_start_of_bss_section_  = .         ;
		                                     
		*(.bss)                              
		                                     
		. = ALIGN(4)                         ;              
		_end_of_bss_section_      = .         ;
	}
}

/*
*	NOTE: Pls go to :
*             Project Settings -> C/C++ Buid -> Settings -> MCU GCC Linker -> General
*             and change the Linker Script file name.
*/






