#include<iostream>
using namespace std;
int main()
{
	int initialquantity, quantitysold;
	int restockinterval = 5;
	int restockquantity;
	int threshold;
	int salescount = 0;

		// Asking for input

		cout << "Enter the intial quantity of product in stock:" << endl;
		cin >> initialquantity;

		// Using while loop 
		while (true)
		{
			cout << "Enter the quantity sold:";
			cin >> quantitysold;

			if (quantitysold < 0)
			{
				cout << "QUANTITY SOLD CANNOT BE NEGATIVE ENTER A VALID QUANTITY ;" << endl;
				continue;
			}
			if (quantitysold>initialquantity)
			{
				cout << "NOT ENOUGH STOCK.NO SALES MADE" << endl;
				continue;
			}
			initialquantity -= quantitysold;
			cout << "REMAINING STOCK AFTER SALES" << initialquantity << endl;

			salescount++;
			if (salescount%restockinterval==0)
			{
				cout << "RESTOCK NEEDED.ENTER THE QUANTITY TO RESTOCK" << endl;
				cin >> restockquantity;
				
				if (restockquantity > 0)
				{
					cout << "RESTOCK CAN NOT BE A NEGATIVE NUMBER:PLEASE REENTER " << endl;
					continue;
				}
				initialquantity += restockquantity;
				cout << " STOCK AVAILABLE AFTER RESTOCKING " << initialquantity << endl;

				if (initialquantity<threshold)
				{
					cout << " YOUR STOCK IS BELOW THE THRESOLD QUANTITY" << endl;
					break;
				}
			}	
		}
	return 0;
}