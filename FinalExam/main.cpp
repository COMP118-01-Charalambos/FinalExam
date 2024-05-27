/** \file FinalExam.cpp
 * \brief A small matrix math program
 * \date 27/5/24
 * \author Charalambos Hadjigeorgiou
 */

#include<iostream>

using namespace std;

int main () {
    const int MAX_COL = 5;
    const int MAX_ROW = 2;
    int mat[MAX_COL][MAX_ROW];
    int choice;
    
    do {
        cout << "\n1) Show data in matrix";
        cout << "\n2) Enter data in matrix (range -0.5 to 4.5)";
        cout << "\n3) Sum of all positive numbers (i.e. values > 0)";
        cout << "\n4) Exit";
        cout << "\nPlease enter choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
        }
    } while(choice != 4);
        cerr << "Wrong Input! Please try again";
        return 0;
}

    


