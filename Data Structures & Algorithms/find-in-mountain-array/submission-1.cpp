/**
 * // This is MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findPeak(MountainArray &mountainArr) {
        int l = 0, r = mountainArr.length() - 1;

        while (l < r) {
            int mid = l + (r - l) / 2;

            if (mountainArr.get(mid) < mountainArr.get(mid + 1))
                l = mid + 1;
            else
                r = mid;
        }

        return l;
    }

    int binarySearch(MountainArray &mountainArr, int target, int l, int r, bool asc) {
        while (l <= r) {
            int mid = l + (r - l) / 2;
            int val = mountainArr.get(mid);

            if (val == target)
                return mid;

            if (asc) {
                if (val < target)
                    l = mid + 1;
                else
                    r = mid - 1;
            } else {
                if (val < target)
                    r = mid - 1;
                else
                    l = mid + 1;
            }
        }

        return -1;
    }

    int findInMountainArray(int target, MountainArray &mountainArr) {
        int peak = findPeak(mountainArr);

        int ans = binarySearch(mountainArr, target, 0, peak, true);
        if (ans != -1)
            return ans;

        return binarySearch(mountainArr, target, peak + 1, mountainArr.length() - 1, false);
    }
};