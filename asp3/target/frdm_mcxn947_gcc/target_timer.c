/*
 *  TOPPERS/ASP Kernel
 *      Toyohashi Open Platform for Embedded Real-Time Systems/
 *      Advanced Standard Profile Kernel
 * 
 *  Copyright (C) 2016 by Embedded and Real-Time Systems Laboratory
 *              Graduate School of Information Science, Nagoya Univ., JAPAN
 * 
 *  上記著作権者は，以下の(1)〜(4)の条件を満たす場合に限り，本ソフトウェ
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
 *  $Id: target_timer.c 1799 2023-04-01 00:50:30Z ertl-komori $
 */

/*
 * タイマドライバ（）
 */

#include "kernel_impl.h"
#include "time_event.h"
#include "target_timer.h"
#include <sil.h>

/*
 * タイマの起動処理
 */
void target_hrt_initialize(intptr_t exinf)
{
    sil_wrw_mem(MCXNx4x_SYSCON_CTIMER0CLKDIV, 0x03 << 29);
    sil_wrw_mem(MCXNx4x_SYSCON_CTIMER0CLKDIV, 0x00);
    sil_wrw_mem(MCXNx4x_SYSCON_CTIMERCLKSEL0, 0x04);       // FRO 12MHz clock
    sil_wrw_mem(MCXNx4x_SYSCON_AHBCLKCTRLSET1, (1 << 26)); // bit26 TIMER0 - Enables the clock for CTIMER0
    
    sil_wrw_mem((uint32_t *)(MCXNx4x_CTIMER0_BASE + CTIMER_PR), 12 - 1);/* 12MHz / 12 = 1MHz */
    sil_wrw_mem((uint32_t *)(MCXNx4x_CTIMER0_BASE + CTIMER_TCR), 0x01); /* bit0 - Counter Enable */
}

/*
 * タイマの停止処理
 */
void target_hrt_terminate(intptr_t exinf)
{

    /* bit1 - Counter Reset Enable */
    /* bit0 - Counter Enable       */
    /*         0 - Disable         */
    sil_wrw_mem((uint32_t *)(MCXNx4x_CTIMER0_BASE + CTIMER_TCR), (0x01 << 1) | (0x00 << 0)); 
}

/*
 *  タイマ割込みハンドラ
 */
void target_hrt_handler(void)
{
    /* Clear Interrupt Flag (MR0INT)*/
    sil_wrw_mem((uint32_t *)(MCXNx4x_CTIMER0_BASE + CTIMER_IR), (0x01));
    /* Disable interrupt */
    sil_wrw_mem((uint32_t *)(MCXNx4x_CTIMER0_BASE + CTIMER_MCR), 0x00);
    
    signal_time();
}
