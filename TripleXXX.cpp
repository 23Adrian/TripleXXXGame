#include <iostream>
#include <string.h>

bool playgame(int Difficulty){
    std::cout << "\n\nWelcome young wizard. \n";
    std::cout << "You are trying to develop a new " << Difficulty << " level spell in your grimoire.\n";
    std::cout << "To do so you must figure out three numbers. \n";

    int a = rand() % Difficulty +1;
    int b = rand() % Difficulty +1; 
    int c = rand() % Difficulty +1;

    int GuessA;
    int GuessB;
    int GuessC;

    int sum = a+b+c;
    int product = a*b*c;

    std::cout << "The three numbers have a sum of " << sum;
    std::cout<< " \nAs well as a product of " << product;

    std::cout<< " \nTry to guess these three numbers. \n";

    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    std::cout << "Your three numbers where" << GuessC << GuessB << GuessA;


    int guessSum= GuessA+ GuessB + GuessC;
    int guessProduct = GuessC * GuessB * GuessA;

    std::cout << "\nThe sum of which is " << guessSum;
    std::cout << "\nWith a product of " << guessProduct;

    if(guessProduct == product && guessSum == sum){
        std::cout << "\nCongratulations, you have managed to create a new spell.\n";
        return true;
    }else{
        std::cout << "\nSorry but your guess was inadecuate. \n Please try again and discover a new spell\n";
        return false;
    }

}

int main(){
    int LevelDifficulty= 1;
    const int MaxDifficulty = 10;

    while(LevelDifficulty <= MaxDifficulty){
        //playgame(LevelDifficulty);
        if (playgame(LevelDifficulty) == true){
        LevelDifficulty ++;  
        } 
    }
    std::cout << "\n Congradulations, you managed to finish your grimoire.";
    return 0;
}
