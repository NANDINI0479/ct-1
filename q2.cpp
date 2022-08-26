//NANDINI
//2010990479
//SET NO:03
//Q2

#include<iostream>
using namespace std;
void searchPair(int nums[], int n, int target)
{
    
    for (int i = 0; i < n - 1; i++)
    {
        
        for (int j = i + 1; j < n; j++)
        {
            
            if (nums[i] + nums[j] == target)
            {
                printf("Pair found (%d, %d)\n", nums[i], nums[j]);
                return;
            }
        }
    }
 
    
    printf("Pair not found");
}
 
int main(void)
{
    int nums[] = { 8,7,2,5,3,1 };
    int target = 10;
 
    int n = sizeof(nums)/sizeof(nums[0]);
 
    searchPair(nums, n, target);
 
    return 0;
}


