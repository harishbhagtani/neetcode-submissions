class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> auxRow;
        unordered_set<char> auxCol;

        for(int i = 0;i < 9;i++){
            for(int j = 0;j < 9;j++){
                char currRowElem = board[i][j];
                char currColElem = board[j][i];

                if(currRowElem != '.' && auxRow.count(currRowElem) == 0){
                    auxRow.insert(currRowElem);
                }else if(currRowElem != '.'){
                    return false;
                }

                if(currColElem != '.' && auxCol.count(currColElem) == 0){
                    auxCol.insert(currColElem);
                }else if(currColElem != '.'){
                    return false;
                }
            }
            auxRow.clear();
            auxCol.clear();
        }

        for(int i = 0;i < 9;i = i + 3){
            for(int j = 0;j < 9;j = j + 3){
                int rowStart = i;
                int colStart = j;

                for(int k = 0;k < 3;k++){
                    for(int l = 0;l < 3;l++){
                        char currElem = board[rowStart + k][colStart + l];

                        if(currElem != '.' && auxRow.count(currElem) == 0){
                            auxRow.insert(currElem);
                        }else if(currElem != '.'){
                            return false;
                        }
                    }
                }

                auxRow.clear();
            }
        }


        return true;
    }
};
