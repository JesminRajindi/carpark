#include <iostream>
#include <vector>
using namespace std;

const int maxCapacity = 15;

vector<string> vehicleList;

void parkVehicle(string vehicle) {
    if (vehicleList.size() >= maxCapacity) {
        cout << "Sorry, the park is fully right now...." << endl<<endl;
        return;
    }
    vehicleList.push_back(vehicle);
    cout << "Your vehicle " << vehicle << " parked successfully..." << endl<<endl;
}

void retrieveVehicle(string vehicle) {
    for (int i = 0; i < vehicleList.size(); i++) {
        if (vehicleList[i] == vehicle) {
            vehicleList.erase(vehicleList.begin() + i);
            cout << "Your vehicle " << vehicle << " retrieved successfully..." << endl<<endl;
            return;
        }
    }
    cout << "Your vehicle " << vehicle << " not found..." << endl<<endl;
}

void displayVehicle() {
    for (int i = 0; i < vehicleList.size(); i++) {
        cout << i + 1 << ". " << vehicleList[i] << endl;
    }
}

int main() {
	cout<<"##*JDID PARKING SERVICE*##"<<endl<<endl;
    while (true) {
        cout << "1.Enter no.1 for park a vehicle" << endl;
        cout << "2.Enter no.2 for retrieve a vehicle" << endl;
        cout << "3.Show parked vehicles" << endl;
        cout << "4.Exit" << endl;

        int choice;
        cin >> choice;

        if (choice == 1) {
            string vehicle;
            cout << "Enter vehicle registration number: ";
            cin.ignore();
            getline(cin, vehicle);
            parkVehicle(vehicle);
        }
        else if (choice == 2) {
            string vehicle;
            cout << "Enter vehicle registration number: ";
            cin.ignore();
            getline(cin, vehicle);
            retrieveVehicle(vehicle);
        }
        else if (choice == 3) {
            displayVehicle();
        }
        else if (choice == 4) {
            break;
        }
        else {
            cout << "Invalid choice." << endl;
        }
    }
    return 0;
}
