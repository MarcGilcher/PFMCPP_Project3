 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
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
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(float costPerGallon, double fuelAmountInGallons = 2.0, bool requiresDiesel = false);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have 'unused parameter' warnings, you aren't using one of your function parameters in your implementation.
    Solution: use the parameter in your implementation.

    If you have 'shadows a field of <classname>' warnings, a local variable in the function has the same name as a class member.  
    This local variable could also be a function parameter with the same name as the class member.
    Solution: change the local variable's name so it is different from the class member variable's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
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

struct MidiKeyboard
{
    //number of keys (int)
    int numKeys = 61;
    //number of usb ports (int)
    int numUsbPorts = 2;
    //number of control knobs (int)
    int numControlKnobs = 8;
    //input voltage level (double)
    double inputVoltageLevel = 5.5;
    //housing color (std::string)
    std::string housingColor = "black";


    //transmit output midi data
    void transmitOutputMidiData (int outputMidiChannel);
    //play arpeggio
    void playArp (int arpPatternNumber);
    //transmit midi controller data
    void transmitMidiControllerData (int midiControlChangeMessageNumber);

};

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

struct Car
{

    //number of wheels (int)
    int numWheels = 4;
    //number of seats (int)
    int numSeats = 5;
    //maximum velocity in km/h (double)
    double maxVelocity = 210.5;
    //amount of average fuel per 100km in liter (double)
    double averageFuel = 6.5;
    //maximum amount of load in kg (double)
    double maxLoad = 215.5;

    struct Engine //nested class/struct in stuct Car
    {
        //member variables
        bool isOriginalPart = true;
        std::string engineCode = "77AA3B";
        int numCylinder = 6;
        double strokeVolume = 3.2; // in Liter
        int numValves = 16;

        //member functions
        void burnFuel(std::string fuelType, int maxOctaneNumber = 98);
        void rotateAxles(double maxTorque, bool isFourWheelDrive = false);
        double compressAir(float resonanceFrequency); // returns the actual calculated pressure level in bar

    };

    //drive forward
    void driveForward(int numGear, bool isBrakeReleased = true);
    //comsume fuel / returns the actual volume flow in liter per second
    double consumeFuel(bool pedalKickdown = true);
    //exchange parts / changed member function because of logical sense of having only one engine at a time
    void changeSparePart(Engine newEngine);

    Engine engineBeingChanged;
};

/*
Thing 3) Bicycle
5 properties:
    1) diameter of wheels (double)
    2) size of frame (double)
    3) number of gears (int)
    4) type of brakes (std::string)
    5) price (double)
3 things it can do:
    1) transport a human
    2) shift gear
    3) decelarate
 */

struct Bicycle
{

    //diameter of wheels in inch (double)
    double diameterWheels = 28.5;
    //size of frame in inch (double)
    double sizeFrame = 40.5;
    //number of gears (int)
    int numGears = 21;
    //type of brakes (std::string)
    std::string typeBrakes = "disc";
    //price (double)
    double price = 500.50;

    //transport a human
    void transportHuman();
    //shift gear
    int shiftGear(int numActualGear); // returns number of new gear
    //decelarate
    void decelarateBike();

};

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

struct Player
{

    //name of the player (st::string)
    std::string namePlayer = "Player1";
    //start position x coordinate (float)
    float startXPos = 0.0f;
    //start position y coordinate (float)
    float startYPos = 10.05f;
    //speed in x direction (double)
    double speedX = 10.5;
    //time since last shoot defined with internal clock-ticker (int)
    int timeLastShoot = 5;

    struct Weapon //player can get different weapons e.g. in an arcade game
    {
        //member variables
        bool isWeaponFreeZone = false;
        std::string weaponType = "Shotgun";
        int numBullets = 10;
        int damage = 100;
        int noiseType = 2;

        //member functions of nested class
        void shootBullet(double bulletCoordinateX, double bulletCoordinateY);
        void makeNoise(bool isSoundDeviceActive = true);
        void changeBulletPattern(int bulletPatternNum);

    };

    //move in x direction
    void moveX();
    //move in y direction
    void moveY();
    //get Weapons including upgrades
    void getWeaponUpgrade(Weapon newWeapon);

    Weapon weaponUpgrade;

};

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

struct Woofer
{

    //cone diameter in cm (int)
    int coneDiameter = 17;
    //resonance frequency in Hertz (doulbe)
    double resFreqWoofer = 50.5;
    //overall lenght in cm (int)
    int overallLenght = 25;
    //membrane area in cm² (double)
    double menbraneArea = 142.4;
    //sound pressure level in dB/W/m (float)
    float splWoofer = 98.05f;

    //converts electrical energy into air vibration
    void vibrateAir();
    //vibrates the air in the tube
    void driveTube();
    //reproduces the low frequencies
    void playLowFreq();

};

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

struct Tweeter
{

    //dome diameter in cm (double)
    double domeDiameter = 25.4;
    //voice coil diameter in cm (double)
    double voiceCoilDiameter = 8.4;
    //resonance frequency in hz (double)
    double resFreqTweeter = 3850.5;
    //sound pressure level in dB/W/m (float)
    float splTweeter = 102.12f;
    //dc resistance in ohm (double)
    double dcResistanceTweeter = 3.8;

    //produce the upper range of sound
    void playHighFrq(int splitFreqTweeter);
    //convert electrical signal to acoustical waveforms
    void convertSignalToWaveform();
    //connects to an amplifier
    void connectToAmp(int lenghtWire);

};

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

struct Enclosure
{

    //lenght in cm (int)
    int lenghtEnclosure = 40;
    //width in cm (int)
    int widthEnclosure = 20;
    //height in cm (int)
    int heightEnclosure = 30;
    //volume in liter (float)
    float volEnclosure = 24;
    //weight in grams (int)
    int weightEnclosure = 2500;

    //provide defined volume
    void provideVolume();
    //provide mounting for woofer
    void wooferMount();
    //provide mounting for terminal
    void terminalMount();

};

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

struct Terminal
{

    //number of connections (int)
    int numConnections = 4;
    //number of fixation points (int)
    int numFixations = 4;
    //lenght in cm (int)
    int lenghtTerminal = 5;
    //width in cm (int)
    int widthTerminal = 7;
    //number of switches (int)
    int numSwitchesTerminal = 2;

    //provide ports
    void providePorts();
    //provide switches
    void provideSwitches();
    //control volume
    void setVolume();

};

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

struct Amplifier
{

    //amount of power consumed in watt-hours (float)
    float consumedPower = 200.05f;
    //number of inputs (int)
    int numInputsAmp = 4;
    //maximum output power in watt (double)
    double maxOutPower = 200.5;
    //lenght in cm (int)
    int lenghtAmp = 10;
    //width in cm (int)
    int widthAmp = 10;

    //amplify an electrical signal
    void amplifySignal();
    //consume electrical power
    void consumePower();
    //split the audio signal into frequency bands
    void splitFreqSignal(double splitFreqLow, double splitFreqHigh);

};

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

struct ActiveLoudspeakerBox
{

    //Woofer
    Woofer wooferSmall;
    //Tweeter
    Tweeter tweeterMid;
    //Enclosure
    Enclosure ClosedBoxA;
    //Terminal
    Terminal terminalA;
    //Amplifier
    Amplifier StudioClassA;

    //play audio signal
    void playAudioSignal(bool signalExists = true);
    //amplify audio signal
    void amplifyAudioSignal(Amplifier ampA);
    //comsume electrical power
    double consumeElectricalPower(double voltageLevel); //returns average power consumption

};

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
