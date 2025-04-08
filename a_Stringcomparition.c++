// a) String compression

#include <iostream>
#include <string>
using namespace std;

// Compressor 1: Run-Length Encoding
string compress1(const string& input) {
    string compressed = "";
    int count = 1;
    for (size_t i = 1; i <= input.length(); ++i) {
        if (i < input.length() && input[i] == input[i - 1]) {
            count++;
        } else {
            compressed += input[i - 1] + to_string(count);
            count = 1;
        }
    }
    return compressed;
}

// Compressor 2: Remove redundant characters
string compress2(const string& input) {
    string optimized = "";
    for (size_t i = 0; i < input.length(); ) {
        char ch = input[i];
        string count = "";
        i++;
        while (i < input.length() && isdigit(input[i])) {
            count += input[i];
            i++;
        }

        if (!optimized.empty() && optimized.back() == ch) {
            optimized += count;
        } else {
            optimized += ch + count;
        }
    }
    return optimized;
}

// Decompressor: from second compressor
string decompress(const string& input) {
    string result = "";
    for (size_t i = 0; i < input.length(); ) {
        char ch = input[i];
        string count = "";
        i++;
        while (i < input.length() && isdigit(input[i])) {
            count += input[i];
            i++;
        }
        int num = (count == "") ? 1 : stoi(count);
        result.append(num, ch);
    }
    return result;
}

// Test cases
void test(const string& original) {
    cout << "Original:   " << original << endl;
    string c1 = compress1(original);
    cout << "Compress1:  " << c1 << endl;
    string c2 = compress2(c1);
    cout << "Compress2:  " << c2 << endl;
    string decomp = decompress(c2);
    cout << "Decompress: " << decomp << endl;
    cout << (original == decomp ? "✅ Test Passed" : "❌ Test Failed") << endl;
    cout << "-------------------------" << endl;
}

int main() {
    test("aabcccccaaa");        
    test("aabbcaaaccc");         
    test("aaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbca");
    test("a");                   
    test("abc");                 
    test("aaaabbbbccccaaa");    
    return 0;
}


