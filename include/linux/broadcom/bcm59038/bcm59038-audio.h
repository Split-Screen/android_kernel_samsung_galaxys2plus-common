/*******************************************************************************
* Copyright 2010 Broadcom Corporation.  All rights reserved.
*
*       @file   include/linux/broadcom/bcm59038/bcm59038-audio.h
*
* Unless you and Broadcom execute a separate written software license agreement
* governing use of this software, this software is licensed to you under the
* terms of the GNU General Public License version 2, available at
* http://www.gnu.org/copyleft/gpl.html (the "GPL").
*
* Notwithstanding the above, under no circumstances may you combine this
* software in any way with any other Broadcom software provided under a license
* other than the GPL, without Broadcom's express prior written consent.
*******************************************************************************/

/*
*
*****************************************************************************
*
* bcm59038-audio.h
*
* PURPOSE:
*
* This file sould be used by user of Audio in BCM59038 PMU.
*
* NOTES:
*
* ****************************************************************************/

#ifndef __BCM59038_AUDIO_H__
#define __BCM59038_AUDIO_H__

enum BCM59038_HS_PATH {
	BCM59038_AUDIO_HS_LEFT,
	BCM59038_AUDIO_HS_RIGHT,
	BCM59038_AUDIO_HS_BOTH
};

enum BCM59038_HS_GAIN {
	BCM59038_HSGAIN_MUTE,
	BCM59038_HSGAIN_66DB_N,
	BCM59038_HSGAIN_63DB_N,
	BCM59038_HSGAIN_60DB_N,
	BCM59038_HSGAIN_57DB_N,
	BCM59038_HSGAIN_54DB_N,
	BCM59038_HSGAIN_51DB_N,
	BCM59038_HSGAIN_48DB_N,
	BCM59038_HSGAIN_45DB_N,
	BCM59038_HSGAIN_42DB_N,
	BCM59038_HSGAIN_40P5DB_N,
	BCM59038_HSGAIN_39DB_N,
	BCM59038_HSGAIN_37P5DB_N,
	BCM59038_HSGAIN_36DB_N,
	BCM59038_HSGAIN_34P5DB_N,
	BCM59038_HSGAIN_33DB_N,
	BCM59038_HSGAIN_31P5DB_N,
	BCM59038_HSGAIN_30DB_N,
	BCM59038_HSGAIN_28P5DB_N,
	BCM59038_HSGAIN_27DB_N,
	BCM59038_HSGAIN_25P5DB_N,
	BCM59038_HSGAIN_24DB_N,
	BCM59038_HSGAIN_22P5DB_N,
	BCM59038_HSGAIN_22DB_N,
	BCM59038_HSGAIN_21P5DB_N,
	BCM59038_HSGAIN_21DB_N,
	BCM59038_HSGAIN_20P5DB_N,
	BCM59038_HSGAIN_20DB_N,
	BCM59038_HSGAIN_19P5DB_N,
	BCM59038_HSGAIN_19DB_N,
	BCM59038_HSGAIN_18P5DB_N,
	BCM59038_HSGAIN_18DB_N,
	BCM59038_HSGAIN_17P5DB_N,
	BCM59038_HSGAIN_17DB_N,
	BCM59038_HSGAIN_16P5DB_N,
	BCM59038_HSGAIN_16DB_N,
	BCM59038_HSGAIN_15P5DB_N,
	BCM59038_HSGAIN_15DB_N,
	BCM59038_HSGAIN_14P5DB_N,
	BCM59038_HSGAIN_14DB_N,
	BCM59038_HSGAIN_13P5DB_N,
	BCM59038_HSGAIN_13DB_N,
	BCM59038_HSGAIN_12P5DB_N,
	BCM59038_HSGAIN_12DB_N,
	BCM59038_HSGAIN_11P5DB_N,
	BCM59038_HSGAIN_11DB_N,
	BCM59038_HSGAIN_10P5DB_N,
	BCM59038_HSGAIN_10DB_N,
	BCM59038_HSGAIN_9P5DB_N,
	BCM59038_HSGAIN_9DB_N,
	BCM59038_HSGAIN_8P5DB_N,
	BCM59038_HSGAIN_8DB_N,
	BCM59038_HSGAIN_7P5DB_N,
	BCM59038_HSGAIN_7DB_N,
	BCM59038_HSGAIN_6P5DB_N,
	BCM59038_HSGAIN_6DB_N,
	BCM59038_HSGAIN_5P5DB_N,
	BCM59038_HSGAIN_5DB_N,
	BCM59038_HSGAIN_4P5DB_N,
	BCM59038_HSGAIN_4DB_N,
	BCM59038_HSGAIN_3P5DB_N,
	BCM59038_HSGAIN_3DB_N,
	BCM59038_HSGAIN_2P5DB_N,
	BCM59038_HSGAIN_2DB_N
};

