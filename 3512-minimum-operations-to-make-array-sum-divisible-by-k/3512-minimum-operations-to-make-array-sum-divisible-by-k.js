/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */

const sum=(arr)=>{
    let s=0;
    for(let val of arr){
        s+=val;
    }
    return s;
}
var minOperations = function(nums, k) {
    let totalSum=sum(nums);
    return(totalSum % k);
};