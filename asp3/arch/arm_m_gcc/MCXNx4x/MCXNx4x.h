/*
 *  TOPPERS Software
 *      Toyohashi Open Platform for Embedded Real-Time Systems
 *
 *  Copyright (C) 2007,2011,2015 by Embedded and Real-Time Systems Laboratory
 *              Graduate School of Information Science, Nagoya Univ., JAPAN
 *
 *  上記著作権者は，以下の(1)～(4)の条件を満たす場合に限り，本ソフトウェ
 *  ア（本ソフトウェアを改変したものを含む．以下同じ）を使用・複製・改
 *  変・再配布（以下，利用と呼ぶ）することを無償で許諾する．
 *  (1) 本ソフトウェアをソースコードの形で利用する場合には，上記の著作
 *      権表示，この利用条件および下記の無保証規定が，そのままの形でソー
 *      スコード中に含まれていること．
 *  (2) 本ソフトウェアを，ライブラリ形式など，他のソフトウェア開発に使
 *      用できる形で再配布する場合には，再配布に伴うドキュメント（利用
 *      者マニュアルなど）に，上記の著作権表示，この利用条件および下記
 *      の無保証規定を掲載すること．
 *  (3) 本ソフトウェアを，機器に組み込むなど，他のソフトウェア開発に使
 *      用できない形で再配布する場合には，次のいずれかの条件を満たすこ
 *      と．
 *    (a) 再配布に伴うドキュメント（利用者マニュアルなど）に，上記の著
 *        作権表示，この利用条件および下記の無保証規定を掲載すること．
 *    (b) 再配布の形態を，別に定める方法によって，TOPPERSプロジェクトに
 *        報告すること．
 *  (4) 本ソフトウェアの利用により直接的または間接的に生じるいかなる損
 *      害からも，上記著作権者およびTOPPERSプロジェクトを免責すること．
 *      また，本ソフトウェアのユーザまたはエンドユーザからのいかなる理
 *      由に基づく請求からも，上記著作権者およびTOPPERSプロジェクトを
 *      免責すること．
 *
 *  本ソフトウェアは，無保証で提供されているものである．上記著作権者お
 *  よびTOPPERSプロジェクトは，本ソフトウェアに関して，特定の使用目的
 *  に対する適合性も含めて，いかなる保証も行わない．また，本ソフトウェ
 *  アの利用により直接的または間接的に生じたいかなる損害に関しても，そ
 *  の責任を負わない．
 *
 */

#ifndef TOPPERS_MCX_Nx4x_H
#define TOPPERS_MCX_Nx4x_H

