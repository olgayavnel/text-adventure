// Create a C++ text adventure with the storyline of your choosing. 
// The program should use your knowledge of C++ conditionals, logic, and loops.
// Create a C++ text adventure with the storyline of your choosing. 

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    cout << "  (*_*)       *************************************       (>_<)\n";
    cout << " (='.'=)      *   The Little Prince's Adventure   *      (=O.O=)\n";
    cout << " (=O.O=)      *             ~Welcome~             *      (')_(')\n";
    cout << "  (>_<)       *************************************       (*_*)\n\n";
    cout << "One day, the plane of an aircraft pilot crashes in Sahara, far from civilization.\n";
    cout << "He has an eight-day supply of water and must fix his aeroplane.\n";
    cout << "Here, he is unexpectedly greeted by a young boy nicknamed \"the little prince\". 🤴\n";
    cout << "The prince has golden hair, a loveable laugh, and will repeat questions until they are answered.\n\n";
    cout << "The prince asks the pilot to draw a picture of something. 🖼️\n";
    cout << "What did he asks the pilot to illustrate?\n\n";

    char choice_one;
    
    for (int i = 0; i < 3 && choice_one != 'A' && choice_one != 'B' && choice_one != 'C'; i++) {

        cout << "A) 🐑 Sheep\n";
        cout << "B) 🌹 Rose\n";
        cout << "C) 🐘 Elephant\n\n";
        cin >> choice_one;
    }

    cout << "\n\n*      *      *      *      *      *\n\n";
    
    switch(choice_one) {
        case 'A':
            cout << "you chose: 🐑 Sheep\n\n";
            cout << "Right answer! The prince asks the pilot to draw a sheep. 🐑 \n";
            break;
        case 'B':
            cout << "you chose: 🌹 Rose\n\n";
            cout << "Are you sure? The prince asks the pilot to draw an animal. Try again! \n";
            return 0;
        case 'C':
            cout << "you choose: 🐘 Elephant\n\n";
            cout << "Try again. Maybe another animal?\n";
            return 0;
    }

    cout << "\n\n*      *      *      *      *      *\n\n";
    cout << "The narrator first shows him the picture of the elephant inside the snake, \n";
    cout << "which, to the pilot's surprise, the prince interprets correctly.\n";
    cout << "After three failed attempts at drawing a sheep, the frustrated pilot draws a simple...?\n\n";
    cout << "Can you guess what was the drawing?\n\n";

    char choice_two;

    for (int i = 0; i < 3 && choice_two != 'A' && choice_two != 'B' && choice_two != 'C'; i++) {

        cout << "A) a flying sheep 🐑\n";
        cout << "B) a simple crate, claiming the sheep is inside 📦\n";
        cout << "C) a butterfly 🦋\n\n";
        cin >> choice_two;
    }

    cout << "\n\n*      *      *      *      *      *\n\n";
    
    switch(choice_two) {
        case 'A':
            cout << "you chose: a flying sheep 🐑\n\n";
            cout << "Wrong answer... The pilot couldn't really draw a sheep.\n";
            return 0;
        case 'B':
            cout << "you chose: a simple crate, claiming the sheep is inside 📦\n\n";
            cout << "Exactly! Isn't it smart?\n";
            cout << "The prince exclaims that this was exactly the drawing he wanted.\n\n";
            break;
        case 'C':
            cout << "you choose: 🦋 a butterfly\n\n";
            cout << "Sweet but no, try again!\n";
            return 0;
    }

    cout << "\n\n*      *      *      *      *      *\n\n";
    cout << "To learn more about the story, read a great novella \"The Little Prince\" \n";
    cout << "by French aristocrat, writer, and military aviator Antoine de Saint-Exupéry.\n";
     
}