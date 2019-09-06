
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>
#include <cstdio>
#include <fstream>


using namespace std;

int main() {
    srand(time(NULL));
    ifstream fin("dict.txt");
    int n;
    fin >> n;
    string wordlist[n];
    
    
    
    
    for (int g = 0; g < n; g++) {
        fin >> wordlist[g];
    }
    
    int r = rand()%n ;
    
    
    string word = wordlist[r];
    string array[word.length()];
    //variables used : i, j, l, a, p, z, b, g
    
    char guess;
    bool included = true;
    bool completed = false;
    int mistakes = 0;
    string guesses = " ";
    
    
    

    for (int i = 0; i < word.length(); i++) {
        array[i] = "_";
    }
    
    cout << "This is the animal hangman game" << endl;
    cout << "The word has been chosen : " << endl;
    
    for (int j = 0; j < word.length() ; j++) {
        cout << array[j] << " ";
    }
    cout << endl;
    
    
    
    cout << endl;
  /////////////////
    while (mistakes < 6 || completed == true) {
        
        cout << endl;
        if (mistakes == 0) {
            cout << "| - - |" << endl;
            cout << "|     0" << endl;
            cout << "|     |" << endl;

        }
        else if (mistakes == 1) {
            cout << "| - - |" << endl;
            cout << "|     0" << endl;
            cout << "|     |" << endl;
            cout << "|     |" << endl;
        }
        else if (mistakes == 2) {
            cout << "| - - |" << endl;
            cout << "|     0" << endl;
            cout << "|     |" << endl;
            cout << "|    /|" << endl;
        }
        else if (mistakes == 3) {
            cout << "| - - |" << endl;
            cout << "|     0" << endl;
            cout << "|     |" << endl;
            cout << "|    /|\\" << endl;
        }
        else if (mistakes == 4) {
            cout << "| - - |" << endl;
            cout << "|     0" << endl;
            cout << "|     |" << endl;
            cout << "|    /|\\" << endl;
            cout << "|     |" << endl;
        }
        else if (mistakes == 5) {
            cout << "| - - |" << endl;
            cout << "|     0" << endl;
            cout << "|     |" << endl;
            cout << "|    /|\\" << endl;
            cout << "|     |" << endl;
            cout << "|    /" << endl;
        }
        else if (mistakes == 6) {
            cout << "| - - |" << endl;
            cout << "|     0" << endl;
            cout << "|     |" << endl;
            cout << "|    /|\\" << endl;
            cout << "|     |" << endl;
            cout << "|    / \\" << endl;
        }
        cout << endl;
        
       
        cout << "Enter your guess : " << endl;
        cin >> guess;
        
        
        if (guesses.find(guess) != -1) {
            cout << "You have already guessed this letter" << endl;
            continue;
        }
        cout << endl;
        
        guesses = guesses + guess;
        
        
        cout << "Your guessed letters are : " << endl;
        for (int b = 0; b < guesses.length(); b++) {
            
            cout << guesses[b] << " ";
        }
        cout << endl;
        
        
        for (int l = 0; l < word.length(); l++) {
            if (guess == word[l]) {
                included = true;
                break;
            }
            else {
                
                included = false;
                
            }
        }
        
        
        
        
        if (included == true) {
            for (int a = 0; a < word.length(); a++) {
                if (guess == word[a]) {
                    array[a] = guess;
                }
            }
        }
        else {
            mistakes++;
        }
        
        cout << "Try guessing the word : " << endl;
        for (int j = 0; j < word.length() ; j++) {
            cout << array[j] << " ";
        }
        cout << endl;
        completed= true;
        for (int p = 0; p < word.length(); p++) {
            if (array[p] == "_") {
                completed = false;
            }
        }
        
        if (completed == true) {
            break;
        }
        
        
    }
    
    if (completed == true) {
        cout << "Nice! You guessed my word : '" << word << "' with " << mistakes << " mistakes" << endl;
        return 0;
    }
    
    if (mistakes >= 6) {
        cout << "Oh you lost..." << endl;
        cout << "The word was : " << word << endl;
            cout << "| - - |" << endl;
            cout << "|     0" << endl;
            cout << "|     |" << endl;
            cout << "|    /|\\" << endl;
            cout << "|     |" << endl;
            cout << "|    / \\" << endl;
            cout << "=========" << endl;
        return 0;
    }

    
    
}
