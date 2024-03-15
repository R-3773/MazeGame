#include <iostream>
#include <string>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

//Class that holds all functions
template <typename T>
class Functions {
public:
    void Print();
    void Create();
    void pushe(const char s, const char e);
    void pushd(const char s, const char d);
    void pushx(const char s, const char x);
    bool UpTest(unsigned int xI, unsigned int yI);
    bool DownTest(unsigned int xI, unsigned int yI);
    bool RightTest(unsigned int xI, unsigned int yI);
    bool LeftTest(unsigned int xI, unsigned int yI);
    void MoveUp(unsigned int xI, unsigned int yI);
    void MoveDown(unsigned int xI, unsigned int yI);
    void MoveRight(unsigned int xI, unsigned int yI);
    void MoveLeft(unsigned int xI, unsigned int yI);
    bool CheckForVictory(const unsigned int xI, const unsigned int yI);
private:
    char arr[57][20] = { };
    unsigned int index{ 0 };
    unsigned int yIndex{ 0 };
    string e = { " # " };
    string s = { " . " };
    string p = { " x " };
};

//Function that pushes '#' in
template <typename T>
void Functions<T>::pushe(const char s, const char e) {
    arr[index][yIndex] = s;
    index++;
    arr[index][yIndex] = e;
    index++;
    arr[index][yIndex] = s;
    index++;
}

//Function that pushes '.' in
template <typename T>
void Functions<T>::pushd(const char s, const char d) {
    arr[index][yIndex] = s;
    index++;
    arr[index][yIndex] = d;
    index++;
    arr[index][yIndex] = s;
    index++;
}

//Function that pushes 'x' in
template <typename T>
void Functions<T>::pushx(const char s, const char x) {
    arr[index][yIndex] = s;
    index++;
    arr[index][yIndex] = x;
    index++;
    arr[index][yIndex] = s;
    index++;
}

