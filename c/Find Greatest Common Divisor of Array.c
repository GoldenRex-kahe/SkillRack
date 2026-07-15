int findGCD(int* nums, int numsSize)
{
    int smallest = nums[0];
    int largest = nums[0];
    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
        }
        if (nums[i] > largest)
        {
            largest = nums[i];
        }
    }
    while (smallest != 0)
    {
        int remainder = largest % smallest;
        largest = smallest;
        smallest = remainder;
    }
    return largest;
}