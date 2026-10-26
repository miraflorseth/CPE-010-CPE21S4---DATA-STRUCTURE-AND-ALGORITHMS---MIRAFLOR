#include <iostream>
#include <thread>
#include <functional>

using namespace std;

void linearSearch(int arr[], int start, int end,
                  int target, int &result) {
    for (int i = start; i <= end; i++) {
        if (arr[i] == target) {
            result = i;
            return;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int target = 9;

    int result1 = -1;
    int result2 = -1;
    int result3 = -1;

    thread T1(linearSearch, arr, 0, 3, target, ref(result1));
    thread T2(linearSearch, arr, 4, 7, target, ref(result2));
    thread T3(linearSearch, arr, 8, 11, target, ref(result3));

    T1.join();
    T2.join();
    T3.join();

    if (result1 != -1)
        cout << "Target found at position " << result1 + 1 << endl;
    else if (result2 != -1)
        cout << "Target found at position " << result2 + 1 << endl;
    else if (result3 != -1)
        cout << "Target found at position " << result3 + 1 << endl;
    else
        cout << "Target not found." << endl;

    return 0;
}