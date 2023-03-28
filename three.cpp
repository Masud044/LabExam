#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    // Check if the filename is provided as command line argument.
    if (argc < 2) {
        cerr << argv[0] << " filename" << endl;
        return 1;
    }

    // Open the file.
    ifstream infile(argv[1]);
    if (!infile.is_open()) {
        cerr << "Error: Unable to open file '" << argv[1] << "'." << endl;
        return 1;
    }

    // Read and print the file contents.
    string line;
    while (getline(infile, line)) {
        cout << line << endl;
    }

    // Close the file.
    infile.close();

    return 0;
}
