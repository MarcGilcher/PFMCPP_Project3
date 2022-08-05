/*
 Project 3 - Part 4 / 5
 video: Chapter 2 - Part 9
 Member initialization tasks

 Create a branch named Part4
 
 1) do this for each class in this project: 
    initialize some of your member variables either in-class or in the Constructor member initializer list.
    Show me that you understand how to use these language features.

 2) make some of your member functions use those initialized member variables via std::cout statements.
 
 3) click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

#include <iostream>
namespace Example 
{
struct UDT  
{
    int a; //a member variable that IS NOT initialized in-class
    float b { 2.f }; //a member variable that IS initialized in-class
    UDT() : a(0) { } // 'constructor-initializer-list' initializing the member that wasn't initialized in-class.
    void printAandB()  //the member function
    {
        std::cout << "UDT::printAandB() a:" << a << " b: " << b << std::endl;  //2) printing out something interesting
    }
};

int main()
{
    UDT foo; //instantiating a Foo in main()
    foo.printAandB(); //calling a member function of the instance that was instantiated.
    return 0;
}
}

//call Example::main()



struct MidiKeyboard
{
    
    int numKeys;
    int numUsbPorts;
    int numControlKnobs = 8;
    double inputVoltageLevel = 5.5;
    std::string housingColor = "black";
    int maxNumArp;

    MidiKeyboard();

    void transmitOutputMidiData (int outputMidiChannel);
    void playArp (int arpPatternNumber);
    void transmitMidiControllerData (int midiControlChangeMessageNumber);
};

MidiKeyboard::MidiKeyboard() : numKeys(61), numUsbPorts(2), maxNumArp(32)
{
    std::cout << "MidiKeyboard being constructed!" << std::endl;
}

void MidiKeyboard::transmitOutputMidiData( int outputMidiChannel )
{
    outputMidiChannel = 1;
    std::cout << "Device has " << numUsbPorts << " USB-Ports available." << std::endl;
}

void MidiKeyboard::playArp( int arpPatternNumber )
{
    arpPatternNumber = 1;
    std::cout << "Playing Arpeggio Nr. " << arpPatternNumber << " out of " << maxNumArp << std::endl;
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
    double maxVelocity, averageFuel, maxLoad;

    struct Engine
    {
        Engine();
        
        bool isOriginalPart = true;
        std::string engineCode = "77AA3B";
        int numCylinder, numValves;
        double strokeVolume = 3.2;

        void burnFuel(std::string fuelType, int maxOctaneNumber = 98);
        void rotateAxles(double maxTorque, bool isFourWheelDrive = false);
        double compressAir(double resonanceFrequency);
    };

    void driveForward(int numGear, bool isBrakeReleased = true);
    double consumeFuel(bool pedalKickdown = true);
    void changeSparePart(Engine newEngine);

    Engine engineBeingChanged;
};

Car::Car() : maxVelocity(210.5), averageFuel(6.5), maxLoad(215.5)
{
    std::cout << "Car being constructed!" << std::endl;
}

Car::Engine::Engine() : numCylinder(6), numValves(16)
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
    std::cout << "Compressing Air in " << numCylinder << " Cylinders" << std::endl;
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
    std::cout << "The average amount of fuel used is: " << averageFuel << std::endl;
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

    double diameterWheels, sizeFrame;
    int numGears = 21;
    std::string typeBrakes = "disc";
    double price = 500.50;

    void transportHuman();
    int shiftGear(int numActualGear);
    void decelarateBike();
};

Bicycle::Bicycle() : diameterWheels(28.5), sizeFrame(40.5)
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

    std::string namePlayer;
    float startXPos {0.0f};
    float startYPos = 10.05f;
    double speedX = 10.5;
    int timeLastShoot = 5;

    struct Weapon
    {
        Weapon();
        
        bool isWeaponFreeZone = false;
        std::string weaponType;
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

Player::Player() : namePlayer("Player One")
{
    std::cout << "Player: " << namePlayer << " being constructed!" << std::endl;
}

Player::Weapon::Weapon() : weaponType("Shotgun")
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

    int coneDiameter, overallLenght;
    double resFreqWoofer = 50.5;
    double menbraneArea = 142.4;
    float splWoofer = 98.05f;

    void vibrateAir();
    void driveTube();
    void playLowFreq();
};

Woofer::Woofer() : coneDiameter(17), overallLenght(25)
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

    double domeDiameter, voiceCoilDiameter, resFreqTweeter, dcResistanceTweeter;
    float splTweeter = 102.12f;

    void playHighFrq(int splitFreqTweeter);
    void convertSignalToWaveform();
    void connectToAmp(int lenghtWire);
};

Tweeter::Tweeter() : domeDiameter(25.4), voiceCoilDiameter(8.4), resFreqTweeter(3850.5), dcResistanceTweeter(3.8)
{
    std::cout << "Tweeter being constructed!" << std::endl;
}

void Tweeter::playHighFrq(int splitFreqTweeter)
{
    splitFreqTweeter += 500;
    std::cout << "The Resonance Frequency is at: " << resFreqTweeter << std::endl;
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

    int lenghtEnclosure, widthEnclosure, heightEnclosure;
    float volEnclosure = 24;
    int weightEnclosure = 2500;

    void provideVolume();
    void wooferMount();
    void terminalMount();
};

Enclosure::Enclosure() : lenghtEnclosure(40), widthEnclosure(20), heightEnclosure(30)
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
    int lenghtTerminal, widthTerminal;
    int numSwitchesTerminal = 2;

    void providePorts();
    void provideSwitches();
    void setVolume();
};

Terminal::Terminal() : lenghtTerminal(5), widthTerminal(7)
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
    int lenghtAmp, widthAmp;

    void amplifySignal();
    void consumePower();
    void splitFreqSignal(double splitFreqLow, double splitFreqHigh);
};

Amplifier::Amplifier() : lenghtAmp(10), widthAmp(10)
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

ActiveLoudspeakerBox::ActiveLoudspeakerBox() : wooferSmall(Woofer()), tweeterMid(Tweeter())
{
    std::cout << "ActiveLoudspeakerBox being constructed!" << std::endl;
}

void ActiveLoudspeakerBox::playAudioSignal(bool signalExists)
{
    if( signalExists == true)
    {
        std::cout << "Incoming Audio Signal detected" << std::endl;
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

    MidiKeyboard mk61;
    mk61.transmitOutputMidiData(6);
    mk61.playArp(10);
    mk61.transmitMidiControllerData(27);
    std::cout << "The Keyboard has : " << mk61.numKeys << " Keys" << std::endl;
    std::cout << "Available Color : " << mk61.housingColor << std::endl;
    
    Car truck;
    Car::Engine dieselEngine;
    
    truck.driveForward(1, true);
    truck.consumeFuel(true);
    truck.changeSparePart(dieselEngine);
    std::cout << "The car has " << truck.numWheels << " Wheels and " << truck.numSeats << " Seats." << std::endl;
    std::cout << "Amount of consumed fuel: " << truck.averageFuel << " Liters" <<std::endl;
    
    dieselEngine.burnFuel("Diesel", 98);
    dieselEngine.rotateAxles(180.5, true);
    dieselEngine.compressAir(800.35);
    std::cout << "The engine Code is: " << dieselEngine.engineCode << std::endl;

    Bicycle sportBicycle;
    sportBicycle.transportHuman();
    sportBicycle.shiftGear(5);
    sportBicycle.decelarateBike();
    std::cout << "The actual gear is nr. " << sportBicycle.shiftGear(5) << std::endl;

    Player player1;
    Player::Weapon railGun;
    
    player1.moveX();
    player1.moveY();
    player1.getWeaponUpgrade(railGun);
    std::cout << "Player Name: " << player1.namePlayer << std::endl;
    
    railGun.shootBullet(10.5,20.0);
    railGun.makeNoise(true);
    railGun.changeBulletPattern(2);

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
