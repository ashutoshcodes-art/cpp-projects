
#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <fstream>
#include <iomanip>
using namespace std;

struct Product
{
    string name;
    int id;
    int quantity;
    float price;
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
float takefloat()
{
    float n;
    while (true)
    {
        cin >> n;
        if (cin.fail())
        {
            cout << "Enter Number Only : ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
            return n;
    }
}
int findindex(const vector<Product> &a, int id)
{
    for (size_t i = 0; i < a.size(); i++)
        if (a[i].id == id)
            return i;
    return -1;
}
bool uniqueid(const vector<Product> &a, int id)
{
    return findindex(a, id) == -1;
}
void save(const vector<Product> &a)
{
    ofstream fout("inventory.txt");
    for (auto &p : a)
    {
        fout << p.name << '\n'
             << p.id << '\n'
             << p.quantity << '\n'
             << p.price << '\n';
    }
}
void load(vector<Product> &a)
{
    ifstream fin("inventory.txt");
    if (!fin)
        return;
    Product t;
    while (getline(fin, t.name))
    {
        fin >> t.id >> t.quantity >> t.price;
        fin.ignore(numeric_limits<streamsize>::max(), '\n');
        a.push_back(t);
    }
}
void header()
{
    cout << left << setw(6) << "SNo" << setw(25) << "Name" << setw(10) << "ID" << setw(10) << "Qty" << setw(10) << "Price" << endl;
    cout << setfill('-') << setw(60) << "" << setfill(' ') << endl;
}
void row(const Product &p, int i)
{
    cout << left << setw(6) << i + 1 << setw(25) << p.name << setw(10) << p.id << setw(10) << p.quantity << setw(10) << p.price << endl;
}
int menu()
{
    cout << "\n1.Add Product\n2.View Products\n3.Search Product\n4.Update Product\n5.Delete Product\n6.Restock Product\n7.Sell Product\n8.Exit\nChoose : ";
    int c = takeint();
    while (c < 1 || c > 8)
    {
        cout << "Choose Valid : ";
        c = takeint();
    }
    return c;
}
void add(vector<Product> &a)
{
    Product t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter Product Name : ";
    getline(cin, t.name);
    cout << "Enter Product ID : ";
    t.id = takeint();
    while (!uniqueid(a, t.id))
    {
        cout << "Unique ID : ";
        t.id = takeint();
    }
    cout << "Enter Quantity : ";
    t.quantity = takeint();
    cout << "Enter Price : ";
    t.price = takefloat();
    a.push_back(t);
    save(a);
}
void view(const vector<Product> &a)
{
    if (a.empty())
    {
        cout << "No Products\n";
        return;
    }
    header();
    for (size_t i = 0; i < a.size(); i++)
        row(a[i], i);
}
void search(const vector<Product> &a)
{
    int id;
    cout << "Enter ID : ";
    id = takeint();
    int idx = findindex(a, id);
    if (idx == -1)
        cout << "Product Not Found\n";
    else
    {
        header();
        row(a[idx], idx);
    }
}
void update(vector<Product> &a)
{
    int id;
    cout << "Enter ID : ";
    id = takeint();
    int idx = findindex(a, id);
    if (idx == -1)
    {
        cout << "Product Not Found\n";
        return;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "New Name : ";
    getline(cin, a[idx].name);
    cout << "New Quantity : ";
    a[idx].quantity = takeint();
    cout << "New Price : ";
    a[idx].price = takefloat();
    save(a);
}
void del(vector<Product> &a)
{
    int id;
    cout << "Enter ID : ";
    id = takeint();
    int idx = findindex(a, id);
    if (idx == -1)
    {
        cout << "Product Not Found\n";
        return;
    }
    a.erase(a.begin() + idx);
    save(a);
}
void restock(vector<Product> &a)
{
    int id;
    cout << "Enter ID : ";
    id = takeint();
    int idx = findindex(a, id);
    if (idx == -1)
    {
        cout << "Product Not Found\n";
        return;
    }
    int q;
    cout << "Quantity to Add : ";
    q = takeint();
    a[idx].quantity += q;
    save(a);
}
void sell(vector<Product> &a)
{
    int id;
    cout << "Enter ID : ";
    id = takeint();
    int idx = findindex(a, id);
    if (idx == -1)
    {
        cout << "Product Not Found\n";
        return;
    }
    int q;
    cout << "Quantity to Sell : ";
    q = takeint();
    if (q > a[idx].quantity)
    {
        cout << "Insufficient Stock\n";
        return;
    }
    a[idx].quantity -= q;
    cout << "Bill = " << q * a[idx].price << endl;
    save(a);
}
int main()
{
    vector<Product> inv;
    load(inv);
    while (true)
    {
        switch (menu())
        {
        case 1:
            add(inv);
            break;
        case 2:
            view(inv);
            break;
        case 3:
            search(inv);
            break;
        case 4:
            update(inv);
            break;
        case 5:
            del(inv);
            break;
        case 6:
            restock(inv);
            break;
        case 7:
            sell(inv);
            break;
        case 8:
            cout << "Exited Successfully!\n";
            return 0;
        }
    }
}
