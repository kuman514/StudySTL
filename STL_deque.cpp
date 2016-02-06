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

	return 0;
}
