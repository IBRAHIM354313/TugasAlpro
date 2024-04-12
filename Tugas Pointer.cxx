#include <iostream>

class Player {
    private:
        int score;

    public:
        Player() {
            score = 0;
        }

        void add_score(int value) {
            std::cout << "score sebelum diubah : " << score << std::endl;
            score += value;
            std::cout << "score diubah ke : " << score << std::endl;
        }

        void display_score() {
            std::cout << "score setelah diubah : " << score << std::endl;
        }
};

int main() {
    Player player;
    player.add_score(5);
    player.add_score(5);
    player.add_score(5);
    player.add_score(5);
    player.add_score(5);
    player.add_score(5);
    player.display_score();
    return 0;
}