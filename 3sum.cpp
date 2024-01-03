// Find the triplets in the given array such that the sum of elements in triplet is eqal to K
// No two triplets should have same set of elements.


#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> findDistinctTriplets(const std::vector<int>& arr, int K) {
    std::vector<std::vector<int>> result;
    int n = arr.size();

    // Sort the array
    std::vector<int> sortedArr = arr;
    std::sort(sortedArr.begin(), sortedArr.end());

    for (int i = 0; i < n - 2; ++i) {
        // Skip duplicate values of i
        if (i > 0 && sortedArr[i] == sortedArr[i - 1]) {
            continue;
        }

        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int currentSum = sortedArr[i] + sortedArr[left] + sortedArr[right];


            if (currentSum == K) {
                // Found a triplet
                result.push_back({sortedArr[i], sortedArr[left], sortedArr[right]});

                // Skip duplicate values of left
                while (left < right && sortedArr[left] == sortedArr[left + 1]) {
                    ++left;
                }

                // Skip duplicate values of right
                while (left < right && sortedArr[right] == sortedArr[right - 1]) {
                    --right;
                }

                // Move the pointers to find other triplets
                ++left;
                --right;
            } 
            
            else if (currentSum < K) {
                // Move the left pointer to increase the sum
                ++left;
            } 
            
            else {
                // Move the right pointer to decrease the sum
                --right;
            }
        }
    }

    return result;
}

int main() {
    // Example usage
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 5, 4};
    int K = 15;

    std::vector<std::vector<int>> distinctTriplets = findDistinctTriplets(arr, K);

    // Display the found distinct triplets
    for (const auto& triplet : distinctTriplets) {
        for (int element : triplet) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
