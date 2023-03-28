#include <bits/stdc++.h>
#include <unistd.h>
#include <sys/wait.h>
using namespace std;

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        cerr << "Fork failed." << endl;
        exit(1);
    } else if (pid == 0) {
        // This is the child process.
        cout << "Child process:" << endl;
        system("ls");
    } else {
        // This is the parent process.
        cout << "Parent process:" << endl;
        wait(NULL);
        cout << "Child process terminated." << endl;
    }

    return 0;
}

