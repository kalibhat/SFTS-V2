/*
 * IncFile1.h
 *
 * Created: 11/6/2014 9:05:35 AM
 *  Author: user
 */ 


#ifndef UFPUMPFEEDBACK_H_
#define UFPUMPFEEDBACK_H_



typedef enum {
	
	CL_UFP_STATE_IDLE,
	CL_UFP_STATE_STARTED,
	CL_UFP_STATE_RUNNING,
	CL_UFP_STATE_RUNNING_NORMAL,
	CL_UFP_STATE_RUNNING_SLOW,
	CL_UFP_STATE_RUNNING_FAST,
	CL_UFP_STATE_STOPPED,
	CL_UFP_STATE_PAUSED,
	CL_UFP_STATE_COMPLETED,
	CL_UFP_STATE_MAXSTATE
	
}cl_ufpump_states;

#endif /* UFPUMPFEEDBACK_H_ */