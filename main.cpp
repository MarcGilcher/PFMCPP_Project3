/*
Project 3 - Part 1a-d / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

Purpose: The entire purpose of this 5-part project is to get you 
writing C++ code that compiles and to reinforce the syntax habits 
that C++ requires.  
What you create in this project will be used as the basis of 
Project 5 in C++ Language Fundamentals.

************************
Part1 purpose:  Learn to write User-Defined Types (UDTs)

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps, all on the same branch.
    Part 1a: you will learn to think about an object in terms of 
    its sub-objects.
    
    Part 1b: you will write 4 un-related UDTs in plain english.
    
    Part 1c: you will write 1 UDT in plain english that will be 
    made of 5 related sub-objects.
    
    Part 1d: you will write plain-english UDTs for the 5 
    sub-objects that form the UDT defined in Part 1c.
    
    Part 1e: you will convert those 10 plain-english UDTs into code 
    that runs.
************************
*/

/*
Part 1a - Lesson
1) Look at the picture of the car interior (Part1a pic.jpg).  
    It's in the list of files on the left in Replit.
    Fill in the blanks below which break this car interior down 
    into sub-objects.

Several sub-objects are listed below that make up this car's interior.
    you're going to name several things that you'll find on each 
    subobject.
    you're going to name several things that each subobject can do.
    If you've seen "Family Feud", we are going to do what they do 
    in that show.

    A few blanks are filled in for you already.

Main Object: Car Interior
Sub Object 1: Steering Wheel
    Name 4 things you'll find on the:    Steering Wheel
        1) paddle shifters
        2) 'cruise control' controls
        3) 'phone answering' knob
        4) volume controls
    Name 2 things you can do with the:   Steering Wheel
        1) adjust cruise control settings.
        2) adjust volume setting
        
Sub Object 2: Instrument Cluster
    Name 4 things you'll find on the:   Instrument Cluster
        1) speedometer
        2) tachometer
        3) fuel gauge
        4) onboard computer display
    Name 3 things you can do with the:   Instrument Cluster
        1) observe car speed
        2) observe motor rpm
        3) observe tank capacity
    
Sub Object 3: Environment Controls
    Name 3 things you'll find on the:    Environment Controls
        1) temperature control
        2) fan speed control
        3) automatic cooling control
    Name 3 things you can do with the:   Environment Controls
        1) set the temperature
        2) set the fan speed
        3) turn on automatic cooling

Sub Object 4: Infotainment System
    Name 3 things you'll find on the:    Infotainment System
        1) radio
        2) navigation
        3) hand free telephone
    Name 3 things you can do with the:   Infotainment System
        1) set radio station
        2) start navigation
        3) start phone call

Sub Object 5: Seat 
    Name 3 things you'll find on the:    Seat
        1) backrest
        2) seating surface
        3) head rest
    Name 2 things you can do with the:   Seat
        1) adjust angle of backrest
        2) adjust position of seating surface
*/

/*
Part 1b - Lesson
Now you have some basic understanding of how to think of an object 
in terms of its sub-objects.

Next, write 4 un-related UDTs in plain english:
*/
/*
 example:  
 
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - the amount of water used per week.
        - amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior

    Notice that I did not use "has a vacuum cleaner" or "Has 
    eco-friendly cleaning supplies" as one of the properties.
    
    Writing 'has a ___" checks whether or not your object **has the 
    ability to do something**.
    Instead, I wrote "number of vacuum cleaners" and "number of 
    eco-friendly cleaning supplies".  
    
    These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' 
    (has a) as a member variable type.
    Instead, prefer the other primitive types.

    In addition to the usual primitives (covered in Project 2), you 
    can use 'std::string' to represent strings in this project.
 */

