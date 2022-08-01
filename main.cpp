/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
 1) Add a constructor for each User-Defined-Type.
    The constructor should be the first declaration in your UDT, before all member variables and member functions.
    add a std::cout message in the constructor that prints out the name of the class being constructed.  
    When you run your code, you'll see the order that your objects are created in the program output. 
 
 2) For each User-Defined-Type:
        amend some of the member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of EACH of your user-defined types in the main() function.  
    You should have at least 12 different variables declared in main(), because you have written 12 different types (including the nested types)

 4) For each instantiated UDT: 
        call each of that instance's member functions.
        You're doing this to show that your code doesn't produce warnings when you call the functions that take arguments.
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int thing = 0; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    std::cout << "UDT being constructed!" << std::endl; //1) 
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << thing << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'thing' equal to 0? " << (foo.thing == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.




struct MidiKeyboard
{
    MidiKeyboard();

    int numKeys = 61;
    int numUsbPorts = 2;
    int numControlKnobs = 8;
    double inputVoltageLevel = 5.5;
    std::string housingColor = "black";

    void transmitOutputMidiData (int outputMidiChannel);
    void playArp (int arpPatternNumber);
    void transmitMidiControllerData (int midiControlChangeMessageNumber);
};

MidiKeyboard::MidiKeyboard()
{
    std::cout << "MidiKeyboard being constructed!" << std::endl;
}

void MidiKeyboard::transmitOutputMidiData( int outputMidiChannel )
{
    outputMidiChannel = 1;
}

void MidiKeyboard::playArp( int arpPatternNumber )
{
    arpPatternNumber = 1;
}

void MidiKeyboard::transmitMidiControllerData( int midiControlChangeMessageNumber )
{
    midiControlChangeMessageNumber = 100;
}

struct Car
{
    Car();

    int numWheels = 4;
    int numSeats = 5;
    double maxVelocity = 210.5;
    double averageFuel = 6.5;
    double maxLoad = 215.5;

    struct Engine
    {
        Engine();
        
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

Car::Car()
{
    std::cout << "Car being constructed!" << std::endl;
}

Car::Engine::Engine()
{
    std::cout << "Engine being constructed!" << std::endl;
}

void Car::Engine::burnFuel(std::string fuelType, int maxOctaneNumber )
{
    if( maxOctaneNumber == 98 )
    {
        fuelType = "SuperPlus";
    }
}

void Car::Engine::rotateAxles(double maxTorque, bool isFourWheelDrive)
{
    if( isFourWheelDrive == true )
    {
        maxTorque += 10.5;
    }
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
}

struct Bicycle
{
    Bicycle();

    double diameterWheels = 28.5;
    double sizeFrame = 40.5;
    int numGears = 21;
    std::string typeBrakes = "disc";
    double price = 500.50;

    void transportHuman();
    int shiftGear(int numActualGear);
    void decelarateBike();
};

Bicycle::Bicycle()
{
    std::cout << "Bicycle being constructed!" << std::endl;
}

void Bicycle::transportHuman()
{
}

int Bicycle::shiftGear(int numActualGear)
{
    int lastgear = numActualGear;
    numActualGear = lastgear + 1;
    return numActualGear;
}

void Bicycle::decelarateBike()
{
}

struct Player
{
    Player();

    std::string namePlayer = "Player1";
    float startXPos = 0.0f;
    float startYPos = 10.05f;
    double speedX = 10.5;
    int timeLastShoot = 5;

    struct Weapon
    {
        Weapon();
        
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

Player::Player()
{
    std::cout << "Player being constructed!" << std::endl;
}

Player::Weapon::Weapon()
{
    std::cout << "Weapon being constructed!" << std::endl;
}

void Player::Weapon::shootBullet(double bulletCoordinateX, double bulletCoordinateY)
{
    bulletCoordinateX += 1;
    bulletCoordinateY += 1;
}

void Player::Weapon::makeNoise(bool isSoundDeviceActive)
{
    if( isSoundDeviceActive == true)
    {
        noiseType = 1;
    }
}

void Player::Weapon::changeBulletPattern(int bulletPatternNum)
{
    bulletPatternNum += 1;  
}

void Player::moveX()
{
    std::cout << "Player " << namePlayer << " moved in X" << std::endl;
}

void Player::moveY()
{
    std::cout << "Player " << namePlayer << " moved in Y" << std::endl;
}

void Player::getWeaponUpgrade(Player::Weapon newWeapon)
{
    newWeapon = weaponUpgrade;
}

struct Woofer
{
    Woofer();

