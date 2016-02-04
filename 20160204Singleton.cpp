#include <iostream>

struct Singleton
{
	public:
		Singleton* init(int num)
		{
			if(instance == nullptr)
			{
				instance = new Singleton;
				instance -> data = num;
			}
			return instance;
		}
		void remove(void)
		{
			instance -> data = 0;
			delete instance;
		}
		~Singleton() {}
	private:
		Singleton() {}
		static Singleton *instance;
		int data;
};

int main(void)
{
	Singleton *singleton;
	singleton.instance = singleton.init(12);
	return 0;
}
