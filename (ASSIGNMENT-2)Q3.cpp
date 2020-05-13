#include <iostream> 
using namespace std; 
  
const int col = 4; 
const int row = 4; 
  

int countOddColumn(int arr[row][col]) 
{ 
  	int sum[col] = { 0 }; 
  
    for (int i = 0; i < col; i++) { 
  
        for (int j = 0; j < row; j++) { 
            sum[i] += arr[j][i]; 
        } 
    } 
  
   
    int count = 0; 
  
    for (int i = 0; i < col; i++) { 
  
        
        if (sum[i] % 2 == 1) { 
            count++; 
        } 
    } 
  
    return count; 
} 
   
int main() 
{ 
    int arr[row][col] = { { 0, 1, 1, 1 }, 
                          { 1, 0, 0, 1 }, 
                          { 1, 1, 1, 0 },
						  { 0, 1, 1, 0 } }; 
  
    cout <<"The No. Of Column which contain odd no. is:-"<<countOddColumn((arr))<<endl; 
  
    return 0; 
} 
