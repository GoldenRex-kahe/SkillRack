int maxProfit(int* prices, int pricesSize)
{
    int minimumPrice = prices[0];
    int maximumProfit = 0;

    for (int i = 1; i < pricesSize; i++)
    {
        if (prices[i] < minimumPrice)
        {
            minimumPrice = prices[i];
        }

        int profit = prices[i] - minimumPrice;

        if (profit > maximumProfit)
        {
            maximumProfit = profit;
        }
    }

    return maximumProfit;
}
