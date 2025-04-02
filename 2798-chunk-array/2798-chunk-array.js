/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    let ans = [];
    for(let i=0; i<arr.length; i++){
        let subArr = [];
        for(let j=0; j<size && i<arr.length; j++){
            subArr.push(arr[i]);
            i++;
        }
        i--;
        ans.push(subArr);
    }

    return ans;
};
