// book-db.cpp 
// Lisa Jacklin
// CS 201
// 10/27/2021
//

#include <iostream>
#include <vector>


struct bookSearch {
	int ISBN;
	std::string Title;
	std::string Author;
	int Year;
};


int main()
{
	std::vector <std::string> booksOwned{
		"Lore Olympus",
		"The Lost Hero",
		"The Raven",
		"The way of Shadows",
		"The Lightbringer",
		"Mosquitoland",
		"The Name of the Wind",
		"Number the Stars",
		"Brave New World",
		"The Dark Tower",
		"I know why the caged bird sings",
		"Gone with the wind",
		"As I lay dying",
		"The grapes of wrath",
		"Bury my Heart at wounded knee",
		"Charlotte's Web",
		"the wanderer",
		"Where the mountain meets the moon",
		"Do androids dream of electric sheep?",
		"To kill a mockingbird",
		"The perks of being a wallflower"
	};

	for (auto i : booksOwned) {
		std::cout << "books Owned";
		std::cout << i << " \n";

	}

}

/*
requirements:
1 use an initializer to create 20 books in a vector
2 create the following options:
-list of all books
-list of all books loaned out
-list of all books not loaned out

-search for a book by :
1. ISBN
2. Title
3. Author
4. Year

*/
