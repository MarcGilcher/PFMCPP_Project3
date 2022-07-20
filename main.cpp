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

struct Person
{
    int age;
    int height;
    float hairLenght;
    float GPA;
    unsigned int SATscore;
    int distanceTraveled;
    int systemClockTicker;

    struct Foot
    {
        int stepCounter = 0;
        int averageStepLenght;

        void stepForward();
        int stepSize();
    };

    Foot leftFoot;
    Foot rightFoot;

    void run( int howFast, bool startWithLeftFoot);
};

void Person::Foot::stepForward()
{
   stepCounter += 1; 
}

int Person::Foot::stepSize()
{
    return averageStepLenght;
}

void Person::run( int howFast, bool startWithLeftFoot)
{
    if( startWithLeftFoot == true )
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTraveled += leftFoot.stepSize() + rightFoot.stepSize();
    howFast = distanceTraveled / systemClockTicker;
}

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

struct MidiKeyboard
{
    int numKeys = 61;
    int numUsbPorts = 2;
    int numControlKnobs = 8;
    double inputVoltageLevel = 5.5;
    std::string housingColor = "black";

    void transmitOutputMidiData (int outputMidiChannel);
    void playArp (int arpPatternNumber);
    void transmitMidiControllerData (int midiControlChangeMessageNumber);

};

void MidiKeyboard::transmitOutputMidiData( int outputMidiChannel )
{
    outputMidiChannel = 1;
    //return nothing
}

void MidiKeyboard::playArp( int arpPatternNumber )
{
    arpPatternNumber = 1;
    //return nothing
}

void MidiKeyboard::transmitMidiControllerData( int midiControlChangeMessageNumber )
{
    midiControlChangeMessageNumber = 100;
    //return nothing
}

struct Car
{
    int numWheels = 4;
    int numSeats = 5;
    double maxVelocity = 210.5;
    double averageFuel = 6.5;
    double maxLoad = 215.5;

    struct Engine
    {
        bool isOriginalPart = true;
        std::string engineCode = "77AA3B";
        int numCylinder = 6;
        double strokeVolume = 3.2;
        int numValves = 16;

        void burnFuel(std::string fuelType, int maxOctaneNumber = 98);
        void rotateAxles(double maxTorque, bool isFourWheelDrive = false);
        double compressAir(double resonanceFrequency);
    };

    void driveForward(int numGear, bool isBrakeReleased = true);
    double consumeFuel(bool pedalKickdown = true);
    void changeSparePart(Engine newEngine);

    Engine engineBeingChanged;
};

void Car::Engine::burnFuel(std::string fuelType, int maxOctaneNumber )
{
    if( maxOctaneNumber == 98 )
    {
        fuelType = "SuperPlus";
    }
    //return nothing
}

void Car::Engine::rotateAxles(double maxTorque, bool isFourWheelDrive)
{
    if( isFourWheelDrive == true )
    {
        maxTorque += 10.5;
    }
    //return nothing
}

double Car::Engine::compressAir(double resonaceFrequency)
{
    double pressure = 0.0;
    pressure = resonaceFrequency * 10;
    return pressure; 
}

void Car::driveForward(int numGear, bool isBrakeReleased)
{
    if( isBrakeReleased == true )
    {
        numGear = 1;
    }
    //return nothing
}

double Car::consumeFuel(bool pedalKickdown)
{
    if( pedalKickdown == true )
    {
        averageFuel *= 2;
    }
    return averageFuel;
}

void Car::changeSparePart(Car::Engine newEngine)
{
    newEngine = engineBeingChanged;
    //return nothing
}

struct Bicycle
{
    double diameterWheels = 28.5;
    double sizeFrame = 40.5;
    int numGears = 21;
    std::string typeBrakes = "disc";
    double price = 500.50;

    void transportHuman();
    int shiftGear(int numActualGear);
    void decelarateBike();
};

void Bicycle::transportHuman()
{
    //return nothing
}

int Bicycle::shiftGear(int numActualGear)
{
    int lastgear = numActualGear;
    numActualGear = lastgear + 1;
    return numActualGear;
}

void Bicycle::decelarateBike()
{
    //return nothing
}

struct Player
{
    std::string namePlayer = "Player1";
    float startXPos = 0.0f;
    float startYPos = 10.05f;
    double speedX = 10.5;
    int timeLastShoot = 5;

    struct Weapon
    {
        bool isWeaponFreeZone = false;
        std::string weaponType = "Shotgun";
        int numBullets = 10;
        int damage = 100;
        int noiseType = 2;

        void shootBullet(double bulletCoordinateX, double bulletCoordinateY);
        void makeNoise(bool isSoundDeviceActive = true);
        void changeBulletPattern(int bulletPatternNum);
    };

