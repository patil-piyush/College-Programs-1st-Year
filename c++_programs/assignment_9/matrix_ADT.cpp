#include<iostream>
using namespace std;

class matrix{
    int m[2][2];
    public:
    void read();
    // void show();
    void operator+(matrix);
    void operator-(matrix);
    void operator*(matrix);
};

void matrix::read(){
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout<<"Enter the element at position ("<<i+1<<","<<j+1<<"): ";
            cin>>m[i][j];
        }
        cout<<endl;
    }
}

// void matrix::show(){
//     for (int i=0; i<2; i++){
//         for (int j=0; j<2; j++){
//             cout<<m[i][j];
//         }
//         cout<<endl;
//     }
// }

void matrix::operator+(matrix a){
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout<<m[i][j]+a.m[i][j]<<" ";
        }
        cout<<endl;
    }
}

void matrix::operator-(matrix a){
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout<<m[i][j]-a.m[i][j]<<" ";
        }
        cout<<endl;
    }
}

void matrix::operator*(matrix a){
    int n[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            n[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                n[i][j] += m[i][k] * a.m[k][j];
            }
        }
    }

    //printing n
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout<<n[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    matrix m1,m2;
    bool ebool;
    ebool=true;
    while(ebool){
        cout<<"1. Enter the matrix 1\n"
            <<"2. Enter the matrix 2\n"
            <<"3. Addition of two matrices\n"
            <<"4. Subtraction of two matrices\n"
            <<"5. Multiplication of two matrices\n"
            <<"6. Exit\n"
            <<"\tSelected option: ";
        int n1;
        cin>>n1;
        switch (n1){
            case 1:
                m1.read();
                break;
            case 2:
                m2.read();
                break;
            case 3:
                m1+m2;
                break;
            case 4:
                m1-m2;
                break;
            case 5:
                m1*m2;
                break;
            case 6:
                cout<<"Exiting the Program.\n";
                exit(0);
            default:
                cout<<"Invalid number, choose again\n";
                break;
        }
    }
    return 0;
}