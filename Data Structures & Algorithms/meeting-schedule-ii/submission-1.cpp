/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        sort(intervals.begin() , intervals.end() , [](Interval &a , Interval& b){return a.start < b.start;});
        int count = 1;
        unordered_map<int , int>seen;
        for (auto& i : intervals) cout << i.start << " " << i.end << endl;
        for (int i = 1 ; i < intervals.size() ; i++){
            if (seen[intervals[i].start] > 1) continue;
            if (intervals[i].start < intervals[i - 1].end) count++;
            seen[intervals[i].end]++;
        }
        return count;
    }
};