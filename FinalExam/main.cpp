/** \file FinalExam.cpp
 * \brief A small matrix math program
 * \date 27/5/24
 * \author Charalambos Hadjigeorgiou
 */

#include<iostream>
#include<cassert>

using namespace std;

const int MAX_COL = 5;

//prototypes
void printMatrix(const double mat[][MAX_COL], const int maxRow);
void fillMatrix(double mat[][MAX_COL], const int maxRow);
double sumPositive(const double mat[][MAX_COL], const int maxRow);
int matCounter(const double mat[][MAX_COL], const int maxRow);

int main () {
  
    const int MAX_ROW = 2;
    double mat[MAX_ROW][MAX_COL];
    int choice, maxRow = 2;

    do {
        cout << "\n1) Show data in matrix";
        cout << "\n2) Enter data in matrix (range -0.5 to 4.5)";
        cout << "\n3) Sum of all positive numbers (i.e. values > 0)";
        cout << "\n4) Count the numbers of elements with the values 1.5";
        cout << "\n5) Exit";
        cout << "\nPlease enter choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                printMatrix(mat, maxRow);
                break;
            case 2:
                fillMatrix(mat, maxRow);
                break;
            case 3:
                cout << "\nSum of all positive numbers: " << sumPositive(mat, maxRow) << endl;
                break;
            case 4:
                cout << "\nNumber of elements with the value 1.5: " << matCounter(mat, maxRow) << endl;
                break;
            case 5:
                cout << "\nGoodbye :)" << endl;
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
    assert(maxRow > 0);
    
    cout <<"\nContent of the matrix: ";
    for (int i = 0; i < maxRow; ++i) {
        cout << "\nR" << i << ": ";
        
        for (int j = 0; j < MAX_COL; ++j) {
            cout << mat [i][j] << "\t";
        }
    }
}
  
/**
 fills the content of the matrix with user input
 <BR>
 @param mat The matrix to be shown
 @param maxRow How many rows the matrix has
 */
void fillMatrix(double mat[][MAX_COL], const int maxRow) {
    assert(maxRow > 0);
    
    for (int i = 0; i < maxRow; ++i) {
        for (int j = 0; j < MAX_COL; ++j) {
            cout << "Enter value for R" << i << ") " << "C" << j << ") " << ": ";
            cin >> mat[i][j];
        }
    }
}

/**
 * Returns the sum of all positive numbers in the matrix
 * <BR>
 * @param mat The matrix to be shown
 * @param maxRow How many rows the matrix has
 */
double sumPositive(const double mat[][MAX_COL], const int maxRow) {
    assert(maxRow > 0);
   double sum = 0;
    
    for (int i = 0; i < maxRow; ++i) {
        for (int j = 0; j < MAX_COL; ++j) {
            if (mat[i][j] > 0) {
                sum += mat[i][j];
            }
        }
    }
    return sum;
}
                                                            
int matCounter(const double mat[][MAX_COL], const int maxRow) {
    assert(maxRow > 0);
    int count = 0;
    
    for (int i = 0; i < maxRow; ++i) {
        for (int j = 0; j < MAX_COL; ++j) {
            if (mat[i][j] == 1.5) {
                count++;
            }
        }
    }
    return count;
}

