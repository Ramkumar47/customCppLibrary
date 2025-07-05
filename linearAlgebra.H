/*===========================================================================*\
 * linear algebra functions definition
 *
 * Ramkumar
 * Sat Jul  5 09:09:07 PM IST 2025
\*===========================================================================*/

// preprocessor directives
#include<iostream>
#include<math.h>
#include<random>


/*---------------------------------------------------------------------------*/

// defining matrix multiplication function-------------------------------------

void vectorMultiplication(double* A, short nRowA, // double
        short nColA, double* B, short nRowB, short nColB,
        double* C){

    for(short i=0; i<nRowA; i++){
        for(short j=0; j<nColB; j++){
            int cIdx = i*nColB+j;
            for (short k=0; k<nColA; k++){ // nColA == nRowB
                int aIdx = i*nColA+k;
                int bIdx = k*nColB+j;
                C[cIdx] += A[aIdx]*B[bIdx];
            }
        }
    }
}

void vectorMultiplication(long* A, short nRowA, // long
        short nColA, long* B, short nRowB, short nColB,
        long* C){

    for(short i=0; i<nRowA; i++){
        for(short j=0; j<nColB; j++){
            int cIdx = i*nColB+j;
            for (short k=0; k<nColA; k++){ // nColA == nRowB
                int aIdx = i*nColA+k;
                int bIdx = k*nColB+j;
                C[cIdx] += A[aIdx]*B[bIdx];
            }
        }
    }
}

void vectorMultiplication(int* A, short nRowA, // int
        short nColA, int* B, short nRowB, short nColB,
        int* C){

    for(short i=0; i<nRowA; i++){
        for(short j=0; j<nColB; j++){
            int cIdx = i*nColB+j;
            for (short k=0; k<nColA; k++){ // nColA == nRowB
                int aIdx = i*nColA+k;
                int bIdx = k*nColB+j;
                C[cIdx] += A[aIdx]*B[bIdx];
            }
        }
    }
}


// random number initializer function------------------------------------------

void initializeRandomUniform(double* A, int size, double minRange, // double
        double maxRange, int seed=0){
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution dist(minRange, maxRange);

    if(seed!=0)
        mt.seed(seed);

    for(int i=0; i<size; i++)
        A[i] = dist(mt);

}

void initializeRandomUniform(long* A, int size, long minRange, // long
        long maxRange, int seed=0){
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution dist(minRange, maxRange);

    if(seed!=0)
        mt.seed(seed);

    for(int i=0; i<size; i++)
        A[i] = dist(mt);

}

void initializeRandomUniform(int* A, int size, int minRange, // int
        int maxRange, int seed=0){
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution dist(minRange, maxRange);

    if(seed!=0)
        mt.seed(seed);

    for(int i=0; i<size; i++)
        A[i] = dist(mt);

}

// print matrix----------------------------------------------------------------

void printMatrix(double* A, short nRowA, short nColA){ // double
    std::cout << "\n" << std::endl;
    for(short i=0; i<nRowA; i++){
        for(short j=0; j<nColA; j++){
            int idx=i*nColA+j;
            std::cout << A[idx] << " ";
        }
        std::cout << "\n";
    }
}

void printMatrix(long* A, short nRowA, short nColA){ // long
    std::cout << "\n" << std::endl;
    for(short i=0; i<nRowA; i++){
        for(short j=0; j<nColA; j++){
            int idx=i*nColA+j;
            std::cout << A[idx] << " ";
        }
        std::cout << "\n";
    }
}

void printMatrix(int* A, short nRowA, short nColA){ // int
    std::cout << "\n" << std::endl;
    for(short i=0; i<nRowA; i++){
        for(short j=0; j<nColA; j++){
            int idx=i*nColA+j;
            std::cout << A[idx] << " ";
        }
        std::cout << "\n";
    }
}

/*---------------------------------------------------------------------------*/
