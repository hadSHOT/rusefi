// auto-generated by PinoutLogic.java

#include "pch.h"

const char * getBoardSpecificPinName(brain_pin_e brainPin) {
	switch(brainPin) {
		case EFI_ADC_1: return "55 - IN_O2S2";
		case EFI_ADC_0: return "18 - IN_O2S";
		case EFI_ADC_5: return "13 - IN_VIGN";
		case EFI_ADC_4: return "16 - IN_TPS";
		case EFI_ADC_3: return "78 - IN_PPS";
		case EFI_ADC_2: return "41 - IN_MAP3";
		case GPIOC_9: return "64 - OUT_COIL_B2";
		case GPIOI_2: return "14 - OUT_MAIN";
		case GPIOE_6: return "21 - IGN_8";
		case GPIOG_4: return "31 - OUT_CE";
		case GPIOC_8: return "65 - OUT_COIL_B1";
		case GPIOE_5: return "1 - IGN_2";
		case GPIOA_9: return "28 - OUT_O2H2";
		case GPIOG_3: return "46 - OUT_CANIST";
		case GPIOI_1: return "49 - OUT_HEATER";
		case GPIOC_7: return "66 - OUT_COIL_A2";
		case GPIOE_4: return "2 - IGN_3";
		case GPIOI_0: return "50 - OUT_STARTER";
		case GPIOC_6: return "67 - OUT_COIL_A1";
		case GPIOG_2: return "70 - OUT_PUMP";
		case GPIOE_3: return "4 - IGN_4";
		case GPIOC_5: return "76 - IN_AUX3";
		case GPIOA_7: return "77 - IN_AUX4";
		case GPIOE_2: return "24 - IGN_5";
		case GPIOC_4: return "75 - IN_AUX2";
		case GPIOA_6: return "79 - IN_CAM";
		case GPIOI_8: return "5 - IGN_1";
		case GPIOG_8: return "6 - INJ_2";
		case GPIOG_7: return "27 - INJ_1";
		case GPIOD_10: return "47 - INJ_4";
		case GPIOH_15: return "69 - OUT_AC";
		case GPIOH_14: return "48 - OUT_O2H";
		case GPIOD_12: return "68 - OUT_ECF";
		case GPIOD_11: return "7 - INJ_3";
		case GPIOH_13: return "11 - OUT_HIGH";
		case GPIOD_14: return "8 - OUT_TACH";
		case GPIOD_13: return "60 - OUT_IO";
		case GPIOD_15: return "10 - OUT_FUEL";
		case GPIOB_1: return "15 - IN_CRANK (A24)";
		case GPIOB_0: return "74 - IN_AUX1";
		case GPIOD_9: return "30 - INJ_5";
		case GPIOF_5: return "9 - IN_SENS3";
		case GPIOB_9: return "22 - IGN_7";
		case GPIOB_8: return "23 - IGN_6";
		case EFI_ADC_10: return "37 - IN_MAP1";
		case EFI_ADC_11: return "38 - IN_MAP2";
		case EFI_ADC_12: return "39 - IN_CLT";
		case EFI_ADC_13: return "40 - IN_IAT";
		case EFI_ADC_14: return "75 - IN_AUX2";
		case EFI_ADC_15: return "76 - IN_AUX3";
		case EFI_ADC_9: return "15 - IN_CRANK (A24)";
		case GPIOF_13: return "72 - INJ_7";
		case GPIOF_14: return "73 - INJ_8";
		case EFI_ADC_8: return "74 - IN_AUX1";
		case GPIOF_11: return "59 - IN_VSS";
		case EFI_ADC_7: return "77 - IN_AUX4";
		case GPIOF_12: return "25 - INJ_6";
		case EFI_ADC_6: return "79 - IN_CAM";
		default: return nullptr;
	}
	return nullptr;
}
