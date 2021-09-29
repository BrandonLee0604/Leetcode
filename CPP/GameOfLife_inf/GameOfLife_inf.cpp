// GameOfLife_inf.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <curses.h>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>


using namespace std;
class Cell {
public:
    int x, y;
    Cell(int a, int b) {
        this->x = a;
        this->y = b;
    }
    bool operator==(const Cell& c) const {
        return this->x == c.x && this->y == c.y;
    }
};

struct myHash {
    size_t operator()(Cell const& c) const {
        return (size_t)(c.x * 0x1f1f1f1f) ^ c.y;
    }
};

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        unordered_set<Cell, myHash> livingCells;
        for (auto i = 0; i < board.size(); ++i) {
            for (auto j = 0; j < board[0].size(); ++j) {
                if (board[i][j] == 1) {
                    livingCells.insert(Cell(i, j));
                }
            }
        }
        updateLivingCells(livingCells);
        board = vector<vector<int>>(board.size(), vector<int>(board[0].size(), 0));
        for (const auto& c : livingCells) {
            if (c.x < board.size() && c.y < board[0].size()) {
                board[c.x][c.y] = 1;
            }
        }
    }

    void updateLivingCells(unordered_set<Cell, myHash>& livingCells) {
        unordered_map<Cell, int, myHash> neighbors;
        unordered_set<Cell, myHash> tempLivingCells;
        int dir[8][2] = { { 1,1 },{ 1,0 },{ 1,-1 },{ 0,-1 },{ -1,-1 },{ -1,0 },{ -1,1 },{ 0,1 } };
        int x, y;
        for (auto c : livingCells) {
            for (auto i = 0; i < 8; ++i) {
                x = c.x + dir[i][0];
                y = c.y + dir[i][1];
                if (x >= 0 && y >= 0) {
                    neighbors[Cell(x, y)]++;
                }
            }
        }
        for (auto n : neighbors) {
            auto it = livingCells.find(n.first);
            if (it != livingCells.end() && 2 <= n.second <= 3) {
                tempLivingCells.insert(n.first);
            }
            if (it == livingCells.end() && n.second == 3) {
                tempLivingCells.insert(n.first);
            }
        }
        livingCells = move(tempLivingCells);
    }
};


int main()
{
    auto solution = new Solution();
    vector<vector<int>> board = { {0, 1, 0},{0, 0, 1},{1, 1, 1},{0, 0, 0} };
    solution->gameOfLife(board);
	return 0;
}

