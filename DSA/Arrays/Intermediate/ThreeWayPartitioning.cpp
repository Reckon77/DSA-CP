//https://practice.geeksforgeeks.org/problems/three-way-partitioning/1/
//Solution is similar to sort an array of 0s,1s ans 2s
void threeWayPartition(vector<int> &array, int a, int b)
{
    // code here
    int l = 0, m = 0, h = array.size() - 1;
    while (m <= h)
    {
        if (array[m] < a)
        {
            swap(array[l++], array[m++]);
        }
        else if (array[m] >= a && array[m] <= b)
        {
            m++;
        }
        else
        {
            swap(array[m], array[h--]);
        }
    }
}