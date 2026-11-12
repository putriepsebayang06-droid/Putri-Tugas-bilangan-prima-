#include <iostream> 
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i < 2) {
            continue; // Angka di bawah 2 langsung dilewati (bukan prima)
        }

        int jumlahPembagi = 0;

        for (int j = 1; j <= i; j++) { 
            if (i % j == 0) {
                jumlahPembagi = jumlahPembagi + 1;
            }
        }
        
        if (jumlahPembagi == 2) {
            cout << i << " ";
        }
    }

    return 0;
}