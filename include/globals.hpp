#ifndef GLOBAL_H_
#define GLOBAL_H_

#include "api.h"

extern pros::Controller master;
extern pros::Motor leftBack, leftFront, rightBack, rightFront;
extern pros::Motor leftIntake, rightIntake;
extern pros::Motor lift;
extern pros::Imu inertial;

extern std::array<double, 3> anglerPIDParams;
extern std::array<double, 3> drivebasePIDParams;

#endif

