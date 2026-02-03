// #include <iostream>

// // int main (){
// //     // this is a bitchass comment

// //     std::cout << "I like ass!" << '\n';
// //     std::cout << "its really soft"<< '\n';
// //     return 0;
// // }

// int main(){
//     // int x; //declaration
//     // x = 123; //assignment
//     int x =5;
//     char grade = 'a';
//     double price = 34.22;
//     bool student = true;
//     double temp = 25.69;
//     int y = 6;
//     std::string name = "BRO";
//     std::string reason = "i have sex with ur mom she is kinda bad";
//     int sum = x+y;
//     std::cout<<x<<'\n';
//     std::cout<<y<<'\n';
//     std::cout<<sum<<'\n'; 
//     std::cout<<price<<'\n';
//     std::cout<<grade<<'\n';
//     std::cout<<student<<'\n';
//     std::cout<<name<<'\n';
//     std::cout<<reason;
//     // std::cout<<x;


//     return 0;


// }

// #include <iostream>

// // int main(){
// //     const double PI = 3.14159;

// //     double radius = 10;
// //     double circumference = PI * radius * 2;
// //     std::cout<<circumference <<"cm";
// // }
// namespace first{
//     int x = 1;
// }
// namespace second {
//     int x = 2;
// }

// int main (){
//     using namespace first;
//     std::cout << first::x;
//     return 0;
// }

// #include <vector>
// #include <iostream>
// // typedef std::string text_t; instead of typedef use using
// // typedef int number_t;
// using text_t = std::string ;
// using number_t = int;

// int main(){
//     // std::string firstName;  instead of this using typedef hum isi ko chota kar sakte hai like
//     text_t firstName = "Gurnoor";
//     number_t age = 18;
    
//     std::cout <<firstName<<'\n' ;
//     std::cout<<age<<'\n';

// }
////-------------------------------------------arithmetic operations---------------------------------------------------
// #include <iostream>

// int main (){
//     int students = 40;
//     students ++;
//     students *= 2;
//     std::cout << students<<'\n';
//     int remainder = students % 2;
//     std::cout<<remainder;
// }
//// ---------------------------------------------Type conversions---------------------------------------------------------

// #include <iostream>
// int main(){

//     // double x = (int)3.14;

//     // std::cout<<x;
//     // std::cout<<(char)100;
//     // char x = 100;
//     // std::cout << x;
//     int correct = 8;
//     int questions = 10;

//     double score = correct/ (double)questions *100;
//     std::cout<<score<<"%";

//     return 0;
// }

////----------------------------------------------------------user input--------------------------------------------------
// #include <iostream>

// int main (){
    
//     int age ;
//     std::string name;
    
//     std::cout<<"whats ur name?:";
//     std::getline(std::cin,name);
    
//     // std::cin >> name;
    
//     std::cout<<"Whats ur age ?:";
//     std::cin>>age;
    
//     std::cout<<"Hello "<< name;
//     std::cout<<" u are "<<age<<" years old";

//     return 0;

// } 

////----------------------------------------------------------------Maths-------------------------------------------------------------

// #include <iostream>
// int main(){
//     double x = 3.14;
//     double y = 4.99;
//     double z;

//     // z = std::max(x,y);
//     // z = std::min(x,y);
//     // std::cout<<z;
    
//     // z = pow(2,3);
//     // z = sqrt(9);
//     // z = abs(-3); // absolute value
//     // z = round (x);
//     // z = ceil(x); // round up
//     z = floor(y); // round down

//     std::cout<<z;

//     return 0;
// }

////---------------------------------------------------------------------------------Practice--------------------------------------------------

// #include <iostream>
// #include <cmath>

// int main() {

//     double x;
//     double y;

//     std::cin >> x;
//     std::cin >> y;

//     double z = sqrt(pow(x, 2) + pow(y, 2));

//     std::cout << z << "side z:";

