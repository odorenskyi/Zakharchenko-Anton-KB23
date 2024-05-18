#include "LinnikovaModules.h"

void writeToFile(string filename, int directoryPart, string directoryPartName, int groupArticle, int numberArticle, string articleName) {
    ofstream outfile(filename, ios::app);
    if (!outfile) {
        cout << "������� ������: " << filename << endl;
        return;
    }

    outfile << "�����: " << directoryPart << ","
        << directoryPartName << ","
        "������ " << groupArticle << ","
        "����� ��������: " << numberArticle << ","
        "����� ��������: " << articleName << endl;
}

void deleteEntryByProductNumber(string filename, int productNumber) {
    ifstream infile(filename);
    if (!infile.is_open()) {
        cout << "������� ��������: " << filename << endl;
        return;
    }

    vector<string> lines;
    string line;

    while (getline(infile, line)) {
        if (line.find("����� ��������: " + to_string(productNumber)) == string::npos) {
            lines.push_back(line);
        }
    }

    infile.close();

    ofstream outfile(filename);
    if (!outfile.is_open()) {
        cout << "Error opening file for writing: " << filename << endl;
        return;
    }

    for (const auto& l : lines) {
        outfile << l << endl;
    }
}