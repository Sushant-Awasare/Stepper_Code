/*
 * stepper_variables.h
 *
 *  Created on: Jan 24, 2023
 *      Author: COE04
 */

#ifndef STEPPER_VARIABLES_H_
#define STEPPER_VARIABLES_H_


#define MAXPULSES  1000
#define STEPPER_PATTERN 0
unsigned int MAX_FEEDBACK_TIME;

_Bool feedback_flag;
_Bool wb_dump_confirmation_flag;
_Bool fb_dump_confirmation_flag;
_Bool Flag_FB_Trig;				// FeedBucket Run Flag
_Bool Flag_FB_Trig_Edge;		// Check edge of the feedBucket Run Flag
_Bool Flag_FB_OD_TMR;
_Bool Flag_FB_OT_TMR;
_Bool Flag_FB_Stage1;
_Bool Flag_FB_Stage2;
_Bool Flag_FB_Stage3;
_Bool Flag_FB_HomIN;
_Bool Flag_FB_Status;


_Bool Flag_WB_Trig;				// Weighing Bucket Run Flag
_Bool Flag_WB_Trig_Edge;		// Check edge of the WeighingBucket Run Flag
_Bool Flag_WB_OD_TMR;
_Bool Flag_WB_OT_TMR;
_Bool Flag_WB_Stage1;
_Bool Flag_WB_Stage2;
_Bool Flag_WB_Stage3;
_Bool Flag_WB_HomIN;

_Bool Flag_DumpCyc;
_Bool Flag_RechCyc;
_Bool Flag_WB_Status;

unsigned int FB_Angle_Ptr;
unsigned int WB_Angle_Ptr;

_Bool homing_flag_fb ;
_Bool homing_flag_wb;

unsigned int fb_at_homing_flag,wb_at_homing_flag;

unsigned int WB_Clk_Pulses;			// Clock Pulses for the Weighing Bucket
unsigned int extra_wb_pulses;
unsigned int WB_OD_Time;		// Open Delay time for he WeighingBucket
unsigned int WB_OT_Time;		// Open Time time for the Weighing Bucket
unsigned int WB_OD_TMR ;				// Open Delay Timer of the Weighing Bucket
unsigned int WB_OT_TMR;				// Open Time Timer of Weighing Bucket


unsigned int FB_Clk_Pulses;			// Clock Pulses for the Feed Bucket
unsigned int extra_fb_pulses;
unsigned int FB_OD_Time;		// Open Delay time for the FeedBucket
unsigned int FB_OT_Time;		// Open Time time for the FeedBucket
unsigned int FB_OD_TMR;				// Open Delay Timer of the Feed Bucket
unsigned int FB_OT_TMR;				// Open Time Timer of Feed Bucket


unsigned int DSidx ,DSidx_FB;
unsigned int MotoPro;
unsigned int MotoPro_FB;
unsigned int shift_speed_row_WB,shift_speed_row_FB;
_Bool fb_home_detected_flag;
unsigned int wb_home_detected_flag;
unsigned int pulses_buff[100],v;
//unsigned int STEPPER_PATTERN;

#endif /* STEPPER_VARIABLES_H_ */
