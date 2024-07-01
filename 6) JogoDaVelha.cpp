#include <iostream>
using namespace std;

char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
char currentPlayer = 'X';

void drawBoard() {
    cout << "  0 1 2" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << i << " ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j];
            if (j < 2)
                cout << "|";
        }
        cout << endl;
        if (i < 2)
            cout << "  -----" << endl;
    }
}

bool checkWin() {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][0] == board[i][2])
            return true;
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[0][i] == board[2][i])
            return true;
    }
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2])
        return true;
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[0][2] == board[2][0])
        return true;
    return false;
}

bool checkTie() {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (board[i][j] == ' ')
                return false;
    return true;
}

bool isValidMove(int row, int col) {
    if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ')
        return false;
    return true;
}

void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

void clearBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    int row, col;

    cout << "Bem-vindo ao Jogo da Velha!" << endl;

    while (true) {
        drawBoard();
        cout << "Jogador " << currentPlayer << ", digite a linha (0-2) e coluna (0-2) para jogar: ";

        while (true) {
            if (!(cin >> row >> col) || !isValidMove(row, col)) {
                cout << "Jogada inválida! Tente novamente." << endl;
                clearBuffer();
                continue;
            }
            break;
        }

        board[row][col] = currentPlayer;

        if (checkWin()) {
            drawBoard();
            cout << "Parabéns! Jogador " << currentPlayer << " venceu!" << endl;
            break;
        }

        if (checkTie()) {
            drawBoard();
            cout << "Empate!" << endl;
            break;
        }

        switchPlayer();
    }

    return 0;
}
