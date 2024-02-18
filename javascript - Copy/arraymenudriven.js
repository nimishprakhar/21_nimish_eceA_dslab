const readlineSync = require('readline-sync');

let n = parseInt(readlineSync.question("Enter the size of the array: "));
let arr = [];

console.log("Enter the elements of the array: ");
for (let i = 0; i < n; i++) {
    arr.push(parseInt(readlineSync.question("Element " + (i + 1) + ": ")));
}

while (n != 0) {
    console.log("\n1. Traversal/Linear Search\n2. String Reversal\n3. Updating the Element\n4. Inserting an Element at Specified Position\n5. Deleting an Element from Specified Position\n6. Sorting the Array (Bubble Sort)\n0. to exit\n");
    let choice = parseInt(readlineSync.question("Enter your choice: "));

    switch (choice) {
        case 0:
            console.log("Exiting program.");
            return;

        case 1:
            let searchElement = parseInt(readlineSync.question("Enter element to search: "));
            let found = false;
            for (let i = 0; i < n; i++) {
                if (arr[i] === searchElement) {
                    console.log(`The element ${searchElement} is present at index ${i + 1}`);
                    found = true;
                    break;
                }
            }
            if (!found) {
                console.log("Element not found.");
            }
            break;

        case 2:
            console.log("Reversed array: " + arr.reverse().join(' '));
            break;

        case 3:
            arr = arr.map((element, index) => index % 2 === 0 ? element * 2 : element + 5);
            console.log("Updated array: " + arr.join(' '));
            break;

        case 4:
            let insertPosition = parseInt(readlineSync.question("Enter position to insert: "));
            if (insertPosition < 1 || insertPosition > n + 1) {
                console.log("Invalid position.");
            } else {
                let insertElement = parseInt(readlineSync.question("Enter element to insert: "));
                arr.splice(insertPosition - 1, 0, insertElement);
                n++;
                console.log("Element inserted successfully.");
            }
            break;

        case 5:
            let deletePosition = parseInt(readlineSync.question("Enter position to delete: "));
            if (deletePosition < 1 || deletePosition > n) {
                console.log("Invalid position.");
            } else {
                arr.splice(deletePosition - 1, 1);
                n--;
                console.log("Element deleted successfully.");
            }
            break;

        case 6:
            for (let i = 0; i < n - 1; i++) {
                for (let j = 0; j < n - i - 1; j++) {
                    if (arr[j] > arr[j + 1]) {
                        let temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            console.log("Sorted array: " + arr.join(' '));
            break;

        default:
            console.log("Invalid choice.");
    }
}