#include <iostream>

int main(){

    char start;

    std::cout << "************************\n";
    std::cout << "Welcome to Mizzy Quizzzz\n";
    std::cout << "************************\n\n";

    std::cout << "Press 'S' to start or 'Q' to Quit!: ";
    std::cin >> start;

    start = toupper(start);

    if(start == 'Q'){
        return 0;
    }

    std::string sawal[] = {"1. Do computers have conciousness?",
                         "2. Why poor people are poor?",
                        "3. Who owns Youtube?",
                        "4. Which on of them are tangible?",};
    
    std::string options[][3] = {{"A. No", "B. Obviously Not!", "C. Yes"},
                            {"A. It's in their luck!", "B. They are lazy to do things and give up at basics of anything", "C. Because Rich people are Rich",},
                            {"A. Me", "B. Google", "C. Tutu"},
                            {"A. Curiousity", "B. Aura", "C. Human"},};
    
    char jawab[] = {'C', 'B', 'B', 'C'};
    int size = sizeof(sawal)/sizeof(sawal[0]);
    char ans;
    int score = 0;

    for(int i = 0; i < size; i++){
        std::cout << "*********************\n";
        std::cout << sawal[i] << '\n';
            
        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][j]); j++){
            std::cout << options[i][j] << '\n';
        }

        std::cout << "Enter your answer: ";
        std::cin >> ans;
        ans = toupper(ans);

        if(ans == jawab[i]){
            std::cout << "CORRECT!\n";
            score++;
        }
        else{
            std::cout << "WRONG!\n";
            std::cout << "Correct answer was: " << jawab[i] << '\n';
        }
    }

    std::cout << "***********************\n";
    std::cout << "*       RESULTS       *\n";
    std::cout << "***********************\n";
    std::cout << "Total questions: " << size << '\n';
    std::cout << "Correct answers: " << score << '\n';
    std::cout << "Correct percentage: " << (score/(double)size) * 100 << "%" <<'\n';

    return 0;
}
