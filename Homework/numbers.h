#include <math.h>
#include <stdlib.h>
#include <time.h>
struct numbers {
    unsigned int size;
    int *values;
};
struct Set {
    const unsigned int size;
    const int *values;
};
/*
 Numbers()
 
 used to initialize empty numbers structures
 */
struct numbers Numbers()
{
    struct numbers myRange;
    myRange.size = 0;
    myRange.values = (int *) malloc(sizeof(int)*2);
    return myRange;
}
/*  makeList
 
 For turning an array of ints into a numbers structure... useful later
 */
struct numbers makeList(int *arrayVals,int count)
{
    struct numbers retList;
    retList.size = count;
    retList.values = malloc(count * sizeof(int));
    while (count--)
        retList.values[count] = arrayVals[count];
        return retList;
}
/*
 generateRange
 
 generate a range of numbers from start to end, incrementing by 1
 numbers may start and end with positive or negative values
 myNumbers = generateRange(-3,3);
 will return a numbers structure with myNumbers.values containing
 -3 -2 -1 0 1 2 3
 myNumbers = generateRange(3,-3);
 will return a numbers structure with myNumbers.values containing
 3 2 1 0 -1 -2 -3
 and so on...
 */
struct numbers generateRange(int start, int end)
{
    struct numbers myRange;
    unsigned int countdown;
    myRange.size = (unsigned int) fabs(end-start)+1;
    countdown = myRange.size;
    myRange.values = malloc(myRange.size * sizeof(int));
    unsigned int i = 0;
    while (countdown--)
    {
        *(myRange.values + i++) = start;
        (start < end) ? start++ : start--;
    }
    return myRange;
}
/*
 generateRandoms
 
 generates a numbers structure of numbers which are shuffled into random order
 */
struct numbers generateRandoms(int start, int end)
{
    struct numbers myRange = generateRange(start, end);
    unsigned int i, r;
    srand(clock());
    int temp;
    for (i = 0; i < myRange.size-1; i++)
    {
        r = i + (rand() % (myRange.size-i));
        temp = myRange.values[i];
        myRange.values[i] = myRange.values[r];
        myRange.values[r] = temp;
    }
    return myRange;
}
void printRange(struct numbers *myRange)
{
    int i;
    for (i = 0; i < myRange->size; i++)
        printf("%d ", myRange->values[i]);
    printf("\n");
}
/*
 doesn't actually sum the values, but sums the range size
 for example, [-1, -2, -3, 2, 0]
 would sum on i, from 0 to N
 1 + 2 + 3 + 4 + 5 = 15
 I use this elsewhere to determine the number of unique pairs in a range of unique values
 */
int sumRange(struct numbers *myRange)
{
    int sum = 0, i;
    for (i = 0; i <= myRange->size; i++)
    {
        sum += i;
    }
    return sum;
}
/*
 popVal
 
 a rubbish stack implementation
 */
void pushVal(struct numbers *myRange, int value)
{
    if (myRange->size == 0)
    {
        myRange->values = (int *) malloc(sizeof(int)*(++myRange->size));
    } else {
        myRange->values = realloc(myRange->values, sizeof(int)*(++myRange->size));
    }
    myRange->values[myRange->size-1] = value;
}
/*
 popVal
 
 a pretty crap stack implementation
 */
int popVal(struct numbers *myRange)
{
    if (myRange->size > 0)
    {
        int value = myRange->values[myRange->size-1];
        myRange->values = realloc(myRange->values, sizeof(int)*(--myRange->size));
        return value;
    } else {
        // I know...
        return -1;
    }
}

/*
 Sorting and merging routines for numbers structures
 
 numberSwap    - does what it says
 selectionSort - simple selection sort
 mergeSort     - merges two sorted numbers structures into a single sorted structure
 Set           - makes a unique Set out of an already sorted number structure's members
 mergeSet      - sorts and merges number structures and returns the unique set of their union
 
 */
void numberSwap(struct numbers *myNumbers, int a, int b)
{
    int temp;
    temp = myNumbers->values[b];
    myNumbers->values[b] = myNumbers->values[a];
    myNumbers->values[a] = temp;
}
void selectionSort(struct numbers *myNumbers)
{
    int i, j, k, min;
    for (i = 0; i < myNumbers->size; i++)
    {
        min = i;
        for (j = i + 1; j < myNumbers->size; j++)
        {
            if (myNumbers->values[j] < myNumbers->values[min])
                min = j;
        }
        numberSwap(myNumbers, min, i);
    }
}
struct numbers mergeSort(struct numbers *myNumA, struct numbers *myNumB)
{
    selectionSort(myNumA);
    selectionSort(myNumB);
    struct numbers c = Numbers();
    int i = 0, j = 0, k;
    int value;
    for (k = 0; k < myNumA->size+myNumB->size; k++)
    {
        /*
         this is ugly
         it does seem to work though
         */
        if (myNumA->values[i] < myNumB->values[j])
        {
            if (i < myNumA->size)
                value = myNumA->values[i++];
                else
                    value = myNumB->values[j++];
                    } else {
                        if (j < myNumB->size)
                            value = myNumB->values[j++];
                            else
                                value = myNumA->values[i++];
                                }
        // value = (myNumA->values[i] < myNumB->values[j]) ? myNumA->values[i++] : myNumB->values[j++];
        pushVal(&c, value);
    }
    return c;
}

struct numbers Set(struct numbers *myValues)
{
    int i,j;
    j = 0;
    struct numbers retSet = Numbers();
    
    for (i = 0; i < myValues->size;)
    {
        while (myValues->values[i] == myValues->values[++i])
            j++;
        if (j > 0)
        {
            pushVal(&retSet, myValues->values[i-1]);
            j = 0;
        }
    }
    return retSet;
}
struct numbers mergeSet(struct numbers myValA, struct numbers myValB)
{
    struct numbers retSet = mergeSort(&myValA, &myValB);
    return Set(&retSet);
}

int valueInSet(struct Set *mySet, int value)
{
    int i = 0, retVal = 0;
    /*
     Sets are sorted, smallest value first. When compared to the value it should
     always be less or equal, otherwise the value will never be present in the Set.
     */
    while (i < mySet->size && mySet->values[i] <= value)
        retVal = retVal + (mySet->values[i++] == value) ? 1 : 0;
    
    return retVal;
}