enum BCM59038_HS_GAIN_SE {
	BCM59038_HSGAIN_SE_MUTE,
	BCM59038_HSGAIN_SE_60DB_N,
	BCM59038_HSGAIN_SE_57DB_N,
	BCM59038_HSGAIN_SE_54DB_N,
	BCM59038_HSGAIN_SE_51DB_N,
	BCM59038_HSGAIN_SE_48DB_N,
	BCM59038_HSGAIN_SE_45DB_N,
	BCM59038_HSGAIN_SE_42DB_N,
	BCM59038_HSGAIN_SE_39DB_N,
	BCM59038_HSGAIN_SE_36DB_N,
	BCM59038_HSGAIN_SE_34P5DB_N,
	BCM59038_HSGAIN_SE_33DB_N,
	BCM59038_HSGAIN_SE_31P5DB_N,
	BCM59038_HSGAIN_SE_30DB_N,
	BCM59038_HSGAIN_SE_28P5DB_N,
	BCM59038_HSGAIN_SE_27DB_N,
	BCM59038_HSGAIN_SE_25P5DB_N,
	BCM59038_HSGAIN_SE_24DB_N,
	BCM59038_HSGAIN_SE_22P5DB_N,
	BCM59038_HSGAIN_SE_21DB_N,
	BCM59038_HSGAIN_SE_19P5DB_N,
	BCM59038_HSGAIN_SE_18DB_N,
	BCM59038_HSGAIN_SE_16P5DB_N,
	BCM59038_HSGAIN_SE_16DB_N,
	BCM59038_HSGAIN_SE_15P5DB_N,
	BCM59038_HSGAIN_SE_15DB_N,
	BCM59038_HSGAIN_SE_14P5DB_N,
	BCM59038_HSGAIN_SE_14DB_N,
	BCM59038_HSGAIN_SE_13P5DB_N,
	BCM59038_HSGAIN_SE_13DB_N,
	BCM59038_HSGAIN_SE_12P5DB_N,
	BCM59038_HSGAIN_SE_12DB_N,
	BCM59038_HSGAIN_SE_11P5DB_N,
	BCM59038_HSGAIN_SE_11DB_N,
	BCM59038_HSGAIN_SE_10P5DB_N,
	BCM59038_HSGAIN_SE_10DB_N,
	BCM59038_HSGAIN_SE_9P5DB_N,
	BCM59038_HSGAIN_SE_9DB_N,
	BCM59038_HSGAIN_SE_8P5DB_N,
	BCM59038_HSGAIN_SE_8DB_N,
	BCM59038_HSGAIN_SE_7P5DB_N,
	BCM59038_HSGAIN_SE_7DB_N,
	BCM59038_HSGAIN_SE_6P5DB_N,
	BCM59038_HSGAIN_SE_6DB_N,
	BCM59038_HSGAIN_SE_5P5DB_N,
	BCM59038_HSGAIN_SE_5DB_N,
	BCM59038_HSGAIN_SE_4P5DB_N,
	BCM59038_HSGAIN_SE_4DB_N,
	BCM59038_HSGAIN_SE_3P5DB_N,
	BCM59038_HSGAIN_SE_3DB_N,
	BCM59038_HSGAIN_SE_2P5DB_N,
	BCM59038_HSGAIN_SE_2DB_N,
	BCM59038_HSGAIN_SE_1P5DB_N,
	BCM59038_HSGAIN_SE_1DB_N,
	BCM59038_HSGAIN_SE_0P5DB_N,
	BCM59038_HSGAIN_SE_0DB_N,
	BCM59038_HSGAIN_SE_P5DB_P,
	BCM59038_HSGAIN_SE_1DB_P,
	BCM59038_HSGAIN_SE_1P5DB_P,
	BCM59038_HSGAIN_SE_2DB_P,
	BCM59038_HSGAIN_SE_2P5DB_P,
	BCM59038_HSGAIN_SE_3DB_P,
	BCM59038_HSGAIN_SE_3P5DB_P,
	BCM59038_HSGAIN_SE_4DB_P
};

