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
	//list of all books
	std::vector <bookSearch> booksOwned { //most authors or publication dates are incorrect
		{31415264, "Lore Olympus","Rachel ", 2019},
		{48673866, "The Lost Hero","Rick", 2012},
		{20947984, "The Raven","Edgar ", 1872},
		{98173478, "The way of Shadows", "Brian ", 2008},
		{18478972, "The Lightbringer", "Brian ", 2018},
		{28757298, "Mosquitoland", "Machel", 1972},
		{38792857, "The Name of the Wind","Alivia ", 1892}
		/*{"Number the Stars",
		{"Brave New World",
		{"The Dark Tower",
		{"I know why the caged bird sings",
		{"Gone with the wind",
		"As I lay dying",
		"The grapes of wrath",
		"Bury my Heart at wounded knee",
		"Charlotte's Web",
		"the wanderer",
		"Where the mountain meets the moon",
		"Do androids dream of electric sheep?",
		"To kill a mockingbird",
		"The perks of being a wallflower"*/
	};

	

}

/*
-list of all books loaned out
-list of all books not loaned out

-search for a book by :
1. ISBN
2. Title
3. Author
4. Year

*/
