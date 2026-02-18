/**
 * @param {number[]} nums
 * @return {boolean}
 */
var isPrime = function(n){
    if (n<=1) return false;
    if(n === 2)return true;
    if(n%2==0)return false;
    for(let i=3;i<n;i++){
        if(n%i==0)return false;
    }
    return true;
}

var checkPrimeFrequency = function(nums) {
    let freq = {};
    for (let i of nums){
        if(freq[i])freq[i]++;
        else freq[i]=1;
    }
    for(let key in freq){
        console.log(freq[key]);
        if(isPrime(freq[key]))return true;
    }
    return false;
};
