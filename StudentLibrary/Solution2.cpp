#include "Solution2.h"

#include <ostream>
#include <iostream>
#include <fstream>
#include <stdexcept>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{
	std::ifstream file("BankAccount/" + accountName + ".txt");

	if (!file.is_open()) {
		throw std::runtime_error("Fichier introuvable");
	}

	float balance = 0.0f;
    std::string operation;
	float amount;

    while (file >> operation >> amount) {
        if (operation == "DEPOSIT") {
            balance += amount;
        }
        else if (operation == "WITHDRAW") {
            balance -= amount;
        }
        else {
            throw std::runtime_error("Opération impossible");
        }
    }

    file.close();

    return balance;
}

#endif
