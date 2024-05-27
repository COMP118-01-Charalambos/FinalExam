/** \file FinalExam.cpp
 * \brief A small matrix math program
 * \date 27/5/24
 * \author Charalambos Hadjigeorgiou
 */

#include<iostream>

using namespace std;

const int MAX_COL = 5;
const int MAX_ROW = 2;
int mat[MAX_COL][MAX_ROW];
int choice;

//prototypes
void printMatrix(const double mat[][MAX_COL], const int maxRow);
void fillMatrix(double mat[][MAX_COL], const int maxRow);
double sumPositive(const double mat[][MAX_COL], const int maxRow);


int main () {
  
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

/**
 * Prints the content of the matrix
 * <BR>
 * @param mat The Matrix to be shown
 * @param maxRow How many rows the matrix has
 */
void printMatrix(const double mat[][MAX_COL], const int maxRow) {
    
    cout <<"\nContent of the matrix: ";
    for (int i = 0; i < maxRow; ++i) {
        cout << "\nR" << i << ": ";
        
        for (int j = 0; j < MAX_COL; ++j) {
            cout << mat [i][j] << "\t";
        }
    }
}
    


