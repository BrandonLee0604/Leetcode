#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <iostream>

using namespace std;

class Cell {
public:
	long x, y;
	Cell(long a, long b) : x(a), y(b) {}
	bool operator==(const Cell& rhs) const {
		return this->x == rhs.x && this->y == rhs.y;
	}
};

struct myHash {
	size_t operator()(Cell const& s) const noexcept {
		return (size_t)(s.x * 0x1f1f1f1f) ^ s.y;
	}
};



class Solution {
public:
	// infiniate board
	void gameOfLife(vector<vector<int>>& board) {
		unordered_set<Cell, myHash> liveCells;
		for (int i = 0; i < board.size(); i++) {
			for (int j = 0; j < board[i].size(); j++) {
				if (board[i][j])
					liveCells.insert(Cell(i, j));
			}
		}
		gameOfLife_inf(liveCells);
		board = vector<vector<int>>(board.size(), vector<int>(board[0].size(), 0));
		for (const auto& c : liveCells) {
			if (c.x < board.size() && c.y < board[c.x].size())
				board[c.x][c.y] = 1;
		}
		return;
	}
	void gameOfLife_inf(unordered_set<Cell, myHash>& liveCells) {
		int dic[8][2] = { { 1,1 },{ 1,0 },{ 1,-1 },{ 0,-1 },{ -1,-1 },{ -1,0 },{ -1,1 },{ 0,1 } };
		unordered_map<Cell, int, myHash> neighbors;
		addNeighbors(liveCells, dic, neighbors);
		unordered_set<Cell, myHash> newlives;
		for (auto c : neighbors) {
			auto it = liveCells.find(c.first);
			if (it != liveCells.end() && c.second >= 2 && c.second <= 3)
				newlives.insert(c.first);
			if (it == liveCells.end() && c.second == 3)
				newlives.insert(c.first);
		}
		liveCells = move(newlives);
	}
	void addNeighbors(unordered_set<Cell, myHash>& liveCells, int dic[8][2], unordered_map<Cell, int, myHash>& neighbors) {
		int x, y;
		for (auto c : liveCells) {
			for (int n = 0; n < 8; n++) {
				x = c.x + dic[n][0];
				y = c.y + dic[n][1];
				if (x >= 0 && y >= 0) {
					neighbors[Cell(x, y)]++;
				}
			}
		}
		return;
	}
};

int main() {
	auto solution = new Solution();
	vector<vector<int>> board = { {0,1,0} ,{0,0,1},{1,1,1},{0,0,0} };
	solution->gameOfLife(board);
	for (auto i : board) {
		for (auto j : i) {
			cout << j;
		}
		cout << '\n';
	}
	return 0;;
}


