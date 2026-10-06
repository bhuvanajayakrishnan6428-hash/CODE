int thirdMax(int* nums, int numsSize) {
    long int m1 = LONG_MIN, m2 = m1, m3 = m2;
    for (; numsSize--; nums++)
        if (m1 < *nums)
            m3 = m2, m2 = m1, m1 = *nums;
        else if (m2 < *nums && *nums != m1)
            m3 = m2, m2 = *nums;
        else if (m3 < *nums && *nums != m2 && *nums != m1)
            m3 = *nums;
    return m3 == LONG_MIN ? m1 : m3;
}