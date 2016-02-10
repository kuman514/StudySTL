#include <iostream>
#include <deque>

int main(void)
{
	std::deque<char> koishi;

	std::cout << (koishi.empty() ? "Empty" : "Not Empty") << std::endl;
										// returns "Empty"

	koishi.push_front('i');				// i
	koishi.push_front('o');				// oi

	koishi.push_back('s');				// ois
	koishi.push_back('h');				// oish

	koishi.push_front('k');				// koish
	koishi.push_back('i');				// koishi

	std::cout << (koishi.empty() ? "Empty" : "Not Empty") << std::endl;
										// returns "Not Empty"
	
	std::deque<char>::iterator ITEREND = koishi.end();
	for(std::deque<char>::iterator ITERPOS = koishi.begin(); ITERPOS != ITEREND; ++ITERPOS)
		std::cout << *ITERPOS;			// Print each char of deque
	std::cout << std::endl;

	koishi.clear();						// Clear the deque
	std::cout << (koishi.empty() ? "Empty" : "Not Empty") << std::endl;

	// ====================================================================//

	std::deque<char> *gigadelic = new std::deque<char>;

	gigadelic -> push_front('d');		// d
	gigadelic -> push_back('e');		// de
	gigadelic -> push_front('a');		// ade
	gigadelic -> push_front('g');		// gade
	gigadelic -> push_front('i');		// igade
	gigadelic -> push_front('g');		// gigade
	gigadelic -> push_back('l');		// gigadel
	gigadelic -> push_back('i');		// gigadeli
	gigadelic -> push_back('c');		// gigadelic

	std::deque<char>::reverse_iterator RITEREND = gigadelic -> rend();
	for(std::deque<char>::reverse_iterator RITERPOS = gigadelic -> rbegin(); RITERPOS != RITEREND; ++RITERPOS)
		std::cout << *RITERPOS;			// next reverse access by using reverse_iterator also requires ++
	std::cout << std::endl;

	gigadelic -> clear();

	return 0;
}