//Function that Creates the Maze
template <typename T>
void Functions<T>::Create() {
    char e = { '#' };
    char x = { 'x' };
    char d = { '.' };
    char s = { ' ' };
    //1st Line
    index = 0;
    for (int i = 0; i < 2; i++) {
        pushe(s, e);
    }
    pushx(s, x);
    for (int i = 0; i < 16; i++) {
        pushe(s, e);
    }
    yIndex++;
    //2nd Line
    index = 0;
    pushe(s, e);
    for (int i = 0; i < 2; i++) {
        pushd(s, d);
    }
    pushe(s, e);
    for (int i = 0; i < 3; i++) {
        pushd(s, d);
    }
    pushe(s, e);
    for (int i = 0; i < 4; i++) {
        pushd(s, d);
    }
    pushe(s, e);
    for (int i = 0; i < 5; i++) {
        pushd(s, d);
    }
    pushe(s, e);
    yIndex++;
    //3rd Line
    index = 0;
    pushe(s, e);
    pushd(s, d);
    for (int i = 0; i < 2; i++) {
        pushe(s, e);
    }
    for (int i = 0; i < 3; i++) {
        pushe(s, d);
        pushe(s, e);
    }
    pushe(s, e);
    pushe(s, d);
    pushe(s, e);
    pushe(s, d);
    for (int i = 0; i < 3; i++) {
        pushe(s, e);
    }
    pushe(s, d);
    pushe(s, e);
    yIndex++;
    //4th Line
    index = 0;
    pushe(s, e);
    for (int i = 0; i < 4; i++) {
        pushd(s, d);
    }
    pushe(s, e);
    for (int i = 0; i < 3; i++) {
        pushd(s, d);
    }
    for (int i = 0; i < 3; i++) {
        pushd(s, d);
        pushe(s, e);
    }
    for (int i = 0; i < 3; i++) {
        pushd(s, d);
    }
    pushe(s, e);
    yIndex++;
    //5th Line
    index = 0;
    for (int i = 0; i < 9; i++) {
        pushe(s, e);
    }
    for (int i = 0; i < 3; i++) {
        pushd(s, d);
        pushe(s, e);
    }
    pushd(s, d);
    for (int i = 0; i < 3; i++) {
        pushe(s, e);
    }
    yIndex++;
    //6th Line
    index = 0;
    pushe(s, e);
    for (int i = 0; i < 6; i++) {
        pushd(s, d);
    }
    for (int i = 0; i < 2; i++) {
        pushd(s, d);
        pushe(s, e);
    }
    for (int i = 0; i < 2; i++) {
        for (int i = 0; i < 3; i++) {
            pushd(s, d);
        }
        pushe(s, e);
    }
    yIndex++;
    //7th Line
    index = 0;
    pushe(s, e);
    pushd(s, d);
    for (int i = 0; i < 5; i++) {
        pushe(s, e);
    }
    pushd(s, d);
    for (int i = 0; i < 7; i++) {
        pushe(s, e);
    }
    for (int i = 0; i < 2; i++) {
        pushd(s, d);
        pushe(s, e);
    }
    yIndex++;
    //8th Line
    index = 0;
    for (int i = 0; i < 2; i++) {
        pushe(s, e);
        pushd(s, d);
    }
    for (int i = 0; i < 2; i++) {
        pushd(s, d);
    }
    pushe(s, e);
    for (int i = 0; i < 6; i++) {
        pushd(s, d);
    }
    for (int i = 0; i < 3; i++) {
        pushd(s, d);
        pushe(s, e);
    }
    yIndex++;
    //9th Line
    index = 0;
    pushe(s, e);
    pushd(s, d);
    for (int i = 0; i < 3; i++) {
        pushe(s, e);
    }
    for (int i = 0; i < 3; i++) {
        pushd(s, d);
    }
    for (int i = 0; i < 5; i++) {
        pushe(s, e);
    }
    pushd(s, d);
    for (int i = 0; i < 3; i++) {
        pushe(s, e);
    }
    pushd(s, d);
    pushe(s, e);
    yIndex++;
    //10th Line
    index = 0;
    pushe(s, e);
    for (int i = 0; i < 3; i++) {
        pushd(s, d);
    }
    for (int i = 0; i < 5; i++) {
        pushe(s, e);
    }
    pushd(s, d);
    pushe(s, e);
    for (int i = 0; i < 7; i++) {
        pushd(s, d);
    }
    pushe(s, e);
    yIndex++;
    //11th Line
    index = 0;
    for (int i = 0; i < 2; i++) {
        pushe(s, e);
        pushd(s, d);
    }
    for (int i = 0; i < 3; i++) {
        pushd(s, d);
    }
    pushe(s, e);
    for (int i = 0; i < 4; i++) {
        pushd(s, d);
    }
    for (int i = 0; i < 5; i++) {
        pushe(s, e);
    }
    pushd(s, d);
    pushe(s, e);
    yIndex++;
    //12th Line
    index = 0;
    pushe(s, e);
    pushd(s, d);
    for (int i = 0; i < 4; i++) {
        pushe(s, e);
    }
    pushd(s, d);
    for (int i = 0; i < 6; i++) {
        pushe(s, e);
    }
    for (int i = 0; i < 3; i++) {
        pushd(s, d);
    }
    pushe(s, e);
    pushd(s, d);
    pushe(s, e);
    yIndex++;
    //13th Line
    index = 0;
    pushe(s, e);
    for (int i = 0; i < 3; i++) {
        pushd(s, d);
    }
    pushe(s, e);
    for (int i = 0; i < 2; i++) {
        pushd(s, d);
    }
    pushe(s, e);
    for (int i = 0; i < 3; i++) {
        pushd(s, d);
    }
    pushe(s, e);
    for (int i = 0; i < 2; i++) {
        pushd(s, d);
    }
    for (int i = 0; i < 2; i++) {
        pushe(s, e);
        pushd(s, d);
    }
    pushe(s, e);
    yIndex++;
    //14th Line
    index = 0;
    for (int i = 0; i < 3; i++) {
        pushe(s, e);
    }
    for (int i = 0; i < 2; i++) {
        pushd(s, d);
        pushe(s, e);
    }
    pushe(s, e);
    for (int i = 0; i < 3; i++) {
        pushd(s, d);
        pushe(s, e);
    }
    pushe(s, e);
    pushd(s, d);
    for (int i = 0; i < 3; i++) {
        pushe(s, e);
    }
    yIndex++;
    //15th Line
    index = 0;
    pushe(s, e);
    for (int i = 0; i < 3; i++) {
        pushd(s, d);
    }
    pushe(s, e);
    for (int i = 0; i < 4; i++) {
        pushd(s, d);
    }
    for (int i = 0; i < 2; i++) {
        pushe(s, e);
        pushd(s, d);
    }
    pushd(s, d);
    pushe(s, e);
    for (int i = 0; i < 4; i++) {
        pushd(s, d);
    }
    yIndex++;
    //16th Line
    index = 0;
    pushe(s, e);
    pushd(s, d);
    for (int i = 0; i < 8; i++) {
        pushe(s, e);
    }
    pushd(s, d);
    for (int i = 0; i < 2; i++) {
        pushe(s, e);
    }
    pushd(s, d);
    for (int i = 0; i < 3; i++) {
        pushe(s, e);
    }
    pushd(s, d);
    pushe(s, e);
    yIndex++;
    //17th Line
    index = 0;
    pushe(s, e);
    pushd(s, d);
    pushe(s, e);
    for (int i = 0; i < 9; i++) {
        pushd(s, d);
    }
    for (int i = 0; i < 2; i++) {
        pushe(s, e);
        pushd(s, d);
    }
    for (int i = 0; i < 2; i++) {
        pushd(s, d);
    }
    pushe(s, e);
    yIndex++;
    //18th Line
    index = 0;
    for (int i = 0; i < 2; i++) {
        pushe(s, e);
        pushd(s, d);
    }
    for (int i = 0; i < 9; i++) {
        pushe(s, e);
    }
    pushd(s, d);
    for (int i = 0; i < 5; i++) {
        pushe(s, e);
    }
    yIndex++;
    //19th Line
    index = 0;
    for (int i = 0; i < 2; i++) {
        pushe(s, e);
        pushd(s, d);
    }
    for (int i = 0; i < 14; i++) {
        pushd(s, d);
    }
    pushe(s, e);
    yIndex++;
    //20th Line
    index = 0;
    for (int i = 0; i < 19; i++) {
        pushe(s, e);
    }
    yIndex = 0;
    return;
}

