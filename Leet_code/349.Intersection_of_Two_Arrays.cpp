#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};
    vector<int>::iterator it;
    vector<int> intersectedUniqueNumberVector;

    if(nums1.size() < nums2.size()){
        sort(nums1.begin(), nums1.end());
        it = unique(nums1.begin(), nums1.end());
        nums1.resize(distance(nums1.begin(), it));

        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    intersectedUniqueNumberVector.push_back(nums1[i]);
                    break; 
                }
            }
        }
    }else{
        sort(nums2.begin(), nums2.end());
        it = unique(nums2.begin(), nums2.end());
        nums2.resize(distance(nums2.begin(), it));

        for(int i = 0; i < nums2.size(); i++){
            for(int j = 0; j < nums1.size(); j++){
                if(nums2[i] == nums1[j]){
                    intersectedUniqueNumberVector.push_back(nums2[i]);
                    break;
                }
            }
        }
    }
    for(int i = 0; i < intersectedUniqueNumberVector.size(); i++){
        cout << intersectedUniqueNumberVector[i] << " ";
    }
    return 0;
}