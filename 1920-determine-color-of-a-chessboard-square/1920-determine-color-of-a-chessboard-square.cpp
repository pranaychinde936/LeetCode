class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int first = coordinates[0] - 'a' + 1;
        int second = coordinates[1] - '1' + 1;
        cout<< first << "  " << second;

        return ((first + second) % 2) == 1;
    }
};