/*
 * @lc app=leetcode.cn id=59 lang=c
 *
 * [59] 螺旋矩阵 II
 */

// @lc code=start


/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generateMatrix(int n, int* returnSize, int** returnColumnSizes){
    *returnSize = n;
    *returnColumnSizes = (int *)malloc(sizeof(int)*n);
    int **ans = (int**)malloc(sizeof(int*)*n);
    for (int i=0; i<n;i++) {
        ans[i] = (int*)malloc(sizeof(int)*n);
        (*returnColumnSizes)[i]=n;
    }
    int startX = 0, startY = 0;
    int mid = n/2;
    int loop = n/2;
    int offset =1;
    int count = 1;
    while (loop) {
        int i = startX;
        int j = startY;
        for (;j<startY+n-offset;j++) {
            ans[startX][j] = count++;
        }
        for(;i<startX+n-offset;i++) {
            ans[i][j] = count++;
        }
        
        for(;j>startY;j--) {
            ans[i][j] = count++;
        }
        
        for(;i>startX;i--) {
            ans[i][j] = count++;
        }
        offset +=2;
        startX++;
        startY++;
        loop--;
    }
    if (n%2) 
        ans[mid][mid]= count;

    return ans;
}
// @lc code=end

