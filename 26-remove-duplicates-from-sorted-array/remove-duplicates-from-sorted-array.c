
int removeDuplicates(int* nums, int numsSize) {

    // If array has only one element
    if (numsSize == 1) {
        return 1;
    }

    int i = 0;

    // Check elements starting from index 1
    for (int j = 1; j < numsSize; j++) {

        // If a new unique element is found
        if (nums[i] != nums[j]) {

            i++;

            nums[i] = nums[j];
        }
    }

    // Return number of unique elements
    return i + 1;
}
