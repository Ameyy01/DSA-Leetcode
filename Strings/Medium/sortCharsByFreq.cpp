class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;

        for(char c:s) {
            freq[c]++;
        }

        vector<pair<int,char>> entries;
        for (auto &f: freq){
            entries.push_back({f.second, f.first});
        }

        sort(entries.rbegin(), entries.rend());
        

        string result = "";
        for (auto &entry : entries){
            result +=  string(entry.first , entry.second);
        }
        return result;
    }
};

// //📝 Notes: Frequency Sort using HashMap & Vector of Pairs in C++
// 🔹 1. Counting Frequency
// Use unordered_map<char, int> to count how many times each character appears in a string.

// cpp
// Copy
// Edit
// unordered_map<char, int> freq;
// for (char c : s) {
//     freq[c]++;
// }
// 🔹 2. Storing Frequency into Vector of Pairs
// To sort the data, convert the map into a vector of pairs.

// Store frequency as the first element of the pair, character as the second.

// cpp
// Copy
// Edit
// vector<pair<int, char>> entries;
// for (auto &f : freq) {
//     entries.push_back({f.second, f.first});
// }
// ✅ Why frequency first?
// Because sort() in C++ sorts by the first element of the pair by default.

// 🔹 3. Sorting the Vector
// Use sort(entries.rbegin(), entries.rend()); to sort in descending order of frequency.

// cpp
// Copy
// Edit
// sort(entries.rbegin(), entries.rend());
// rbegin() and rend() reverse the vector so we get highest frequencies first.

// 🔹 4. Building the Result String
// Use this constructor: string(count, char) to create repeated characters.

// Append each to the result.

// cpp
// Copy
// Edit
// string result = "";
// for (auto &entry : entries) {
//     result += string(entry.first, entry.second);
// }
