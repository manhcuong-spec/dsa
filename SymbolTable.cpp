#include "SymbolTable.h"

void SymbolTable::readFile(string filename)
{
    ifstream ifs;
    ifs.open(filename);
    if (!ifs.good()) return;
    while (!ifs.eof()) {
        char tmp[64];
        ifs.getline(tmp, 64, \);
        cout << tmp << endl;
    }
    ifs.close();
}

bool SymbolTable::checkValidIns(string str){
    regex Insert r("^(Insert)\\d");
    regex Assign r("^(Assign)\\d");
    regex BeginEnd r("^(BeginEnd)\\d");
    regex LookUp r("^(LookUp)\\d");
    regex Print r("^(Print)\\d");
    regex RPrint r("^(RPrint)\\d");

    if (regex_match(str, Insert) return true;
    else if (regex_match(str, Assign) return true;
    else if (regex_match(str, BeginEnd) return true;
    else if (regex_match(str, LookUp) return true;
    else return false;
}

bool SymbolTable::Insert(string identifier_name, string type, string value){
    

}

void SymbolTable::run(string filename)
{
    cout << "success";
}