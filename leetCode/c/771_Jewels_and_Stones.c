int numJewelsInStones(char* jewels, char* stones) {

    int numberOfJewels=0;
    int stonesIndex=0;

    while(stones[stonesIndex]!='\0')
    {
        int jewelsIndex=0;
        while(jewels[jewelsIndex]!='\0')
        {
            if(jewels[jewelsIndex]==stones[stonesIndex])
            {
                numberOfJewels++;
                break;
            }
            jewelsIndex++;
        }
        stonesIndex++;
    }
    return numberOfJewels;
}