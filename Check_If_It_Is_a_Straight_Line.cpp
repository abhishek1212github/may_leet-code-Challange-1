/*
You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. Check if these points make a straight line in the XY plane.

 

 

Example 1:



Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
Output: true
Example 2:



Input: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
Output: false
 

Constraints:

2 <= coordinates.length <= 1000
coordinates[i].length == 2
-10^4 <= coordinates[i][0], coordinates[i][1] <= 10^4
coordinates contains no duplicate point.
*/

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates)
    {
        float x1=coordinates[0][0];
        float y1=coordinates[0][1];
        float x2=coordinates[1][0];
        float y2=coordinates[1][1];
        float slope1= (y2-y1)/(x2-x1);
        int flag=1;
        for(int i=2;i<coordinates.size();i++)
        {
            float x3=coordinates[i][0];
            float y3=coordinates[i][1];
            float slope2= (y3-y1)/(x3-x1);
            if(slope1!=slope2)
            {
                flag=0;
                return false;
                break;
            }
        }
        return true;

        
    }
};