enum BCM59038_IHF_GAIN {
	BCM59038_IHFGAIN_MUTE,
	BCM59038_IHFGAIN_60DB_N,
	BCM59038_IHFGAIN_57DB_N,
	BCM59038_IHFGAIN_54DB_N,
	BCM59038_IHFGAIN_51DB_N,
	BCM59038_IHFGAIN_48DB_N,
	BCM59038_IHFGAIN_45DB_N,
	BCM59038_IHFGAIN_42DB_N,
	BCM59038_IHFGAIN_39DB_N,
	BCM59038_IHFGAIN_36DB_N,
	BCM59038_IHFGAIN_34P5DB_N,
	BCM59038_IHFGAIN_33DB_N,
	BCM59038_IHFGAIN_31P5DB_N,
	BCM59038_IHFGAIN_30DB_N,
	BCM59038_IHFGAIN_28P5DB_N,
	BCM59038_IHFGAIN_27DB_N,
	BCM59038_IHFGAIN_25P5DB_N,
	BCM59038_IHFGAIN_24DB_N,
	BCM59038_IHFGAIN_22P5DB_N,
	BCM59038_IHFGAIN_21DB_N,
	BCM59038_IHFGAIN_19P5DB_N,
	BCM59038_IHFGAIN_18DB_N,
	BCM59038_IHFGAIN_16P5DB_N,
	BCM59038_IHFGAIN_16DB_N,
	BCM59038_IHFGAIN_15P5DB_N,
	BCM59038_IHFGAIN_15DB_N,
	BCM59038_IHFGAIN_14P5DB_N,
	BCM59038_IHFGAIN_14DB_N,
	BCM59038_IHFGAIN_13P5DB_N,
	BCM59038_IHFGAIN_13DB_N,
	BCM59038_IHFGAIN_12P5DB_N,
	BCM59038_IHFGAIN_12DB_N,
	BCM59038_IHFGAIN_11P5DB_N,
	BCM59038_IHFGAIN_11DB_N,
	BCM59038_IHFGAIN_10P5DB_N,
	BCM59038_IHFGAIN_10DB_N,
	BCM59038_IHFGAIN_9P5DB_N,
	BCM59038_IHFGAIN_9DB_N,
	BCM59038_IHFGAIN_8P5DB_N,
	BCM59038_IHFGAIN_8DB_N,
	BCM59038_IHFGAIN_7P5DB_N,
	BCM59038_IHFGAIN_7DB_N,
	BCM59038_IHFGAIN_6P5DB_N,
	BCM59038_IHFGAIN_6DB_N,
	BCM59038_IHFGAIN_5P5DB_N,
	BCM59038_IHFGAIN_5DB_N,
	BCM59038_IHFGAIN_4P5DB_N,
	BCM59038_IHFGAIN_4DB_N,
	BCM59038_IHFGAIN_3P5DB_N,
	BCM59038_IHFGAIN_3DB_N,
	BCM59038_IHFGAIN_2P5DB_N,
	BCM59038_IHFGAIN_2DB_N,
	BCM59038_IHFGAIN_1P5DB_N,
	BCM59038_IHFGAIN_1DB_N,
	BCM59038_IHFGAIN_0DB,
	BCM59038_IHFGAIN_P5DB_P,
	BCM59038_IHFGAIN_1DB_P,
	BCM59038_IHFGAIN_1P5DB_P,
	BCM59038_IHFGAIN_2DB_P,
	BCM59038_IHFGAIN_2P5DB_P,
	BCM59038_IHFGAIN_3DB_P,
	BCM59038_IHFGAIN_3P5DB_P,
	BCM59038_IHFGAIN_4DB_P
};

enum BCM59038_HS_SHORTCIRCUIT_CURR {
	BCM59038_HS_SCKT_130MA,
	BCM59038_HS_SCKT_102MA,
	BCM59038_HS_SCKT_83MA,
	BCM59038_HS_SCKT_74MA
};

enum BCM59038_HS_INPUTMODE {
	BCM59038_HS_DIFFERENTIAL,
	BCM59038_HS_SINGLE_ENDED
};

extern int bcm59038_audioInit(void);
extern int bcm59038_audio_hs_powerUp(bool on);
extern int bcm59038_audio_hs_shortCircuitEnable(bool enable);
extern int bcm59038_audio_hs_setInputMode(int hsGain, int hsMode);
extern int bcm59038_audio_hs_shortCircuitThreshold(int curr);
extern int bcm59038_audio_hs_setGain(int hsPath, int hsGain);
extern int bcm59038_audio_ihf_powerUp(void);
extern int bcm59038_audio_ihf_powerDown(void);
extern int bcm59038_audio_ihf_bypassEnable(bool enable);
extern int bcm59038_audio_ihf_setGain(int ihfGain);

#endif /* __BCM59038_AUDIO_H__ */
