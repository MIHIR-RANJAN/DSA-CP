/*Chef found a matrix A with N rows (numbered 1 through N) and M columns (numbered 1 through M), where for each row r and column c, the cell in row r and column c (denoted by (r,c)) contains an integer Ar,c.

This matrix has two interesting properties:

The integers in each row form a non-decreasing sequence, i.e. for each valid i, Ai,1≤Ai,2≤…≤Ai,M.
The integers in each column also form a non-decreasing sequence, i.e. for each valid j, A1,j≤A2,j≤…≤AN,j.
A K-worthy submatrix is a square submatrix of A, i.e. a submatrix with l rows and l columns, for any integer l, such that the average of all the integers in this submatrix is ≥K.

Chef wants you to find the number of K-worthy submatrices of A.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains three space-separated integers N, M and K.
N lines follow. For each valid i, the i-th of these lines contains M space-separated integers Ai,1,Ai,2,Ai,3,…,Ai,M.
Output
For each test case, print a single line containing one integer ― the number of K-worthy submatrices of A.

Constraints
1≤T≤10
1≤N⋅M≤106
N≤M
0≤K≤109
0≤Ar,c≤109 for each valid r,c
the sum of N⋅M over all test cases does not exceed 106
Subtasks
Subtask #1 (15 points): the sum of N⋅M over all test cases does not exceed 103
Subtask #2 (25 points): the sum of N⋅M over all test cases does not exceed 4⋅105
Subtask #3 (60 points): original constraints

Example Input
1
3 3 4

2 2 3
3 4 5
4 5 5

Example Output
7
Explanation
Example case 1: The following are the seven 4-worthy submatrices:

[3445] with average 4; this matrix occurs only once
[4555] with average 4.75; this matrix also occurs only once
[4] with average 4; we find this matrix twice in A
[5] with average 5; we find this matrix 3 times in A*/

#include<bits/stdc++.h>

int Matrix[10000][10000] = {};

int min(int N, int M){
    if(N - M < 0){
        return M;
    }
    return N;
} 

//-------
float avgMat(int i, int j, int l, int K){
    float sum = 0;
    for(int i_ = i; i_ < i + l; i_++){
        for(int j_ = j; j_ < j + l; j_++){
            sum = sum + Matrix[i_][j_];
        }
    }

    if(sum/(l*l) >= K){
      for(int i_ = i; i_ < i + l; i_++){
        for(int j_ = j; j_ < j + l; j_++){
     // printf("%d ", Matrix[i_][j_]);
        }
       // printf("\n");
      }
     // printf("---\n");
    }

    return sum/(l*l);
}

//-------
int numKworths(){
    int N, M, K;
    scanf("%d %d %d", &N, &M, &K);
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d", &Matrix[i][j]);
        }
    }
    
    //----------------------
    int Maxwindow = min(N,M); //largest window size
    int ans = 0; //no. of K-worth matrices

    for(int l = 1; l <= Maxwindow; l++){
        for(int i = 0; i <= Maxwindow - l; i++){
            for(int j = 0; j <= Maxwindow - l; j++){
                //printf("%f\n", avgMat(i,j,l));
          if(avgMat(i,j,l, K) >= K){
                    ans += 1;
                }
            }
        }
    }

    return ans;
}


int main(){

    int trials;
    scanf("%d", &trials);
    
    for(int t = 0; t < trials; t++){
        printf("%d", numKworths());
    }

    return 0;
}