//     return 0;
// }

////-----------------------------------------------------------------------------------------if statements--------------------------------------------------
// #include <iostream>

// int main(){

//     int age ;

//     std::cout<<"Enter ur age:";
//     std::cin>>age;

//     if (age >= 18){
//         std::cout<< "Welcome to the site";
//     }
//     else if(age< 0){
//         std::cout<<"u havent bin born yet";
//     }
//     else {
//         std::cout<<"u are not old enough kid";
//     }

//     return 0;
// }

//-------------------------------------------------------------------------------------switches---------------------------------------------------------------------
//// used insted of a lot of else if statements
// #include <iostream>

// int main(){
//     int month;
//     std::cout<<"enter the month(1-12)";
//     std::cin>>month;

//     switch(month){
//         case 1:
//             std::cout<<"It is january";
//             break;
//         case 2:
//             std::cout<<"It is february";
//             break;
//         case 3 :
//             std::cout<<"It is march";
//             break;
//         case 4 :
//             std::cout<<"It is april";
//             break;
//         case 5:
//             std::cout<<"It is may";
//             break;
//         case 6:
//             std::cout<<"It is june";
//             break;
//         case 7:
//             std::cout<<"It is july";
//             break;
//         case 8:
//             std::cout<<"It is august";
//             break;

//         case 9:
//             std::cout<<"It is september";
//             break;

//         case 10:
//             std::cout<<"It is ocober";
//             break;

//         case 11:
//             std::cout<<"It is november";
//             break;
//         case 12:
//         std::cout<<"It is december";
//             break;
//         default:
//         std::cout <<"pls enter numbers upto 12";

//     }

//     return 0;
// }

//// ----------------------------------------------------------------------------------------calculator--------------------------------------------------------------------------
// #include <iostream>

// int main(){
    
//     char op;
//     double num1;
//     double num2;
//     double result;
//     std::cout<<"calculator"<<'\n';

//     std::cout<<"enter the operator :";
//     std::cin>>op;

//     std::cout<<"num1 :";
//     std:: cin>> num1;

//     std::cout<<"num2 :";
//     std::cin>>num2;

//     switch (op){
//         case '+':
//         result = num1+num2;
//         std::cout<<result;
//         break;

//         case '-':
//         result = num1 - num2;
//         std::cout<< result;
//         break;

//         case '*':
//         result = num1*num2;
//         std::cout<< result;
//         break;

//         case '/':
//         result = num1/num2;
//         std::cout<< result;
//         break;

//         default:
//         std::cout<<"thats not valid";
//         break;
//     }
    
//     return 0;

// }
// // -------------------------------------------------------------------------------------ternary------------------------------------------------------------------

// #include <iostream>

// int main (){
    
//     int grade = 34;

//     grade >=50 ? std::cout<< "u pass": std::cout<<"u fail";     // the ? is the ternary operator

//     return 0;
// }

// //-------------------------------------------------------------------------------------------and,or,not -------------------------------------------------------------------
// // && = and
// // || = or
// // ! = not
// #include <iostream>
// int main(){

//     int temp;
//     std::cout<< "enter temp ";
//     std::cin>> temp;

//     if (temp <=0 || temp >=30){
//         std::cout<<"the temp is bad";
//     }
//     else{
//         std::cout<<"the temp is normal";
//     }
    
//     return 0;
// }
// // ----------------------------------------------------------------------------------------------------temp conversion program----------------------------------------------------

// #include <iostream>
// int main(){

//     double temp;
//     char unit;
//     std::cout<< "enter unit :";
//     std::cin>> unit;

//     if (unit == 'f' || unit == 'F'){
//         std::cout<< "enter the temp in celcius ";
//         std::cin>> temp;

//         temp = (1.8 *temp) +32;
//         std::cout<<"temp is "<<temp<<"F\n";
//     }
//     else if (unit == 'C'|| unit == 'c'){
//         std::cout<<"enter the temp in fahhh ";
//         std::cin>>temp;

