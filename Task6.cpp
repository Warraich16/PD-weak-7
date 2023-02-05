#include <iostream>
using namespace std;
int main()
{
    int period;
    cout << "Enter number of periods: ";
    cin >> period;

    int patientsNo = 0;
    int doctorNo = 7;
    int treated_Patients = 0;
    int untreated_Patients = 0;

    for (int day = 1; day <= period; day++)
    {
        cout << "ENTER NO OF PATIENTS ON DAY " << day << " : ";
        cin >> patientsNo;

        if ((day % 3 == 0) && (treated_Patients < untreated_Patients))
        {
            doctorNo++;
           
        }
        if (patientsNo > doctorNo)
        {
            treated_Patients = treated_Patients + doctorNo;
            untreated_Patients = untreated_Patients + patientsNo - doctorNo;
        }
        else
        {
            treated_Patients = treated_Patients + patientsNo;
        }
    }

    cout << "The total number of treated patients are: " << treated_Patients << endl;
    cout << "The total number of untreated patients are: " << untreated_Patients << endl;

    return 0;
}
