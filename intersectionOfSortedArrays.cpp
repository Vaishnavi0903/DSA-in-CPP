#include <iostream>
#include <vector>

std::vector<int> intersect(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::vector<int> result;
    
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {  // arr1[i] == arr2[j]
            result.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    return result;
}

int main() {
    // Example usage
    std::vector<int> arr1 = {1, 3, 5, 7, 9};
    std::vector<int> arr2 = {3, 4, 5, 8, 9};

    std::vector<int> result = intersect(arr1, arr2);

    std::cout << "Intersection: ";
    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}

//---------------------------------- USING BUILT-IN FUNCTION----------------------------------

// std::back_inserter is a convenient iterator adaptor provided by the C++ Standard Library that allows
// you to use algorithms that insert elements at the end of a container. It is particularly useful when 
// you want to build a container dynamically while using algorithms like std::copy or set operations 
// like std::set_union, std::set_intersection, etc.


// #include <iostream>
// #include <algorithm>
// #include <vector>

// std::vector<int> computeIntersection(const std::vector<int>& arr1, const std::vector<int>& arr2) 
//{
//     std::vector<int> result;
//     std::set_intersection(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), std::back_inserter(result));
//     return result;
// }

// int main() {
//     // Example usage
//     std::vector<int> arr1 = {1, 3, 5, 7, 9};
//     std::vector<int> arr2 = {3, 4, 5, 8, 9};

//     std::vector<int> result = computeIntersection(arr1, arr2);

//     std::cout << "Intersection: ";
//     for (int num : result) {
//         std::cout << num << " ";
//     }

//     return 0;
// }
