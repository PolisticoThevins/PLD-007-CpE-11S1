#include <iostream>
using namespace std;

int main() {

  char column[8][8] = {
    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}, {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}
  };


  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      cout << column[i][j] << " ";
    }
    cout << endl;
  }


  char column1[8][8] = {{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}, {'R', 'N', 'B', 'K', 'Q', 'B', 'N', 'R'}};
  if (column[0][7]) 
  { 
    for (int a = 0; a <= 7; a++) 
	{
      for (int b = 0; b <= 7; b++) 
	  {
        cout << column1[a][b] << " ";
      }
      cout << endl;
    }
  }
}