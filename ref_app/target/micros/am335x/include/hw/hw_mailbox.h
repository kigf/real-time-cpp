
/* ============================================================================
 *
 *            TEXAS INSTRUMENTS INCORPORATED PROPRIETARY INFORMATION
 *
 *  Property of Texas Instruments
 *  For Unrestricted Internal Use Only
 *  Unauthorized reproduction and/or distribution is strictly prohibited.
 *  This product is protected under copyright law and trade secret law
 *  as an unpublished work.
 *  Created 2008, (C) Copyright 2008 Texas Instruments.  All rights reserved.
 *
 */

/**
 *  @Component:   MAILBOX
 *
 *  @Filename:    mailbox_cred.h
 *
 ============================================================================ */


#ifndef __HW_MAILBOX_H__
#define __HW_MAILBOX_H__

#ifdef __cplusplus
extern "C" {
#endif


/***********************************************************************\
 * Register arrays Definition
\***********************************************************************/


/***********************************************************************\
 * Bundle arrays Definition
\***********************************************************************/


/***********************************************************************\
 * Bundles Definition
\***********************************************************************/



/*************************************************************************\
 * Registers Definition
\*************************************************************************/

#define MAILBOX_REVISION   (0x0)
#define MAILBOX_SYSCONFIG   (0x10)
#define MAILBOX_MESSAGE(n)   (0x40 + ((n) * 4))
#define MAILBOX_FIFOSTATUS(n)   (0x80 + ((n) * 4))
#define MAILBOX_MESSAGESTATUS(n)   (0xc0 + ((n) * 4))
#define MAILBOX_IRQSTATUS_RAW(n)   (0x100 + ((n) * 0x10))
#define MAILBOX_IRQSTATUS_CLR(n)   (0x104 + ((n) * 0x10))
#define MAILBOX_IRQENABLE_SET(n)   (0x108 + ((n) * 0x10))
#define MAILBOX_IRQENABLE_CLR(n)   (0x10c + ((n) * 0x10))

/**************************************************************************\ 
 * Field Definition Macros
\**************************************************************************/

/* REVISION */
#define MAILBOX_REVISION_CUSTOM   (0x000000C0u)
#define MAILBOX_REVISION_CUSTOM_SHIFT   (0x00000006u)

#define MAILBOX_REVISION_FUNC   (0x0FFF0000u)
#define MAILBOX_REVISION_FUNC_SHIFT   (0x00000010u)

#define MAILBOX_REVISION_MAJOR   (0x00000700u)
#define MAILBOX_REVISION_MAJOR_SHIFT   (0x00000008u)

#define MAILBOX_REVISION_MINOR   (0x0000003Fu)
#define MAILBOX_REVISION_MINOR_SHIFT   (0x00000000u)

#define MAILBOX_REVISION_RES   (0x30000000u)
#define MAILBOX_REVISION_RES_SHIFT   (0x0000001Cu)

#define MAILBOX_REVISION_RTL   (0x0000F800u)
#define MAILBOX_REVISION_RTL_SHIFT   (0x0000000Bu)

#define MAILBOX_REVISION_SCHEME   (0xC0000000u)
#define MAILBOX_REVISION_SCHEME_SHIFT   (0x0000001Eu)


/* SYSCONFIG */
#define MAILBOX_SYSCONFIG_SIDLEMODE   (0x0000000Cu)
#define MAILBOX_SYSCONFIG_SIDLEMODE_SHIFT   (0x00000002u)
#define MAILBOX_SYSCONFIG_SIDLEMODE_FORCEIDLE   (0x0u)
#define MAILBOX_SYSCONFIG_SIDLEMODE_NOIDLE   (0x1u)
#define MAILBOX_SYSCONFIG_SIDLEMODE_RESERVED   (0x3u)
#define MAILBOX_SYSCONFIG_SIDLEMODE_SMARTIDLE   (0x2u)

#define MAILBOX_SYSCONFIG_SOFTRESET   (0x00000001u)
#define MAILBOX_SYSCONFIG_SOFTRESET_SHIFT   (0x00000000u)
#define MAILBOX_SYSCONFIG_SOFTRESET_AUTO   (0x0u)
#define MAILBOX_SYSCONFIG_SOFTRESET_MANUAL   (0x1u)


/* MESSAGE */
#define MAILBOX_MESSAGE_MESSAGEVALUEMBM   (0xFFFFFFFFu)
#define MAILBOX_MESSAGE_MESSAGEVALUEMBM_SHIFT   (0x00000000u)

/* FIFOSTATUS_0 */
#define MAILBOX_FIFOSTATUS_FIFOFULLMBM   (0x00000001u)
#define MAILBOX_FIFOSTATUS_FIFOFULLMBM_SHIFT   (0x00000000u)
#define MAILBOX_FIFOSTATUS_FIFOFULLMBM_FULL   (0x1u)
#define MAILBOX_FIFOSTATUS_FIFOFULLMBM_NOTFULL   (0x0u)

/* MESSAGESTATUS */
#define MAILBOX_MESSAGESTATUS_NBOFMSGMBM   (0x00000007u)
#define MAILBOX_MESSAGESTATUS_NBOFMSGMBM_SHIFT   (0x00000000u)

/* IRQSTATUS_RAW */
#define MAILBOX_IRQSTATUS_RAW_NEWMSGSTATUSUUMB(m)   (0x1u << ((m)*2))
#define MAILBOX_IRQSTATUS_RAW_NEWMSGSTATUSUUMB_SHIFT(m)   ((m)*2)
#define MAILBOX_IRQSTATUS_RAW_NEWMSGSTATUSUUMB_EVENTPENDING   (0x1u)
#define MAILBOX_IRQSTATUS_RAW_NEWMSGSTATUSUUMB_NOACTION   (0x0u)
#define MAILBOX_IRQSTATUS_RAW_NEWMSGSTATUSUUMB_NOEVENT   (0x0u)
#define MAILBOX_IRQSTATUS_RAW_NEWMSGSTATUSUUMB_SETEVENT   (0x1u)

#define MAILBOX_IRQSTATUS_RAW_NOTFULLSTATUSUUMB(m)   (0x1u << (((m)*2)+1))
#define MAILBOX_IRQSTATUS_RAW_NOTFULLSTATUSUUMB_SHIFT(m)   (((m)*2)+1)
#define MAILBOX_IRQSTATUS_RAW_NOTFULLSTATUSUUMB_EVENTPENDING   (0x1u)
#define MAILBOX_IRQSTATUS_RAW_NOTFULLSTATUSUUMB_NOACTION   (0x0u)
#define MAILBOX_IRQSTATUS_RAW_NOTFULLSTATUSUUMB_NOEVENT   (0x0u)
#define MAILBOX_IRQSTATUS_RAW_NOTFULLSTATUSUUMB_SETEVENT   (0x1u)


/* IRQSTATUS_CLR */
#define MAILBOX_IRQSTATUS_CLR_NEWMSGSTATUSUUMB(m)   (0x1u << ((m)*2))
#define MAILBOX_IRQSTATUS_CLR_NEWMSGSTATUSUUMB_SHIFT(m)   ((m)*2)
#define MAILBOX_IRQSTATUS_CLR_NEWMSGSTATUSUUMB_EVENTPENDING   (0x1u)
#define MAILBOX_IRQSTATUS_CLR_NEWMSGSTATUSUUMB_NOACTION   (0x0u)
#define MAILBOX_IRQSTATUS_CLR_NEWMSGSTATUSUUMB_NOEVENT   (0x0u)
#define MAILBOX_IRQSTATUS_CLR_NEWMSGSTATUSUUMB_SETEVENT   (0x1u)

#define MAILBOX_IRQSTATUS_CLR_NOTFULLSTATUSUUMB(m)   (0x1u << (((m)*2)+1))
#define MAILBOX_IRQSTATUS_CLR_NOTFULLSTATUSUUMB_SHIFT(m)   (((m)*2)+1)
#define MAILBOX_IRQSTATUS_CLR_NOTFULLSTATUSUUMB_EVENTPENDING   (0x1u)
#define MAILBOX_IRQSTATUS_CLR_NOTFULLSTATUSUUMB_NOACTION   (0x0u)
#define MAILBOX_IRQSTATUS_CLR_NOTFULLSTATUSUUMB_NOEVENT   (0x0u)
#define MAILBOX_IRQSTATUS_CLR_NOTFULLSTATUSUUMB_SETEVENT   (0x1u)


/* IRQENABLE_SET */
#define MAILBOX_IRQENABLE_SET_NEWMSGSTATUSUUMB(m)   (0x1u << ((m)*2))
#define MAILBOX_IRQENABLE_SET_NEWMSGSTATUSUUMB_SHIFT(m)   ((m)*2)
#define MAILBOX_IRQENABLE_SET_NEWMSGSTATUSUUMB_EVENTPENDING   (0x1u)
#define MAILBOX_IRQENABLE_SET_NEWMSGSTATUSUUMB_NOACTION   (0x0u)
#define MAILBOX_IRQENABLE_SET_NEWMSGSTATUSUUMB_NOEVENT   (0x0u)
#define MAILBOX_IRQENABLE_SET_NEWMSGSTATUSUUMB_SETEVENT   (0x1u)

#define MAILBOX_IRQENABLE_SET_NOTFULLSTATUSUUMB(m)   (0x1u << (((m)*2)+1))
#define MAILBOX_IRQENABLE_SET_NOTFULLSTATUSUUMB_SHIFT(m)   (((m)*2)+1)
#define MAILBOX_IRQENABLE_SET_NOTFULLSTATUSUUMB_EVENTPENDING   (0x1u)
#define MAILBOX_IRQENABLE_SET_NOTFULLSTATUSUUMB_NOACTION   (0x0u)
#define MAILBOX_IRQENABLE_SET_NOTFULLSTATUSUUMB_NOEVENT   (0x0u)
#define MAILBOX_IRQENABLE_SET_NOTFULLSTATUSUUMB_SETEVENT   (0x1u)


/* IRQENABLE_CLR */
#define MAILBOX_IRQENABLE_CLR_NEWMSGSTATUSUUMB(m)   (0x1u << ((m)*2))
#define MAILBOX_IRQENABLE_CLR_NEWMSGSTATUSUUMB_SHIFT(m)   ((m)*2)
#define MAILBOX_IRQENABLE_CLR_NEWMSGSTATUSUUMB_EVENTPENDING   (0x1u)
#define MAILBOX_IRQENABLE_CLR_NEWMSGSTATUSUUMB_NOACTION   (0x0u)
#define MAILBOX_IRQENABLE_CLR_NEWMSGSTATUSUUMB_NOEVENT   (0x0u)
#define MAILBOX_IRQENABLE_CLR_NEWMSGSTATUSUUMB_SETEVENT   (0x1u)

#define MAILBOX_IRQENABLE_CLR_NOTFULLSTATUSUUMB(m)   (0x1u << (((m)*2)+1))
#define MAILBOX_IRQENABLE_CLR_NOTFULLSTATUSUUMB_SHIFT(m)   (((m)*2)+1)
#define MAILBOX_IRQENABLE_CLR_NOTFULLSTATUSUUMB_EVENTPENDING   (0x1u)
#define MAILBOX_IRQENABLE_CLR_NOTFULLSTATUSUUMB_NOACTION   (0x0u)
#define MAILBOX_IRQENABLE_CLR_NOTFULLSTATUSUUMB_NOEVENT   (0x0u)
#define MAILBOX_IRQENABLE_CLR_NOTFULLSTATUSUUMB_SETEVENT   (0x1u)


#ifdef __cplusplus
}
#endif

#endif