/* System COntroller (SYSCON) */
#define MCXNx4x_SYSCON0_BASE (0x40000000)
#define MCXNx4x_SYSCON_AHBMATPRIO     ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x010))
#define MCXNx4x_SYSCON_CPU0STCKCAL    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x038))
#define MCXNx4x_SYSCON_CPU0NSTCKCAL   ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x03C))
#define MCXNx4x_SYSCON_CPU1STCKCAL    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x040))
#define MCXNx4x_SYSCON_NMISRC         ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x048))
#define MCXNx4x_SYSCON_PRESETCTRL0    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x100))
#define MCXNx4x_SYSCON_PRESETCTRL1    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x104))
#define MCXNx4x_SYSCON_PRESETCTRL2    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x108))
#define MCXNx4x_SYSCON_PRESETCTRL3    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x10C))
#define MCXNx4x_SYSCON_PRESETCTRLSET0 ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x120))
#define MCXNx4x_SYSCON_PRESETCTRLSET1 ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x124))
#define MCXNx4x_SYSCON_PRESETCTRLSET2 ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x128))
#define MCXNx4x_SYSCON_PRESETCTRLSET3 ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x12C))
#define MCXNx4x_SYSCON_PRESETCTRLCLR0 ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x140))
#define MCXNx4x_SYSCON_PRESETCTRLCLR1 ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x144))
#define MCXNx4x_SYSCON_PRESETCTRLCLR2 ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x148))
#define MCXNx4x_SYSCON_PRESETCTRLCLR3 ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x14C))
#define MCXNx4x_SYSCON_AHBCLKCTRL0    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x200))
#define MCXNx4x_SYSCON_AHBCLKCTRL1    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x204))
#define MCXNx4x_SYSCON_AHBCLKCTRL2    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x208))
#define MCXNx4x_SYSCON_AHBCLKCTRL3    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x20C))
#define MCXNx4x_SYSCON_AHBCLKCTRLSET0 ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x220))
#define MCXNx4x_SYSCON_AHBCLKCTRLSET1 ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x224))
#define MCXNx4x_SYSCON_AHBCLKCTRLSET2 ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x228))
#define MCXNx4x_SYSCON_AHBCLKCTRLSET3 ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x22C))
#define MCXNx4x_SYSCON_AHBCLKCTRLCLR0 ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x240))
#define MCXNx4x_SYSCON_AHBCLKCTRLCLR1 ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x244))
#define MCXNx4x_SYSCON_AHBCLKCTRLCLR2 ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x248))
#define MCXNx4x_SYSCON_AHBCLKCTRLCLR3 ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x24C))
#define MCXNx4x_SYSCON_SYSTICKCLKSEL0 ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x260))
#define MCXNx4x_SYSCON_SYSTICKCLKSEL1 ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x264))
#define MCXNx4x_SYSCON_TRACECLKSEL    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x268))
#define MCXNx4x_SYSCON_CTIMERCLKSEL0  ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x26C))
#define MCXNx4x_SYSCON_CTIMERCLKSEL1  ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x270))
#define MCXNx4x_SYSCON_CTIMERCLKSEL2  ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x274))
#define MCXNx4x_SYSCON_CTIMERCLKSEL3  ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x278))
#define MCXNx4x_SYSCON_CTIMERCLKSEL4  ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x27C))
#define MCXNx4x_SYSCON_CLKOUTSEL      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x288))
#define MCXNx4x_SYSCON_ADC0CLKSEL     ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x2A4))
#define MCXNx4x_SYSCON_USB0CLKSEL     ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x2A8))
#define MCXNx4x_SYSCON_FCCLKSEL0      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x2B0))
#define MCXNx4x_SYSCON_FCCLKSEL1      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x2B4))
#define MCXNx4x_SYSCON_FCCLKSEL2      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x2B8))
#define MCXNx4x_SYSCON_FCCLKSEL3      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x2BC))
#define MCXNx4x_SYSCON_FCCLKSEL4      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x2C0))
#define MCXNx4x_SYSCON_FCCLKSEL5      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x2C4))
#define MCXNx4x_SYSCON_FCCLKSEL6      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x2C8))
#define MCXNx4x_SYSCON_FCCLKSEL7      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x2CC))
#define MCXNx4x_SYSCON_FCCLKSEL8      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x2D0))
#define MCXNx4x_SYSCON_FCCLKSEL9      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x2D4))
#define MCXNx4x_SYSCON_SCTCLKSEL      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x2F0))
#define MCXNx4x_SYSCON_SYSTICKCLKDIV0 ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x300))
#define MCXNx4x_SYSCON_SYSTICKCLKDIV1 ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x304))
#define MCXNx4x_SYSCON_TRACECLKDIV    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x308))
#define MCXNx4x_SYSCON_TSICLKSEL      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x350))
#define MCXNx4x_SYSCON_SINCFILTCLKSEL ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x360))
#define MCXNx4x_SYSCON_SLOWCLKDIV     ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x378))
#define MCXNx4x_SYSCON_TSICLKDIV      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x37C))
#define MCXNx4x_SYSCON_AHBCLKDIV      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x380))
#define MCXNx4x_SYSCON_CLKOUTDIV      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x384))
#define MCXNx4x_SYSCON_FROHFDIV       ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x388))
#define MCXNx4x_SYSCON_WDT0CLKDIV     ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x38C))
#define MCXNx4x_SYSCON_ADC0CLKDIV     ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x394))
#define MCXNx4x_SYSCON_USB0CLKDIV     ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x398))
#define MCXNx4x_SYSCON_SCTCLKDIV      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x3B4))
#define MCXNx4x_SYSCON_PLLCLKDIV      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x3C4))
#define MCXNx4x_SYSCON_CTIMER0CLKDIV  ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x3D0))
#define MCXNx4x_SYSCON_CTIMER1CLKDIV  ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x3D4))
#define MCXNx4x_SYSCON_CTIMER2CLKDIV  ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x3D8))
#define MCXNx4x_SYSCON_CTIMER3CLKDIV  ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x3DC))
#define MCXNx4x_SYSCON_CTIMER4CLKDIV  ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x3E0))
#define MCXNx4x_SYSCON_PLL1CLK0DIV    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x3E4))
#define MCXNx4x_SYSCON_PLL1CLK1DIV    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x3E8))
#define MCXNx4x_SYSCON_CLKUNLOCK      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x3FC))
#define MCXNx4x_SYSCON_NVM_CTRL       ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x400))
#define MCXNx4x_SYSCON_ROMCR          ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x404))
#define MCXNx4x_SYSCON_SmartDMAINT    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x414))
#define MCXNx4x_SYSCON_ADC1CLKSEL     ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x464))
#define MCXNx4x_SYSCON_ADC1CLKDIV     ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x468))
#define MCXNx4x_SYSCON_DAC0CLKSEL     ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x490))
#define MCXNx4x_SYSCON_DAC0CLKDIV     ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x494))
#define MCXNx4x_SYSCON_DAC1CLKSEL     ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x498))
#define MCXNx4x_SYSCON_DAC1CLKDIV     ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x49C))
#define MCXNx4x_SYSCON_DAC2CLKSEL     ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x4A0))
#define MCXNx4x_SYSCON_DAC2CLKDIV     ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x4A4))
#define MCXNx4x_SYSCON_FlexSPICLKSEL  ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x4A8))
#define MCXNx4x_SYSCON_FlexSPICLKDIV  ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x4AC))
#define MCXNx4x_SYSCON_PLLCLKDIVSEL   ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x52C))
#define MCXNx4x_SYSCON_I3C0FCLKSEL    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x530))
#define MCXNx4x_SYSCON_I3C0FCLKSTCSEL ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x534))
#define MCXNx4x_SYSCON_I3C0FCLKSTCDIV ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x538))
#define MCXNx4x_SYSCON_I3C0FCLKSDIV   ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x53C))
#define MCXNx4x_SYSCON_I3C0FCLKDIV    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x540))
#define MCXNx4x_SYSCON_I3C0FCLKSSEL   ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x544))
#define MCXNx4x_SYSCON_MICFILFCLKSEL  ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x548))
#define MCXNx4x_SYSCON_MICFILFCLKDIV  ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x54C))
#define MCXNx4x_SYSCON_uSDHCCLKSEL    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x558))
#define MCXNx4x_SYSCON_uSDHCCLKDIV    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x55C))
#define MCXNx4x_SYSCON_FLEXIOCLKSEL   ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x560))
#define MCXNx4x_SYSCON_FLEXIOCLKDIV   ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x564))
#define MCXNx4x_SYSCON_FLEXCAN0CLKSEL ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x5A0))
#define MCXNx4x_SYSCON_FLEXCAN0CLKDIV ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x5A4))
#define MCXNx4x_SYSCON_FLEXCAN1CLKSEL ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x5A8))
#define MCXNx4x_SYSCON_FLEXCAN1CLKDIV ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x5AC))
#define MCXNx4x_SYSCON_ENETRMIICLKSEL ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x5B0))
#define MCXNx4x_SYSCON_ENETRMIICLKDIV ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x5B4))
#define MCXNx4x_SYSCON_ENETPTPREFCLKSEL   ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x5B8))
#define MCXNx4x_SYSCON_ENETPTPREFCLKDIV   ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x5BC))
#define MCXNx4x_SYSCON_ENET_PHY_INTF_SEL  ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x5C0))
#define MCXNx4x_SYSCON_ENET_SBD_FLOW_CTRL ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x5C4))
#define MCXNx4x_SYSCON_EWM0CLKSEL         ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x5D4))
#define MCXNx4x_SYSCON_WDT1CLKSEL         ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x5D8))
#define MCXNx4x_SYSCON_WDT1CLKDIV         ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x5DC))
#define MCXNx4x_SYSCON_OSTIMERCLKSEL      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x5E0))
#define MCXNx4x_SYSCON_CMP0FCLKSEL        ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x5F0))
#define MCXNx4x_SYSCON_CMP0FCLKDIV        ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x5F4))
#define MCXNx4x_SYSCON_CMP0RRCLKSEL       ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x5F8))
#define MCXNx4x_SYSCON_CMP0RRCLKDIV       ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x5FC))
#define MCXNx4x_SYSCON_CMP1FCLKSEL        ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x600))
#define MCXNx4x_SYSCON_CMP1FCLKDIV        ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x604))
#define MCXNx4x_SYSCON_CMP1RRCLKSEL       ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x608))
#define MCXNx4x_SYSCON_CMP1RRCLKDIV       ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x60C))
#define MCXNx4x_SYSCON_CMP2FCLKSEL        ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x610))
#define MCXNx4x_SYSCON_CMP2FCLKDIV        ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x614))
#define MCXNx4x_SYSCON_CMP2RRCLKSEL       ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x618))
#define MCXNx4x_SYSCON_CMP2RRCLKDIV       ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x61C))
#define MCXNx4x_SYSCON_CPUCTRL            ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x800))
#define MCXNx4x_SYSCON_CPBOOT             ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x804))
#define MCXNx4x_SYSCON_CPUSTAT            ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x80C))
#define MCXNx4x_SYSCON_LPCAC_CTRL         ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x824))
#define MCXNx4x_SYSCON_FLEXCOMM0CLKDIV    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x850))
#define MCXNx4x_SYSCON_FLEXCOMM1CLKDIV    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x854))
#define MCXNx4x_SYSCON_FLEXCOMM2CLKDIV    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x858))
#define MCXNx4x_SYSCON_FLEXCOMM3CLKDIV    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x85C))
#define MCXNx4x_SYSCON_FLEXCOMM4CLKDIV    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x860))
#define MCXNx4x_SYSCON_FLEXCOMM5CLKDIV    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x864))
#define MCXNx4x_SYSCON_FLEXCOMM6CLKDIV    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x868))
#define MCXNx4x_SYSCON_FLEXCOMM7CLKDIV    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x86C))
#define MCXNx4x_SYSCON_FLEXCOMM8CLKDIV    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x870))
#define MCXNx4x_SYSCON_FLEXCOMM9CLKDIV    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x874))
#define MCXNx4x_SYSCON_SAI0CLKSEL         ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x880))
#define MCXNx4x_SYSCON_SAI1CLKSEL         ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x884))
#define MCXNx4x_SYSCON_SAI0CLKDIV         ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x888))
#define MCXNx4x_SYSCON_SAI1CLKDIV         ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x88C))
#define MCXNx4x_SYSCON_EMVSIM0CLKSEL      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x890))
#define MCXNx4x_SYSCON_EMVSIM1CLKSEL      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x894))
#define MCXNx4x_SYSCON_EMVSIM0CLKDIV      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x898))
#define MCXNx4x_SYSCON_EMVSIM1CLKDIV      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0x89C))
#define MCXNx4x_SYSCON_CLOCK_CTRL         ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xA18))
#define MCXNx4x_SYSCON_I3C1FCLKSEL        ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xB30))
#define MCXNx4x_SYSCON_I3C1FCLKSTCSEL     ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xB34))
#define MCXNx4x_SYSCON_I3C1FCLKSTCDIV     ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xB38))
#define MCXNx4x_SYSCON_I3C1FCLKSDIV       ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xB3C))
#define MCXNx4x_SYSCON_I3C1FCLKDIV        ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xB40))
#define MCXNx4x_SYSCON_I3C1FCLKSSEL       ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xB44))
#define MCXNx4x_SYSCON_ETB_STATUS         ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xB50))
#define MCXNx4x_SYSCON_ETB_COUNTER_CTRL   ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xB54))
#define MCXNx4x_SYSCON_ETB_COUNTER_RELOAD ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xB58))
#define MCXNx4x_SYSCON_ETB_COUNTER_VALUE  ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xB5C))
#define MCXNx4x_SYSCON_GRAY_CODE_LSB      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xB60))
#define MCXNx4x_SYSCON_GRAY_CODE_MSB      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xB64))
#define MCXNx4x_SYSCON_BINARY_CODE_LSB    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xB68))
#define MCXNx4x_SYSCON_BINARY_CODE_MSB    ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xB6C))
#define MCXNx4x_SYSCON_AUTOCLKGATEOVERRIDE  ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xE04))
#define MCXNx4x_SYSCON_AUTOCLKGATEOVERRIDEC ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xE2C))
#define MCXNx4x_SYSCON_PWM0SUBCTL           ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xE38))
#define MCXNx4x_SYSCON_PWM1SUBCTL           ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xE3C))
#define MCXNx4x_SYSCON_CTIMERGLOBALSTARTEN  ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xE40))
#define MCXNx4x_SYSCON_ECC_ENABLE_CTRL      ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xE44))
#define MCXNx4x_SYSCON_JTAG_ID              ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xFF0))
#define MCXNx4x_SYSCON_DEVICE_TYPE          ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xFF4))
#define MCXNx4x_SYSCON_DEVICE_ID0           ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xFF8))
#define MCXNx4x_SYSCON_DIEID                ((uint32_t *)(MCXNx4x_SYSCON0_BASE + 0xFFC))


