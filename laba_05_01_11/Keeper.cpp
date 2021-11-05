#include "Keeper.h"

Keeper::Keeper() : queues(nullptr), _size(0)
{
	std::cout << "Keeper";
}

Keeper::~Keeper()
{
	std::cout << "~Keeper";
	for (size_t i = 0; i < _size; i++)
		delete queues[i];
	if (queues) delete[] queues;
}

void Keeper::add(Queue* elem)
{
	Queue** newArray = new Queue* [++_size];
	for (int i = 0; i < _size - 1; i++)
		newArray[i] = queues[i];
	newArray[_size - 1] = elem;
	if(queues) delete[] queues;
	queues = newArray;
}

void Keeper::del(size_t position)
{
	if (position >= _size || position < 0)
		throw - 1;
	delete this->queues[position - 1];
	for (int i = position - 1; i < _size; i++)
		this->queues[i] = this->queues[i + 1];
	this->_size--;
}

bool Keeper::save(std::string file)
{
	std::ofstream fout(file);
	if (!fout) return false;
	fout << std::to_string(_size) << std::endl;
	for (size_t i = 0; i < _size; ++i)
		fout << queues[i]->get_string_data();

	fout.close();
	return true;
}

bool Keeper::load(std::string file)
{
	std::ifstream fin(file);
	if (!fin) return false;

	std::string type;
	size_t queue_amount;

	fin >> queue_amount;
	for (size_t i = 0; i < queue_amount; i++)
	{
		if (fin.eof()) return false;
		fin >> type;
		if (type == "List")
			add(new List());
		else if (type == "Deck")
			add(new Deck());
		else if (type == "Stack")
			add(new Stack());
	}
	return true;
}

void Keeper::print()
{
	for (size_t i = 0; i < _size; i++)
		std::cout << "Контейнер №" << i + 1 << ":\n" << queues[i]->get_print_data();
}

void Keeper::elems_menu(size_t position)
{
	if (position >= _size || position < 0)
		throw - 1;
	queues[position]->menu();
}

size_t Keeper::size()
{
	return _size;
}