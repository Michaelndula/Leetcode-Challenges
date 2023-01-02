/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
 /*
    Given an integer array nums, return all the triplets [nums[i], nums[j], 
    nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
    Notice that the solution set must not contain duplicate triplets.
 */

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
    int i,j,k,sum,t,total=64;
    qsort(nums,numsSize,sizeof(int),cmp);
    *returnSize=0;
    int **q=(int**)malloc(sizeof(int*)*total);
    *returnColumnSizes=(int*)malloc(sizeof(int)*total);
    for(i=0;i<numsSize-2;i++)
    {
        if(nums[i]>0||nums[i]+nums[i+1]+nums[i+2]>0)
            break;
        if(i>0&&nums[i]==nums[i-1])
            continue;
        j=i+1;
        k=numsSize-1;
        sum=-nums[i];
        while(j<k)
        {
            t=nums[j]+nums[k];
            if(t<sum)
                j++;
            else if(t>sum)
                k--;
            else
            {
                (*returnColumnSizes)[*returnSize]=3;
                q[*returnSize]=(int*) malloc(sizeof(int)*3);
                q[*returnSize][0]=nums[i];
                q[*returnSize][1]=nums[j++];
                q[*returnSize][2]=nums[k--];
                (*returnSize)++;
                while(j<k&&nums[j]==nums[j-1])
                    j++;
                while(j<k&&nums[k]==nums[k+1])
                    k--;
                if((*returnSize)==total)
                {
                    total*=2;
                    *returnColumnSizes=(int*)realloc(*returnColumnSizes,sizeof(int)*total);
                    q=(int**)realloc(q,sizeof(int*)*total);
                }
            }
        }
    }
    return q;
}

/*
    Input: nums = [-1,0,1,2,-1,-4]
    Output: [[-1,-1,2],[-1,0,1]]
    Explanation: 
    nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
    nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
    nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
    The distinct triplets are [-1,0,1] and [-1,-1,2].
    Notice that the order of the output and the order of the triplets does not matter.
*/