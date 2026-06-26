#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main()
{
    vector<string> words = {"apple", "is", "delicious", "fruit"};
    map<int, vector<string>> buckets;

    // Group words by their length
    for (string w : words)
    {
        buckets[w.size()].push_back(w);
    }

    // Print words in ascending order of length
    cout << "Sorted by length:\n";
    for (auto &entry : buckets)
    {
        for (string w : entry.second)
        {
            cout << w << endl;
        }
    }
    return 0;
}
