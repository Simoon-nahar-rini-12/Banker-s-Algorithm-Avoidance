#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of processes: ";
    cin >> n;
    cout << "Enter the number of resources: ";
    cin >> m;

    int alloc[n][m], max[n][m], avail[m];

    // Input allocation matrix
    cout << "Enter the allocation matrix (each row represents a process):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> alloc[i][j];
        }
    }

    // Input maximum resource matrix
    cout << "Enter the maximum resource matrix (each row represents a process):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> max[i][j];
        }
    }

    // Input available resources
    cout << "Enter the available resources: ";
    for (int i = 0; i < m; i++) {
        cin >> avail[i];
    }

    int f[n], ans[n], ind = 0;
    for (int k = 0; k < n; k++) {
        f[k] = 0;  // Initialize finish array
    }

    int need[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            need[i][j] = max[i][j] - alloc[i][j];  // Calculate the need matrix
        }
    }

    // Safety algorithm
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            if (f[i] == 0) {  // If process is not finished
                int flag = 0;
                for (int j = 0; j < m; j++) {
                    if (need[i][j] > avail[j]) {
                        flag = 1;  // Resources not available for this process
                        break;
                    }
                }

                if (flag == 0) {  // If resources are available
                    ans[ind++] = i;
                    for (int y = 0; y < m; y++) {
                        avail[y] += alloc[i][y];
                    }
                    f[i] = 1;
                }
            }
        }
    }

    // Check if all processes are finished
    bool isSafe = true;
    for (int i = 0; i < n; i++) {
        if (f[i] == 0) {
            isSafe = false;
            cout << "The given sequence is not safe\n";
            break;
        }
    }

    if (isSafe) {
        cout << "Following is the SAFE Sequence:\n";
        for (int i = 0; i < n - 1; i++) {
            cout << " P" << ans[i] << " ->";
        }
        cout << " P" << ans[n - 1] << endl;
    }

    return 0;
}
