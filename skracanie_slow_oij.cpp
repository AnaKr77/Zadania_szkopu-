#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<string, int>> slowa(n);

    for (int i = 0; i < n; i++) {
        cin >> slowa[i].first;
        slowa[i].second = i;
    }

    sort(slowa.begin(), slowa.end());

    vector<string> skrocone(n);

    for (int i = 0; i < n; i++) {
        string slowo = slowa[i].first;
        int minimalnaDlugosc = 1;

        if (i > 0) {
            string poprzednie = slowa[i - 1].first;
            int j = 0;
            while (j < slowo.size() && j < poprzednie.size() && slowo[j] == poprzednie[j]) {
                j++;
            }
            minimalnaDlugosc = max(minimalnaDlugosc, j + 1);
        }

        if (i < n - 1) {
            string nastepne = slowa[i + 1].first;
            int j = 0;
            while (j < slowo.size() && j < nastepne.size() && slowo[j] == nastepne[j]) {
                j++;
            }
            minimalnaDlugosc = max(minimalnaDlugosc, j + 1);
        }

        skrocone[slowa[i].second] = slowo.substr(0, minimalnaDlugosc);
    }

    for (const string &s : skrocone) {
        cout << s << endl;
    }

    return 0;
}
