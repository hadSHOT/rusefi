//DO NOT EDIT MANUALLY, let automation work hard.

// auto-generated by PinoutLogic.java based on config/boards/hellen/uaefi121/connectors/uaefi121.yaml
#include "pch.h"

// see comments at declaration in pin_repository.h
const char * getBoardSpecificPinName(brain_pin_e brainPin) {
	switch(brainPin) {
		case Gpio::A8: return "49a INJ_6";
		case Gpio::A9: return "45a INJ_2";
		case Gpio::B13: return "51a INJ_8";
		case Gpio::B8: return "Coil 6";
		case Gpio::C13: return "Coil 1";
		case Gpio::C6: return "88a LS4";
		case Gpio::D0: return "44a INJ_1";
		case Gpio::D10: return "47a INJ_4";
		case Gpio::D11: return "46a INJ_3";
		case Gpio::D12: return "15a LS2";
		case Gpio::D13: return "16a LS3";
		case Gpio::D15: return "14a LS1";
		case Gpio::D2: return "48a INJ_5";
		case Gpio::D3: return "50a INJ_7";
		case Gpio::E0: return "VR_DISCRETE+";
		case Gpio::E1: return "VR_9924+";
		case Gpio::E12: return "36a HALL1";
		case Gpio::E13: return "35a HALL2";
		case Gpio::E14: return "34a HALL3";
		case Gpio::E2: return "Coil 5";
		case Gpio::E3: return "Coil 4";
		case Gpio::E4: return "Coil 3";
		case Gpio::E5: return "Coil 2";
		default: return nullptr;
	}
	return nullptr;
}
