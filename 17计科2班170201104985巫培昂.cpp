int binarySearch(int[] nums, int target) {
    int left = 0, right = ...;

    while(...) {
        int mid = (right + left) / 2;
        if (nums[mid] == target) {
            ...
        } else if (nums[mid] < target) {
            left = ...
        } else if (nums[mid] > target) {
            right = ...
        }
    }
    return ...;
}  //����ֲ��ҿ��
int binarySearch(int[] nums, int target) {
    int left = 0; 
    int right = nums.length - 1; // ע��

    while(left <= right) { // ע��
        int mid = (right + left) / 2;
        if(nums[mid] == target)
            return mid; 
        else if (nums[mid] < target)
            left = mid + 1; // ע��
        else if (nums[mid] > target)
            right = mid - 1; // ע��
        }
    return -1;
} Ѱ��һ�������������������� 




int left_bound(int[] nums, int target) {
    if (nums.length == 0) return -1;
    int left = 0;
    int right = nums.length; // ע��

    while (left < right) { // ע��
        int mid = (left + right) / 2;
        if (nums[mid] == target) {
            right = mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else if (nums[mid] > target) {
            right = mid; // ע��
        }
    }
    return left;
} //Ѱ�����߽�Ķ�������

�㷨�ܹ��������߽�ؼ����ڶ��� nums[mid] == target ��������Ĵ���



    if (nums[mid] == target)
        right = mid;



�ɼ����ҵ� target ʱ��Ҫ�������أ�������С���������䡹���Ͻ� right�������� [left, mid) �м��������������������������ﵽ�������߽��Ŀ��




int right_bound(int[] nums, int target) {
    if (nums.length == 0) return -1;
    int left = 0, right = nums.length;

    while (left < right) {
        int mid = (left + right) / 2;
        if (nums[mid] == target) {
            left = mid + 1; // ע��
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else if (nums[mid] > target) {
            right = mid;
        }
    }
    return left - 1; // ע��



}

    if (nums[mid] == target) {
        left = mid + 1;

   if (nums[mid] == target) {
        left = mid + 1;
   


 
