
#include <iostream>
#include <limits>
using namespace std;

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

int maximum(int a[], int s)
{
    int mx = a[0];
    for (int i = 1; i < s; i++)
        if (a[i] > mx)
            mx = a[i];
    return mx;
}
int minimum(int a[], int s)
{
    int mn = a[0];
    for (int i = 1; i < s; i++)
        if (a[i] < mn)
            mn = a[i];
    return mn;
}
int sum(int a[], int s)
{
    int t = 0;
    for (int i = 0; i < s; i++)
        t += a[i];
    return t;
}
float average(int a[], int s) { return (float)sum(a, s) / s; }

void create(int a[], int &s)
{
    cout << "Enter Size : ";
    s = takeint();
    while (s < 1 || s > 100)
    {
        cout << "Enter Size (1-100): ";
        s = takeint();
    }
    for (int i = 0; i < s; i++)
    {
        cout << "Element " << i + 1 << " : ";
        a[i] = takeint();
    }
}
void display(int a[], int s)
{
    if (s == 0)
    {
        cout << "Array Empty\n";
        return;
    }
    cout << "Array : ";
    for (int i = 0; i < s; i++)
        cout << a[i] << " ";
    cout << endl;
}
int findindex(int a[], int s, int val)
{
    for (int i = 0; i < s; i++)
        if (a[i] == val)
            return i;
    return -1;
}
void insert(int a[], int &s)
{
    if (s == 100)
    {
        cout << "Array Full\n";
        return;
    }
    int pos, val;
    cout << "Position : ";
    pos = takeint();
    while (pos < 1 || pos > s + 1)
    {
        cout << "Valid Position : ";
        pos = takeint();
    }
    cout << "Value : ";
    val = takeint();
    for (int i = s; i >= pos; i--)
        a[i] = a[i - 1];
    a[pos - 1] = val;
    s++;
}
void del(int a[], int &s)
{
    if (s == 0)
    {
        cout << "Array Empty\n";
        return;
    }
    int pos;
    cout << "Position : ";
    pos = takeint();
    while (pos < 1 || pos > s)
    {
        cout << "Valid Position : ";
        pos = takeint();
    }
    for (int i = pos - 1; i < s - 1; i++)
        a[i] = a[i + 1];
    s--;
}
void search(int a[], int s)
{
    if (s == 0)
    {
        cout << "Array Empty\n";
        return;
    }
    int v;
    cout << "Value : ";
    v = takeint();
    int idx = findindex(a, s, v);
    if (idx == -1)
        cout << "Not Found\n";
    else
        cout << "Found at Index " << idx << endl;
}
void update(int a[], int s)
{
    if (s == 0)
    {
        cout << "Array Empty\n";
        return;
    }
    int pos;
    cout << "Position : ";
    pos = takeint();
    while (pos < 1 || pos > s)
    {
        cout << "Valid Position : ";
        pos = takeint();
    }
    cout << "New Value : ";
    a[pos - 1] = takeint();
}
void sortarr(int a[], int s)
{
    for (int i = 0; i < s - 1; i++)
        for (int j = 0; j < s - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
}
void reversearr(int a[], int s)
{
    for (int i = 0, j = s - 1; i < j; i++, j--)
        swap(a[i], a[j]);
}
void removedup(int a[], int &s)
{
    for (int i = 0; i < s; i++)
        for (int j = i + 1; j < s;)
        {
            if (a[i] == a[j])
            {
                for (int k = j; k < s - 1; k++)
                    a[k] = a[k + 1];
                s--;
            }
            else
                j++;
        }
}
int menu()
{
    cout << "\n1.Create\n2.Display\n3.Insert\n4.Delete\n5.Search\n6.Update\n7.Sort\n8.Reverse\n9.Maximum\n10.Minimum\n11.Sum\n12.Average\n13.Remove Duplicates\n14.Exit\nChoose : ";
    int c = takeint();
    while (c < 1 || c > 14)
    {
        cout << "Choose Valid : ";
        c = takeint();
    }
    return c;
}
int main()
{
    int arr[100], size = 0;
    while (true)
    {
        switch (menu())
        {
        case 1:
            create(arr, size);
            break;
        case 2:
            display(arr, size);
            break;
        case 3:
            insert(arr, size);
            break;
        case 4:
            del(arr, size);
            break;
        case 5:
            search(arr, size);
            break;
        case 6:
            update(arr, size);
            break;
        case 7:
            sortarr(arr, size);
            cout << "Sorted\n";
            break;
        case 8:
            reversearr(arr, size);
            cout << "Reversed\n";
            break;
        case 9:
            if (size)
                cout << "Maximum = " << maximum(arr, size) << endl;
            else
                cout << "Array Empty\n";
            break;
        case 10:
            if (size)
                cout << "Minimum = " << minimum(arr, size) << endl;
            else
                cout << "Array Empty\n";
            break;
        case 11:
            if (size)
                cout << "Sum = " << sum(arr, size) << endl;
            else
                cout << "Array Empty\n";
            break;
        case 12:
            if (size)
                cout << "Average = " << average(arr, size) << endl;
            else
                cout << "Array Empty\n";
            break;
        case 13:
            removedup(arr, size);
            cout << "Duplicates Removed\n";
            break;
        case 14:
            cout << "Program Ended Successfully!\n";
            return 0;
        }
    }
}
