
#include <iostream>
using namespace std;
int main(){
    cout <<"=====Successes====="<<endl;
    int size = 10;
    int arr[size];
    int sum;
    cout <<"Enter your points: ";
    for (int i = 0; i < size ; ++i) {
        cin >> arr[i];

        if(arr[i] > 12 ^ arr[i] <1){
            cout <<"Error! Rating evaluation system up to 12 points"<<endl;
            --i;
            continue;
        }
    }
    cout <<"All points: ";

    int num=-1;
    for (int i = 0; i < size ; ++i) {

        num++;
        cout  <<"Num"<< num<< ":" << arr[i]<<" ";
    }
    cout <<endl;
    cout <<"========================="<<endl;
    char ans;
    int newarr;
    int index;
    cout <<"Do you want retake the exam?(y/n): ";

    for (int i = 0; i <= 1; ++i) {
        cin >> ans;
        if(ans == 'y'){
            cout <<"Enter number of the assessment you want to transfer: ";

            cin >> index;
            if (index < 0 || index >= size) {
                cout << "Invalid index." << endl;
                cout <<"Do you want retake the exam?(y/n): ";
                i--;
                continue;
            }
            cout <<"Enter new point: ";
            cin >> newarr;
            arr[index] =newarr;

            if(arr[index] > 12 ^ arr[index] <1) {
                cout << "Error! Rating evaluation system up to 12 points" << endl;
                cout <<"Do you want retake the exam?(y/n): ";
                i--;
                continue;
            }
            cout <<"========================="<<endl;
            cout <<"All points: ";
            num =-1;
            for (int i = 0; i < size ; ++i) {

                num++;
                sum +=arr[i];
                cout  <<"Num"<< num<< ":" << arr[i]<<" ";
            }

            break;


        }
        else if(ans == 'n'){
            break;
        }
        else{
            cout <<"Error! You need write y (yes) or n (not)!";
            i--;
        }

    }
    cout <<endl;
    double avg;
    avg = sum / size;
    cout <<"========================="<<endl;
    if(avg >= 10.7){
        cout <<"You get a scholarship. GPA:"<< avg;
    }
    else{
        cout <<"You don`t get a scholarship. GPA:"<<avg;

    }


    return 0;
}