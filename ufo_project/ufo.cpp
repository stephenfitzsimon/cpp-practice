#include <iostream>
#include "ufo_functions.hpp"

int main() {
    std::string codeword = "codeacademy";
    std::string answer = "___________";
    int misses = 0;

    std::vector<char> incorrect;
    bool guess = false;

    char letter;

    greet();

    while ((codeword != answer) & (misses < 7)) {
        display_misses(misses);

        std::cout << "Please enter your guess: ";
        std::cin >> letter;
        for (int i = 0; i < codeword.length(); i ++) {
            if (codeword[i] == letter) {
                answer[i] = letter;
                guess = true;
            }
        }
        if (guess) {
            std::cout << "Correct!";
        } else {
            std::cout << "Incorrect! The tractor beam pulls the person in further.";
            incorrect.push_back(letter);
            misses++;
        }

        display_status(incorrect, answer);
        guess = false;
    }

    end_game(answer, codeword);
}
