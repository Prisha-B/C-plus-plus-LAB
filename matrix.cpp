#include <iostream>
using namespace std;

void display(int C[10][10], int r, int c)
{
    int i, j;

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cout<< C[i][j] << "\t";
        }
        cout<< endl;
    }
}

void addition(int A[10][10],int B[10][10], int r, int c)
{
    int i, j, C[10][10];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            C[i][j]= A[i][j] + B[i][j];
        }
    }
    cout<< "Sum: "<< endl;
    display(C, r, c);
}

void subtraction(int A[10][10],int B[10][10], int r, int c)
{
    int i, j, C[10][10];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            C[i][j]= A[i][j] - B[i][j];
        }
    }
    cout<< "Difference: "<< endl;
    display(C, r, c);
}

void multiplication(int A[10][10],int B[10][10], int r1, int c1, int r2, int c2)
{
    int i, j, k, C[10][10];

    if (c1 != r2)
    {
        cout<< "Matrix multiplication not possible!" << endl;
    }
    else
    {
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
        {
            C[i][j] += A[i][k] * B[k][j];
        }
        }
    }
}
    cout<< "Product: "<< endl;
    display(C, r1, c2);
}

void transpose(int A[10][10], int r, int c)
{
    int i, j, T[10][10];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            T[j][i] = A[i][j];
        }
    }
    cout<< "Transpose: "<< endl;
    display(T, r, c);
}

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int i, j, r1, c1, r2, c2, choice;

    cout<< "MENU:" << endl;
    cout<< "1- Addition" << endl;
    cout<< "2- Subtraction" << endl;
    cout<< "3- Multiplication" << endl;
    cout<< "4- Transpose" << endl;

    cout<< "Enter number of columns and rows of matrix A:"<< endl;
    cin>> r1>> c1;
    cout<< "Enter number of columns and rows of matrix B:"<< endl;
    cin>> r2>> c2;

    cout<< "Enter elements of matrix A: "<< endl;
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            cin>> A[i][j];
        }
    }

    cout<< "Enter elements of matrix B: " << endl;
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            cin>> B[i][j];
        }
    }


    cout<< "Enter a choice: "<< endl;
    cin>> choice;

    switch(choice)
    {
        case 1:
        if(r1==r2 && c1==c2)
        {
            addition(A, B, r1, c1);
        }
        else
        {
            cout<< "Addition not possible." << endl;
        }
        break;

        case 2:
        if (r1==r2 && c1==c2)
        {
            subtraction(A, B, r1, c1);
        }
        else
        {
            cout<< "Subtraction not possible." << endl;
        }
        break;

        case 3:
        multiplication(A, B, r1, c1, r2, c2);
        break;

        case 4:
        transpose(A, r1, c1);
        break;

        default:
        cout<< "Invalid choice!" << endl;
    }

    return 0;
}