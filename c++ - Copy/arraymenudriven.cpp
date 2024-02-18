#include <iostream>
using namespace std;

int main() {
    int n, choice, i, s, pos;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while (n != 0) {
        cout << "\n1. Traversal/Linear Search\n2. String reversal\n3. Updating the elements\n4. Inserting an element at specified position\n5. Deleting an element from specified position\n6. Sorting the array (Bubble Sort)\n0. To exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 0:
                cout << "Exiting program.\n";
                return 0;

            case 1:
                cout << "Enter element to search ";
                cin >> s;
                for (i = 0; i < n; i++) {
                    if (arr[i] == s) {
                        cout << "The element " << s << " is present at index " << i + 1 << endl;
                    }
                }
                break;

            case 2:
                cout << "Reversed array: ";
                for (i = n - 1; i >= 0; i--) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 3:
                for (i = 0; i < n; i++) {
                    if (i % 2 == 0) {
                        arr[i] *= 2;
                    } else {
                        arr[i] += 5;
                    }
                }
                cout << "Updated array: ";
                for (i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 4:
                cout << "Enter position to insert: ";
                cin >> pos;
                if (pos < 1 || pos > n + 1) {
                    cout << "Invalid position.\n";
                } else {
                    cout << "Enter element to insert: ";
                    cin >> s;
                    for (i = n - 1; i >= pos - 1; i--) {
                        arr[i + 1] = arr[i];
                    }
                    arr[pos - 1] = s;
                    n++;
                    cout << "Element inserted successfully.\n";
                }
                break;

            case 5:
                cout << "Enter position to delete: ";
                cin >> pos;
                if (pos < 1 || pos > n) {
                    cout << "Invalid position.\n";
                } else {
                    for (i = pos - 1; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    cout << "Element deleted successfully.\n";
                }
                break;

            case 6:
                for (i = 0; i < n - 1; i++) {
                    for (int j = 0; j < n - i - 1; j++) {
                        if (arr[j] > arr[j + 1]) {
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
                cout << "Sorted array: ";
                for (i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            default:
                cout << "Invalid choice.\n";
        }
    }
    return 0;
}
