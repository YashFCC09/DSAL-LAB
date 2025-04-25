#include <iostream>
#include <fstream>
using namespace std;

void writef()
{
    int id;
    string name, dept, fee;
    fstream write;

    cout << "Enter the Student ID : ";
    cin >> id;
    cout << "Enter the Name : ";
    cin >> name;
    cout << "Enter the Department (e.g., CE) : ";
    cin >> dept;
    cout << "Enter the Fee : ";
    cin >> fee;

    if (id > 0 && id <= 10)
    {
        write.open("1to10.txt", ios::app);
        write << id << "\n";
        write << name << "\n";
        write << dept << "\n";
        write << fee << "\n\n";
        write.close();
    }
    else if (id > 10 && id <= 20)
    {
        write.open("11to20.txt", ios::app);
        write << id << "\n";
        write << name << "\n";
        write << dept << "\n";
        write << fee << "\n\n";
        write.close();
    }
    else if (id > 20 && id <= 30)
    {
        write.open("21to30.txt", ios::app);
        write << id << "\n";
        write << name << "\n";
        write << dept << "\n";
        write << fee << "\n\n";
        write.close();
    }
}

void readf()
{
    int id;
    string name, dept, fee;
    fstream read;

    read.open("1to10.txt", ios::in);
    while (read >> id >> name >> dept >> fee)
    {
        cout << id << endl;
        cout << name << endl;
        cout << dept << endl;
        cout << fee << endl << endl;
    }
    read.close();

    read.open("11to20.txt", ios::in);
    while (read >> id >> name >> dept >> fee)
    {
        cout << id << endl;
        cout << name << endl;
        cout << dept << endl;
        cout << fee << endl << endl;
    }
    read.close();

    read.open("21to30.txt", ios::in);
    while (read >> id >> name >> dept >> fee)
    {
        cout << id << endl;
        cout << name << endl;
        cout << dept << endl;
        cout << fee << endl << endl;
    }
    read.close();
}

void deletef()
{
    fstream read, write;
    int id, did;
    string name, dept, fee;
    cout << "Enter ID of student to delete: ";
    cin >> did;

    if (did > 0 && did <= 10)
    {
        read.open("1to10.txt", ios::in);
        while (read >> id >> name >> dept >> fee)
        {
            if (id == did)
            {
                cout << "Deleting Record.." << endl;
            }
            else
            {
                write.open("1to10up.txt", ios::app);
                write << id << "\n";
                write << name << "\n";
                write << dept << "\n";
                write << fee << "\n\n";
                write.close();
            }
        }
        read.close();
        remove("1to10.txt");
        rename("1to10up.txt", "1to10.txt");
    }
    else if (did > 10 && did <= 20)
    {
        read.open("11to20.txt", ios::in);
        while (read >> id >> name >> dept >> fee)
        {
            if (id == did)
            {
                cout << "Deleting Record.." << endl;
            }
            else
            {
                write.open("11to20up.txt", ios::app);
                write << id << "\n";
                write << name << "\n";
                write << dept << "\n";
                write << fee << "\n\n";
                write.close();
            }
        }
        read.close();
        remove("11to20.txt");
        rename("11to20up.txt", "11to20.txt");
    }
    else if (did > 20 && did <= 30)
    {
        read.open("21to30.txt", ios::in);
        while (read >> id >> name >> dept >> fee)
        {
            if (id == did)
            {
                cout << "Deleting Record.." << endl;
            }
            else
            {
                write.open("21to30up.txt", ios::app);
                write << id << "\n";
                write << name << "\n";
                write << dept << "\n";
                write << fee << "\n\n";
                write.close();
            }
        }
        read.close();
        remove("21to30.txt");
        rename("21to30up.txt", "21to30.txt");
    }
}

int main()
{
    int ch;
    while (1)
    {
        cout << "\n1. Add Student\n2. View Students\n3. Delete Student\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        if (ch == 1)
            writef();
        else if (ch == 2)
            readf();
        else if (ch == 3)
            deletef();
        else
            exit(0);
    }

    return 0;
}
