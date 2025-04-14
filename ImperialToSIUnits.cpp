#include <iostream>

using namespace std;

double inch(double value);
double foot(double value);
double yard(double value);
double miles(double value);
double ounce(double value);
double pound(double value);
double gallon(double value);
double fahrenheit(double value);

int main(){
 int option;
 double value;

 cout << "****************************************\n";
 cout << "Hello, I will convert your Imperial Units to the International Metric System\n";
 cout << "****************************************\n";
 cout << "1. Inch\n";
 cout << "2. Foot\n";
 cout << "3. Yard\n";
 cout << "4. Miles\n";
 cout << "5. Ounces\n";
 cout << "6. Pound\n";
 cout << "7. Gallons\n";
 cout << "8. Fahrenheit\n";
 cout << "What unit would you like to convert? (1-8): ";
 cin >> option;


 cout << "Great! Now, how much of that would you like to convert?: ";
 cin >> value;
 
 /*
 Yes, I know this code didn't needed any functions, I could've just returned the value multiplied
 but lets be real if someone needed to convert those units they would use google or something
 */

 switch(option){
   case 1:
   inch(value);
   cout << value << " Inches to Centimiters is: " << inch(value);
    break;
   case 2:
   foot(value);
   cout << value << " Feet to Centimiters is: " << foot(value) << " or " << foot(value)/100 << " meters";
    break;
   case 3:
   yard(value);
   cout << value << " Yards to Centimiters is: " << yard(value) << " or " << yard(value)/100 << " meters";;
    break;
   case 4:
   miles(value);
   cout << value << " Miles to Centimiters is: " << miles(value) << " or " << miles(value)/100 << " meters";;
    break;
   case 5:
   ounce(value);
   cout << value << " Ounces to Grams is: " << ounce(value) << " or " << ounce(value)/1000 << " kilograms";
    break;
   case 6:
   pound(value);
   cout << value << " Pounds to Grams is: " << pound(value) << " or " << pound(value)/1000 << " kilograms";;
    break;
   case 7:
   gallon(value);
   cout << value << " Gallons to Litres is: " << gallon(value) << " or " << gallon(value)*1000 << " Mililiters";
    break;
   case 8:
   fahrenheit(value);
   cout << value << " Fahrenheit to Celsius is: " << fahrenheit(value);
    break;
 }
 return 0;
};

double inch(double value){
 return value*2.54;
};
double foot(double value){
 return value*30.48;
};
double yard(double value){
 return value*91.44;
};
double miles(double value){
 return value*160934;
};
double ounce(double value){
 return value*28.349523125;
};
double pound(double value){
 return value*453.59237;
};
double gallon(double value){
 return value*3.78541;
};
double Fahrenheit(double value){
  return (value-32) * (5/9);
};
