#include <iostream>
#include <string>
using namespace std;

class fifa
{
private:
    // 1. Put your data variables here
    std::string teamName;
    int rating;

public:
    // 2. Declare your constructor and destructor
    fifa(std::string name, int score); // Constructor with arguments
    ~fifa();                           // Destructor

    // 3. Add some public functions to interact with the data
    void displayTeam();
};

// --- IMPLEMENTATION OF THE FUNCTIONS ---

// How the constructor sets up the data
fifa::fifa(std::string name, int score)
{
    teamName = name;
    rating = score;
    std::cout << "Team " << teamName << " has been created!\n";
}

// How the destructor cleans up
fifa::~fifa()
{
    std::cout << "Team " << teamName << " is being removed from memory.\n";
}

// How the display function works
void fifa::displayTeam()
{
    std::cout << "Team: " << teamName << " | Rating: " << rating << " stars\n";
}

// --- HOW TO USE IT IN YOUR MAIN PROGRAM ---
int main()
{
    string team;
    cout << "Enter Team name: ";
    cin >> team;

    float rating;
    cout << "Team Rating: ";
    cin >> rating;

    // Creating an object using your class format
    fifa myTeam(team,rating);

    // Calling a method on that object
    myTeam.displayTeam();

    return 0; 
    // When main() ends, the destructor (~fifa) will automatically trigger here!
}
