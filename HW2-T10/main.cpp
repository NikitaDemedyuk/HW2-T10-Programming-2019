//
//  main.cpp
//  HW2-T10
//
//  Created by Никита on 3/31/22.
//

#include <iostream>
#include <string>

void addelem(std::string &line){
    for (int i = line.size() - 2; i >= 0; i--) {
        if (line[i] == line [i + 1]) {
            line.erase(i, 1);
        }
    }
}

bool test(std::string &line, std::string line_result) {
    bool flag {true};
    for (int i = 0; i < line.size() - 1; i++) {
        if (line[i] != line_result[i]) {
            flag = false;
        }
    }
    return flag;
}

int main() {
    std::string line;
    std::cout << "Enter the line:\n";
    std::getline(std::cin, line);
    std::cout << "\n=================================================\n";
    addelem(line);
    std::cout << "Result:\n";
    std::cout << line << std::endl;
    std::cout << "Test {took good better}: ";
    std::string test_string = "took good better";
    addelem(test_string);
    std::string line_result("tok god beter");
    bool flag = test(test_string, line_result);
    if (flag) {
        std::cout << "Correct!\n";
    }
    else{
        std::cout << "Non correct :(";
    }
    std::cout << "\n=================================================\n";
    return 0;
}
