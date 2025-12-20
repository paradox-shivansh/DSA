#include<iostream>
#include<map>
#include<set>

using namespace std;

int main(){
    set <int> scores;
    scores.insert(85);
    scores.insert(85);
    scores.insert(92);
    scores.insert(78);
    scores.insert(92);


    cout << scores.size() << endl;
    cout << "is empthy : " << (scores.empty()? "yes" : "no") << endl;

    // Find and erase
    if (scores.find(85) != scores.end()) {
        std::cout << "Found 85!" << std::endl;
        scores.erase(85);  // Remove 85
    }

    // Print again (78, 92)
    std::cout << "After erase: ";
    for (int score : scores) {  // Range-based for loop
        std::cout << score << " ";
    }
    std::cout << std::endl;

    // Clear the set
    scores.clear();
    std::cout << "Size after clear: " << scores.size() << std::endl;  // 0

}