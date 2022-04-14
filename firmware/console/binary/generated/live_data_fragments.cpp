// generated by gen_live_documentation.sh / UsagesReader.java
#include "pch.h"
#include "FragmentEntry.h"

#include "tunerstudio.h"
static FragmentEntry fragments[16];

void initFragments() {
	fragments[0].init((const uint8_t *)getStructAddr(LDS_high_pressure_fuel_pump), sizeof(high_pressure_fuel_pump_s));
	fragments[1].init((const uint8_t *)getStructAddr(LDS_injector_model), sizeof(injector_model_s));
	fragments[2].init((const uint8_t *)getStructAddr(LDS_launch_control_state), sizeof(launch_control_state_s));
	fragments[3].init((const uint8_t *)getStructAddr(LDS_boost_control), sizeof(boost_control_s));
	fragments[4].init((const uint8_t *)getStructAddr(LDS_ac_control), sizeof(ac_control_s));
	fragments[5].init((const uint8_t *)getStructAddr(LDS_fan_control), sizeof(fan_control_s));
	fragments[6].init((const uint8_t *)getStructAddr(LDS_fuel_pump_control), sizeof(fuel_pump_control_s));
	fragments[7].init((const uint8_t *)getStructAddr(LDS_main_relay), sizeof(main_relay_s));
	fragments[8].init((const uint8_t *)getStructAddr(LDS_engine_state), sizeof(engine_state_s));
	fragments[9].init((const uint8_t *)getStructAddr(LDS_tps_accel_state), sizeof(tps_accel_state_s));
	fragments[10].init((const uint8_t *)getStructAddr(LDS_trigger_central), sizeof(trigger_central_s));
	fragments[11].init((const uint8_t *)getStructAddr(LDS_trigger_state), sizeof(trigger_state_s));
	fragments[12].init((const uint8_t *)getStructAddr(LDS_wall_fuel_state), sizeof(wall_fuel_state_s));
	fragments[13].init((const uint8_t *)getStructAddr(LDS_idle_state), sizeof(idle_state_s));
	fragments[14].init((const uint8_t *)getStructAddr(LDS_ignition_state), sizeof(ignition_state_s));
	fragments[15].init((const uint8_t *)getStructAddr(LDS_electronic_throttle), sizeof(electronic_throttle_s));
};
