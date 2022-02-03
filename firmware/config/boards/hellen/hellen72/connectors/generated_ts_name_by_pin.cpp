// auto-generated by PinoutLogic.java

#include "pch.h"

const char * getBoardSpecificPinName(brain_pin_e brainPin) {
	switch(brainPin) {
		case EFI_ADC_1: return "3L - IGN_7 / AFR";
		case EFI_ADC_0: return "4W - O2S (A13)";
		case EFI_ADC_5: return "4S/4T - Alternator voltage";
		case EFI_ADC_4: return "4V - TPS (A17)";
		case EFI_ADC_3: return "4C - Steering/RES2 (A16)";
		case EFI_ADC_2: return "intMAP (A15)";
		case GPIOC_9: return "2H - COIL_B2 (PWM4)";
		case GPIOC_8: return "2I - COIL_B1 (PWM3)";
		case GPIOG_4: return "2R - CE (O11)";
		case GPIOI_2: return "3H - MAIN (O1)";
		case GPIOC_7: return "2E - COIL_A2 (PWM2)";
		case GPIOG_3: return "3E - CANIST (O10)";
		case GPIOE_5: return "3I - IGN_2 (2&3)";
		case GPIOA_9: return "3P - O2H2 (O7)";
		case GPIOC_6: return "2E - COIL_A1 (PWM1)";
		case GPIOG_2: return "2M - FPUMP (O9)";
		case GPIOE_4: return "2O - IGN_3";
		case GPIOI_0: return "4R - VVT (O5)";
		case GPIOE_3: return "3N - IGN_4";
		case GPIOA_7: return "4J - VTCS/AUX4 (A20)";
		case GPIOA_6: return "3V - CAM (A19)";
		case GPIOE_2: return "3Z - IGN_5 / GNDA";
		case GPIOC_4: return "4H - Neutral/AUX2 (A21)";
		case GPIOI_8: return "3F - IGN_1 (1&4)";
		case GPIOI_7: return "4U - MAP2/Ign8 (A10)";
		case GPIOG_8: return "2D - INJ_2";
		case GPIOI_6: return "3L - IGN_7 / AFR";
		case GPIOG_7: return "2A - INJ_1";
		case GPIOI_5: return "4K - IGN_6 / +5V_MAP";
		case GPIOD_10: return "2J - INJ_4";
		case GPIOH_15: return "2K - AC (O4)";
		case GPIOD_12: return "2B - ECF (PWM8)";
		case GPIOH_14: return "3J - O2H (O3)";
		case GPIOD_11: return "2G - INJ_3";
		case GPIOH_13: return "3U - AWARN (O2)";
		case GPIOD_14: return "2Q - IDLE (PWM5)";
		case GPIOD_13: return "3O - TACH (PWM7)";
		case GPIOD_15: return "3M - ALTERN (PWM6)";
		case GPIOB_1: return "3Y - CRANK (A24)";
		case GPIOB_0: return "4F - AC_PRES/AUX1 (A23)";
		case GPIOD_9: return "2C - AC Fan / INJ_5";
		case GPIOF_9: return "4B - Brake/RES1 (A7)";
		case GPIOF_8: return "4I - Clutch (A8)";
		case EFI_ADC_10: return "4X - MAF (A9)";
		case EFI_ADC_11: return "4U - MAP2/Ign8 (A10)";
		case EFI_ADC_12: return "4P - CLT (A11)";
		case EFI_ADC_13: return "4N - IAT (A14)";
		case EFI_ADC_14: return "4H - Neutral/AUX2 (A21)";
		case ADC3_CHANNEL_7: return "4B - Brake/RES1 (A7)";
		case EFI_ADC_15: return "4AE - EGR/MAP4 (A22)";
		case GPIOF_10: return "4C - Steering/RES2 (A16)";
		case GPIOF_13: return "3C - Purge Solenoid / INJ_7";
		case EFI_ADC_9: return "3Y - CRANK (A24)";
		case GPIOF_14: return "3D - EGR Solenoid / INJ_8";
		case EFI_ADC_8: return "4F - AC_PRES/AUX1 (A23)";
		case GPIOF_11: return "3T - VSS (D5)";
		case EFI_ADC_7: return "4J - VTCS/AUX4 (A20)";
		case GPIOF_12: return "2N - VTSC / INJ_6";
		case EFI_ADC_6: return "3V - CAM (A19)";
		default: return nullptr;
	}
	return nullptr;
}
