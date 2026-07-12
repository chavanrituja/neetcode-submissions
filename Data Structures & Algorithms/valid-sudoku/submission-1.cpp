class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
                
                        // Row, Column, Box trackers
                                vector<set<char>> rows(9), cols(9), boxes(9);
                                        
                                                for(int i = 0; i < 9; i++) {
                                                            for(int j = 0; j < 9; j++) {
                                                                            
                                                                                            if(board[i][j] == '.') continue;
                                                                                                            
                                                                                                                            char num = board[i][j];
                                                                                                                                            
                                                                                                                                                            // Box index formula
                                                                                                                                                                            int boxIndex = (i / 3) * 3 + (j / 3);
                                                                                                                                                                                            
                                                                                                                                                                                                            // Check duplicates
                                                                                                                                                                                                                            if(rows[i].count(num) || cols[j].count(num) || boxes[boxIndex].count(num)) {
                                                                                                                                                                                                                                                return false;
                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                // Insert into sets
                                                                                                                                                                                                                                                                                                                rows[i].insert(num);
                                                                                                                                                                                                                                                                                                                                cols[j].insert(num);
                                                                                                                                                                                                                                                                                                                                                boxes[boxIndex].insert(num);
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                                                                                                    return true;
                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                        };

