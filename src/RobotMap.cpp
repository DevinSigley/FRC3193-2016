// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<SpeedController> RobotMap::chassisChassisLeft;
std::shared_ptr<SpeedController> RobotMap::chassisChassisRight;
std::shared_ptr<RobotDrive> RobotMap::chassisRobotDrive;
std::shared_ptr<Encoder> RobotMap::chassisChassisLeftEncoder;
std::shared_ptr<Encoder> RobotMap::chassisChassisRightEncoder;
std::shared_ptr<Solenoid> RobotMap::chassisLeftShifter;
std::shared_ptr<Solenoid> RobotMap::chassisRightShifter;
std::shared_ptr<Ultrasonic> RobotMap::chassisChassisUltrasonic;
std::shared_ptr<AnalogGyro> RobotMap::chassisGyro;
std::shared_ptr<SpeedController> RobotMap::shooterShooterTop;
std::shared_ptr<SpeedController> RobotMap::shooterShooterBottom;
std::shared_ptr<Relay> RobotMap::shooterShooterFlashlight;
std::shared_ptr<SpeedController> RobotMap::intakeIntakeVictor;
std::shared_ptr<AnalogInput> RobotMap::armArmAngle;
std::shared_ptr<SpeedController> RobotMap::armArmLeft;
std::shared_ptr<SpeedController> RobotMap::armArmRight;
std::shared_ptr<Encoder> RobotMap::armArmEncoder;
std::shared_ptr<DigitalInput> RobotMap::armArmLimit;
std::shared_ptr<SpeedController> RobotMap::climberClimberRight;
std::shared_ptr<SpeedController> RobotMap::climberClimberLeft;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    chassisChassisLeft.reset(new VictorSP(0));
    lw->AddActuator("Chassis", "ChassisLeft", std::static_pointer_cast<VictorSP>(chassisChassisLeft));
    
    chassisChassisRight.reset(new VictorSP(5));
    lw->AddActuator("Chassis", "ChassisRight", std::static_pointer_cast<VictorSP>(chassisChassisRight));
    
    chassisRobotDrive.reset(new RobotDrive(chassisChassisLeft, chassisChassisRight));
    
    chassisRobotDrive->SetSafetyEnabled(true);
        chassisRobotDrive->SetExpiration(0.1);
        chassisRobotDrive->SetSensitivity(0.5);
        chassisRobotDrive->SetMaxOutput(1.0);

    chassisChassisLeftEncoder.reset(new Encoder(0, 1, false, Encoder::k4X));
    lw->AddSensor("Chassis", "ChassisLeftEncoder", chassisChassisLeftEncoder);
    chassisChassisLeftEncoder->SetDistancePerPulse(1.0);
    chassisChassisLeftEncoder->SetPIDSourceType(PIDSourceType::kRate);
    chassisChassisRightEncoder.reset(new Encoder(2, 3, false, Encoder::k4X));
    lw->AddSensor("Chassis", "ChassisRightEncoder", chassisChassisRightEncoder);
    chassisChassisRightEncoder->SetDistancePerPulse(1.0);
    chassisChassisRightEncoder->SetPIDSourceType(PIDSourceType::kRate);
    chassisLeftShifter.reset(new Solenoid(0, 0));
    lw->AddActuator("Chassis", "LeftShifter", chassisLeftShifter);
    
    chassisRightShifter.reset(new Solenoid(0, 1));
    lw->AddActuator("Chassis", "RightShifter", chassisRightShifter);
    
    chassisChassisUltrasonic.reset(new Ultrasonic(7, 8));
    lw->AddSensor("Chassis", "ChassisUltrasonic", chassisChassisUltrasonic);
    
    chassisGyro.reset(new AnalogGyro(0));
    lw->AddSensor("Chassis", "Gyro", chassisGyro);
    chassisGyro->SetSensitivity(0.007);
    shooterShooterTop.reset(new VictorSP(3));
    lw->AddActuator("Shooter", "ShooterTop", std::static_pointer_cast<VictorSP>(shooterShooterTop));
    
    shooterShooterBottom.reset(new VictorSP(2));
    lw->AddActuator("Shooter", "ShooterBottom", std::static_pointer_cast<VictorSP>(shooterShooterBottom));
    
    shooterShooterFlashlight.reset(new Relay(0));
    lw->AddActuator("Shooter", "ShooterFlashlight", shooterShooterFlashlight);
    
    intakeIntakeVictor.reset(new VictorSP(1));
    lw->AddActuator("Intake", "IntakeVictor", std::static_pointer_cast<VictorSP>(intakeIntakeVictor));
    
    armArmAngle.reset(new AnalogInput(1));
    lw->AddSensor("Arm", "ArmAngle", armArmAngle);
    
    armArmLeft.reset(new VictorSP(7));
    lw->AddActuator("Arm", "ArmLeft", std::static_pointer_cast<VictorSP>(armArmLeft));
    
    armArmRight.reset(new VictorSP(6));
    lw->AddActuator("Arm", "ArmRight", std::static_pointer_cast<VictorSP>(armArmRight));
    
    armArmEncoder.reset(new Encoder(4, 5, false, Encoder::k4X));
    lw->AddSensor("Arm", "ArmEncoder", armArmEncoder);
    armArmEncoder->SetDistancePerPulse(1.0);
    armArmEncoder->SetPIDSourceType(PIDSourceType::kRate);
    armArmLimit.reset(new DigitalInput(9));
    lw->AddSensor("Arm", "ArmLimit", armArmLimit);
    
    climberClimberRight.reset(new VictorSP(8));
    lw->AddActuator("Climber", "ClimberRight", std::static_pointer_cast<VictorSP>(climberClimberRight));
    
    climberClimberLeft.reset(new VictorSP(4));
    lw->AddActuator("Climber", "ClimberLeft", std::static_pointer_cast<VictorSP>(climberClimberLeft));
    


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    armArmRight->SetInverted(true);
}
