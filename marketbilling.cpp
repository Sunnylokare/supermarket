#include <iostream>
using namespace std;
struct Item {
    string name;
    int quantity;
    double price;
};

double calculateBill(Item items[], int itemCount) {
    double totalBill = 0.0;
    for (int i = 0; i < itemCount; i++) {
        totalBill += items[i].quantity * items[i].price;
    }
    return totalBill;
}

int main() {
    const int MAX_ITEMS = 100;
    Item items[MAX_ITEMS];
    int itemCount = 0;

    char choice;
    do {
        cout << "Enter item name: ";
        cin >> items[itemCount].name;
        cout << "Enter quantity: ";
        cin >> items[itemCount].quantity;
        cout << "Enter price: ";
        cin >> items[itemCount].price;
        itemCount++;

        cout << "Do you want to add another item? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    double totalBill = calculateBill(items, itemCount);
    cout << "Total bill amount:- Rs" << totalBill << endl;

    return 0;
}