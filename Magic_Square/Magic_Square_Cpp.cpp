#include<iostream>
#include<iomanip>
#include <cstring>
using namespace std;

int main() {
  int size;
  cout<<"Enter the size of the magic square you want to create: ";
  cin>>size;
  int magicSquare[size][size];
  int row,col;
  memset(magicSquare, 0, sizeof(magicSquare));
  int i =0 ;
  int j= size / 2;
  for ( int k = 1; k <= size*size; k++ )
  {
     magicSquare[i][j] = k;
     row = (i + 1) % size;
     col = (j + 1) % size;
     if (magicSquare[row][col] == 0 )
     {
        i = row;
        j = col;
     }
     else
     {
        i = (i - 1 + size) % size;
     }

  }
  for(int x=0; x<size; x++)
  {
     for(int y=0; y<size; y++)
         cout << magicSquare[x][y]<<" ";
     cout << endl;
  }
  int num = (((size*size)+1)*size)/2;
  cout<<"The magic number of "<<size<< " is "<<num<<endl;
}