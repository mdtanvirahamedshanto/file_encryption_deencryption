#include<iostream>
#include "encryption.h"

using namespace std;

int main(){

    string filename;
    char mode;

    cout << "Enter the File Name: ";
    getline(cin >> ws, filename);

    cout << "Encrypt (e) Or Decrypt (d)..? ";
    cin >> mode;

    if (mode == 'e' || mode == 'E'){
        if (encryptFile(filename, true)){
            cout << "Encryption Completed Successfully."<<endl;
        }else{
            cerr << "Error: Unable to perform encryption."<<endl;
        }
    }else if (mode == 'd' || mode == 'D'){
        if (encryptFile(filename, false)){
            cout << "Decryption Completed Successfully."<<endl;
        }else{
            cerr << "Error: Unable to perfrom Decryption. "<<endl;
        }
    }else{
        cerr << "Error: Invalid mode selection. Use 'e' for encryption Or 'd' for decryption "<<endl;
    }

return 0;
}