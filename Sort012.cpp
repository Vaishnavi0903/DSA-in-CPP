#include <iostream>
#include <vector>

void sort012(std::vector<int>& arr) {
    int low = 0, mid = 0, high = arr.size() - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            std::swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            std::swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    std::vector<int> arr = {2, 0, 1, 2, 0, 1, 0, 2, 1, 0};

    sort012(arr);

    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }

    return 0;
}
