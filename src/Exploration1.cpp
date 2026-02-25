// #include <FEH.h>
// #include <Arduino.h>
// #include <FEHUtility.h>
// #include <FEHServo.h>
// #include <FEHMotor.h>
// #include <FEHLCD.h>

// // declare drive motor and arm servo
//  FEHMotor left_motor(FEHMotor::Motor0,9.0);
//  FEHMotor right_motor(FEHMotor::Motor1,9.0);
//  //FEHServo robot_arm(FEHServo::Servo7);
//  AnalogInputPin sensor(FEHIO::Pin0);
//  DigitalInputPin bump_switch1(FEHIO::Pin1);
// DigitalInputPin bump_switch2(FEHIO::Pin2);
// DigitalInputPin bump_switch3(FEHIO::Pin3);
// DigitalInputPin bump_switch4(FEHIO::Pin4);
// AnalogInputPin micro(FEHIO::Pin5);

// // Declare things like Motors, Servos, etc. here
// // For example:

// void ERCMain()
// {
//     // Your code
//    /*
//     //Part 1
//     LCD.Write(sensor.Value());
//     FEHServo servo(FEHServo::Servo7); // declare servo arm
//     servo.SetMax(2500); // set max value for servo
//     servo.SetMin(500); // set min value for servo

//     //TestGUI();


//     //Part 2

//     while(bump_switch1.Value() == 1 && bump_switch2.Value() == 1 && bump_switch3.Value() == 1 && bump_switch4.Value() == 1){
//         servo.SetDegree((micro.Value() - 3.5) * 180.0 / 1.5); // set servo angle based on microcontroller value
//     }
//     */
//     //Part 3

//     LCD.WriteLine("Touch screen to start Part 3");
//     int x, y;
//     while (!LCD.Touch(&x, &y)){}; 

//     // 2. Drive forward until front bump switches (1 and 2) hit the wall
//     left_motor.SetPercent(-35);  // Recommended 25% power 
//     right_motor.SetPercent(35);

//     while (bump_switch1.Value() == 1 || bump_switch2.Value() == 1) {
//     // Keep driving forward while either switch is NOT pressed (Value == 1)
//     // This simple logic drives until both switches make contact
//     }
//     left_motor.Stop();
//     right_motor.Stop();
//     Sleep(0.5);

//     // 3. Turn backwards 90 degrees [cite: 122]
//     // (Adjust Sleep time based on your robot's physical turning speed)
//     left_motor.SetPercent(35);
//     right_motor.SetPercent(35);
//     Sleep(1.0); 
//     left_motor.Stop();
//     right_motor.Stop();

//     // 4. Align with side/back wall using switches 3 and 4 [cite: 122]
//     left_motor.SetPercent(35);
//     right_motor.SetPercent(-35);
//     while (bump_switch3.Value() == 1 || bump_switch4.Value() == 1) {
//         // Driving backwards to "square" against the wall
//     }
//     left_motor.Stop();
//     right_motor.Stop();

//     // Part 4
//     left_motor.SetPercent(-35);  // Recommended 25% power 
//     right_motor.SetPercent(35);

//     while (bump_switch1.Value() == 1 || bump_switch2.Value() == 1) {
//     // Keep driving forward while either switch is NOT pressed (Value == 1)
//     // This simple logic drives until both switches make contact
//     }
//     left_motor.Stop();
//     right_motor.Stop();
//     Sleep(0.5);

//     // 3. Turn backwards 90 degrees [cite: 122]
//     // (Adjust Sleep time based on your robot's physical turning speed)
//     left_motor.SetPercent(-35);
//     right_motor.SetPercent(-35);
//     Sleep(1.0); 
//     left_motor.Stop();
//     right_motor.Stop();

//     // 4. Align with side/back wall using switches 3 and 4 [cite: 122]
//     left_motor.SetPercent(35);
//     right_motor.SetPercent(-35);
//     while (bump_switch3.Value() == 1 || bump_switch4.Value() == 1) {
//         // Driving backwards to "square" against the wall
//     }
//     left_motor.Stop();
//     right_motor.Stop();

//     left_motor.SetPercent(-35);  // Recommended 25% power 
//     right_motor.SetPercent(35);

//     while (bump_switch1.Value() == 1 || bump_switch2.Value() == 1) {
//     // Keep driving forward while either switch is NOT pressed (Value == 1)
//     // This simple logic drives until both switches make contact
//     }
//     left_motor.Stop();
//     right_motor.Stop();

    
    



   



//     // Or just use the TestGUI function
    

// }