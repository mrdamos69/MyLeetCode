#include <iostream>
#include <string>

class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        std::string result = "";
        bool mem = false; 
        int allSize = a.size() > b.size() ? a.size() - (b.size()) : b.size() - (a.size());
        if(a == b && a != "0") return a + "0";
        else if(a == b && a == "0") return a;
        if (a.size() > b.size()) {
            for (int i = 0; i < allSize; i++) 
                b = "0" + b;
        } else if(a.size() < b.size()) {
            for (int i = 0; i < allSize; i++)
                a = "0" + a;
        }
        // std::cout << a << "   " << b << std::endl;

        for (int i = (a.size() - 1) ; i >= 0; i--) {
            if(mem && a[i] < b[i]) {
                a[i] = '1';
                mem = false;
            } else if(mem && a[i] > b[i]) {
                b[i] = '1';
                mem = false;
            }
            if(a[i] < b[i] || a[i] > b[i]) {
                result = "1" + result;
            } else if(a[i] == '1' && a[i] == b[i]) {
                result = mem ? "1" + result : "0" + result;
                mem = true;
            } else if(mem && (a[i] == '0' && a[i] == b[i])){
                result = "1" + result;
                mem = false;
            } else {
                result = "0" + result;
            }
        }
        if(mem) result = "1" + result;

        return result;
    }
};