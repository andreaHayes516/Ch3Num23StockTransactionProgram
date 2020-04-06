/************************************************
** Author: Andrea Hayes
** Date: Febuary 28th, 2020
** Purpose: Show a breakdown of Joe's stockmarket transactions
** Input: Number of shares purchased, amount paid per share, commisson for purchase,
          number of shares sold, amount paid per share, commision for sale
** Processing: Calculate money paid for stock when purchased and sold, money paid 
                to stock broker, profit
** Output: Money paid for stock, commision paid when bought stock, Money sold stock for,
           commision paid when sold stock, profit
*************************************************/
#include <iostream>
#include <iomanip>

using namespace std;
int main() {


    double pricePerSharePurchase, paidPrice, commissionPurchase, pricePerShareSold, 
           soldPrice, commissionSold, profit;
    
    pricePerSharePurchase = 45.50; // Price per share when purchsed
    paidPrice = pricePerSharePurchase * 1000; // Price paid for 1,000 shares
    commissionPurchase = paidPrice * 0.02; // Commission of 2%
    pricePerShareSold = 56.90; // Price per share when sold
    soldPrice = pricePerShareSold * 1000; // Price sold for 1,000 shares
    commissionSold = soldPrice * 0.02; // Commission of 2%
    profit = soldPrice - paidPrice - commissionPurchase - commissionSold; // Profit Joe made

    cout << setw(40) << left << fixed << setprecision(2) << "Amount Paid for 1,000 Shares: " << "$" 
        << paidPrice << endl;
    cout << setw(42) << left << "Commission Paid when Purchased: " << "$" 
        << commissionPurchase << endl;
    cout << setw(40) << left << "Amount Sold for 1,000 Shares: " << "$"
        << soldPrice << endl;
    cout << setw(41) << left << "Commission Paid when Sold: " << "$"
        << commissionSold << endl;
    cout << setw(41) << left << "Profit: " << "$"
        << profit << endl;


    return 0;
}