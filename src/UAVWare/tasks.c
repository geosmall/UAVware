#include "tasks.h"
#include "../uvos/uvos_led.h"


void RC_TASK_init ( void )
{
	rc_init();
}

void RC_TASK_update ( void )
{
	rc_update();
}

//------------------------------------------

void SYS_STATS_TASK_init ( void )
{

}

void SYS_STATS_TASK_update( void )
{
	telem_system_stats();
}

//------------------------------------------

void HEARTBEAT_TASK_init ( void )
{

}

void HEARTBEAT_TASK_update ( void )
{
	telem_heartbeat();
	UVOS_LED_toggle();
}