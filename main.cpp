#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
 int
 float
 bool
 double
 char
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, pass each variable to a single call of the ignoreUnused function. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    int foo = 2500;
    int bar = 12000;
    int blow = 80;

    bool paused = true;
    bool hasIce = false;
    bool useHands = true; //does this work?

    char andrew = 'f';
    char isaac = 'a';
    char jacob = 'l';

    float andria = 1.0f;
    float isabell = 2.0f;
    float jannet = 3.0f;

    double trouble = 10.0;
    double bubble = 20.0;
    double rubble = 30.0;
    
    
    
    ignoreUnused(foo, bar, blow, paused, hasIce, useHands, andrew, isaac, jacob, andria, isabell, jannet, trouble, bubble, rubble); //passing each variable declared to the ignoreUnused() function
}
/*
 1)
 */
int getReportQueueCount(int rentalLocation = 0)
{
   ignoreUnused(rentalLocation);

   return {};
}

/*
 2)
 */
bool theSkyIsBlue(double colourFrequency, bool eyesOpen = true)
{ 
    ignoreUnused(colourFrequency, eyesOpen); 

    return {}; 
} 

/*
 3)
 */
char gradeForStudent(float testPercentage = 100.0f, bool studentCheated = true)
{ 
    ignoreUnused(testPercentage, studentCheated); 

    return {}; 
} 

/*
 4)
 */
float rentalTimeRemaining(int rentalReservationNumber, int rentalLocation = 0)
{
   ignoreUnused(rentalLocation, rentalReservationNumber);

   return {};
}

/*
 5)
 */
double getWeight(double productA, double productB)
{
    ignoreUnused(productA, productB);

    return {};
}

/*
 6)
 */
void queueReportGeneration(double startTime, double endTime, int rentalLocation = 0)
{
   ignoreUnused(rentalLocation, startTime, endTime);
}

/*
 7)
 */
double getHeight(double productA, double productB = 10.0)
{
    ignoreUnused(productA, productB);

    return {};
}

/*
 8)
 */
char getChar(char a, char b)
{
    ignoreUnused(a, b);

    return {};
}

/*
 9)
 */
float whatFrequency(int midiNote, float noteBend = 0.0f)
{ 
    ignoreUnused(midiNote, noteBend); 

    return {}; 
} 

/*
 10)
 */
int djNextTrack(int hour, int peopleOnTheDancefloor = 0)
{ 
    ignoreUnused(hour, peopleOnTheDancefloor); 

    return {}; 
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

int main()
{
    //1)
    auto reportCount = getReportQueueCount();
    //2)
    auto thisSky = theSkyIsBlue(212.5);
    //3)
    auto grade = gradeForStudent(55.55f);
    //4)
    auto joyRide = rentalTimeRemaining(1565624);
    //5)
    auto weight = getWeight(15.5, 15.5);
    //6)
    queueReportGeneration(2.0, 7.8);
    //7)
    auto size = getHeight(5.5);
    //8)
    auto letter = getChar('a', 'b');
    //9)
    auto vibrate = whatFrequency(40);
    //10)
    auto nextSong = djNextTrack(5);
    
    ignoreUnused(reportCount, thisSky, grade, joyRide, weight, size, letter, vibrate, nextSong);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