//         temp = (temp-32) / 1.8;
//         std::cout<<"temp is "<<temp<<"C\n";
//     }


//     return 0;
// }

// //--------------------------------------------------------------------------------------------------usefull string methods--------------------------------------------------------------------------------

// #include <iostream>

// int main (){
//     std::string name;
//     std::cout<<"enter ur name ";
//     std::getline(std::cin,name);
//     // if (name.length() > 15){
//     //     std::cout<<"ur name cant be that long brruh";
//     // }
//     // else{
//     //     std::cout<<"ur name is :"<<name;
//     // }
//     // if (name.empty()){
//     //     std::cout<<"u didnt enter ur name";
//     // }
//     // else{
//     //     std::cout<<"Hello "<<name;
//     // }

//     // name.clear();
//     // name.append("@gmail.com");
//     // std::cout<<name.at(0);
//     // name.insert(0, "@");

//     name.erase(0,3);
//     std::cout<<name;
//     // std::cout<<name.find(' ');

//     return 0;
// }
// //-----------------------------------------------------------------------------------------------------while loops---------------------------------------------------------------------------

// #include <iostream>
// int main(){

//     std::string name;

//     while (name.empty()) {
//         std::cout<<"enter ur name";
//         std::getline(std::cin,name);
//     }

//     std::cout<<"hello"<<name;
//     return 0;
// }
// //--------------------------------------------------------------------------------------------------------Do while------------------------------------------------------------------------------------------
// #include <iostream>
// int main(){

//     int num;
    
//     do{
//         std::cout<<"enter a +ve num ";
//         std::cin >> num;
//     }
//     while (num<0);
//     std::cout<<"the number is "<<num;

//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------for loops-----------------------------------------------------------------------------------------------------------
// #include <iostream>

// // int main (){

// //     for(int i = 0; i>=5; i+=2){
// //         std::cout<<i<<"\n";
// //     }
// //     std::cout<<"happy birthday "<<'\n';
// //     return 0;
// // }

// int main (){
//     for (int i = 0; i<= 40; i++){
//         if (i==13){
//             continue;
//         }
//         std::cout<<i<<'\n';    
//     }

//     return 0;
// }
// //--------------------------------------------------------------------------------------------------------------nested loops--------------------------------------------------------------------------------------------

// #include <iostream>

// int main(){

//     int rows;
//     int columns;
//     char symbol;

//     std::cout<<"how many rows";
//     std::cin>>rows;

//     std::cout<<"how many columns";
//     std::cin>>columns;

//     std::cout<<"Enter a symbol to use";
//     std::cin>>symbol;

//     for (int i =1; i <= rows; i++){
//         for (int j = 1 ;j<= columns ;j++){
//             std::cout<<symbol<<' ';
//         }
//         std::cout<<"\n";
//     }
    
//     return 0;
// }
// //------------------------------------------------------------------------------------------------------------------------random numbers generation--------------------------------------------------------------------------------------------------------------

// #include <iostream>

// int main(){
    
//     srand(time(NULL));
    
//     int num1 = (rand() % 6) + 1;
//     int num2 = (rand() % 6) + 1;
//     int num3= (rand() % 6) + 1;
    
//     std::cout<<num1<<'\n';
//     std::cout<<num2<<'\n';
//     std::cout<<num3<<'\n';

//     return 0;
// }

// //----------------------------------------------------------------------------------------------------------------------------------------Random event generator--------------------------------------------------------------------------------------------------------------------
// #include <iostream>
// #include <ctime>

// int main(){

//     srand(time(0));
//     int randnum = (rand() % 5) +1;

