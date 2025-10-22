#include <iostream>
#include <fstream>
#include <iomanip>  // çıktının formatını ayarlamak için kullanılır
using namespace std;

int main() {
    ifstream inputFile("numbers.txt"); 
    if (!inputFile.is_open()) {
        cout << "Error: numbers.txt dosyası açılamadı!" << endl;
        return 1;
    }

    double number, sum = 0;
    int count = 0;

    while (inputFile >> number) {  
        sum += number;
        count++;
    }

    inputFile.close();

    if (count == 0) {
        cout << "Dosyada sayı bulunamadı." << endl;
        return 1;
    }

    double average = sum / count;

    ofstream outputFile("average.txt");  
    if (!outputFile.is_open()) {
        cout << "Error: average.txt oluşturulamadı!" << endl;
        return 1;
    }
    outputFile << fixed << setprecision(2) << average << endl;
    outputFile.close();

    cout << "Ortalama hesaplandı ve average.txt dosyasına yazıldı: " << average << endl;

    return 0;
}

