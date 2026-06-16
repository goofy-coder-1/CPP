#include <iostream>
#include <string>
#include <fstream>           // Required for file operations (ifstream/ofstream)
#include <nlohmann/json.hpp> 

using namespace std;
using json = nlohmann::json;

class fifa
{
private:
    std::string teamName;
    int rating;

public:
    fifa(std::string name, int score); 
    ~fifa();                           
    
    json toJson() const;
};

fifa::fifa(std::string name, int score) : teamName(name), rating(score) {}
fifa::~fifa() {}

json fifa::toJson() const
{
    json j;
    j["teamName"] = teamName;
    j["rating"] = rating;
    return j;
}

int main()
{
    string team;
    cout << "Enter Team name: ";
    getline(cin, team);

    int rating; 
    cout << "Team Rating (1-5): ";
    cin >> rating;

    fifa myTeam(team, rating);

    // 1. Convert the class data into a JSON object
    json teamJson = myTeam.toJson();

    // 2. Open a file stream for writing ("output file stream")
    ofstream outputFile("team_data.json");

    // 3. Check if the file opened successfull
    if (outputFile.is_open()) {
        // Pipe the prettified JSON (4 spaces) directly into the file
        outputFile << teamJson.dump(4);
        
        // Close the file stream
        outputFile.close();
        
        cout << "\n[Success] Data literally dumped to 'team_data.json'!\n";
    } else {
        cerr << "\n[Error] Could not create or open the file.\n";
    }

    return 0; 
}