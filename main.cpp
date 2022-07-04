/*
Project 3 - Part 1e / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct below your plain-english UDT. i.e.:

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#if false //ignore these #if #endif lines. they're just here to prevent compiler errors.
struct CarWash
{

};
#endif
/*
    - Do this for all 10 UDTs

2) Below your plain-english UDT, Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    - Do this for all 10 UDTs
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
    - Do this for all 10 UDTs
    - if your functions return something other than 'void', add a comment explaining what is being returned.  see the example code below.
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
    - Do this for all 10 UDTs
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
    if your code produces a [-Wpadded] warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function.  it has multiple arguments, some with default values.
        //the parameter names are related to the work the function will perform.
        void fillTank(float costPerGallon, double fuelAmountInGallons = 2.0, bool requiresDiesel = false);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips); //3) returns the number of miles traveled
    };

    //wash and wax car
    void washAndWaxCar(Car carA); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage); //3) returns the total amount charged.
    //detail the car interior
    void detailInterior(Car carB);
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  

    /*
    Pay attention to the member functions that take an instance of 'Car'
    Notice that there is a member variable of the same type.

    It makes sense to pass a Car to the function 'washAndWaxCar' because car washes service MANY cars
    However, they only service ONE car at a time.
    the carBeingServiced's value would change every time you wash and wax the car. 

    I see many students who write code emulating this format, but their usage does not make logical sense.  
    Consider the following snippet:

    struct SoccerTeam
    {
        struct Manager
        {
            ...
        };

        // train their skills
        void trainPlayerSkills(Manager managerA);
    
        Manager teamManager;
    };

    It does not make sense to pass in a new Manager whenever you are going to train your team players.
    Soccer teams have ONE manager.

    a much more relevant usage would be adding a member function that hires a new manager:

    struct SoccerTeam
    {
        struct Manager
        {
            ...
        };

        void hireNewManager(Manager newManager);
    
        Manager teamManager;
    };

    We can safely assume that the 'Manager' instance that is being passed in will be replacing the current 'teamManager' variable without looking at any other code.
    This is because the function name and function argument clearly indicate what they are/what they do.

    Your function names and parameter names should make LOGICAL SENSE.
    Readers of your code should be able to INTUITIVELY understand what your function implementations will do without actually seeing the implementations.

    Keep this in mind when you define your UDTs in this project part.
    */
};


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
