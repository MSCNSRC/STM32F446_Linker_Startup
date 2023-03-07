/*
 * startup.h
 *
 *  Created on: 26 Oca 2023
 *      Author: Musa
 */

#ifndef STARTUP_H_
#define STARTUP_H_

/*
 * TODO LIST:
 *
 *    1-) Define interrupt functions prototypes.
 *    2-) Define vector table (see STM32F4XX TRM, page 293-294).
 *    3-) Define main function prototype
 *    4-) Define reset function prototype and handler.
 */

#define MAIN_STACK_POINTER (0x20000000U + 0x20000U)
#define REZERVED_FUNC      (0x04U)

int main(void)            ;
void ResetHandler()       ;	   /* To implemet reset function.                                 */
void DefaultHandler()     ;    /* To implement functions which undefined interrupt functions. */
void DefaultFaultHandler();    /* To define fault functions which undefined                   */


void NMIFunc				(void) __attribute__((weak, alias("DefaultFaultHandler")));;
void HardFaultFunc			(void) __attribute__((weak, alias("DefaultFaultHandler")));
void MemmanageFunc			(void) __attribute__((weak, alias("DefaultFaultHandler")));
void BusFaultFunc           (void) __attribute__((weak, alias("DefaultFaultHandler")));
void UsageFaultFunc         (void) __attribute__((weak, alias("DefaultFaultHandler")));
void SvcFunc                (void) __attribute__((weak, alias("DefaultHandler")));
void DebugMonFunc           (void) __attribute__((weak, alias("DefaultHandler")));
void PendsvFunc			    (void) __attribute__((weak, alias("DefaultHandler")));
void SystickFunc		    (void) __attribute__((weak, alias("DefaultHandler")));
void WwdgFunc              	(void) __attribute__((weak, alias("DefaultHandler")));
void PvdFunc               	(void) __attribute__((weak, alias("DefaultHandler")));
void TampStampFunc        	(void) __attribute__((weak, alias("DefaultHandler")));
void RtcWkupFunc          	(void) __attribute__((weak, alias("DefaultHandler")));
void FlashFunc             	(void) __attribute__((weak, alias("DefaultHandler")));
void RccFunc               	(void) __attribute__((weak, alias("DefaultHandler")));
void Exti0Func             	(void) __attribute__((weak, alias("DefaultHandler")));
void Exti1Func             	(void) __attribute__((weak, alias("DefaultHandler")));
void Exti2Func             	(void) __attribute__((weak, alias("DefaultHandler")));
void Exti3Func             	(void) __attribute__((weak, alias("DefaultHandler")));
void Exti4Func             	(void) __attribute__((weak, alias("DefaultHandler")));
void Dma1Stream0Func       	(void) __attribute__((weak, alias("DefaultHandler")));
void Dma1Stream1Func      	(void) __attribute__((weak, alias("DefaultHandler")));
void Dma1Stream2Func      	(void) __attribute__((weak, alias("DefaultHandler")));
void Dma1Stream3Func      	(void) __attribute__((weak, alias("DefaultHandler")));
void Dma1Stream4Func      	(void) __attribute__((weak, alias("DefaultHandler")));
void Dma1Stream5Func      	(void) __attribute__((weak, alias("DefaultHandler")));
void Dma1Stream6Func      	(void) __attribute__((weak, alias("DefaultHandler")));
void AdcFunc               	(void) __attribute__((weak, alias("DefaultHandler")));
void Can1TxFunc           	(void) __attribute__((weak, alias("DefaultHandler")));
void Can1Rx0Func          	(void) __attribute__((weak, alias("DefaultHandler")));
void Can1Rx1Func          	(void) __attribute__((weak, alias("DefaultHandler")));
void Can1SceFunc          	(void) __attribute__((weak, alias("DefaultHandler")));
void Exti5to9Func           (void) __attribute__((weak, alias("DefaultHandler")));
void Tim1BrkTim9Func     	(void) __attribute__((weak, alias("DefaultHandler")));
void Tim1UpTim10Func     	(void) __attribute__((weak, alias("DefaultHandler")));
void Tim1TrgComTim11Func	(void) __attribute__((weak, alias("DefaultHandler")));
void Tim1CcFunc           	(void) __attribute__((weak, alias("DefaultHandler")));
void Tim2Func              	(void) __attribute__((weak, alias("DefaultHandler")));
void Tim3Func              	(void) __attribute__((weak, alias("DefaultHandler")));
void Tim4Func              	(void) __attribute__((weak, alias("DefaultHandler")));
void I2c1EvFunc           	(void) __attribute__((weak, alias("DefaultHandler")));
void I2c1ErFunc           	(void) __attribute__((weak, alias("DefaultHandler")));
void I2c2EvFunc           	(void) __attribute__((weak, alias("DefaultHandler")));
void I2c2ErFunc           	(void) __attribute__((weak, alias("DefaultHandler")));
void Spi1Func              	(void) __attribute__((weak, alias("DefaultHandler")));
void Spi2Func              	(void) __attribute__((weak, alias("DefaultHandler")));
void Usart1Func            	(void) __attribute__((weak, alias("DefaultHandler")));
void Usart2Func            	(void) __attribute__((weak, alias("DefaultHandler")));
void Usart3Func            	(void) __attribute__((weak, alias("DefaultHandler")));
void Exti10to15Func         (void) __attribute__((weak, alias("DefaultHandler")));
void RtcAlarmFunc         	(void) __attribute__((weak, alias("DefaultHandler")));
void OtgFsWkupFunc       	(void) __attribute__((weak, alias("DefaultHandler")));
void Tim8BrkTim12Func    	(void) __attribute__((weak, alias("DefaultHandler")));
void Tim8UpTim13Func     	(void) __attribute__((weak, alias("DefaultHandler")));
void Tim8TrgComTim14Func	(void) __attribute__((weak, alias("DefaultHandler")));
void Tim8CcFunc           	(void) __attribute__((weak, alias("DefaultHandler")));
void Dma1Stream7Func      	(void) __attribute__((weak, alias("DefaultHandler")));
void FmcFunc               	(void) __attribute__((weak, alias("DefaultHandler")));
void SdioFunc              	(void) __attribute__((weak, alias("DefaultHandler")));
void Tim5Func              	(void) __attribute__((weak, alias("DefaultHandler")));
void Spi3Func              	(void) __attribute__((weak, alias("DefaultHandler")));
void Uart4Func             	(void) __attribute__((weak, alias("DefaultHandler")));
void Uart5Func             	(void) __attribute__((weak, alias("DefaultHandler")));
void Tim6_dacFunc          	(void) __attribute__((weak, alias("DefaultHandler")));
void Tim7Func              	(void) __attribute__((weak, alias("DefaultHandler")));
void Dma2Stream0Func      	(void) __attribute__((weak, alias("DefaultHandler")));
void Dma2Stream1Func      	(void) __attribute__((weak, alias("DefaultHandler")));
void Dma2Stream2Func      	(void) __attribute__((weak, alias("DefaultHandler")));
void Dma2Stream3Func      	(void) __attribute__((weak, alias("DefaultHandler")));
void Dma2Stream4Func      	(void) __attribute__((weak, alias("DefaultHandler")));
void Can2TxFunc           	(void) __attribute__((weak, alias("DefaultHandler")));
void Can2Rx0Func          	(void) __attribute__((weak, alias("DefaultHandler")));
void Can2Rx1Func          	(void) __attribute__((weak, alias("DefaultHandler")));
void Can2SceFunc          	(void) __attribute__((weak, alias("DefaultHandler")));
void OtgFsFunc            	(void) __attribute__((weak, alias("DefaultHandler")));
void Dma2Stream5Func      	(void) __attribute__((weak, alias("DefaultHandler")));
void Dma2Stream6Func      	(void) __attribute__((weak, alias("DefaultHandler")));
void Dma2Stream7Func      	(void) __attribute__((weak, alias("DefaultHandler")));
void Usart6Func            	(void) __attribute__((weak, alias("DefaultHandler")));
void I2c3EvFunc           	(void) __attribute__((weak, alias("DefaultHandler")));
void I2c3ErFunc           	(void) __attribute__((weak, alias("DefaultHandler")));
void OtgHsEp1_OutFunc    	(void) __attribute__((weak, alias("DefaultHandler")));
void OtgHsEp1_InFunc     	(void) __attribute__((weak, alias("DefaultHandler")));
void OtgHsWkupFunc       	(void) __attribute__((weak, alias("DefaultHandler")));
void OtgHsFunc            	(void) __attribute__((weak, alias("DefaultHandler")));
void DcmiFunc              	(void) __attribute__((weak, alias("DefaultHandler")));
void FpuFunc               	(void) __attribute__((weak, alias("DefaultHandler")));
void Spi4Func              	(void) __attribute__((weak, alias("DefaultHandler")));
void Sai1Func              	(void) __attribute__((weak, alias("DefaultHandler")));
void Sai2Func              	(void) __attribute__((weak, alias("DefaultHandler")));
void QuadspiFunc           	(void) __attribute__((weak, alias("DefaultHandler")));
void HdmiCecFunc          	(void) __attribute__((weak, alias("DefaultHandler")));
void SpdifRxFunc          	(void) __attribute__((weak, alias("DefaultHandler")));
void Fmpi2c1Func           	(void) __attribute__((weak, alias("DefaultHandler")));
void Fmpi2c1ErrorFunc     	(void) __attribute__((weak, alias("DefaultHandler")));

