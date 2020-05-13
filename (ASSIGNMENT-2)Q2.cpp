#include <iostream> 
using namespace std; 
   
int srch(int mat[4][4], int r, int c) 
{ 
    if (r == 0) 
        return -1; 
      
  
    for(int i = 0; i < r; i++) 
    { 
        for(int j = 0; j < r; j++) 
       
        if(mat[i][j] == c) 
        { 
            cout<<"Elemert 29 found at\n"<<i<<" "<<j<<endl; 
            return 1; 
        } 
    } 
   
    cout << "The Element not found"; 
    return 0;  
} 
   

int main() 
{ 
    int mat[4][4] = { { 10, 20, 30, 40 }, 
                      { 15, 25, 35, 45 }, 
                      { 27, 29, 37, 48 }, 
                      { 32, 33, 39, 50 } }; 
    srch(mat, 4, 29); 
   
    return 0; 
} 
  
