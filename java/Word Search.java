class Solution {    
    int diff[]={0,1,0,-1,0};
    private boolean dfs(int R,int C,int row,int col,char board[][],String word,int idx){
        if(idx==word.length()-1) return true;
        char bkup=board[row][col];
        board[row][col]='*';
        for(int i=0;i<4;i++){
            int ar=row+diff[i],ac=col+diff[i+1];
            if(ar>=0 && ar<R && ac>=0 && ac<C && board[ar][ac]==word.charAt(idx+1)){
                boolean found=dfs(R,C,ar,ac,board,word,idx+1);
                if(found) return true;
            }
        }
        board[row][col]=bkup;
        return false;
    }
    public boolean exist(char[][] board, String word) {
        int R=board.length,C=board[0].length;
        for(int row=0;row<R;row++) for(int col=0;col<C;col++){
            if(board[row][col]==word.charAt(0)){
                boolean found=dfs(R,C,row,col,board,word,0);
                if(found) return true;
            }
        }
        return false;
    }
}