//Function that Prints the Maze
template <typename T>
void Functions<T>::Print() {
    int sift = 0;
    for (int i = 0; i < 20; i++) {
        for (int i = 0; i < 57; i++) {
            cout << arr[i][sift];
        }
        cout << endl;
        sift++;
    }
}

//Tests if it can go up
template <typename T>
bool Functions<T>::UpTest(unsigned int xI, unsigned int yI) {
    if (yI == 0) {
        cout << "You can't go up from the start position" << endl;
        return false;
    }
    for (int i = 0; i < 1; i++) {
        yI--;
        char temp = arr[xI][yI];
        if (temp == '#') {
            cout << "There is a border in the way" << endl;
            yI = yI + i;
            return false;
        }
    }
    yI = yI + 1;
    return true;
}

//Tests if it can go down
template <typename T>
bool Functions<T>::DownTest(unsigned int xI, unsigned int yI) {
    for (int i = 0; i < 1; i++) {
        yI++;
        char temp = arr[xI][yI];
        if (temp == '#') {
            cout << "There is a border in the way" << endl;
            yI = yI - i;
            return false;
        }
    }
    yI = yI - 1;
    return true;
}

//Tests if it can go right
template <typename T>
bool Functions<T>::RightTest(unsigned int xI, unsigned int yI) {
    for (int i = 0; i < 3; i++) {
        xI++;
        char temp = arr[xI][yI];
        if (temp == '#') {
            cout << "There is a border in the way" << endl;
            xI = xI - (i * 3);
            return false;
        }
    }
    xI = xI - 3;
    return true;
}

//Tests if it can go left
template <typename T>
bool Functions<T>::LeftTest(unsigned int xI, unsigned int yI) {
    for (int i = 0; i < 3; i++) {
        xI--;
        char temp = arr[xI][yI];
        if (temp == '#') {
            cout << "There is a border in the way" << endl;
            xI = xI + (i * 3);
            return false;
        }
    }
    xI = xI + 3;
    return true;
}

//Moves x up
template <typename T>
void Functions<T>::MoveUp(unsigned int xI, unsigned int yI) {
    arr[xI][yI] = '.';
    yI = yI - 1;
    arr[xI][yI] = 'x';
    return;
}

