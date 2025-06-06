#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include <algorithm>

using namespace std;

class Filetrack {
private:
    int timestamp = 0;

    // fileID ? (fileName, owner)
    map<int, pair<string, string>> fileMap;

    // fileID ? last accessed timestamp
    map<int, int> lastAccessed;

    // userName ? files accessed
    unordered_map<string, vector<int>> userAccessMap;

public:
    void addFile() {
        int fileID;
        string fileName, owner;
        cout << "Enter file ID, file name, and owner: ";
        cin >> fileID >> fileName >> owner;

        if (fileMap.count(fileID)) {
            cout << "File ID already exists.\n";
            return;
        }

        fileMap[fileID] = { fileName, owner };
        cout << "File added successfully.\n";
    }

    void accessFile() {
        int fileID;
        string user;
        cout << "Enter file ID and user name: ";
        cin >> fileID >> user;

        if (!fileMap.count(fileID)) {
            cout << "Error: File ID not found.\n";
            return;
        }

        timestamp++;
        lastAccessed[fileID] = timestamp;
        userAccessMap[user].push_back(fileID);

        cout << "File accessed successfully.\n";
    }

    void deleteFile() {
        int fileID;
        cout << "Enter file ID to delete: ";
        cin >> fileID;

        if (!fileMap.count(fileID)) {
            cout << "Error: File ID not found.\n";
            return;
        }

        fileMap.erase(fileID);
        lastAccessed.erase(fileID);

        for (auto& [user, files] : userAccessMap) {
            files.erase(remove(files.begin(), files.end(), fileID), files.end());
        }

        cout << "File deleted successfully.\n";
    }

    void listAllFiles() {
        if (fileMap.empty()) {
            cout << "[No files available]\n";
            return;
        }

        cout << "[All Files]\n";
        for (const auto& [id, data] : fileMap) {
            cout << "ID: " << id << " | Name: " << data.first << " | Owner: " << data.second << endl;
        }
    }

    void listRecentFiles() {
        if (lastAccessed.empty()) {
            cout << "[No recent access recorded.]\n";
            return;
        }

        // Create vector of (timestamp, fileID) and sort by timestamp descending
        vector<pair<int, int>> recentList;
        for (auto& [id, time] : lastAccessed) {
            recentList.push_back({ time, id });
        }

        sort(recentList.rbegin(), recentList.rend());

        cout << "[Recently Accessed Files]\n";
        for (auto& [time, id] : recentList) {
            cout << "ID: " << id << " | Name: " << fileMap[id].first << " | Last Accessed: " << time << '\n';
        }
    }

    void listByUser() {
        string user;
        cout << "Enter user name: ";
        cin >> user;

        if (userAccessMap.find(user) == userAccessMap.end() || userAccessMap[user].empty()) {
            cout << "[No files accessed by this user.]\n";
            return;
        }

        cout << "[Files Accessed by User: " << user << "]\n";
        for (int fileID : userAccessMap[user]) {
            if (fileMap.count(fileID)) {
                cout << "ID: " << fileID << " | Name: " << fileMap[fileID].first << '\n';
            }
        }
    }
};

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

int main() {
    Filetrack f;
    int choice;

    while (true) {
        showMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            f.addFile();
            break;
        case 2:
            f.accessFile();
            break;
        case 3:
            f.deleteFile();
            break;
        case 4:
            f.listAllFiles();
            break;
        case 5:
            f.listRecentFiles();
            break;
        case 6:
            f.listByUser();
            break;
        case 0:
            cout << "Exiting FileTrackerFS. Goodbye!\n";
            return 0;
        default:
            cout << "Invalid option. Please try again.\n";
        }
    }

    return 0;
}
