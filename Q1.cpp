#include <vector>
#include <iostream>

using namespace std;

float Total(const vector<float>& arr) {
    float sum = 0.0;

    for (int i = 0; i < arr.size(); i++) {
        sum = sum + arr[i];
    }

    return sum;
}

int valid(const vector<float>& arr) {
    int count = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > 0 && arr[i] <= 80) {
            count += 1;
        }
    }

    return count;
}

void heaviest(const vector<float>& arr) {
    float heaviest = arr[0];
    int position = 0;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > heaviest) {
            heaviest = arr[i];
            position = i;
        }
    }

    cout << "Heaviest: " << heaviest
         << " kg at position " << position << endl;
}

int LongestValid(const vector<float>& arr) {
    int current = 0;
    int longest = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > 0 && arr[i] <= 80) {
            current++;

            if (current > longest) {
                longest = current;
            }
        } else {
            current = 0;
        }
    }

    return longest;
}
