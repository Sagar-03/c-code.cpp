// #include<iostream>
// int main()
   //  program of using scope resolution operater

   //  int c=45; //global variable only called by scope resolution operater
   //  {
   //  int sum,num1,num2;
   //  cout<<"enter the value of a:"<<endl;
   //  cin>>num1;
   //  cout<<"enter the value of b:"<<endl;
   //  cin>>num2;
   //  sum=num1+num2;
   //  cout<<sum<<endl;
   //  cout<<"the value of c is:"<<::c;
   //  return 0;
   //  }

    // program for refrencee variable  in c++
    //{
    // float x = 4.55;// here we are using for float can be done for int also
    // float &y = x;
    // float &z = y;

    // int x = 4.55;// here we are using for float can be done for int also
    //   int &y = x;
    // int &z = y;

    //  //cout << x << endl;
    // cout << z;
    // return 0;
    //}
    // program for typecsting of data
    //{
    // float a = 46.6666;
    // cout<<"the value of a is "<<int(a);
    // return 0;
    //}

    // program for constants keyword value
    /*{
      const int  a;
        a = 45;
        cout<<"the value of a is "<<a<<endl;
        //a = 56;
       //cout<< "the value of a is "<<a<<endl;
       return 0;

    }*/

    /*program for the for if elseif and else condition
        {
         int i;
         cout<<"enter your for the party"<<endl;
         cin>>i;
         if(i<18){
            cout<<"you are a child"<<endl;
         }
         else if (i==18){
            cout<<"you can come"<<endl;
         }
         else{
            cout<<"most welcome afterll you are adult";
         }
         return 0;
       }*/

    /* we can add various else if in the if loop various else if loop can be executed in the same code.
    {
       int i;
       cout << "enter your age for the party" << endl;
       cin >> i;
       if (i < 18)
       {
          cout << "you are a child" << endl;
       }
       else if (i == 18)
       {
          cout << "you can come" << endl;
       }
       else if (i < 1)
       {
          cout << "not born yet " << endl;
       }
       else if (i > 50)
       {
          cout << "you are an old man not your type stay out of this";
       }
       else
       {
          cout << "most welcome afterll you are adult";
       }
       return 0;
    }*/

    // swtich and break statement(switch is  used for the some speical cases and break is for the if the uppper
    // switch condition is not work then break will exit the switc case and frwd to another statement )

    // program for the switch and break statement
    /*{
       int age;
       cout << "enter your age for the party" << endl;
       cin >> age;
       switch (age)
       {
       case 18:
       cout<<"you cannot come"<<endl;
          break;
       case 20:
        cout<<"you can come"<<endl;
       break;
       default:

       cout<<"no special case";
          break;
          cout<<"all cases are done";
       }
    return 0;
    }*/

    // loops in c++ (for loop)
    /*{
       int i;

          for(i=0 ; i<=40 ; i++){
          cout<<i<<endl;
       }
       return 0;
    }*/

    // while loop in c++
    /*{
       int i;
       i=1;
       while (i<=45)
       {
          cout<<i<<endl;
          i++;
       }
       return 0;

    }*/

    // do while loop
    //(do while loop ek brr toh jarur run krega while loop bhale hi ek
    // brr run na kre either for loop also ek brr run nhi krega agar condition glat hui toh )
    /*{
       int i=1;
       do{
          cout<<i<<endl;
          i++;
       }while (i=0); // (yahn while condition mae termination statement dalni
       //pdti hai. i=0rkhne pe statement galat hai phir bhi loop ek br run jarur
       // kiya kyu ki ek toh upper wali statement toh run hogi hi termination aane se pehle )
       return 0;
    }*/

    // program for operator preecedence
    /*{
       int a=3 , b=4 , c;
       c = ((((a+5-b)-5)+9)*9); // (according to the ruleof operater preceedence
       // yahn wahi follow hota hai operatpr precedence ka rule)
       cout<<c<<endl;

       return 0;
    }*/

    /*program for continue and break statement
      {
        int i;
       for(i=0; i<40; i++){

          if(i==3){

            continue;
          }
          if (i==6){// continue aur break ki bracket puri complete honi chaiye if wali jbi
          // dusra continue run bhi kr payenge aur printing statemenet sare bracket band hone ke bd lgegi )
             continue;
          }
          if(i==15){
           break;

         }
         cout<<i<<endl;
       }

    }*/

    /* stopping a infinte loop using break statement
    {
    int i;
    for ( i = 0; 34<40; i++)
    { if (i==455){
       break;
    }
       cout<<i<<endl;
    }
    }*/

    /*pointers in c++
    {
       int a,*b,**c;// int* b bnayenge jb b ek pointer banega//
       a = 455; // *derefrence operater
        b = & a;   // &a is adddress of operater and
        // int* b means making the pointer b a

        // pointer to pointer in c++
       c = &b; // here the c is storing the value of b which is already a pointer
       cout<<**c<<endl;//here we use the **c because in pointer to pointer the ** is use to print
       //the value of the pointer to pointer variable


       cout<<&a<<endl; // yahn a ka address print hoga
       cout<<*b<<endl; // here this will print the value of a qki b mae a ki hi value store hai
       //*b krenge toh b mae jis value ka address store hoga wo value print hojayega
    } */

    /* arrays in c++
    {

       // program for printing the array using indexing of the array
       int marks[4] = {1, 3, 56, 78};
       // changig the elements of arrays
       marks[3] = 455;

       cout << marks[0] << endl;
       cout << marks[1] << endl;
       cout << marks[2] << endl;
       cout << marks[3] << endl;
       return 0;
    }*/

    /*program for printing the arrays using loops
    {
      // int n,i,a[i];
       //cout<<"enter the elements of arrays"<<endl;
       //cin<<n;
       int i,marks[6]={5,65,45,50,58,65}; // marks ko define krne ke liye aage uski value curly{}braces mae hi dalegi
       for(i=0; i<6 ; i++){
        cin>>marks[i];
       }
       cout<<"the value of marks"<<i<<"is"<<marks[i]<<endl; // for output for the marks marks[]aise likhenge

       return 0;
    }*/

    /*c++ pointers in array
    {
       int marks[5] = {45,4,5,7,9};
       int *p = marks;
       cout<<(*p)<<endl;
        cout<<*(p+1)<<endl;        // pointer ko agar aage bdhana hai toh pure bracket ke aage pointer ke sign ka use hoga
         cout<<*(p+2)<<endl;
          cout<<*(p+3)<<endl;
           cout<<*(p+4)<<endl;
    return 0;
    }*/

    /*pointer arithmetic
    {
    int marks[4] = {1,2,3,4};
    int *p = marks; // yahn marks ko *p k aandar initilize kiya hai.
    cout<<*(p++)<<endl; // yahn p++ array ki first value ko print krega qki wale p k vaue aayegi uske bd ++ hogi
    cout<<*(++p)<<endl; // idhr array ki value ek aage bdh ke print hogi yahn ++p hogi kyu ki pehle bdhegi phir print hogi
    return 0;
    }*/

    // STRUCTURE :- used for defining various data type in one code (keyword: struct)

    /*struct employe
    {
      int employeid;  //yahn pure mae humne functin define kiya hai struct function
      char employefavcharacter;
      float salary;
    };  // struct ka defintion khtm krne ke bd sentence terminator jarur lgega
      int main(){
       struct employe sagar;      //function ko kis name se denote krenge wo define krenege taki aage sidha function name
       sagar.employeid = 12;      // se hi direct call lag jaye function
    sagar.employefavcharacter = 'c';
    sagar.salary= 10;

    cout<<sagar.employeid<<endl;  // printing all fxn one by one dot laga ke jisko call krna hai call krlenege
    cout<<sagar.employefavcharacter<<endl;
    cout<<sagar.salary<<endl;
      }*/

    // program for union (keyword)
    // {

    //    union money{
    //    int rice;
    //    char car;
    //    float price;
    //    };
    // cout<<rice<<endl;
    // cout<<car<<endl; //union will alot a memory bloack according to the data type used
    // cout<<price<<endl;
    // }

    /*function and its prototype


    int sum (int a, int b){ // Function prototype
    //this sum can be return after the main function
       return c; //(int a,b)this type is not alowed
       int c = a+b;  // function hamesha main fuunction se pehle hi
       //define krna pdta hai int main se upperhi jbhi function work krega
    }
    int main()
    {
    int num1,num2;
    cout<<"enter the value of first number";
    cin>>num1;
    cout<<"enter the value of second number";
    cin>>num2;
    cout<<"the sum is"<<sum(num1,num2);
    return 0;
    }*/
#include<iostream>
using namespace std;
int c = 0;
cout<<"Enter no elements in list"<<endl;
cin>>n;
cout<< "enter elements"<<endl;
for ( i = 0; i < n; i++)
{
   cin>>a[i];
}
cout<<"enter elements to be search"<<endl;
cin>>m;
for ( i = 0; i < n; i++)
{
   if (m == a[i])
   {
      c==1;
      cout<<"Element found at" i+1<<endl;
      break;
   }
}
if (c==0)
{
   cout<<"element not found"<<endl;
}
   else{
      cout<<"element found"<<endl;
   }

