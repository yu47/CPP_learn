#include <iostream>
#include <vector>
int main(int argc, char const *argv[])
{
    int temp =0;
    std::vector<int> nums ={9,5,3,4,1,2,8};
    for(int i=0 ; i<7 ;i++){
        int min = i;
        for(int j = i+1; j<7; j++){
            if(nums[min] > nums[j])
                min = j;
        }
            temp = nums[min];
            nums[min] = nums[i];
            nums[i] = temp;

            // std::swap(nums[i], nums[min]);
    }
    for(int i=0 ; i<7 ;i++){
        std::cout << nums[i];
    }
    return 0;
}
