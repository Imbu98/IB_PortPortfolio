#include "MyLegacyCameraShake.h"

UMyLegacyCameraShake::UMyLegacyCameraShake()
{
	OscillationDuration = 0.2f;
	OscillationBlendInTime = 0.05f;
	OscillationBlendOutTime = 0.05f;

	RotOscillation.Pitch.Amplitude = 2.0f;
	RotOscillation.Pitch.Frequency = 40.0f;

	RotOscillation.Yaw.Amplitude = 2.0f;
	RotOscillation.Yaw.Frequency = 40.0f;
}
