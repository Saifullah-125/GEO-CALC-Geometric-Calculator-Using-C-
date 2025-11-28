#include <iostream>
#include <windows.h>
using namespace std;
int a;
int c;
int x;
HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
const double Pi=3.14;
void Front_Page();
void Choose(int a);
void Square();
void Rectangle();
void Triangle();
void Circle();
void Parallelogram();
void Rhombus();
void inter();
int fun(int a);
int main(){
	SetConsoleTextAttribute(h,2);
	int p;
	inter();
	cout<<"\t\tDo you want to Perform calculations? (1/0): ";
	cin>>p;
	if(p==1){
	while(p==1){
	system("CLS");
	inter();
	cout<<endl;
	Front_Page();
	Choose(a);
	fun(a);
	cout<<endl<<endl<<endl;
	cout<<"\t\tDo you want to Perform more calculations? (1/0): ";
	cin>>p;
	system("CLS");
}
}
	return 0;
}
int fun(int a){
	switch(a){
	case 1:{
	if(a<=6){
	Square();
	}
	break;
	}
	case 2:{
	Rectangle();
	break;
	}
	case 3:{
	Triangle();
	break;
	}
	case 4:{
	Circle();
	break;
	}
	case 5:{
	Parallelogram();
	break;
	}
	case 6:{
	Rhombus();
	break;
	}
	case 7:{
	return 0;
	break;
	}		
	}
	
	return 0;
}
void inter(){
	cout<<endl<<endl;
	SetConsoleTextAttribute(h,15);
	cout<<"\t\t\t\t*****************************************************************"<<endl;
	cout<<"\t\t\t\t**********      Geometrical Calculator (GEO CAL)      ***********"<<endl;
	cout<<"\t\t\t\t*****************************************************************"<<endl;
	cout<<endl<<endl<<endl;
	SetConsoleTextAttribute(h,1);
	cout<<"\t\t\t\t GGGGGG   EEEEEE  OOOOOOO      CCCCCC  AAAAAAA  LL       CCCCCC  "<<endl;  
    cout<<"\t\t\t\tGG       EE      OO     OO    CC      AA     AA LL      CC       "<<endl;
    cout<<"\t\t\t\tGG       EE      OO     OO    CC      AA     AA LL      CC       "<<endl;     
    cout<<"\t\t\t\tGG  GGG  EEEEEE  OO     OO    CC      AAAAAAAAA LL      CC       "<<endl;    
    cout<<"\t\t\t\tGG    GG EE      OO     OO    CC      AA     AA LL      CC       "<<endl;  
    cout<<"\t\t\t\tGG    GG EE      OO     OO    CC      AA     AA LL      CC       "<<endl;  
    cout<<"\t\t\t\t GGGGGG   EEEEEE  OOOOOOO      CCCCCC AA     AA LLLLLLL  CCCCCC  "<<endl;
    cout<<endl<<endl<<endl;
    SetConsoleTextAttribute(h,15);
    cout<<"\t\t\t\t*****************************************************************"<<endl;
    cout<<"\t\t\t\t********      Welcome to the Geometrical Calculator!     ********" << endl;
    cout<<"\t\t\t\t*****************************************************************"<<endl;
	cout<<endl<<endl<<endl;
}
void Front_Page(){
	SetConsoleTextAttribute(h,3);
	cout<<"\t\tGeometrical Calculations"<<endl<<endl;
	cout<<"\t\t1. Square."<<endl;
	cout<<"\t\t2. Rectangle."<<endl;
	cout<<"\t\t3. Triangle."<<endl;
	cout<<"\t\t4. Circle."<<endl;
	cout<<"\t\t5. Parallelogram."<<endl;
	cout<<"\t\t6. Rhombus."<<endl;
	cout<<"\t\t7. Exit."<<endl<<endl<<endl;
	cout<<"\t\tPlease Select the shape from the above list: ";
	cin>>a;
}
void Choose(int a){
	SetConsoleTextAttribute(h,7);
	switch (a){
	case 1:{
	system ("cls");
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,7);		
	cout<<"\t\t1. Calculate the Area of the Square."<<endl;
	cout<<"\t\t2. Calculate the Perimeter of the Square."<<endl;
	cout<<"\t\t3. Exit."<<endl;
	cout<<"\t\tWhat do you want to calculate (Area or Perimeter): ";
	cin>>c;
	break;
	}
	case 2:{
	system ("cls");
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,7);
	cout<<"\t\t1. Calculate the Area of the Rectangle."<<endl;
	cout<<"\t\t2. Calculate the Perimeter of the Rectangle."<<endl;
	cout<<"\t\t3. Exit."<<endl;
	cout<<"\t\tWhat do you want to calculate (Area or Perimeter): ";
	cin>>c;
	break;
	}
	case 3:{
	system ("cls");
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,7);
	cout<<"\t\t1. Calculate the Area of the Triangle."<<endl;
	cout<<"\t\t2. Calculate the Perimeter of the Triangle."<<endl;
	cout<<"\t\t3. Exit."<<endl;
	cout<<"\t\tWhat do you want to calculate (Area or Perimeter): ";
	cin>>c;
	break;
	}
	case 4:{
	system ("cls");
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,7);
	cout<<"\t\t1. Calculate the Area of the Circle."<<endl;
	cout<<"\t\t2. Calculate the Perimeter of the Circle."<<endl;
	cout<<"\t\t3. Exit."<<endl;
	cout<<"\t\tWhat do you want to calculate (Area or Perimeter): ";
	cin>>c;
	break;
	}
	case 5:{
	system ("cls");
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,7);
	cout<<"\t\t1. Calculate the Area of the Paralellogram."<<endl;
	cout<<"\t\t2. Calculate the Perimeter of the Paralellogram."<<endl;
	cout<<"\t\t3. Exit."<<endl;
	cout<<"\t\tWhat do you want to calculate (Area or Perimeter): ";
	cin>>c;
	break;
	}
	case 6:{
	system ("cls");
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,7);
	cout<<"\t\t1. Calculate the Area of the Rhombus."<<endl;
	cout<<"\t\t2. Calculate the Perimeter of the Rhombus."<<endl;
	cout<<"\t\t3. Exit."<<endl;
	cout<<"\t\tWhat do you want to calculate (Area or Perimeter): ";
	cin>>c;
	break;
	}
	case 7:{
	system("CLS");
	inter();
	SetConsoleTextAttribute(h,7);
	cout<<endl<<endl<<endl;
	cout<<"\t\tThank You! Have a nice day...";
	break;
	}
	default:{
	system("CLS");
	inter();
	cout<<endl<<endl<<endl;
	SetConsoleTextAttribute(h,7);
	cout<<"\t\tSorry! You Entered Invalid Choice...";
	break;
	}
	}
}
void Square(){
	cout<<endl;
	system ("CLS");
	SetConsoleTextAttribute(h,7);
	switch(c){
	case 1:{
	inter();
	cout<<endl<<endl;
	SetConsoleTextAttribute(h,1);
	cout<<"\t\t"<<"*******************"<<endl;
	cout<<"\t\t"<<"*                 *"<<endl;
	cout<<"\t\t"<<"*                 *"<<endl;
	cout<<"\t\t"<<"*                 *"<<endl;
	cout<<"\t\t"<<"*                 *"<<endl;
	cout<<"\t\t"<<"*                 *"<<endl;
	cout<<"\t\t"<<"*                 *"<<endl;
	cout<<    "\t\t*******************"<<endl;
	cout<<endl;
	SetConsoleTextAttribute(h,7);
	cout<<"\t\tThe Formula For calculating the Area of Square: "<<endl;
	cout<<"\t\tArea of the Square = (Side of the square)*(Side of the square)"<<endl<<endl<<endl;
	cout<<"\t\tDo you really want to Calculate the Area of the Square 1/0: ";
	cin>>x;
	if(x==1){
	double s;
	system("CLS");
	inter();
	cout<<"\t\tPlease Enter the Length of the Side of the Square: ";
	cin>>s;
	cout<<endl<<endl;
	cout<<"\t\tThe Area of the Square is: ";
	cout<<s*s <<" Units Square.";
	}
	else if(x==0){
	system("CLS");
	inter();
	cout<<endl;
	Choose(a);
	Square();
	}
	else{
	system("CLS");
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,3);
	cout<<"\t\tSorry! You Entered invalid choice..";
	}
	break;
	}
	case 2:{
	inter();
	cout<<endl<<endl;
	SetConsoleTextAttribute(h, 1);
	cout<<"\t\t"<<"*******************"<<endl;
	cout<<"\t\t"<<"*                 *"<<endl;
	cout<<"\t\t"<<"*                 *"<<endl;
	cout<<"\t\t"<<"*                 *"<<endl;
	cout<<"\t\t"<<"*                 *"<<endl;
	cout<<"\t\t"<<"*                 *"<<endl;
	cout<<"\t\t"<<"*                 *"<<endl;
	cout<<    "\t\t*******************"<<endl;
	cout<<endl;
	SetConsoleTextAttribute(h,7);
	cout<<"\t\tThe Formula For calculating the Perimeter of Square: "<<endl;
	cout<<"\t\tPerimeter of the Square = 4*(Side of the square)"<<endl<<endl<<endl;
	cout<<"\t\tDo you really want to Calculate the Area of the Square 1/0: ";
	cin>>x;
	if(x==1){
	double s;
	system("CLS");
	inter();
	cout<<endl;
	cout<<"\t\tPlease Enter the Length of the Side of the Square: ";
	cin>>s;
	cout<<endl<<endl;
	cout<<"\t\tThe Perimeter of the Square is: ";
	cout<<4*s<<" Units.";
	}
	else if(x==0){
	system("CLS");
	inter();
	cout<<endl;
	Choose(a);
	Square();
	}
	else{
	system("CLS");
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,3);
	cout<<"\t\tSorry! You Entered invalid choice..";
	}
	break;
	}
	case 3:{
	system("CLS");
	inter();
	cout<<endl;
	Front_Page();
	Choose(a);
	fun(a);
	break;
	}
	default:{
	inter();
	cout<<endl;	
	SetConsoleTextAttribute(h,3);
	cout<<"Sorry! Your choice is Invalid..."<<endl<<endl;		
	break;
	}
	}
}
void Rectangle(){
	system("CLS");
	switch(c){
	case 1:{
	inter();
	cout<<endl<<endl;
	SetConsoleTextAttribute(h,1);
	cout<<"\t\t"<<"************************"<<endl;
	cout<<"\t\t"<<"*                      *"<<endl;
	cout<<"\t\t"<<"*                      *"<<endl;
	cout<<"\t\t"<<"*                      *"<<endl;
	cout<<"\t\t"<<"*                      *"<<endl;
	cout<<"\t\t"<<"************************"<<endl;
	cout<<endl;
	SetConsoleTextAttribute(h,7);
	cout<<"\t\tThe Formula For calculating the Area of Rectangle: "<<endl;
	cout<<"\t\tArea of the Rectangle = (Length of the Rectangle)*(Width of the Rectangle)"<<endl<<endl<<endl;
	cout<<"\t\tDo you really want to Calculate the Area of the Rectangle 1/0: ";
	cin>>x;
	if(x==1){
	double l;
	double b;
	system("CLS");
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,7);
	cout<<"\t\tPlease Enter the Length of the Rectangle: ";
	cin>>l;
	cout<<"\t\tPlease Enter the Width of the Rectangle: ";
	cin>>b;
	cout<<endl<<endl;
	cout<<"\t\tThe Area Of the Rectangle is: ";
	cout<<l*b<<" Units Square.";
	}
	else if(x==0){
	system("CLS");
	inter();
	cout<<endl;
	Choose(a);
	Rectangle();
	}
	else{
	system("CLS");
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,3);
	cout<<"\t\tSorry! You Entered invalid choice..";
	}
	break;
	}
	case 2:{
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,1);
	cout<<endl;
	cout<<"\t\t"<<"************************"<<endl;
	cout<<"\t\t"<<"*                      *"<<endl;
	cout<<"\t\t"<<"*                      *"<<endl;
	cout<<"\t\t"<<"*                      *"<<endl;
	cout<<"\t\t"<<"*                      *"<<endl;
	cout<<"\t\t"<<"************************"<<endl;
	cout<<endl;
	SetConsoleTextAttribute(h,7);
	cout<<"\t\tThe Formula For calculating the Perimeter of Rectangle: "<<endl;
	cout<<"\t\tPerimeter of the Rectangle = ((Length of the Rectangle)+(Width of the Rectangle))"<<endl<<endl<<endl;
	cout<<"\t\tDo you really want to Calculate the Perimeter of the Rectangle 1/0: ";
	cin>>x;
	if(x==1){
	double l;
	double b;
	system("CLS");
	inter();
	cout<<endl;
	cout<<"\t\tPlease Enter the Length of the Rectangle: ";
	cin>>l;
	cout<<"\t\tPlease Enter the Width of the Rectangle: ";
	cin>>b;
	cout<<endl<<endl;
	cout<<"\t\tThe Perimeter Of the Rectangle is: ";
	cout<<2*(l+b)<<" Units.";
	}
	else if(x==0){
	system("CLS");
	inter();
	cout<<endl;
	Choose(a);
	Rectangle();
	}
	else{
	system("CLS");
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,3);
	cout<<"\t\tSorry! You Entered invalid choice..";
	}
	break;
	}
	case 3:{
	system("CLS");
	inter();
	cout<<endl;
	Front_Page();
	Choose(a);
	fun(a);
	break;
	}
	default:{
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,3);
	cout<<"\t\tSorry! Your choice is Invalid..."<<endl<<endl;		
	break;
	}
}
}
void Triangle(){
	cout<<endl;
	system("CLS");
	switch(c){
	case 1:{
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,1);
	cout<<endl;
	cout<<"\t\t          *          "<<endl;
	cout<<"\t\t         * *         "<<endl;
	cout<<"\t\t        *   *        "<<endl;
	cout<<"\t\t       *     *       "<<endl;
	cout<<"\t\t      *       *      "<<endl;
	cout<<"\t\t     *         *     "<<endl;
	cout<<"\t\t    *           *    "<<endl;
	cout<<"\t\t   *             *   "<<endl;
	cout<<"\t\t  *               *  "<<endl;
	cout<<"\t\t *                 * "<<endl;
	cout<<"\t\t*********************"<<endl;
	cout<<endl;
	SetConsoleTextAttribute(h,7);
	cout<<"\t\tThe Formula For calculating the Area of Triangle: "<<endl;
	cout<<"\t\tArea of the Triangle = (Height of the Triangle)*(Side of the Triangle)"<<endl<<endl<<endl;
	cout<<"\t\tDo you really want to Calculate the Area of the Triangle 1/0: ";
	cin>>x;
	if(x==1){
	double h;
	double b;
	system("CLS");
	inter();
	cout<<endl;
	cout<<"\t\tPlease Enter the Height of the Triangle: ";
	cin>>h;
	cout<<"\t\tPlease Enter the Base of the Triangle: ";
	cin>>b;
	cout<<endl<<endl;
	cout<<"\t\tThe Area of the Triangle is: ";
	cout<<(h*b)/2<<" Units Square.";
	}
	else if(x==0){
	system("CLS");
	inter();
	cout<<endl;
	Choose(a);
	Triangle();
	}
	else{
	system("CLS");
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,3);
	cout<<"\t\tSorry! You Entered invalid choice..";
	}
	break;
	}
	case 2:{
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,1);
	cout<<endl;
	cout<<"\t\t          *          "<<endl;
	cout<<"\t\t         * *         "<<endl;
	cout<<"\t\t        *   *        "<<endl;
	cout<<"\t\t       *     *       "<<endl;
	cout<<"\t\t      *       *      "<<endl;
	cout<<"\t\t     *         *     "<<endl;
	cout<<"\t\t    *           *    "<<endl;
	cout<<"\t\t   *             *   "<<endl;
	cout<<"\t\t  *               *  "<<endl;
	cout<<"\t\t *                 * "<<endl;
	cout<<"\t\t*********************"<<endl;
	cout<<endl;
	SetConsoleTextAttribute(h,7);
	cout<<"\t\tThe Formula For calculating the Perimeter of Triangle: "<<endl;
	cout<<"\t\tPerimeter of the Triangle = (Side1 of the Triangle)+(Side2 of the Triangle)+(Side2 of the Triangle)"<<endl<<endl<<endl;
	cout<<"\t\tDo you really want to Calculate the Perimeter of the Triangle 1/0: ";
	cin>>x;
	if(x==1){
	double s1;
	double s2;
	double s3;
	system("CLS");
	inter();
	cout<<endl;
	cout<<"\t\tPlease Enter the Side1 of the Triangle: ";
	cin>>s1;
	cout<<"\t\tPlease Enter the Side2 of the Triangle: ";
	cin>>s2;
	cout<<"\t\tPlease Enter the Side3 of the Triangle: ";
	cin>>s3;
	cout<<endl<<endl;
	cout<<"\t\tThe Perimeter of the Triangle is: ";
	cout<<s1+s2+s3<<" Units.";
	}
	else if(x==0){
	system("CLS");
	inter();
	cout<<endl;
	Choose(a);
	Triangle();
	}
	else{
	system("CLS");
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,3);
	cout<<"\t\tSorry! You Entered invalid choice..";
	}
	break;
	}
	case 3:{
	system("CLS");
	inter();
	cout<<endl;
	Front_Page();
	Choose(a);
	fun(a);
	break;
	}
	default:{
	inter();
	cout<<endl;	
	SetConsoleTextAttribute(h,3);
	cout<<"\t\tSorry! Your choice is Invalid..."<<endl<<endl;		
	break;
	}
	}
}
void Circle(){
	cout<<endl;
	switch(c){
	case 1:{
	system("CLS");
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,1);
	cout<<"\t\t         ***         "<<endl;
	cout<<"\t\t      *       *      "<<endl;
	cout<<"\t\t   *             *   "<<endl;
	cout<<"\t\t *                 * "<<endl;
	cout<<"\t\t*                   *"<<endl;
	cout<<"\t\t*                   *"<<endl;
	cout<<"\t\t *                 * "<<endl;
	cout<<"\t\t   *             *   "<<endl;
	cout<<"\t\t      *       *      "<<endl;
	cout<<"\t\t         ***        " <<endl;
	cout<<endl;
	SetConsoleTextAttribute(h,7);
	cout<<"\t\tThe Formula For calculating the Area of Circle: "<<endl;
	cout<<"\t\tArea of the Circle = Pi*(Radius of the Circle)*(Radius of the Circle)"<<endl<<endl<<endl;
	cout<<"\t\tDo you really want to Calculate the Area of the Circle 1/0: ";
	cin>>x;
	if(x==1){
	double r;
	system("CLS");
	inter();
	cout<<endl;
	cout<<"\t\tPlease Enter the Radius of the Circle: ";
	cin>>r;
	cout<<endl<<endl;
	cout<<"\t\tThe Area of The Circle is: ";
	cout<<Pi*r*r<<" Units Square.";
	}
	else if(x==0){
	system("CLS");
	inter();
	cout<<endl;
	Choose(a);
	Circle();
	}
	else{
	system("CLS");
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,3);
	cout<<"\t\tSorry! You Entered invalid choice..";
	}
	break;
	}
	case 2:{
	system("CLS");
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,1);
	cout<<"\t\t         ***         "<<endl;
	cout<<"\t\t      *       *      "<<endl;
	cout<<"\t\t   *             *   "<<endl;
	cout<<"\t\t *                 * "<<endl;
	cout<<"\t\t*                   *"<<endl;
	cout<<"\t\t*                   *"<<endl;
	cout<<"\t\t *                 * "<<endl;
	cout<<"\t\t   *             *   "<<endl;
	cout<<"\t\t      *       *      "<<endl;
	cout<<"\t\t         ***        " <<endl;
	cout<<endl;
	SetConsoleTextAttribute(h,7);
	cout<<"\t\tThe Formula For calculating the Perimeter of Circle: "<<endl;
	cout<<"\t\tPerimeter of the Circle = 2*Pi*(Radius of the Circle)"<<endl<<endl<<endl;
	cout<<"\t\tDo you really want to Calculate the Perimeter of the Circle 1/0: ";
	cin>>x;
	if(x==1){
	double r;
	system("CLS");
	inter();
	cout<<endl;
	cout<<"\t\tPlease Enter the Radius of the Circle: ";
	cin>>r;
	cout<<endl<<endl;
	cout<<"\t\tThe Perimeter of The Circle is: ";
	cout<<2*Pi*r<<" Units.";
	}
	else if(x==0){
	system("CLS");
	inter();
	cout<<endl;
	Choose(a);
	Circle();
	}
	else{
	system("CLS");
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,3);
	cout<<"\t\tSorry! You Entered invalid choice..";
	}
	break;
	}
	case 3:{
	system("CLS");
	inter();
	cout<<endl;
	Front_Page();
	Choose(a);
	fun(a);
	break;
	}
	default:{
	inter();
	cout<<endl;	
	SetConsoleTextAttribute(h,3);
	cout<<"\t\tSorry! Your choice is Invalid..."<<endl<<endl;		
	break;
	}
	}
}
void Rhombus(){
	cout<<endl;
	system("CLS");
	switch (c){	
	case 1:{
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,1);
	cout<<"\t\t       "<<"*******************"<<endl;
	cout<<"\t\t      "<<"*                 * "<<endl;
	cout<<"\t\t     "<<"*                 *  "<<endl;
	cout<<"\t\t    "<<"*                 *   "<<endl;
	cout<<"\t\t   "<<"*                 *    "<<endl;
	cout<<"\t\t  "<<"*                 *     "<<endl;
	cout<<"\t\t "<<"*                 *      "<<endl;
	cout<<    "\t\t*******************       "<<endl;
	cout<<endl;
	SetConsoleTextAttribute(h,7);
	cout<<"\t\tThe Formula For calculating the Area of Rhombus: "<<endl;
	cout<<"\t\tArea of the Rhombus = (Side of the Rhombus)*(Side of the Rhombus)"<<endl<<endl<<endl;
	cout<<"\t\tDo you really want to Calculate the Area of the Rhombus 1/0: ";
	cin>>x;
	if(x==1){
	double s;
	system("CLS");
	inter();
	cout<<endl;
	cout<<"\t\tPlease Enter the Length of the Side of the Rhombus: ";
	cin>>s;
	cout<<endl<<endl;
	cout<<"\t\tThe Area of the Rhombus is: ";
	cout<<s*s<<" Units Square.";
	}
	else if(x==0){
	system("CLS");
	inter();
	Choose(a);
	Rhombus();
	}
	else{
	system("CLS");
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,3);
	cout<<"\t\tSorry! You Entered invalid choice..";
	}
	break;
	}
	case 2:{
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,1);
	cout<<"\t\t       "<<"*******************"<<endl;
	cout<<"\t\t      "<<"*                 * "<<endl;
	cout<<"\t\t     "<<"*                 *  "<<endl;
	cout<<"\t\t    "<<"*                 *   "<<endl;
	cout<<"\t\t   "<<"*                 *    "<<endl;
	cout<<"\t\t  "<<"*                 *     "<<endl;
	cout<<"\t\t "<<"*                 *      "<<endl;
	cout<<    "\t\t*******************       "<<endl;
	cout<<endl;
	SetConsoleTextAttribute(h,7);
	cout<<"\t\tThe Formula For calculating the Perimeter of Rhombus: "<<endl;
	cout<<"\t\tPerimeter of the Rhombus = 4*(Side of the Rhombus)"<<endl<<endl<<endl;
	cout<<"\t\tDo you really want to Calculate the Perimeter of the Rhombus 1/0: ";
	cin>>x;
	if(x==1){
	double s;
	system("CLS");
	inter();
	cout<<endl;
	cout<<"\t\tPlease Enter the Length of the Side of the Rhombus: ";
	cin>>s;
	cout<<endl<<endl;
	cout<<"\t\tThe Perimeter of the Rhombus is: ";
	cout<<4*s<<" Units.";
	}
	else if(x==0){
	system("CLS");
	inter();
	cout<<endl;
	Choose(a);
	Rhombus();
	}
	else{
	system("CLS");
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,3);
	cout<<"\t\tSorry! You Entered invalid choice..";
	}
	break;
	}
	case 3:{
	system("CLS");
	inter();
	cout<<endl;
	Front_Page();
	Choose(a);
	fun(a);
	break;
	}
	default:{
	inter();
	cout<<endl;	
	SetConsoleTextAttribute(h,3);
	cout<<"\t\tSorry! Your choice is Invalid..."<<endl<<endl;		
	break;
	}
	}
}
void Parallelogram(){
	cout<<endl;
	system("CLS");
	switch(c){
	case 1:{
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,1);
	cout<<"\t\t     "<<"************************"<<endl;
	cout<<"\t\t    "<<"*                      * "<<endl;
	cout<<"\t\t   "<<"*                      *  "<<endl;
	cout<<"\t\t  "<<"*                      *   "<<endl;
	cout<<"\t\t "<<"*                      *    "<<endl;
	cout<<    "\t\t************************     "<<endl;
	cout<<endl;
	SetConsoleTextAttribute(h,7);
	cout<<"\t\tThe Formula For calculating the Area of Parallelogram: "<<endl;
	cout<<"\t\tArea of the Parallelogram = (Length of the Parallelogram)*(Width of the Parallelogram)"<<endl<<endl<<endl;
	cout<<"\t\tDo you really want to Calculate the Area of the Parallelogram 1/0: ";
	cin>>x;
	if(x==1){
	system("CLS");
	double l;
	double w;
	inter();
	cout<<endl;
	cout<<"\t\tPlease Enter the Length of the Parallelogram: ";
	cin>>l;
	cout<<"\t\tPlease Enter the Width of the Parallelogram: ";
	cin>>w;
	cout<<endl<<endl<<endl;
	cout<<"\t\tThe Area of the Parallelogram is: ";
	cout<<l*w<<" Units Square.";
	}
	else if(x==0){
	system("CLS");
	inter();
	Choose(a);
	Parallelogram();
	}
	else{
	system("CLS");
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,3);
	cout<<"\t\tSorry! You Entered invalid choice..";
	}
	break;
	}
	case 2:{
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,1);
	cout<<"\t\t     "<<"************************"<<endl;
	cout<<"\t\t    "<<"*                      * "<<endl;
	cout<<"\t\t   "<<"*                      *  "<<endl;
	cout<<"\t\t  "<<"*                      *   "<<endl;
	cout<<"\t\t "<<"*                      *    "<<endl;
	cout<<    "\t\t************************     "<<endl;
	cout<<endl;
	SetConsoleTextAttribute(h,7);
	cout<<"\t\tThe Formula For calculating the Perimeter of Parallelogram: "<<endl;
	cout<<"\t\tPerimeter of the Parallelogram = 2*((Length of the Parallelogram)+(Width of the Parallelogram))"<<endl<<endl<<endl;
	cout<<"\t\tDo you really want to Calculate the Perimeter of the Parallelogram 1/0: ";
	cin>>x;
	if(x==1){
	system("CLS");
	double l;
	double w;
	inter();
	cout<<endl;
	cout<<"\t\tPlease Enter the Length of the Parallelogram: ";
	cin>>l;
	cout<<"\t\tPlease Enter the Width of the Parallelogram: ";
	cin>>w;
	cout<<endl<<endl<<endl;
	cout<<"\t\tThe Perimeter of the Parallelogram is: ";
	cout<<2*(l+w)<<" Units.";
	}
	else if(x==0){
	system("CLS");
	inter();
	cout<<endl;
	Choose(a);
	Parallelogram();
	}
	else{
	system("CLS");
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,3);
	cout<<"\t\tSorry! You Entered invalid choice..";
	}
	break;
	}
	case 3:{
	system("CLS");
	inter();
	cout<<endl;
	Front_Page();
	Choose(a);
	fun(a);
	break;
	}
	default:{
	inter();
	cout<<endl;
	SetConsoleTextAttribute(h,3);
	cout<<"\t\tSorry! Your choice is Invalid..."<<endl<<endl;		
	break;
	}
	}
}