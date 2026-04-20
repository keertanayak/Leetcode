// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

int removeDuplicates(int* nums, int numsSize) {
    if(numsSize==0)
        return 0;
    int pos=1; // next posn to put new number
    for(int i=1; i<numsSize; i++){
        if(nums[i] != nums[i-1]){ // to check if current is different from previous element
            nums[pos] = nums[i];
            pos++;
        }
    }
    return pos;
}
