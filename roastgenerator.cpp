#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to replace {name} with actual name
string personalizeRoast(string roast, string name) {
    size_t pos = 0;

    // Replace all occurrences of {name}
    while ((pos = roast.find("{name}", pos)) != string::npos) {
        roast.replace(pos, 6, name);
        pos += name.length(); // move forward after replacement
    }

    return roast;
}

int main() {
    string name;

    // Ask user for name
    cout << "Enter your name: ";
    getline(cin, name);

    // Check for empty input
    if (name.empty()) {
        cout << "Please enter a valid name!" << endl;
        return 0;
    }

    // Roast templates
    vector<string> roasts = {
        "{name}, you bring everyone so much joy… when you leave the room.",
        "{name}, you're not useless… you could be used as a bad example.",
        "{name}, if laziness were a sport, you'd come second… because you're too lazy to win.",
        "{name}, your brain is like a web browser—20 tabs open and none responding.",
        "{name}, you have something on your chin… no, the third one down.",
        "{name}, you don’t need a GPS—you’re already lost in life.",
        "{name}, you’re like a cloud… when you disappear, it’s a beautiful day.",
        "{name}, I’d explain it to you, but I left my crayons at home.",
        "{name}, your secrets are always safe with me… I never even listen.",
        "{name}, you’re proof that even evolution takes breaks sometimes.",
        "{name}, {name}, are you even trying today?"
    };

    // Seed random generator
    srand(time(0));

    // Pick random roast
    int index = rand() % roasts.size();

    // Replace placeholder
    string finalRoast = personalizeRoast(roasts[index], name);

    // Output
    cout << "\n🔥 Roast Generator 🔥\n";
    cout << finalRoast << endl;

    return 0;
}