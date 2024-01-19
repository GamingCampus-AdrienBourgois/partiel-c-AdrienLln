#include "Solution3.h"
#include <algorithm>
#include <stdexcept>
#include <cctype>
#include <vector>
#include <string>

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_3

void Solution3::SetWords(const std::vector<std::string>& _words)
{
	words = _words;
}

void Solution3::SortWords() 
{
	if (words.empty()) {
		throw std::runtime_error("La liste est vide. Impossible de la trier.");
	}
	std::sort(words.begin(), words.end(), CaseInsensitiveCompare);

}

std::vector<std::string> Solution3::GetSortedWords() const
{
	return words;
}

bool Solution3::CaseInsensitiveCompare(const std::string& a, const std::string& b)
{
	return std::lexicographical_compare(a.begin(), a.end(), b.begin(), b.end(),
		[](char c1, char c2) { return std::toupper(c1) < std::toupper(c2); });
}

#endif
