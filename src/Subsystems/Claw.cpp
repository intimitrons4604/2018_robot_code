/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Claw.h"
#include "../RobotMap.h"

constexpr static double SPEED = 0.5;

Claw::Claw() :
        frc::Subsystem("ExampleSubsystem"), leftMotor(LEFT_CLAW_MOTOR), rightMotor(RIGHT_CLAW_MOTOR),
                clawMotors(leftMotor, rightMotor)
{

}
void Claw::InitDefaultCommand()
{
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void Claw::grab()
{
    clawMotors.Set(SPEED);
}
void Claw::release()
{
    clawMotors.Set(-SPEED);
}
