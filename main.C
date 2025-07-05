/*===========================================================================*\
 * Testing script for the custom libraries
 *
 * Ramkumar
 * Sat Jul  5 06:50:59 PM IST 2025
\*===========================================================================*/

// // preprocessor directives
// #include<iostream>
// #include<math.h>
// #include<random>

#include "linearAlgebra.H"

/*---------------------------------------------------------------------------*/

void vectorMultiplication(int* A, short nRowA, // int matrix-vector
        short nColA, int* B, int* C){

    for(short i=0; i<nRowA; i++){
        for (short k=0; k<nColA; k++){ // nColA == nRowB
            int aIdx = i*nColA+k;
            C[i] += A[aIdx]*B[k];

            std::cout << A[aIdx] << " " << B[k] << std::endl;

        }

        std::cout << C[i] << std::endl;

    }

}


int main(int argc, char* argv[]){

    short nRowA = 4, nColA = 4;
    short nRowB = 4, nColB = 4;
    double A[nRowA*nColA]={0},B[nRowB*nColB]={0},C[nRowA*nColB]={0};

    initializeRandomUniform(A,nRowA*nColA,-1,1);
    initializeRandomUniform(B,nRowB*nColB,-1,1);

    vectorMultiplication(A,nRowA,nColA,B,nRowB,nColB,C);

    printMatrix(A,nRowA,nColA);
    printMatrix(B,nRowB,nColB);
    printMatrix(C,nRowA,nColB);

    // initializeRandomUniform(A,10,0.1,1.1);


    std::cout << "\n integer trial\n" << std::endl;

    int D[nRowA*nColA]={0},E[nRowB*nColB]={0},F[nRowA*nColB]={0};

    initializeRandomUniform(D,nRowA*nColA,-10,10,1);
    initializeRandomUniform(E,nRowB*nColB,-10,10,2);

    vectorMultiplication(D,nRowA,nColA,E,nRowB,nColB,F);

    printMatrix(D,nRowA,nColA);
    printMatrix(E,nRowB,nColB);
    printMatrix(F,nRowA,nColB);

    std::cout << "\n" << std::endl;

    int V[nColA];
    int R[nRowA];
    initializeRandomUniform(V,nColA,-10,10,1);

    vectorMultiplication(D,nRowA,nColA,V,R);

    std::cout << "\n" << std::endl;


    for(int i=0; i<nRowA; i++)
        std::cout << V[i] << " " << R[i] << std::endl;

}


/*---------------------------------------------------------------------------*/
