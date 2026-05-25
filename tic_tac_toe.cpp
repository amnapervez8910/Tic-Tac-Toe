#include <iostream>
#include <vector>
#include <cstdlib> // for system("clear") or system("cls")

class TicTacToe {
private:
    std::vector<char> square;
    int checkWin();
    void drawBoard();

public:
    TicTacToe() : square(10) {
        for (int i = 1; i <= 9; ++i) {
            square[i] = '0' + i;
        }
    }
    void playGame();
};

int TicTacToe::checkWin() {
    // Winning combinations
    if (square[1] == square[2] && square[2] == square[3]) return 1;
    if (square[4] == square[5] && square[5] == square[6]) return 1;
    if (square[7] == square[8] && square[8] == square[9]) return 1;
    if (square[1] == square[4] && square[4] == square[7]) return 1;
    if (square[2] == square[5] && square[5] == square[8]) return 1;
    if (square[3] == square[6] && square[6] == square[9]) return 1;
    if (square[1] == square[5] && square[5] == square[9]) return 1;
    if (square[3] == square[5] && square[5] == square[7]) return 1;

    // Check for draw
    for (int i = 1; i <= 9; i++) {
        if (square[i] == '0' + i) return -1; // Game still in progress
    }

    return 0; // Draw
}

void TicTacToe::drawBoard() {
#ifdef _WIN32
    system("cls");  // Clear screen on Windows
#else
    system("clear"); // Clear screen on Linux/Mac
#endif

    std::cout << "\n\n\tTic Tac Toe\n\n";
    std::cout << "Player 1 (X)  -  Player 2 (O)\n\n";

    std::cout << "     |     |     \n";
    std::cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << "  \n";
    std::cout << "_____|_____|_____\n";

    std::cout << "     |     |     \n";
    std::cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << "  \n";
    std::cout << "_____|_____|_____\n";

    std::cout << "     |     |     \n";
    std::cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << "  \n";
    std::cout << "     |     |     \n\n";
}

void TicTacToe::playGame() {
    int player = 1, i, choice;
    char mark;

    do {
        drawBoard();

        player = (player % 2) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';

        std::cout << "Player " << player << ", enter a number (1-9): ";
        std::cin >> choice;

        if (choice >= 1 && choice <= 9 && square[choice] == '0' + choice) {
            square[choice] = mark;
        } else {
            std::cout << "Invalid move! Try again.\n";
            --player; // Don't switch player
            std::cin.clear();
            std::cin.ignore(10000, '\n'); // Clear input buffer
            std::cin.get(); // Wait for key press
        }

        i = checkWin();
        player++;
    } while (i == -1);

    drawBoard();

    if (i == 1)
        std::cout << "==> Player " << (player - 1) << " wins!\n";
    else
        std::cout << "==> It's a draw!\n";
}

int main() {
    TicTacToe game;
    game.playGame();
    return 0;
}