/*
===================
Part 1b Assignment: 1 Step
===================
1)  Fill in the 4 UDTs below with a random UDT in plain english.
    These 4 UDTs do not need to be related.
        a) For each plain-english UDT, write out 5 traits or 
        properties and 3 things it can do.
        b) remember: these properties will eventually become
        primitives.
        c) pick properties that can eventually be represented with 
        'int float double bool char std::string'.
*/



 /*
Part 1c - Lesson
You have just finished practicing writing out a UDT that is has 
5 properties and can perform 3 actions.  

Now you will write 1 UDT in plain english. 

This UDT will be different than the previous 4 you wrote: It will 
use UDTs to describe its 5 properties, as opposed to using C++ 
primitives to describe the 5 properties.

You will define these 5 'property' UDTs in Part 1d.
 */

 /*
Part 1c example:
    Cell Phone

    A Cell Phone is built using the following 5 UDTs:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or 
    "has a cpu" as one of the properties of the CellPhone.
    
    Writing 'has a ___" checks whether or not your object **has 
    the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific 
    objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' 
    (has a) as a member variable type.
    Instead, prefer the other primitive types.

    When you choose your 5 smaller parts, remember that each of 
    these 5 Sub Objects will need to be defined with 5 primitive 
    properties and 3 actions EACH.
*/
/*
===================
Part 1c assignment: 2 steps
===================

1) write the name of the primitive type you'll be using after each 
    property in UDTs 1-4 from Part 1b:
    pick properties that can be represented with 
    'int float double bool char std::string'.
    example: 
        Display:
            Number of Pixels (int)
            Amount of Power consumed (milliwatt-hours) (float)
            Brightness (double)
            area in cm2 (int)
            brand (std::string)

2) Fill in the 10th UDT below.
Define an object that is made of 5 sub-objects.
    These 5 sub-objects will not be defined using Primitives, but instead will be their own UDTs 
    you'll define these 5 sub-objects in Part 1d.
*/



/*
Part 1d - Lesson
You now know how to define a UDT that is composed of other UDT.
Now you will learn how to break down those sub-object UDTs into 
their 5 properties and 3 actions.

The goal of Part 1d is to get you to think about breaking down an 
object into smaller and smaller objects, until the smallest object 
is made of up only C++ primitives and std::string. 

Revisiting the previous example:  
Cell Phone

A Cell Phone is made up of the following 5 properties/sub-objects 
and 3 actions:
    Display
    Memory
    CPU
    Radio
    Applications
3 actions:
    make a call
    send a text
    run an application.

These 5 properties can be broken down into their own sub-objects 
and properties. 

If we break down the first property 'Display' into its 5 properties 
we get:
    brightness
    amount of power consumed.
    pixels
    width in cm
    height in cm

the Display's brightness can be represented with a Primitive, 
such as a double. 

The amount of power consumed can also be represented with a 
Primitive, such as a float or integer (i.e. 250mWa)

The 'pixels' property must be represented with an array of Pixel 
instances, as the screen has more than 1 row of pixels.
    Arrays have not been discussed and can't be used in this 
    project.
    Instead, we can use an Integer primitive to store the 
    Number of Pixels:

Display:
    Number of Pixels
    Amount of Power consumed (milliwatt-hours)
    Brightness
    width in cm
    height in cm

As you can see, the 'Display' UDT has been broken down to the 
point of being able to describe it with C++ primitives. 
*/

/*
===================
Part 1d assignment: 3 Parts.
===================

1) Fill in #5 - #9 below with plain-english UDTs for the 5 
properties you created for UDT #10. 
    example: 
        If #10's first property was 'Engine', then `Thing 5)` 
        will be `Engine`. 
        You will need to provide 5 properties and 3 member 
        functions of that Engine object in plain English.
        Remember to pick properties that can be represented 
        with 'int float double bool char std::string'.

2) write the name of the primitive type you'll be using after 
each property for UDTs 5 - 9.
    You already did this for UDTs 1-4 in Part 1c.
    Pick properties that can be represented with 
    'int float double bool char std::string'
    example: 
        Display:
            Number of Pixels (int)
            Amount of Power consumed (milliwatt-hours) (float)
            Brightness (double)
            width in cm (int)
            height in cm (int)

Step 3 is written below UDTs 5 - 9
*/



