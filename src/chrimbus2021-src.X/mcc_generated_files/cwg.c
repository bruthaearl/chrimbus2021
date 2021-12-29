/**
   CWG Generated Driver File
 
   @Company
     Microchip Technology Inc.
 
   @File Name
     cwg.c
 
   @Summary
     This is the generated driver implementation file for the CWG driver using PIC10 / PIC12 / PIC16 / PIC18 MCUs
 
   @Description
     This source file provides implementations for driver APIs for CWG.
     Generation Information :
         Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
         Device            :  PIC16F15325
         Driver Version    :  2.11
     The generated drivers are tested against the following:
         Compiler          :  XC8 2.31 and above or later
         MPLAB             :  MPLAB X 5.45
 */ 

 /*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/
 
 /**
   Section: Included Files
 */

#include <xc.h>
#include "cwg.h"

/**
  Section: CWG APIs
*/

void CWG_Initialize(void)
{
    // Set the CWG to the options selected in PIC10 / PIC12 / PIC16 / PIC18 MCUs

	// CWG1POLA non inverted; CWG1POLC non inverted; CWG1POLB inverted; CWG1POLD non inverted; 
	CWG1CON1 = 0x02;

	// CWG1DBR 0; 
	CWG1DBR = 0x00;

	// CWG1DBF 0; 
	CWG1DBF = 0x00;

	// CWG1SHUTDOWN No Auto-shutdown; CWG1REN disabled; CWG1LSBD tri-stated; CWG1LSAC tri-stated; 
	CWG1AS0 = 0x14;

	// AS1E disabled; AS0E disabled; AS3E disabled; AS2E disabled; AS4E disabled; 
	CWG1AS1 = 0x00;

	// CWG1STRD disabled; CWG1STRB disabled; CWG1STRC disabled; CWG1STRA disabled; CWG1OVRD low; CWG1OVRA low; CWG1OVRB low; CWG1OVRC low; 
	CWG1STR = 0x00;

	// CWG1CS FOSC; 
	CWG1CLKCON = 0x00;

	// DAT PWM3_OUT; 
	CWG1DAT = 0x03;

	// CWG1LD Buffer_not_loaded; CWG1EN enabled; CWG1MODE Push-Pull mode; 
	CWG1CON0 = 0x85;

}


void CWG_AutoShutdownEventSet()
{
    CWG1AS0bits.CWG1SHUTDOWN = 1;
}

void CWG_AutoShutdownEventClear()
{
    CWG1AS0bits.CWG1SHUTDOWN = 0;
}


/**
 End of File
*/