unsigned int VectorTable [] __attribute__((section("._user_defined_vector_table_"))) =
{
		              MAIN_STACK_POINTER  ,
        (unsigned int)ResetHandler        ,
		(unsigned int)&NMIFunc			  ,
		(unsigned int)&HardFaultFunc	  ,
		(unsigned int)&MemmanageFunc	  ,
		(unsigned int)&BusFaultFunc       ,
		(unsigned int)&UsageFaultFunc     ,
		              REZERVED_FUNC       ,
		(unsigned int)&SvcFunc            ,
		(unsigned int)&DebugMonFunc       ,
		              REZERVED_FUNC       ,
		(unsigned int)&PendsvFunc		  ,
		(unsigned int)&SystickFunc		  ,
		(unsigned int)&WwdgFunc           ,
		(unsigned int)&PvdFunc            ,
		(unsigned int)&TampStampFunc      ,
		(unsigned int)&RtcWkupFunc        ,
		(unsigned int)&FlashFunc          ,
		(unsigned int)&RccFunc            ,
		(unsigned int)&Exti0Func          ,
		(unsigned int)&Exti1Func          ,
		(unsigned int)&Exti2Func          ,
		(unsigned int)&Exti3Func          ,
		(unsigned int)&Exti4Func          ,
		(unsigned int)&Dma1Stream0Func    ,
		(unsigned int)&Dma1Stream1Func    ,
		(unsigned int)&Dma1Stream2Func    ,
		(unsigned int)&Dma1Stream3Func    ,
		(unsigned int)&Dma1Stream4Func    ,
		(unsigned int)&Dma1Stream5Func    ,
		(unsigned int)&Dma1Stream6Func    ,
		(unsigned int)&AdcFunc            ,
		(unsigned int)&Can1TxFunc         ,
		(unsigned int)&Can1Rx0Func        ,
		(unsigned int)&Can1Rx1Func        ,
		(unsigned int)&Can1SceFunc        ,
		(unsigned int)&Exti5to9Func       ,
		(unsigned int)&Tim1BrkTim9Func    ,
		(unsigned int)&Tim1UpTim10Func    ,
		(unsigned int)&Tim1TrgComTim11Func,
		(unsigned int)&Tim1CcFunc         ,
		(unsigned int)&Tim2Func           ,
		(unsigned int)&Tim3Func           ,
		(unsigned int)&Tim4Func           ,
		(unsigned int)&I2c1EvFunc         ,
		(unsigned int)&I2c1ErFunc         ,
		(unsigned int)&I2c2EvFunc         ,
		(unsigned int)&I2c2ErFunc         ,
		(unsigned int)&Spi1Func           ,
		(unsigned int)&Spi2Func           ,
		(unsigned int)&Usart1Func         ,
		(unsigned int)&Usart2Func         ,
		(unsigned int)&Usart3Func         ,
		(unsigned int)&Exti10to15Func     ,
		(unsigned int)&RtcAlarmFunc       ,
		(unsigned int)&OtgFsWkupFunc      ,
		(unsigned int)&Tim8BrkTim12Func   ,
		(unsigned int)&Tim8UpTim13Func    ,
		(unsigned int)&Tim8TrgComTim14Func,
		(unsigned int)&Tim8CcFunc         ,
		(unsigned int)&Dma1Stream7Func    ,
		(unsigned int)&FmcFunc            ,
		(unsigned int)&SdioFunc           ,
		(unsigned int)&Tim5Func           ,
		(unsigned int)&Spi3Func           ,
		(unsigned int)&Uart4Func          ,
		(unsigned int)&Uart5Func          ,
		(unsigned int)&Tim6_dacFunc       ,
		(unsigned int)&Tim7Func           ,
		(unsigned int)&Dma2Stream0Func    ,
		(unsigned int)&Dma2Stream1Func    ,
		(unsigned int)&Dma2Stream2Func    ,
		(unsigned int)&Dma2Stream3Func    ,
		(unsigned int)&Dma2Stream4Func    ,
		              REZERVED_FUNC       ,
		              REZERVED_FUNC       ,
		(unsigned int)&Can2TxFunc         ,
		(unsigned int)&Can2Rx0Func        ,
		(unsigned int)&Can2Rx1Func        ,
		(unsigned int)&Can2SceFunc        ,
		(unsigned int)&OtgFsFunc          ,
		(unsigned int)&Dma2Stream5Func    ,
		(unsigned int)&Dma2Stream6Func    ,
		(unsigned int)&Dma2Stream7Func    ,
		(unsigned int)&Usart6Func         ,
		(unsigned int)&I2c3EvFunc         ,
		(unsigned int)&I2c3ErFunc         ,
		(unsigned int)&OtgHsEp1_OutFunc   ,
		(unsigned int)&OtgHsEp1_InFunc    ,
		(unsigned int)&OtgHsWkupFunc      ,
		(unsigned int)&OtgHsFunc          ,
		(unsigned int)&DcmiFunc           ,
		(unsigned int)&FpuFunc            ,
		              REZERVED_FUNC       ,
		              REZERVED_FUNC       ,
		(unsigned int)&Spi4Func           ,
		              REZERVED_FUNC       ,
		              REZERVED_FUNC       ,
		(unsigned int)&Sai1Func           ,
		              REZERVED_FUNC       ,
		              REZERVED_FUNC       ,
		              REZERVED_FUNC       ,
		(unsigned int)&Sai2Func           ,
		(unsigned int)&QuadspiFunc        ,
		(unsigned int)&HdmiCecFunc        ,
		(unsigned int)&SpdifRxFunc        ,
		(unsigned int)&Fmpi2c1Func        ,
		(unsigned int)&Fmpi2c1ErrorFunc   ,
};

#endif /* STARTUP_H_ */
