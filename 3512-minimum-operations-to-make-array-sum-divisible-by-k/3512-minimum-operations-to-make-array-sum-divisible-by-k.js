/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */

const Sum = (arr) =>{//arr-->parameter
    let s=0;
    for(let i in arr){
        // console.log(i);
        s=s+arr[i];
    }
    return s;
}
var minOperations = function(nums, k) {
    let SumofArrayElements = Sum(nums)//nums-->arguement
    // console.log(SumofArrayElements);
    let answer = SumofArrayElements % k;
    return answer;
};