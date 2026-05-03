#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int maxLen = 0;

    for(int i = 0; i < s.length(); i++) {
        bool visited[256] = {false};
        for(int j = i; j < s.length(); j++) {
            if(visited[s[j]])
                break;
            visited[s[j]] = true;
            maxLen = max(maxLen, j - i + 1);
        }
    }

    cout << maxLen;
    return 0;
}
