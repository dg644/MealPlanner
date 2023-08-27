#include <iostream>
#include <cmath> // to include math functions
#include <vector> // to include vectors
using namespace std;

class Meal { 
    public:
        string name;
        string* ptr;
        Meal(string name, string* ptr) {
            this->name = name;
            this->ptr = ptr;
        }
};

int main() {
    cout << "Meal Planner App.\n";
    cout << "Test with arrays of strings:\n";

    string ingredients1[4] = {"Rice", "Avocado", "Kimchi", "Sesame Oil"}; // Avocado & Kimchi Rice Bowl
    string ingredients2[3] = {"Pasta", "Pesto Sauce", "mix of tomatoes, mushrooms or onions"}; // Pesto Pasta
    string ingredients3[3] = {"Bread", "Eggs", "Butter"}; // Egg Sandwich or French Toast
    string ingredients4[3] = {"Bread", "Peanut Butter", "Jelly"}; // PB&J
    string ingredients5[3] = {"Bread", "Cheese", "Butter"}; // Grilled Cheese
    string ingredients6[10] = {"Rice", "Kimchi", "Eggs", "Carrots", "Spinach", "Cucumber", "Mushrooms", "Tofu", "Gochujang", "Sesame Oil"}; // Bibimbap

    string* ptr1 = &ingredients1[0];
    string* ptr2 = &ingredients2[0];
    string* ptr3 = &ingredients3[0];
    string* ptr4 = &ingredients4[0];
    string* ptr5 = &ingredients5[0];
    string* ptr6 = ingredients6;
    // int calories[10]; // could add these in future
    // int protein[10];
    Meal meal1("Avocado & Kimchi Rice Bowl", ptr1);
    Meal meal2("Pesto Pasta", ptr2);
    Meal meal3("Egg Sandwich or French Toast", ptr3);
    Meal meal4("PB&J", ptr4);
    Meal meal5("Grilled Cheese", ptr5);
    Meal meal6("Bibimbap", ptr6);

    Meal* myMeals[10] = {&meal1, &meal2, &meal3, &meal4, &meal5, &meal6};
    for (int i = 0; i < 6; i++) {
        cout << myMeals[i]->name << " ingredients needed are: " << endl;
        for (int j = 0; j < 3; j++) {
            cout << "\t" << j << " - " << myMeals[i]->ptr[j] << endl;
        }
        cout << endl << endl;
    }

    cout << "Now to try C++ vectors:\n";
    
    
    return 0;
}