    int coneDiameter = 17;
    double resFreqWoofer = 50.5;
    int overallLenght = 25;
    double menbraneArea = 142.4;
    float splWoofer = 98.05f;

    void vibrateAir();
    void driveTube();
    void playLowFreq();
};

Woofer::Woofer()
{
    std::cout << "Woofer being constructed!" << std::endl;
}

void Woofer::vibrateAir()
{
    std::cout << "Woofer SPL is in Hz: " << splWoofer << std::endl;
}

void Woofer::driveTube()
{
    std::cout << "Resonance Frequency is in Hz: " << resFreqWoofer << std::endl;
}

void Woofer::playLowFreq()
{
    std::cout << "Woofer starts playing" << std::endl;
}

struct Tweeter
{
    Tweeter();

    double domeDiameter = 25.4;
    double voiceCoilDiameter = 8.4;
    double resFreqTweeter = 3850.5;
    float splTweeter = 102.12f;
    double dcResistanceTweeter = 3.8;

    void playHighFrq(int splitFreqTweeter);
    void convertSignalToWaveform();
    void connectToAmp(int lenghtWire);
};

Tweeter::Tweeter()
{
    std::cout << "Tweeter being constructed!" << std::endl;
}

void Tweeter::playHighFrq(int splitFreqTweeter)
{
    splitFreqTweeter += 500;
}

void Tweeter::convertSignalToWaveform()
{
    std::cout << "start converting" << std::endl;
}

void Tweeter::connectToAmp(int lenghtWire)
{
    int completeLenghtWires = 0;
    completeLenghtWires = lenghtWire * 2;
}

struct Enclosure
{
    Enclosure();

    int lenghtEnclosure = 40;
    int widthEnclosure = 20;
    int heightEnclosure = 30;
    float volEnclosure = 24;
    int weightEnclosure = 2500;

    void provideVolume();
    void wooferMount();
    void terminalMount();
};

Enclosure::Enclosure()
{
    std::cout << "Enclosure being constructed!" << std::endl;
}

void Enclosure::provideVolume()
{
    std::cout << "Volume is in Liter: " << volEnclosure << std::endl;
}

void Enclosure::wooferMount()
{
    std::cout << "Maximum space for woofer is in cm: " << widthEnclosure << std::endl;
}

void Enclosure::terminalMount()
{
    std::cout << "Use a proper terminal" << std::endl;
}

struct Terminal
{
    Terminal();

    int numConnections = 4;
    int numFixations = 4;
    int lenghtTerminal = 5;
    int widthTerminal = 7;
    int numSwitchesTerminal = 2;

    void providePorts();
    void provideSwitches();
    void setVolume();
};

Terminal::Terminal()
{
    std::cout << "Terminal being constructed!" << std::endl;
}

void Terminal::providePorts()
{
    std::cout << numConnections << " Connections are available" << std::endl;
}

void Terminal::provideSwitches()
{
    std::cout << "Number of Switches: " << numSwitchesTerminal << std::endl;
}

void Terminal::setVolume()
{
    std::cout << "Define the Volume here" << std::endl;
}

struct Amplifier
{
    Amplifier();

    float consumedPower = 50.05f;
    int numInputsAmp = 4;
    double maxOutPower = 200.5;
    int lenghtAmp = 10;
    int widthAmp = 10;

    void amplifySignal();
    void consumePower();
    void splitFreqSignal(double splitFreqLow, double splitFreqHigh);
};

Amplifier::Amplifier()
{
    std::cout << "Amplifier being constructed!" << std::endl;
}

void Amplifier::amplifySignal()
{
    std::cout << "Check maximum Amplifier Ouput Power in Watt: " << maxOutPower << std::endl;
}

void Amplifier::consumePower()
{
    std::cout << "Consumed power is in kwh: " << consumedPower << std::endl;
}

void Amplifier::splitFreqSignal(double splitFreqLow, double splitFreqHigh)
{
    splitFreqLow = 150.5;
    splitFreqHigh = splitFreqLow + 2500.5;
}

struct ActiveLoudspeakerBox
{
    ActiveLoudspeakerBox();

