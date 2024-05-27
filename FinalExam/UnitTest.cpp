/** \file UnitTest.cpp
 * \brief a unit test for matrix program
 * \date 27/5/2024
 * \author Charalambos Hadjigerorgiou
 */

#include <stdio.h>

TEST_CLASS(FinalExam) {
public:
    TEST_METHOD(sumPositive) {
        //Act
        const int MAX_ROW = 2;
        double mat[MAX_ROW][MAX_COL];
        int choice, maxRow = 2;
        
        //Arrange
        fillMatrix(mat, maxRow);
        
        //Assert
        Assert::AreEqual(0, sumPositive(mat, maxRow));
}
