#include <FEHLCD.h>
#include <FEHIO.h>
#include <FEHSD.h>
#include <FEHMotor.h>
#include <Arduino.h>
#include <FEHUtility.h>

// Declarations for analog optosensors
FEHMotor left_motor(FEHMotor::Motor0,9.0);
FEHMotor right_motor(FEHMotor::Motor1,9.0);
AnalogInputPin right_opto(FEHIO::Pin2);
AnalogInputPin middle_opto(FEHIO::Pin3);
AnalogInputPin left_opto(FEHIO::Pin4);

void ERCMain()
{
    int x, y; //for touch screen

    //Initialize the screen
    LCD.Clear(BLACK);
    LCD.SetFontColor(WHITE);

    LCD.WriteLine("Analog Optosensor Testing");
    LCD.WriteLine("Touch the screen");
    while(!LCD.Touch(&x,&y)); //Wait for screen to be pressed
    while(LCD.Touch(&x,&y)); //Wait for screen to be unpressed

    // Record values for optosensors on and off of the straight line
    // Left Optosensor on straight line
    LCD.Clear(BLACK);
    LCD.WriteLine("Place left optosensor on straight line");
    Sleep(0.25); // Wait to avoid double input
    LCD.WriteLine("Touch screen to record value (1/12)");
    while(!LCD.Touch(&x,&y)); //Wait for screen to be pressed
    while(LCD.Touch(&x,&y)); //Wait for screen to be unpressed
    // Write the value returned by the optosensor to the screen
    float leftOptosensorValue = left_opto.Value();
    LCD.Write("Left Optosensor Value:");
    LCD.WriteLine(leftOptosensorValue);

    // Left Optosensor off straight line
    LCD.Clear(BLACK);
    LCD.WriteLine("Place left optosensor off straight line");
    Sleep(0.25); // Wait to avoid double input
    LCD.WriteLine("Touch screen to record value (2/12)");
    while(!LCD.Touch(&x,&y)); //Wait for screen to be pressed
    while(LCD.Touch(&x,&y)); //Wait for screen to be unpressed
    // Write the value returned by the optosensor to the screen
    // <ADD CODE HERE>
    
    // Middle Optosensor on straight line
    LCD.Clear(BLACK);
    if(middle_opto.Value() > 3.25 && middle_opto.Value() < 3.90){
        LCD.WriteLine("Middle Optosensor is on the line");
    }
    else{
        LCD.WriteLine("Middle Optosensor is off the line");
    }
    // Left Optosensor on curved line
    LCD.Clear(BLACK);
    if(left_opto.Value() > 3.25 && left_opto.Value() < 3.90){
        LCD.WriteLine("Left Optosensor is on the line");
    }
    else{
        LCD.WriteLine("Left Optosensor is off the line");
    }
    //Right photosensor
    LCD.Clear(BLACK);
    if(right_opto.Value() > 3.25 && right_opto.Value() < 3.90){
        LCD.WriteLine("Right Optosensor is on the line");
    }
    else{
        LCD.WriteLine("Right Optosensor is off the line");
    }


    // Repeat process for remaining optosensors, and repeat all three for the curved line values
    // <ADD CODE HERE>


    // Print end message to screen
    LCD.Clear(BLACK);
    LCD.WriteLine("Test Finished");
}

