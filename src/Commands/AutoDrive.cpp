// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "AutoDrive.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

AutoDrive::AutoDrive(double driveDistance): Command() {
    m_driveDistance = driveDistance;
        // Use requires() here to declare subsystem dependencies
    // eg. requires(chassis);
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::chassis.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void AutoDrive::Initialize() {
	Robot::chassis->chassisRightEncoder->Reset();
	Robot::chassis->chassisLeftEncoder->Reset();
	Robot::chassis->gyro->Reset();

}

// Called repeatedly when this Command is scheduled to run
void AutoDrive::Execute() {
	Robot::chassis->robotDrive->Drive(-0.75, Robot::chassis->gyro->GetAngle() * kP); // turn to correct heading
		Wait(0.004);
}

// Make this return true when this Command no longer needs to run execute()

bool AutoDrive::IsFinished() {
	 if (Robot::chassis->chassisLeftEncoder->Get() > m_driveDistance)
		return true;

	else
		return false;


}

// Called once after isFinished returns true
void AutoDrive::End() {
	 Robot::chassis->chassisLeft->Set(0.0);
	 Robot::chassis->chassisRight->Set(0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoDrive::Interrupted() {

}
