/*
===== COMPLETE MINI PROJECT =====
        SHOP MANAGEMENT SYSTEM

1. Add Product
2. View Products
3. Search Product
4. Update Stock
5. Sell Product
6. Delete Product
7. Exit

Concepts Used:
- Arrays
- Strings
- Functions
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

struct Product
{
    int id;
    string name;
    int stock;
    int price;
};

int takeint()
{
    int n;
    while (true)
    {
        cin >> n;
        if (cin.fail())
        {
            cout << "Enter Integer Only : ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
            return n;
    }
}

int find(Product p[], int size, int id)
{
    for (int i = 0; i < size; i++)
        if (p[i].id == id)
            return i;
    return -1;
}

bool unique(Product p[], int size, int id)
{
    return find(p, size, id) == -1;
}

void add(Product p[], int &size)
{
    if (size == 100)
    {
        cout << "STORAGE FULL\n";
        return;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Product Name : ";
    getline(cin, p[size].name);
    cout << "Product ID : ";
    p[size].id = takeint();
    while (!unique(p, size, p[size].id))
    {
        cout << "Enter Unique ID : ";
        p[size].id = takeint();
    }
    cout << "Price : ";
    p[size].price = takeint();
    cout << "Stock : ";
    p[size].stock = takeint();
    size++;
    cout << "PRODUCT ADDED SUCCESSFULLY\n";
}

void view(Product p[], int size)
{
    if (size == 0)
    {
        cout << "NO PRODUCTS\n";
        return;
    }
    cout << left << setw(6) << "SNo" << setw(25) << "Name" << setw(10) << "ID" << setw(10) << "Price" << setw(10) << "Stock" << '\n';
    cout << setfill('-') << setw(61) << "" << setfill(' ') << '\n';
    for (int i = 0; i < size; i++)
        cout << left << setw(6) << i + 1 << setw(25) << p[i].name << setw(10) << p[i].id << setw(10) << p[i].price << setw(10) << p[i].stock << '\n';
}

void search(Product p[], int size)
{
    cout << "Enter Product ID : ";
    int id = takeint();
    int i = find(p, size, id);
    if (i == -1)
    {
        cout << "NOT FOUND\n";
        return;
    }
    cout << "Name : " << p[i].name << "\nPrice : " << p[i].price << "\nStock : " << p[i].stock << "\n";
}

void update(Product p[], int size)
{
    cout << "Enter Product ID : ";
    int id = takeint();
    int i = find(p, size, id);
    if (i == -1)
    {
        cout << "NOT FOUND\n";
        return;
    }
    cout << "New Stock : ";
    p[i].stock = takeint();
    cout << "UPDATED\n";
}

void sell(Product p[], int size)
{
    cout << "Enter Product ID : ";
    int id = takeint();
    int i = find(p, size, id);
    if (i == -1)
    {
        cout << "NOT FOUND\n";
        return;
    }
    cout << "Quantity : ";
    int q = takeint();
    if (q > p[i].stock)
    {
        cout << "INSUFFICIENT STOCK\n";
        return;
    }
    p[i].stock -= q;
    cout << "Total Bill = " << q * p[i].price << '\n';
}

void del(Product p[], int &size)
{
    cout << "Enter Product ID : ";
    int id = takeint();
    int i = find(p, size, id);
    if (i == -1)
    {
        cout << "NOT FOUND\n";
        return;
    }
    for (int j = i; j < size - 1; j++)
        p[j] = p[j + 1];
    size--;
    cout << "DELETED\n";
}

int menu()
{
    cout << "\n===== SHOP MANAGEMENT SYSTEM =====\n";
    cout << "1.Add Product\n2.View Products\n3.Search Product\n4.Update Stock\n5.Sell Product\n6.Delete Product\n7.Exit\n";
    int ch;
    while (true)
    {
        cout << "Choose : ";
        ch = takeint();
        if (ch >= 1 && ch <= 7)
            return ch;
    }
}

int main()
{
    Product products[100];
    int size = 0;
    while (true)
    {
        int ch = menu();
        if (ch == 1)
            add(products, size);
        else if (ch == 2)
            view(products, size);
        else if (ch == 3)
            search(products, size);
        else if (ch == 4)
            update(products, size);
        else if (ch == 5)
            sell(products, size);
        else if (ch == 6)
            del(products, size);
        else
            break;
    }
    cout << "PROJECT ENDED SUCCESSFULLY";
}
