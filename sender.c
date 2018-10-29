#include <iostream>

int main(int argc, char* argv) {
    // Cek command line arguments
    if (argc < 6) {
        printf("%s", "Argumen command line anda harus berupa <filename> <windowsize> <buffersize> <ip> <port>")
        return 0;
    }

    // Mengambil nama file yang ingin dikirim
    char* filename = argv[1];

    // Mengambil window size
    int windowsize = str_to_int(argv[2]);
    
    // Mengambil buffer size
    int buffersize = str_to_int(argv[2]);
    
    // Mengambil IP tujuan
    char* IP = argv[4];
    
    // mengambil port tujuan
    int port = str_to_int(argv[2]);

    return 0;
}