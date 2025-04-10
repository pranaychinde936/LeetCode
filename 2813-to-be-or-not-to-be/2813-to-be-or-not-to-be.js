/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    obj = {
        toBe : (val2) => { 
            if(val === val2)        return true;
            throw("Not Equal"); 
        },
        notToBe : (val2) => {
            if(val !== val2)            return true;
            throw("Equal");
        }
    }

    return obj;
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */