//
// Created by Lenovo on 12-08-2025.
//
#include <iostream>
#include <string>

using namespace std;
int stringInitialization() {
    string s1 ;
    string s2 ( "Hello");
    string s3 ( s2);
    string s4 (5,'x');
    string s5 = "World";
    string s6 = s2 + s5;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;
}
int sizeAndCapacity() {
    string s = "Gurman Singh";
    cout<<"s.size() = "<<s.size()<<endl;
    cout<<"s.length() = "<<s.length()<<endl;
    cout<<"s.capacity() = "<<s.capacity()<<endl;
    cout<<"s.max_size() = "<<s.max_size()<<endl;
    cout<<"s.empty() = "<<s.empty()<<endl;
    cout<<"s =  "<<s<<endl;
    /*
    * s.capacity() → how many characters the string can hold before it needs to allocate more memory.
    * s.length() (or s.size()) → how many characters are currently stored in the string
     */
}

int _access () {
    string s = "Gurman Singh";
    int i =1;

    cout << "s[i] = "<<s[i]<< endl;
   // cout << "s.at(i) = "<< s.at(15) << endl; // id greater than the actual length of the string then it will throw an out of range error
    cout << "s.front() = "<< s.front() << endl;
    cout << "s.back() = "<< s.back() << endl;
    /*
    s[i] → Subscript operator
    No bounds checking → If i is out of range, behavior is undefined (could crash, could give garbage, could seem to "work").
    Faster → Just direct array indexing.
    Works for both reading and writing characters.
     */
    /*
    s.at(i) → Member function
    Bounds checking → If i is out of range, it throws a std::out_of_range exception.
    Slightly slower (because of the safety check).
    Works for both reading and writing characters too.
     */
    try {
        cout << "s.at(i) = "<< s.at(15) << endl;
    }catch (out_of_range &e) {
        cout << "Invalid index : " << e.what() <<endl;
    }
}
int modifyCapacity() {
    string s1 = "Gurman Singh";
    s1.reserve(50);
    cout << "s1.capacity() = " << s1.capacity() << endl;
    s1.shrink_to_fit();
    cout << "s1.capacity() = " << s1.capacity() << endl;
    return 0;
}
int modification() {
    string s1 = "Gurman";
    s1 += " Si";
    s1.append("ng");
    cout << s1 << endl;
    s1.push_back('h');
    cout << s1 << endl;
    s1.insert(3," Hello");
    cout << s1 << endl;
    s1.insert(5,2,'x');
    cout << s1 << endl;
    s1.replace(0,5,"Hello");
    cout << s1 << endl;
    s1.erase(0,2);
    cout << s1 << endl;
    s1.pop_back();
    cout << s1 << endl;
    s1.clear();
    cout << s1 << endl;
    return 0;
}
int searching() {
    string s = "abcdefghijklmnopqrstdefabcdefghijklmnopqrstdefabcdefghijklm";
    cout << s.find("ghi") << endl; // first occurence 
    cout << s.rfind("ghi") << endl; // last occurence
    cout << s.find_first_of("ghi")<< endl; //Looks for the first character that is either 'g', 'h', or 'i'.
    cout << s.find_last_of("ghi") << endl; //Looks for the last character that is 'g', 'h', or 'i'.
    cout << s.find_first_not_of("ghi") << endl; //Finds the first character NOT in {'g','h','i'}.
    cout << s.find_last_not_of("ghi") << endl; //Finds the last character NOT in {'g','h','i'}.

}

int subString() {
    string s = "Gurman Singh";
    string substr = s.substr(0,4); // last not included
    cout << substr << endl;
}
int compare() {
    string s = "Hello" ;
    cout << s.compare("Helo") << endl;
    // returns 0 for true and -1 for false
    string s1 = "Hello World";
    cout << s1.compare(3,2,"Hello World") << endl;
    s1 = "pineapple";
    string s2 = "apple pie";

    // Compare s1[4..8] ("apple") with s2[0..4] ("apple")
    if (s1.compare(4, 5, s2, 0, 5) == 0) {
        cout << "Equal substrings!" << endl;
    }
}
int swap() {
    string s1 = "Gurman Singh";
    string s2 = "Manan Sharma";
    s1.swap(s2);
    cout << s1 << endl;
    cout << s2 << endl;
}
int main() {
    swap();.0
    return 0;
}