all problems related array in DSA
#all problems related array in DSA
(1st problem):-
#(leetcode Q1-Concatenation of Array)  
Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).
Specifically, ans is the concatenation of two nums arrays.
Return the array ans.
solution:                                                      |(comments)
  #include <stdlib.h>                                          | #int main() function is already created in leetcode itself.
int *getConcatenation(int*nums,int numsize,int*returnsize)     | #we are taking new function,pointer value of input array,size of input array,pointer of returnsize.
{                                                              |
    *returnsize=2*numsize;                                     | #w.k.t. returnsize is double the numsize.
    int *ans=(int*)malloc(sizeof(int)*(*returnsize));          | #dynamically allocate memory to new array ans to access it even after complete execution of function
    for(int i=0;i<numsize;i++)                                 |
    {                                                          |
        ans[i]=nums[i];                                        | #give the values to ans array accordingly
        ans[i+numsize]=nums[i];                                |
    }
    return ans;                                                | #return pointer value of ans to main.
}
