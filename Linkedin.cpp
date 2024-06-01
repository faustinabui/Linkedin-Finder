#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to convert a string to lowercase
string toLower(const string& str) {
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

// Function to replace spaces with hyphens
string replaceSpacesWithHyphens(const string& str) {
    string hyphenStr = str;
    replace(hyphenStr.begin(), hyphenStr.end(), ' ', '-');
    return hyphenStr;
}

// Function to construct the LinkedIn profile URL
string constructLinkedInURL(const string& firstName, const string& lastName) {
    string url = "https://www.linkedin.com/in/";
    url += replaceSpacesWithHyphens(toLower(firstName)) + "-" + replaceSpacesWithHyphens(toLower(lastName));
    return url;
}

int main() {
    string firstName, lastName;

    // Get user's first and last name
    cout << "Enter the first name: ";
    getline(cin, firstName);
    cout << "Enter the last name: ";
    getline(cin, lastName);

    // Construct the LinkedIn profile URL
    string linkedInURL = constructLinkedInURL(firstName, lastName);

    // Display the LinkedIn profile URL
    cout << "LinkedIn Profile URL: " << linkedInURL << endl;

    return 0;
}