//     switch(randnum){
//         case 1 : std::cout<<"u win a sticker \n";
//             break;
//         case 2 :std::cout<<"u win a t-shirt \n";
//             break;
//         case 3 :std::cout<<"u win a football \n";
//             break;
//         case 4 :std::cout<<"u win a free lunch \n";
//             break;
//         case 5 :std::cout<<"u win a car \n";
//             break;
//     }

//     return 0;
// }

// //-----------------------------------------------------------------------------------------------------------------------------------------------------number guessing game-----------------------------------------------------------------------------------------------------------------

// #include <iostream>
// #include <ctime>

// int main() {
//     srand(time(0));          // seed random
//     int ran = (rand() % 10) + 1;
//     int num;

//     do {
//         std::cout << "Guess the number (1-10): ";
//         std::cin >> num;

//         if (num != ran) {
//             std::cout << "Try again 😭\n";
//         }

//     } while (num != ran);

//     std::cout << "AYOOO YOU GOT IT 🔥 The number was " << ran << "\n";

//     return 0;
// }

// //------------------------------------------------------------------------------------------------------------------------Functions-----------------------------------------------------------------------------------------
// #include <iostream>
// void happyBirthday(std::string name, int age);

// int main (){
//     std::string name = "Bro";
//     int age = 18;
//     happyBirthday(name,age);

//     return 0;
// }

// std::string name = "bro";

// void happyBirthday(std::string name , int age){
//     std::cout<<"HAPPY BIRTHDAY TO! " << name <<'\n';
//     std::cout<<"HAPPY BIRTHDAY TO!" << name << '\n';
//     std::cout<<"you are" << age<< "age years old";
// }

 
// // int main (){
// //     happyBirthday();
// //     happyBirthday();
// //     happyBirthday();
// //     happyBirthday(); 
// //     return 0;
// // }

// //--------------------------------------------------------------------------------------------------------------------------------return-------------------------------------------------------------------------------------------------------------

// #include <iostream>

// double square (double length);
// double volume (double length);

// int main (){

//     double length = 6.0;
//     double area = square(length);
//     double vol = volume(length);
//     std::cout << area<<'\n';
//     std::cout<<vol;
//     return 0;
// }
// double square (double length){
//     double result = length * length;
//     return result;
// }
// double volume (double length){
//     double result = length*length*length;
//     return result;
// }

// #include <iostream>
 
// std::string concatStrings(std::string string1 , std::string string2);

// int main(){
//     std::string firstname = "Gurnoor ";
//     std::string lastname = "Singh";
//     std::string fullname = concatStrings(firstname,lastname);

//     std::cout<<"hello "<<fullname;
//     return 0;
// }
// std::string concatStrings(std::string string1 , std::string string2){
//     return string1+string2;
// }

// //-----------------------------------------------------------------------------------------------------------------------------------------------------overloaded functions--------------------------------------------------------------------------------------------------------
// // functions can share the same name but u need a different set of parameters
// #include <iostream>

// void bakePizza();
// void bakePizza(std::string toping1);
// void bakePizza(std::string toping1, std::string toping2);

// int main(){

//     bakePizza("pepparoni","mushroom");

//     return 0;
// }

// void bakePizza (){
//     std::cout<<"here is ur pizza";
// }
// void bakePizza(std::string toping1){
//     std::cout<<"here is ur "<<toping1<<" pizza";
// }
// void bakePizza(std::string toping1, std::string toping2){
//     std::cout<<"here is ur "<<toping1 << " and "<<toping2<< " pizza";
// }

// //---------------------------------------------------------------------------------------------------------------------------------------------------------------global/local variables------------------------------------------------------------------------------------------------------------------------------------------
// //local variable = declared inside a function or a block{}
// //global variable = declared outside of all functions

// #include <iostream>

// int myNum = 3;
// void printNum();

// int main(){
//     int myNum = 2;
//     std::cout<< ::myNum <<'\n'; // :: for access of global variable
//     printNum();
//     return 0;
// }

// void printNum(){
//     int myNum = 1;
//     std::cout<< myNum<<'\n';
// }
// // output = 1,2

