// Given two strings s1 and s2, write a function to determine whether s2 contains an anagram of s1.

// In other words, one of the permutations of the first string is a substring of the second string.

// Example 1:
// Input: s1 = "ab" s2 = "eidbaooo"
// output: True
// Explanation: s2 contains one of the permutations of s1 ("ba").

// Example 2:
// Input: s1= "ab" s2 = "eidboaoo"
// output: False
//  
// hint:
// 1 <= s1.length, s2.length <= 104
// s1 and s2 contain only lowercase letters
/**
 * @param {string} s1
 * @param {string} s2
 * @return {boolean}
 */
 var checkInclusion = function(s1, s2) {
    const n = s1.length, m = s2.length;
    if (n > m){
        return false;
    }
    const array1 = new Array(26).fill(0);
    const array2 = new Array(26).fill(0);
    for (let i=0; i<n; i++){
        ++array1[s1[i].charCodeAt()-'a'.charCodeAt()];
        ++array2[s2[i].charCodeAt()-'a'.charCodeAt()];
    }
    if (array1.toString() == array2.toString()){
        return true;
    }
    for(let i=n; i<m; i++){
        --array2[s2[i-n].charCodeAt()-'a'.charCodeAt()];
        ++array2[s2[i].charCodeAt()-'a'.charCodeAt()];
        if (array1.toString() == array2.toString()){
        return true;
        }
    }
    return false;
};