    Woofer wooferSmall;
    Tweeter tweeterMid;
    Enclosure ClosedBoxA;
    Terminal terminalA;
    Amplifier StudioClassA;

    void playAudioSignal(bool signalExists = true);
    void amplifyAudioSignal(Amplifier ampA);
    double consumeElectricalPower(double voltageLevel);
};

ActiveLoudspeakerBox::ActiveLoudspeakerBox()
{
    std::cout << "ActiveLoudspeakerBox being constructed!" << std::endl;
}

void ActiveLoudspeakerBox::playAudioSignal(bool signalExists)
{
    if( signalExists == true)
    {
        std::cout << "signalYES" << std::endl;
    }
}

void ActiveLoudspeakerBox::amplifyAudioSignal(Amplifier ampA)
{
    ampA.amplifySignal();
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
    Example::main();

    MidiKeyboard MK61;
    MK61.transmitOutputMidiData(6);
    MK61.playArp(10);
    MK61.transmitMidiControllerData(27);
    std::cout << "The Keyboard has : " << MK61.numKeys << " Keys" << std::endl;
    std::cout << "Available Color : " << MK61.housingColor << std::endl;
    
    Car Truck;
    Car::Engine DieselEngine;
    
    Truck.driveForward(1, true);
    Truck.consumeFuel(true);
    Truck.changeSparePart(DieselEngine);
    std::cout << "The car has " << Truck.numWheels << " Wheels and " << Truck.numSeats << " Seats." << std::endl;
    std::cout << "Amount of consumed fuel: " << Truck.averageFuel << " Liters" <<std::endl;
    
    DieselEngine.burnFuel("Diesel", 98);
    DieselEngine.rotateAxles(180.5, true);
    DieselEngine.compressAir(800.35);
    std::cout << "The engine Code is: " << DieselEngine.engineCode << std::endl;

    Bicycle sportBicycle;
    sportBicycle.transportHuman();
    sportBicycle.shiftGear(5);
    sportBicycle.decelarateBike();
    std::cout << "The actual gear is nr. " << sportBicycle.shiftGear(5) << std::endl;

    Player player1;
    Player::Weapon Railgun;
    
    player1.moveX();
    player1.moveY();
    player1.getWeaponUpgrade(Railgun);
    std::cout << "Player Name: " << player1.namePlayer << std::endl;
    
    Railgun.shootBullet(10.5,20.0);
    Railgun.makeNoise(true);
    Railgun.changeBulletPattern(2);

    Woofer woofer1;
    woofer1.vibrateAir();
    woofer1.driveTube();
    woofer1.playLowFreq();
    std::cout << "The size classification of the woofer is: " << woofer1.coneDiameter << std::endl;
    
    Tweeter domeTweeter1;
    domeTweeter1.playHighFrq(2500);
    domeTweeter1.convertSignalToWaveform();
    domeTweeter1.connectToAmp(5);
    std::cout << "Dome Diameter is: " << domeTweeter1.domeDiameter << " mm" << std::endl;

    Enclosure box1;
    box1.provideVolume();
    box1.wooferMount();
    box1.terminalMount();

    Terminal terminal1;
    terminal1.providePorts();
    terminal1.provideSwitches();
    terminal1.setVolume();
    
    Amplifier amp1;
    amp1.amplifySignal();
    amp1.consumePower();
    amp1.splitFreqSignal(100.0, 2000.5);
    
    ActiveLoudspeakerBox speaker1;
    speaker1.playAudioSignal(true);
    speaker1.amplifyAudioSignal(amp1);
    speaker1.consumeElectricalPower(100);
    std::cout << "This Loudspeaker contains a " << woofer1.coneDiameter << "cm Woofer" << std::endl;
    
    
    std::cout << "good to go!" << std::endl;
}
