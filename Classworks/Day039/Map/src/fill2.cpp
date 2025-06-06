#include <iostream>       // For input/output streams
#include <vector>         // To use vector container
#include <string>         // To use string class
#include <unordered_map>  // For hash map (user to files)
#include <map>            // For ordered map (fileID to data)
#include <algorithm>      // For algorithms like remove and sort

using namespace std;      // Use standard namespace to avoid std:: prefix

// Class to simulate file tracking system
class Filetrack {
private:
    int timestamp = 0;  // Keeps track of access order/time, increments each access

    // Map from fileID to pair of (fileName, ownerName)
    map<int, pair<string, string>> fileMap;

    // Map from fileID to last accessed timestamp
    map<int, int> lastAccessed;

    // Map from userName to vector of fileIDs accessed by that user
    unordered_map<string, vector<int>> userAccessMap;

public:
    // Function to add a new file to the system
    void addFile() {
        int fileID;
        string fileName, owner;

        cout << "Enter file ID, file name, and owner: ";
        cin >> fileID >> fileName >> owner;   // Take input for file details

        // Check if the fileID already exists to avoid duplicates
        if (fileMap.count(fileID)) {
            cout << "File ID already exists.\n";  // Error message if duplicate
            return;
        }

        // Add the fileID and its metadata to the fileMap
        fileMap[fileID] = { fileName, owner };

        cout << "File added successfully.\n";  // Confirm addition
    }

    // Function to simulate accessing a file by a user
    void accessFile() {
        int fileID;
        string user;

        cout << "Enter file ID and user name: ";
        cin >> fileID >> user;  // Take input of file to access and user

        // Check if the fileID exists in the system
        if (!fileMap.count(fileID)) {
            cout << "Error: File ID not found.\n";  // Error if no such file
            return;
        }

        timestamp++;  // Increment the global timestamp for this access

        lastAccessed[fileID] = timestamp;  // Update the file's last access time

        userAccessMap[user].push_back(fileID);  // Record that user accessed this file

        cout << "File accessed successfully.\n";  // Confirmation message
    }

    // Function to delete a file from the system
    void deleteFile() {
        int fileID;
        cout << "Enter file ID to delete: ";
        cin >> fileID;  // Input fileID to delete

        // Check if fileID exists
        if (!fileMap.count(fileID)) {
            cout << "Error: File ID not found.\n";  // Error if no such file
            return;
        }

        fileMap.erase(fileID);        // Remove file from fileMap
        lastAccessed.erase(fileID);   // Remove last accessed info

        // Remove fileID from all user access vectors
        for (auto& [user, files] : userAccessMap) {
            // Remove all occurrences of fileID from user's accessed files
            files.erase(remove(files.begin(), files.end(), fileID), files.end());
        }

        cout << "File deleted successfully.\n";  // Confirm deletion
    }

    // Function to list all files currently in the system
    void listAllFiles() {
        if (fileMap.empty()) {           // If no files present
            cout << "[No files available]\n";
            return;
        }

        cout << "[All Files]\n";
        // Loop over all files and print their details
        for (const auto& [id, data] : fileMap) {
            cout << "ID: " << id
                << " | Name: " << data.first
                << " | Owner: " << data.second << endl;
        }
    }

    // Function to list files sorted by most recent access time
    void listRecentFiles() {
        if (lastAccessed.empty()) {      // If no files have been accessed
            cout << "[No recent access recorded.]\n";
            return;
        }

        // Create a vector to store pairs of (timestamp, fileID)
        vector<pair<int, int>> recentList;
        for (auto& [id, time] : lastAccessed) {
            recentList.push_back({ time, id });
        }

        // Sort the vector by timestamp descending (most recent first)
        sort(recentList.rbegin(), recentList.rend());

        cout << "[Recently Accessed Files]\n";
        // Print files with their last accessed timestamp
        for (auto& [time, id] : recentList) {
            cout << "ID: " << id
                << " | Name: " << fileMap[id].first
                << " | Last Accessed: " << time << '\n';
        }
    }

    // Function to list all files accessed by a particular user
    void listByUser() {
        string user;
        cout << "Enter user name: ";
        cin >> user;

        // Check if user has accessed any files
        if (userAccessMap.find(user) == userAccessMap.end() || userAccessMap[user].empty()) {
            cout << "[No files accessed by this user.]\n";
            return;
        }

        cout << "[Files Accessed by User: " << user << "]\n";
        // Loop over all files accessed by this user and print file details
        for (int fileID : userAccessMap[user]) {
            // Only print if file still exists (not deleted)
            if (fileMap.count(fileID)) {
                cout << "ID: " << fileID
                    << " | Name: " << fileMap[fileID].first << '\n';
            }
        }
    }
};

// Function to display menu options
void showMenu() {
    cout << "\n====== FileTrackerFS Menu ======" << endl;
    cout << "1. ADD File" << endl;
    cout << "2. ACCESS File" << endl;
    cout << "3. DELETE File" << endl;
    cout << "4. LIST_ALL Files" << endl;
    cout << "5. LIST_RECENT Files" << endl;
    cout << "6. LIST_BY_USER" << endl;
    cout << "0. EXIT" << endl;
    cout << "Choose an option: ";
}

// Main function
int main() {
    Filetrack f;     // Create an object of Filetrack class to manage files
    int choice;      // Variable to store user's menu choice

    while (true) {
        showMenu();   // Display menu options
        cin >> choice; // Read user choice

        switch (choice) {
        case 1:
            f.addFile();      // Add file option
            break;
        case 2:
            f.accessFile();   // Access file option
            break;
        case 3:
            f.deleteFile();   // Delete file option
            break;
        case 4:
            f.listAllFiles(); // List all files option
            break;
        case 5:
            f.listRecentFiles();  // List recently accessed files
            break;
        case 6:
            f.listByUser();    // List files accessed by a user
            break;
        case 0:
            cout << "Exiting FileTrackerFS. Goodbye!\n";  // Exit program
            return 0;
        default:
            cout << "Invalid option. Please try again.\n";  // Invalid choice message
        }
    }

    return 0;  // Program ends here
}
