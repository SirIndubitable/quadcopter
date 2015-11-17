#include "../../stm32f4xx/inc/stm32f4xx_dac.h"

#include "dac.h"

DAC::DAC()
{

}

DAC::Init()
{
    DAC_InitTypeDef init_struct;

    init_struct.DAC_Trigger = DAC_Trigger_None;
    init_struct.DAC_WaveGeneration = DAC_WaveGeneration_None;
    init_struct.DAC_LFSRUnmask_TriangleAmplitude = DAC_TriangleAmplitude_1; // This does not matter with no WaveGeneration
    init_struct.DAC_OutputBuffer = DAC_OutputBuffer_Disable;

    DAC_Init()
}