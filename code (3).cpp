#include<iostream>
using namespace std;
int main ()
{ double  original_price , percentage_inc, sales_tax;
 cout<<"enter the original price of the product :"<<endl;
 cin>>original_price;
 cout<<"enter the percentage of marked up price:"<<endl;
 cin>>percentage_inc;
 cout<<"enter the sales tax rate:" <<endl;
 cin>>sales_tax;
 cout<<"original price :"<<original_price<<endl;
 cout<<"percentage of mark up:"<<percentage_inc<<endl;
 double store_selling_price;
 store_selling_price = original_price+(percentage_inc/100)*original_price;
 cout<<"store selling price of the product :"<<store_selling_price<<endl;
 double final_price;
 final_price= store_selling_price+(sales_tax/100)*original_price;
 cout<<"final selling price of the product is:"<<final_price<<endl;
 return 0;
 
}