// //----------------------------------------------------------------------------------------------------------------------------------------------------------------------Banking problem practice--------------------------------------------------------------------------------------------------------------------------------------------

// #include <iostream>
// void showBalance(double balance);
// double deposit();
// double withdrawn(double balance);


// int main(){

//     double balance = 0;
//     int choice = 0;
//     do {
//         std::cout<<"enter choice: \n";
//         std::cout<<"1. show balance \n";
//         std::cout<<"2. deposit money \n";
//         std::cout<<"3. withdraw money \n";
//         std::cout<<"4. exit \n";
//         std::cin>>choice;

//         switch (choice){
//             case 1: showBalance(balance);
//                 break;
//             case 2: balance += deposit();
//                 showBalance(balance);
//                 break;
//             case 3: balance -= withdrawn(balance);
//                 showBalance(balance);
//                 break;
//             case 4: std::cout<<"thanks for visiting! \n";
//                 break;
//             default: std::cout<<"Invalid choice";
//     }
//     }
//     while(choice != 4);
    
//     return 0;
// }

// void showBalance(double balance){
//     std::cout<<"Your balance is "<<balance<<'\n';
// }

// double deposit(){
//     double amount = 0;
//     std::cout<<"enter amount to be deposited: ";
//     std::cin>>amount;

//     if (amount > 0){
//         return amount;
//     }
//     else{
//         std::cout<<"thats not a valid amount";
//         return 0;
//     }
    
// }

// double withdrawn(double withdrawn){
//     double amount = 0;
//     std::cout<< "enter amount to be withdrawn: ";
//     std::cin>> amount;

//     return amount;
// } 

// // -------------------------------------------------------------------------------------------------- Rock paper scissors-------------------------------------------------------------------------------------------
// #include <iostream>
// #include <ctime>

// char getuserChoice();
// char getcomputerChoice();
// void chooseWinner(char player, char computer);
// void showChoice(char choice);

// int main(){
//     char player;
//     char computer;
    
//     player = getuserChoice();
//     std::cout<<"enter ur choice: ";
//     showChoice(player);

//     computer = getcomputerChoice();
//     std::cout<<"Computer's choice:";
//     showChoice(computer);

//     chooseWinner(player,computer);

//     return 0;
// }

// char getuserChoice(){
//     char player;
//     std::cout<<"Rock paper scissor game!\n";
//     do{
//         std::cout<< "ur options are "<<'\n';
//         std::cout<<"r for rock\n";
//         std::cout<<"s for scissors\n";
//         std::cout<<"p for paper\n";
//         std::cin>> player;
//     }
//     while(player != 'r' && player != 'p' && player != 's');
    
//     return player;
    
// }
// char getcomputerChoice(){
    
//     srand(time(0));
//     int num = rand()%3 +1 ;

//     switch(num){
//         case 1: return 'r';
//         case 2: return 'p';
//         case 3: return 's';
        
//     }
// }
// void chooseWinner(char player, char computer){
//     switch (player){
//         case 'r': if (computer == 'r'){
//             std::cout<< "It's a tie!\n";
//             }
//             else if(computer == 'p'){
//                 std::cout<<"You win!\n";
//             }
//             else if (computer == 's'){
//                 std::cout<<"You loose!\n";
//             }
//             break;

//         case 's': if (computer == 's'){
//             std::cout<< "It's a tie!\n";
//             }
//             else if(computer == 'p'){
//                 std::cout<<"You win!\n";
//             }
//             else if (computer == 'r'){
//                 std::cout<<"You loose!\n";
//             }
//             break;

//         case 'p': if (computer == 'p'){
//             std::cout<< "It's a tie!\n";
//             }
//             else if(computer == 'r'){
//                 std::cout<<"You win!\n";
//             }
//             else if (computer == 's'){
//                 std::cout<<"You loose!\n";
//             }    
//             break;
//     }
// }
// void showChoice(char choice){

