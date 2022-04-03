// Given a characters array letters that is sorted in non-decreasing order and a character target, return the smallest character in the array that is larger than target.
//
//     Note that the letters wrap around.
//
//     For example, if target == 'z' and letters == ['a', 'b'], the answer is 'a'.

/**
 * @param {character[]} letters
 * @param {character} target
 * @return {character}
 */
var nextGreatestLetter = function(letters, target) {
    var len = letters.length;
    if (target >= letters[len - 1]) {
        return letters[0];
    }
    var left = 0;
    var right = len - 1;
    while (left < right) {
        const mid = Math.floor((right - left) / 2) + left;
        if (letters[mid] > target) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return letters[left];
};