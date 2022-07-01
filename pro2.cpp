#include <iostream>
#include <cstring>

using namespace std;

string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20];
int total = 0;

void enter()
{

    int choice;
    cout << "How many  student's you want to Add:=";
    cin >> choice;
    if (total == 0)
    {
        total = total + choice;

        for (int i = 0; i < choice; i++)
        {
            cout << "\n Enter the student data:=" << i + 1 << endl
                 << endl;

            cout << "Enter name: ";
            cin >> arr1[i];
            cout << "Enter rollno: ";
            cin >> arr2[i];
            cout << "Enter course: ";
            cin >> arr3[i];
            cout << "Enter class: ";
            cin >> arr4[i];
            cout << "Enter contact no: ";
            cin >> arr5[i];
        }
    }
    else
    {
        for (int i = total; i < total + choice; i++)
        {
            cout << "\n Enter the student data:=" << i + 1 << endl
                 << endl;

            cout << "Enter name: ";
            cin >> arr1[i];
            cout << "Enter rollno: ";
            cin >> arr2[i];
            cout << "Enter course: ";
            cin >> arr3[i];
            cout << "Enter class: ";
            cin >> arr4[i];
            cout << "Enter contact no: ";
            cin >> arr5[i];
        }
        total = total + choice;
    }
}

void show()
{
    if (total == 0)
    {
        cout << " no data is avialable right now please before inter data:" << endl;
    }
    else
    {
        for (int i = 0; i < total; i++)
        {
            cout << endl
                 << "Your save student's data is:=" << i + 1 << endl
                 << endl;

            cout << " name: " << arr1[i] << endl;

            cout << " rollno: " << arr2[i] << endl;

            cout << "Enter course: " << arr3[i] << endl;

            cout << "Enter class: " << arr4[i] << endl;

            cout << "Enter contact no: " << arr5[i] << endl;
        }
    }
}

void search()
{
    if (total == 0)
    {
        cout << "  no data is avialable right now please before inter data:" << endl;
    }
    else
    {
        string rollno;
        cout << " Enter the rollno which you want search:=";
        cin >> rollno;
        for (int i = 0; i < total; i++)
        {
            if (rollno == arr2[i])
            {
                cout << endl
                     << "Your Searching data is:=" << i + 1 << endl
                     << endl;

                cout << " name: " << arr1[i] << endl;

                cout << " rollno: " << arr2[i] << endl;

                cout << "Enter course: " << arr3[i] << endl;

                cout << "Enter class: " << arr4[i] << endl;

                cout << "Enter contact no: " << arr5[i] << endl;
            }
        }
    }
}
void update()
{
    if (total == 0)
    {
        cout << " no data is interd:" << endl;
    }
    else
    {
        string rollno;
        cout << " Enter the rollno which you want update:=";
        cin >> rollno;
        for (int i = 0; i < total; i++)
        {
            if (rollno == arr2[i])
            {
                cout << endl
                     << "Previous student data is:-" << i + 1 << endl
                     << endl;

                cout << " name: " << arr1[i] << endl;

                cout << " rollno: " << arr2[i] << endl;

                cout << "Enter course: " << arr3[i] << endl;

                cout << "Enter class: " << arr4[i] << endl;

                cout << "Enter contact no: " << arr5[i] << endl
                     << endl;

                cout << "Enter the new Data...........!:=" << endl
                     << endl;

                cout << "Enter name: ";
                cin >> arr1[i];
                cout << "Enter rollno: ";
                cin >> arr2[i];
                cout << "Enter course: ";
                cin >> arr3[i];
                cout << "Enter class: ";
                cin >> arr4[i];
                cout << "Enter contact no: ";
                cin >> arr5[i];
            }
        }
    }
}

void deletedata()
{
    if (total == 0)
    {
        cout << " no data is interd:" << endl;
    }
    else
    {
        int a;
        cout << "press 2 to 9  , no data delete :" << endl;
        cout << "press 1 to delete  particular record:" << endl;
        cout << " Enter your choice delete:= ";

        cin >> a;
        if (a != 1)
        {

            cout << " please enter write click for delete:" << endl;
        }
        else if (a == 1)
        {
            string rollno;
            cout << " Enter the rollno which you want delete:=";
            cin >> rollno;
            for (int i = 0; i < total; i++)
            {
                if (rollno == arr2[i])
                {
                    for (int j = 1; j < total; j++)
                    {
                        arr1[j] = arr1[j + 1];
                        arr2[j] = arr2[j + 1];
                        arr3[j] = arr3[j + 1];
                        arr4[j] = arr4[j + 1];
                        arr5[j] = arr5[j + 1];
                    }
                    total--;
                    cout << "your reqired record is delete....!";
                }
            }
        }
    }
}
int main()
{
    int value;
    while (true)
    {
        cout << endl
             << "*********** main ************" << endl;
        cout << "\n press 1 to enter data" << endl;
        cout << " press 2 to show data" << endl;
        cout << " press 3 to search data" << endl;
        cout << " press 4 to update data" << endl;
        cout << " press 5 to Delete data" << endl;
        cout << " press 6 Enter Exit " << endl
             << endl;
        cout << "Enter your choice:= ";

        cin >> value;
        switch (value)
        {
        case 1:
            enter();
            break;
        case 2:
            show();
            break;
        case 3:
            search();
            break;
        case 4:
            update();
            break;
        case 5:
            deletedata();
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "Invalid input";
            break;
        }
    }
}