/* LP_FLEXCOM memory map */
#define MCXNx4x_LP_FLEXCOMM0_BASE (0x40092000)
#define MCXNx4x_LP_FLEXCOMM1_BASE (0x40093000)
#define MCXNx4x_LP_FLEXCOMM2_BASE (0x40094000)
#define MCXNx4x_LP_FLEXCOMM3_BASE (0x40095000)
#define MCXNx4x_LP_FLEXCOMM4_BASE (0x400B4000)
#define MCXNx4x_LP_FLEXCOMM5_BASE (0x400B5000)
#define MCXNx4x_LP_FLEXCOMM6_BASE (0x400B6000)
#define MCXNx4x_LP_FLEXCOMM7_BASE (0x400B7000)
#define MCXNx4x_LP_FLEXCOMM8_BASE (0x400B8000)
#define MCXNx4x_LP_FLEXCOMM9_BASE (0x400B9000)

/* LPUART memory map */
#define MCXNx4x_LPUART0_BASE      (0x40092000)
#define MCXNx4x_LPUART1_BASE      (0x40093000)
#define MCXNx4x_LPUART2_BASE      (0x40094000)
#define MCXNx4x_LPUART3_BASE      (0x40095000)
#define MCXNx4x_LPUART4_BASE      (0x400B4000)
#define MCXNx4x_LPUART5_BASE      (0x400B5000)
#define MCXNx4x_LPUART6_BASE      (0x400B6000)
#define MCXNx4x_LPUART7_BASE      (0x400B7000)
#define MCXNx4x_LPUART8_BASE      (0x400B8000)
#define MCXNx4x_LPUART9_BASE      (0x400B9000)

/* IRQ */
#define MCXNx4x_LP_FLEXCOMM0_IRQ  (35)
#define MCXNx4x_LP_FLEXCOMM1_IRQ  (36)
#define MCXNx4x_LP_FLEXCOMM2_IRQ  (37)
#define MCXNx4x_LP_FLEXCOMM3_IRQ  (38)
#define MCXNx4x_LP_FLEXCOMM4_IRQ  (39)
#define MCXNx4x_LP_FLEXCOMM5_IRQ  (40)
#define MCXNx4x_LP_FLEXCOMM6_IRQ  (41)
#define MCXNx4x_LP_FLEXCOMM7_IRQ  (42)
#define MCXNx4x_LP_FLEXCOMM8_IRQ  (43)
#define MCXNx4x_LP_FLEXCOMM9_IRQ  (44)


#endif /* #ifndef TOPPERS_MCX_Nx4x_H */
