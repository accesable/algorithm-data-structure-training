/**
 * BestTimeToBuyAndSellStock
 */
public class BestTimeToBuyAndSellStock {

    public static void main(String[] args) {
        
    }
    public int maxProfit(int[] prices) {
        int l = 0;
        int r = 1;
        int maxProfit = 0;
        for(; r <prices.length;r++){
            int currentProfit = prices[r] -prices[l];
            if(prices[r] < prices[l]){
                l = r;
            }
            maxProfit = Math.max(maxProfit,currentProfit);
        }
        return maxProfit;
    }
}