//Moves x down
template <typename T>
void Functions<T>::MoveDown(unsigned int xI, unsigned int yI) {
    arr[xI][yI] = '.';
    yI = yI + 1;
    arr[xI][yI] = 'x';
    return;
}

//Moves x right
template <typename T>
void Functions<T>::MoveRight(unsigned int xI, unsigned int yI) {
    arr[xI][yI] = '.';
    xI = xI + 3;
    arr[xI][yI] = 'x';
    return;
}

//Moves x left
template <typename T>
void Functions<T>::MoveLeft(unsigned int xI, unsigned int yI) {
    arr[xI][yI] = '.';
    xI = xI - 3;
    arr[xI][yI] = 'x';
    return;
}

//Checks for win condition only when you move right
template <typename T>
bool Functions<T>::CheckForVictory(const unsigned int xI, const unsigned int yI) {
    if (xI == 55 && yI == 14) {
        return true;
    }
    return false;
}

//User interacts with this function to play game
template <typename T>
void Gameplay() {

    //Initialization
    Functions<char> arr1;
    arr1.Create();
    arr1.Print();

    bool isPlaying = true;
    string userInput = "";
    bool valid = true;
    unsigned int xI = 7;
    unsigned int yI = 0;

    //Loops until q is pressed
    while (isPlaying == true) {

        //Error Detection Loop. Only correct input past this loop
        do {
            
            //Collects User Input
            valid = true;
            cout << endl;
            cout << "w for up, a for left, s for down, d for right, q for quit" << endl;
            userInput = _getch();

            if (userInput[0] == 'q' || userInput[0] == 'Q') {
                isPlaying = false;
                return;
            }
            else if (userInput[0] == 'w' || userInput[0] == 'a' || userInput[0] == 's' || userInput[0] == 'd' || userInput[0] == 'W' || userInput[0] == 'A' || userInput[0] == 'S' || userInput[0] == 'D') {
                valid = true;
            }
            else {
                valid = false;
                cout << "Something went wrong. Try Again" << endl;
            }
        } while (valid == false);

        //Checks the direction inputted and will move if safe
        if (userInput[0] == 'w' || userInput[0] == 'W') {
            if (arr1.UpTest(xI, yI) == true) {
                cout << "\033[2J\033[0;0H";

                arr1.MoveUp(xI, yI);
                yI = yI - 1;
                arr1.Print();
            }
        }
        else if (userInput[0] == 'a' || userInput[0] == 'A') {
            if (arr1.LeftTest(xI, yI) == true) {
                cout << "\033[2J\033[0;0H";

                arr1.MoveLeft(xI, yI);
                xI = xI - 3;
                arr1.Print();
            }
        }
        else if (userInput[0] == 's' || userInput[0] == 'S') {
            if (arr1.DownTest(xI, yI) == true) {
                cout << "\033[2J\033[0;0H";

                arr1.MoveDown(xI, yI);
                yI = yI + 1;
                arr1.Print();
            }
        }
        else if (userInput[0] == 'd' || userInput[0] == 'D') {
            if (arr1.RightTest(xI, yI) == true) {
                cout << "\033[2J\033[0;0H";

                arr1.MoveRight(xI, yI);
                xI = xI + 3;
                arr1.Print();

                //Checks Win Condition
                if (arr1.CheckForVictory(xI, yI) == true) {
                    isPlaying = false;
                    cout << "\033[2J\033[0;0H";
                    arr1.Print();
                }
            }
        }
    }

    //After win condition met goes to this
    //Prompts user to type q to return to main
    char quit = ' ';
    do {
        cout << "Victory!!! Press q to quit" << endl;
        cin >> quit;
    } while (quit != 'q');
    cout << "\033[2J\033[0;0H";
}

int main() {
    bool valid = false;
    string enter;

    //User is prompted with the Start Question
    //On Startup system diverts to an external Gameplay function
    do {
        try {
            char play = 'u';
            cout << "Would you like to play Ryan's Maze Game (Y/N)" << endl;
            cin >> play;
            if (play == 'Y' || play == 'y') {
                Gameplay<int>();
                valid = true;
            }
            else if (play == 'N' || play == 'n') {
                valid = true;
            }
            else {
                throw play;
            }
        }
        catch (char play) {
            play = false;
            cout << "Something went wrong" << endl;
            cin.sync();
        }
    } while (valid == false);
    cout << "Shutting Down" << endl;
}