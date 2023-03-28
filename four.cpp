#include<bits/stdc++.h>
#include <unistd.h>
#include <sys/types.h>
using namespace std;

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        cerr << "Fork failed." <<endl;
        exit(1);
    } else if (pid == 0) {
        // This is the child process.
        for (int i = 0; i < 100; i++) {
            cout<< "I am a child process" <<endl;
        }
    } else {
        // This is the parent process.
        for (int i = 0; i < 100; i++) {
            cout << "I am a parent process" << endl;
        }
    }

    return 0;
}

