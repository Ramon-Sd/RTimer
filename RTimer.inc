/*
*
* Developed by: Ramon
* Github: https://github.com/Ramon-Sd/RTimer
*
*/

#if !defined _samp_included
    #include "A_SAMP"
#endif

#if defined RTimer_INC
    #endinput
#endif
#define RTimer_INC

#define DefTimer:%0(%1)\
        forward timer_%0(%1);\
        public timer_%0(%1)

#if !defined Timer_Set
    #define Timer_Set(%0,%1) SetSVarInt("timer_"%0"", SetTimer("timer_"%0"",%1))
#endif
#if !defined Timer_SetEx
    #define Timer_SetEx(%0,%1) SetSVarInt("timer_"%0"", SetTimerEx("timer_"%0"",%1))
#endif
#if !defined Timer_Get
    #define Timer_Get(%0) GetSVarInt("timer_"%0"")
#endif
#if !defined Timer_Kill
    #define Timer_Kill(%0) KillTimer(Timer_Get(%0)), DeleteSVar("timer_"%0"")
#endif