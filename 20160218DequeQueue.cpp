#include <iostream>
#include <deque>

template <typename T>
struct DQueue
{
	private:
		std::deque<T> data;
	public:
		DQueue(void) {}
		~DQueue(void) { data.clear(); }

		void enqueue(T n) { data.push_back(n); }
		void dequeue(void) { data.pop_front(); }
		
		T& front(void) { return data.front(); }
		void print_all(void)
		{
			unsigned int size = data.size();
			for(unsigned int i = 0; i < size; ++i)
				std::cout << data[i] << std::endl;
		}
		unsigned int size(void) { return data.size(); }
		bool empty(void) { return data.empty(); }
};

int main(void)
{
	DQueue<int> dqueue;
	dqueue.enqueue(1);
	dqueue.enqueue(2);
	dqueue.enqueue(3);
	dqueue.enqueue(4);
	dqueue.enqueue(5);
	
	dqueue.print_all();
	
	dqueue.enqueue(6);
	std::cout << dqueue.front() << std::endl;
	std::cout << dqueue.size() << std::endl;
	
	dqueue.dequeue();
	std::cout << dqueue.front() << std::endl;
	std::cout << dqueue.size() << std::endl;
	return 0;
}
