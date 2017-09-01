/*
 * cl_heparincontroller.h
 *
 * Created: 11/5/2014 9:47:46 AM
 *  Author: user
 */ 


#ifndef CL_HEPARINCONTROLLER_H_
#define CL_HEPARINCONTROLLER_H_

#define HEPARIN_BOLUS_TIMEOUT 1

typedef enum {
	
	CL_HEP_STATE_IDLE,
	CL_HEP_STATE_REACHED_LEFTEND,
	CL_HEP_STATE_REACHED_RIGHTEND,
	CL_HEP_STATE_MOVING_LEFT,
	CL_HEP_STATE_MOVING_RIGHT,
	CL_HEP_STATE_READY_FORBOLUS,
	CL_HEP_STATE_BOLUS_ON,
	CL_HEP_STATE_READY_FOR_DELIVERY,
	CL_HEP_STATE_NORMAL_DELIVERY_ON,
	CL_HEP_STATE_BOLUS_PAUSED,
	CL_HEP_STATE_BOLUS_STOPPED,
	CL_HEP_STATE_NORMAL_PAUSED,
	CL_HEP_STATE_NORMAL_STOPPED,
	CL_HEP_STATE_BOLUS_COMPLETED,
	CL_HEP_STATE_PAUSED,
	CL_HEP_STATE_STOPPED,
	CL_HEP_STATE_COMPLETED,
	CL_HEP_STATE_MAXSTATE
	
	}cl_hep_states;
typedef enum {
	
	CL_HEP_EVENT_NULL,
	CL_HEP_EVENT_GO_TO_LEFTEND,
	CL_HEP_EVENT_LEFT_END_REACHED,
	CL_HEP_EVENT_RIGHT_END_REACHED,
	CL_HEP_EVENT_GO_TO_RIGHTEND,
	CL_HEP_EVENT_SET_BOLUS_RATE,
	CL_HEP_EVENT_SET_NORMAL_DELIVERY_RATE,
	CL_HEP_EVENT_STARTBOLUS,
	CL_HEP_EVENT_PAUSEBOLUS,
	CL_HEP_EVENT_STOPBOLUS,
	CL_HEP_EVENT_START_NORMAL_DELIVERY,
	CL_HEP_EVENT_PAUSE_NORMAL_DELIVERY,
	CL_HEP_EVENT_STOP_NORMAL_DELIVERY,
	CL_HEP_EVENT_SEC_TICK,
	CL_HEP_EVENT_50MS,
	CL_HEP_EVENT_500MS,
	CL_HEP_EVENT_AT_LEFT_END,
	CL_HEP_EVENT_AT_RIGHT_END
	
}cl_hep_events;


#endif /* CL_HEPARINCONTROLLER_H_ */