    void moveX();
    void moveY();
    void getWeaponUpgrade(Weapon newWeapon);

    Weapon weaponUpgrade;
};

void Player::Weapon::shootBullet(double bulletCoordinateX, double bulletCoordinateY)
{
    bulletCoordinateX += 1;
    bulletCoordinateY += 1;
    //return nothing
}

void Player::Weapon::makeNoise(bool isSoundDeviceActive)
{
    if( isSoundDeviceActive == true)
    {
        noiseType = 1;
    }
    //return nothing
}

void Player::Weapon::changeBulletPattern(int bulletPatternNum)
{
        bulletPatternNum += 1;
        //return nothing    
}

void Player::moveX()
{
    //return nothing
}

void Player::moveY()
{
    //return nothing
}

void Player::getWeaponUpgrade(Player::Weapon newWeapon)
{
    newWeapon = weaponUpgrade;
    //return nothing
}

struct Woofer
{
    int coneDiameter = 17;
    double resFreqWoofer = 50.5;
    int overallLenght = 25;
    double menbraneArea = 142.4;
    float splWoofer = 98.05f;

    void vibrateAir();
    void driveTube();
    void playLowFreq();
};

void Woofer::vibrateAir()
{
    //return nothing
}

void Woofer::driveTube()
{
    //return nothing
}

void Woofer::playLowFreq()
{
    //return nothing
}

struct Tweeter
{
    double domeDiameter = 25.4;
    double voiceCoilDiameter = 8.4;
    double resFreqTweeter = 3850.5;
    float splTweeter = 102.12f;
    double dcResistanceTweeter = 3.8;

    void playHighFrq(int splitFreqTweeter);
    void convertSignalToWaveform();
    void connectToAmp(int lenghtWire);
};

void Tweeter::playHighFrq(int splitFreqTweeter)
{
    splitFreqTweeter += 500;
    //return nothing
}

void Tweeter::convertSignalToWaveform()
{
    //return nothing
}

void Tweeter::connectToAmp(int lenghtWire)
{
    int completeLenghtWires = 0;
    completeLenghtWires = lenghtWire * 2;
    //return nothing
}

struct Enclosure
{
    int lenghtEnclosure = 40;
    int widthEnclosure = 20;
    int heightEnclosure = 30;
    float volEnclosure = 24;
    int weightEnclosure = 2500;

    void provideVolume();
    void wooferMount();
    void terminalMount();
};

void Enclosure::provideVolume()
{
    //return nothing
}

void Enclosure::wooferMount()
{
    //return nothing
}

void Enclosure::terminalMount()
{
    //return nothing
}

struct Terminal
{
    int numConnections = 4;
    int numFixations = 4;
    int lenghtTerminal = 5;
    int widthTerminal = 7;
    int numSwitchesTerminal = 2;

    void providePorts();
    void provideSwitches();
    void setVolume();
};

void Terminal::providePorts()
{
    //return nothing
}

void Terminal::provideSwitches()
{
    //return nothing
}

void Terminal::setVolume()
{
    //return nothing
}

struct Amplifier
{
    float consumedPower = 200.05f;
    int numInputsAmp = 4;
    double maxOutPower = 200.5;
    int lenghtAmp = 10;
    int widthAmp = 10;

    void amplifySignal();
    void consumePower();
    void splitFreqSignal(double splitFreqLow, double splitFreqHigh);
};

void Amplifier::amplifySignal()
{
    //return nothing
}

void Amplifier::consumePower()
{
    //return nothing
}

void Amplifier::splitFreqSignal(double splitFreqLow, double splitFreqHigh)
{
    splitFreqLow = 150.5;
    splitFreqHigh = splitFreqLow + 2500.5;
    //return nothing
}

struct ActiveLoudspeakerBox
{
    Woofer wooferSmall;
    Tweeter tweeterMid;
    Enclosure ClosedBoxA;
    Terminal terminalA;
    Amplifier StudioClassA;

    void playAudioSignal(bool signalExists = true);
    void amplifyAudioSignal(Amplifier ampA);
    double consumeElectricalPower(double voltageLevel);
};

void ActiveLoudspeakerBox::playAudioSignal(bool signalExists)
{
    if( signalExists == true)
    {
        std::cout << "signalYES";
    }
    //return nothing
}

void ActiveLoudspeakerBox::amplifyAudioSignal(Amplifier ampA)
{
    ampA.amplifySignal();
    //return nothing
}

double ActiveLoudspeakerBox::consumeElectricalPower(double voltageLevel)
{
    voltageLevel = StudioClassA.maxOutPower / 2;
    return voltageLevel;
}

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