//     switch(choice){
//         case 'r' : std::cout<<"Rock\n";
//             break;
//         case 's' : std::cout<<"Scissors\n";
//             break;
//         case 'p': std::cout<<"Paper\n";
//             break;
//     }

// }

// //-------------------------------------------------------------------------------------------------------------------Arrays----------------------------------------------------------------------------------------------------------------------
// #include <iostream>
// int main(){

//     // std::string car [] = {"Corvete", "Mustang","Audi"};
//     // std::string car[3]; //empty array 3 is the size
//     // car [0] = "BMW";
//     // car[1]= "Audi";
//     // car [2]= "buggati";
//     // std::cout<<car[0]<<'\n';
//     // std::cout<<car[1]<<'\n';
//     // std::cout<<car[2]<<'\n';

//     double ages [] = {5,23,54,51.3,3.4};
//     std::cout<<ages[0]<<'\n';
//     std::cout<<ages[1]<<'\n';
//     std::cout<<ages[2]<<'\n';
//     std::cout<<ages[3]<<'\n';

//     return 0;
// }

// //---------------------------------------------------------------------------------------------------------------------------------------------------size of operator-----------------------------------------------------------------------------------------------------------------------------------

// #include <iostream>
// int main(){

//     std::string name = "Bro";

//     double gpa = 4.5;
//     char grade = 'F';
//     bool stu = false;
//     char grades []= {'A','B','C','D','E','F'};
//     std::string students [] = {"Gurnoor","spongebob","Patrick"};
//     std::cout <<sizeof(students) /sizeof(std::string)<<" elements\n";

//     return 0;
// }

// //----------------------------------------------------------------------------------------------------------------------------------ittrate over an array---------------------------------------------------------------------------------------------
// #include <iostream>
// int main(){

//     // std::string students []= {"Gurnoor","Bro", "Goku","Denji", "Chainsaw man"};
//     // std::cout<<students [0]<<'\n';
//     // std::cout<<students [1]<<'\n';
//     // std::cout<<students [2]<<'\n';
//     // std::cout<<students [3]<<'\n';

//     // for (int i = 0; i<4 ;i++ ){
//     //     std::cout << students[i]<<'\n'; ////Not the most optimal solution
//     // }

//     // for (int i = 0; i<sizeof(students)/sizeof(std::string) ;i++ ){
//     //    std::cout << students[i]<<'\n';
//     // }

//     char grades [] = {'A','B','C','D','F'}; 

//     for (int i= 0; i < sizeof(grades)/sizeof(char);i++){
//         std::cout<<grades[i]<<'\n';
//     }

    
//     return 0;
// }

// //--------------------------------------------------------------------------------------------------------------------------------------------------------------foreach loop---------------------------------------------------------------------------------------------------------
// #include <iostream>
// int main(){

//     // std::string students []= {"Gurnoor","Bro", "Goku","Denji", "Chainsaw man","Asa"};
//     // for (std::string student : students){
//     //     std::cout<<student <<'\n';
//     // }
//     char grades []= {'A','B','C','D','E','F'};
//     for (char grade : grades){
//         std::cout<<grade<<'\n';

//     }

//     return 0;
// }

// //----------------------------------------------------------------------------------------------------------------------------------------------------------------- Pass an Array to a function--------------------------------------------------------------------------------------------------------
// #include <iostream>
// double getTotal(double prices[],int size);
// int main (){

//     double prices []= {54.34,15.03, 40.44, 65, 42.06};
//     int size =sizeof(prices)/sizeof(prices[0]);
//     double total = getTotal(prices,size);

//     std::cout<<"$"<<total;
//     return 0;
// }
// double getTotal(double prices[],int size){
//     double total = 0;
//     for (int i= 0; i < size;i++){
//         total += prices[i];
//     }
//     return total;
// }