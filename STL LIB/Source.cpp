#include <iostream>
#include <string>
#include <vector>
#include <iterator>
class Person {
private:
	std::string _name;
	int _age;
public:
	Person(std::string name, int age):_name(name),_age(age)//Способ записи Конструктора в короткой форме
	{
		
	}
	void ShowData() {
		std::cout << "Name: " << _name << '\n';
		std::cout << "Age: " << _age << '\n';
	}
	std::string GetName() {
		return _name;
	}
};
int main() {
	std::vector<int>vec = { 1,10,20 };
	//Вектор и его функции
	/*
	vec.push_back(5);//Добавление значения в конец вектора
	vec.size();//Размер вектора
	vec.pop_back();//Удаляет элемент в конце вектора
	vec.begin();//Возвращает указатель на первый элемент
	vec.end();//Возвращает указатель на последний элемент
	vec.erase(vec.begin() + 2);//Удаляет значение нужного элемента
	vec.at(0)=10;//Обращение к значению элемента

	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec.at(i) <<" ";
	}
	*/
	//Итераторы
	/*
	std::vector<int>::iterator it; //Итератор - аналог указателя на вектор используемый внутри библиотеки STL
	it = vec.begin();
	std::cout << *it<<'\n';

	for (it =vec.begin();it!=vec.end();++it)
		std::cout << *it << ' ';
		
	

	Person pers1("John", 20);
	Person pers2("Bob", 30);
	Person pers3("Alex", 35);


	std::vector<Person>people;
	std::vector<Person>::iterator it;
	people.push_back(pers1);
	people.push_back(pers2);
	people.push_back(pers3);

	for (int i = 0; i < people.size(); i++) {
		people.at(i).ShowData();
	}


	std::vector<std::string> names;
	names.push_back(pers1.GetName());
	names.push_back(pers2.GetName());
	names.push_back(pers3.GetName());

	for (int i = 0; i < names.size(); i++) {
		std::cout << names.at(i)<<' ';
	}
	*/

	Person* person1 = new Person("Bob", 20); //Лучше добавлять в вектор указатели на обьекты класса, чтобы избежать забивания памяти, иначе будет создаваться копия объекта
	Person* person2 = new Person("Alex", 25);
	Person* person3 = new Person("John", 30);
	std::vector <Person*> people;
	people.push_back(person1);
	people.push_back(person2);
	people.push_back(person3);

	for (int i = 0; i < people.size(); i++)
		people.at(i)->ShowData();
	return 0;
}