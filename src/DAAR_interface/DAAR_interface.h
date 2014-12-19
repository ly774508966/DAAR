#ifndef DAAR_INTERFACE_H
#define DAAR_INTERFACE_H

#include "..\LSM9DS0\LSM9DS0.h"
#include "..\GA1A1S202WP\GA1A1S202WP.h"
#include "..\LVMAXSONAREZ0\LVMAXSONAREZ0.h"

#define LIGHT_PIN		A1
#define ULTRASONIC_PIN	A0

void setup_hardware(LSM9DS0* imu, GA1A1S202WP* light, LVMAXSONAREZ0* distance);

#endif // DAAR_INTERFACE_H