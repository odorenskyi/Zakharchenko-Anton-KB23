#include "ZakharchenkoModules.h"

void printEntryByProductNumber(string filename, int productNumber) {
    ifstream infile(filename);
    if (!infile.is_open()) {
        cout << "Error opening file: " << filename << endl;
        return;
    }

    string line;
    bool found = false;
    while (getline(infile, line)) {
        if (line.find("����� ��������: " + to_string(productNumber)) != string::npos) {
            cout << line << endl;
            found = true;
            break;
        }
    }

    infile.close();
    if (!found) {
        cout << "������ " << productNumber << " �� ��������." << endl;
    }
}

void copyDirectoryToFile(string sourceFilename, string targetFilename) {
    ifstream sourceFile(sourceFilename);
    if (!sourceFile.is_open()) {
        cout << "������� �������� �����: " << sourceFilename << endl;
        return;
    }

    ofstream targetFile(targetFilename);
    if (!targetFile.is_open()) {
        cout << "������� �������� �����: " << targetFilename << endl;
        sourceFile.close();
        return;
    }

    string line;
    while (getline(sourceFile, line)) {
        targetFile << line << endl;
    }

    sourceFile.close();
    targetFile.close();
}