/*
===================
Part 1d assignment: Step 3
===================
You've just defined 10 UDTs!
4 of them are unrelated (UDTs 1-4).
5 of them form the sub-objects that make up the 10th UDT. 

MOVE THEM BELOW this block comment and put them in numerical order 
(1 - 10) starting on line 473
    DO NOT COPY. 
    I do not want to see 2 copies of your Plain-English UDTs.  
    I only want to see the 10 UDTs written BELOW this block comment, in numerical order (1 - 10).

After you have MOVED your 10 UDTs, send me a DM with your pull request link.
I will review the pseudo-code that you have written.
*/

/*
Thing 1) Midi Keyboard
5 properties:
    1) number of keys (int)
    2) number of usb ports (int)
    3) number of control knobs (int)
    4) input voltage level (double)
    5) housing color (std::string)
3 things it can do:
    1) transmit output midi data
    2) play arpeggio
    3) transmit midi controller data
 */

/*
Thing 2) Car
5 properties:
    1) number of wheels (int)
    2) number of seats (int)
    3) maximum velocity (double)
    4) amount of average fuel (double)
    5) maximum amount of load (double)
3 things it can do:
    1) drive forward
    2) comsume fuel
    3) transport passengers
 */

/*
Thing 3) Bicycle
5 properties:
    1) diameter of wheels (double)
    2) size of frame (double)
    3) number of gears (int)
    4) type of brakes (char())
    5) price (double)
3 things it can do:
    1) transport a human
    2) shift gear
    3) decelarate
 */

/*
Thing 4) Player
5 properties:
    1) name of the player (st::string)
    2) start position x coordinate (float)
    3) start position y coordinate (float)
    4) speed in x direction (double)
    5) time since last shoot (int)
3 things it can do:
    1) move in x direction
    2) move in y direction
    3) shoot bullet
 */

/*
Thing 5) Woofer
5 properties:
    1) cone diameter in cm (int)
    2) resonance frequency in Hertz (doulbe)
    3) overall lenght in cm (int)
    4) membrane area in cm² (double)
    5) sound pressure level in dB/W/m (float)
3 things it can do:
    1) converts electrical energy into air vibration
    2) moves the air in the tube
    3) reproduces the low frequencies
 */

/*
Thing 6) Tweeter
5 properties:
    1) dome diameter in cm (double)
    2) voice coil diameter in cm (double)
    3) resonance frequency in hz (double)
    4) sound pressure level in dB/W/m (float)
    5) dc resistance in ohm (double)
3 things it can do:
    1) produce the upper range of sound
    2) convert electrical signal to acoustical waveforms
    3) connects to an amplifier
 */

/*
Thing 7) Enclosure
5 properties:
    1) lenght in cm (int)
    2) width in cm (int)
    3) height in cm (int)
    4) volume in liter (float)
    5) weight in grams (int)
3 things it can do:
    1) provide resonance volume
    2) provide mounting for woofer
    3) provide mounting for terminal
 */

/*
Thing 8) Terminal
5 properties:
    1) number of connections (int)
    2) number of fixation points (int)
    3) lenght in cm (int)
    4) width in cm (int)
    5) number of switches (int)
3 things it can do:
    1) provide ports
    2) provide switches
    3) control volume
 */

/*
Thing 9) Amplifier
5 properties:
    1) amount of power consumed in watt-hours (float)
    2) number of inputs (int)
    3) maximum output power in watt (double)
    4) lenght in cm (int)
    5) width in cm (int)
3 things it can do:
    1) amplify an electrical signal
    2) consume electrical power
    3) split the audio signal into frequency bands
 */

/*
Thing 10) Active Loudspeaker Box
5 properties:
    1) Woofer
    2) Tweeter
    3) Enclosure
    4) Terminal
    5) Amplifier
3 things it can do:
    1) play audio signal
    2) amplify audio signal
    3) comsume electrical power
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
