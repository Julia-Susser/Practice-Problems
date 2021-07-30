class Board{
  public:
    vector <vector<int> > board;
    int N;

    Board(int n){
      N = n;
      createBoard();
    }
    Board(){
      N = 3;
      createBoard();
    }
    void printBoard(){
      cout << "\n";
      vector<int> row;
      for (int i=0; i<board.size(); i++){
        row = board[i];
        for (int k=0; k<row.size(); k++){
          cout << row[k] << " ";
        }
        cout << "\n";
      }
    }
    void createBoard(){
      for (int i=0; i<N; i++){
        vector<int> newRow(N);
        board.push_back(newRow);
      }
    }
};
