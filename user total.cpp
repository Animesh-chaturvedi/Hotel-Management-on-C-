//funtion definition  of function user_total//
void user_total()
{
     int choice,days,total1;
    char AC,again;
    int c=1000;
    int single= 3000;
    int doubl=4500;
    int suit=6000;
    int time=24;
    int service=300;
    do
    {
    cout<<"Which kind of Room did the guest stayed in?  "<<endl;
    cout<<endl;
               cout<<" 1.Single Rooms "<<endl;
               cout<<endl;
               cout<<" 2.Double Rooms "<<endl;
               cout<<endl;
               cout<<" 3.Suits "<<endl;
               cout<<endl;

    cout<<"Select 1,2 or 3 . "<<endl;
    cout<<endl;
    cout<<"Enter Your CHoice Here_: ";
    cin>>choice;
    cout<<"__________________________________"<<endl;
    switch(choice)
    {
    case 1:
         cout<<"You have Selected single room. "<<endl;
         cout<<endl;
         cout<<" For How many days did the guest stayed: ";
         cin>>days;
         cout<<endl;

              cout<<" Press Y for A/c and N for without A/c: ";
         cin>>AC;
         cout<<endl;
        if (AC == 'Y' || AC == 'y')
{
         total1 =(c+single+time+service)*days;
          cout<<"Your Total Total bill + service tax = ("<<total1<<" Rs.)"<<endl;
          cout<<endl;
          cout<<"______________________________"<<endl;
}
         else if (AC == 'N' || AC == 'n')
 {
         total1=(single+time+service) * days;
         cout<<"Your Total Total bill + service tax = ("<<total1<<" Rs.)"<<endl;
      cout<<endl;
       cout<<"_______________________________"<<endl;
}
         break;
         case 2:
         cout<<"You Have Selected Double room."<<endl;
          cout<<endl;
         cout<<" For How many days did the guest stayed: ";
         cin>>days;
         cout<<endl;
        cout<<" Press Y for A/c and N for without A/c: ";
         cin>>AC;
         cout<<endl;

        if (AC == 'Y' || AC == 'y')
{
         total1 =(c+doubl+time+service)*days;
          cout<<"Your Total Total bill + service tax = ("<<total1<<" Rs.)"<<endl;
cout<<endl;
 cout<<"__________________________________"<<endl;
}
         else if (AC == 'N' || AC == 'n')
 {
         total1=(doubl+time+service) * days;
         cout<<"Your Total Total bill + service tax = ("<<total1<<" Rs.)"<<endl;
        cout<<endl;
         cout<<"_______________________________________"<<endl;
}
         break;
         case 3:
         cout<<"You Have Selected Suit. "<<endl;
         cout<<endl;
         cout<<" For How many days did the guest stayed: ";
         cin>>days;
         cout<<endl;
         cout<<" Press Y for A/c and N for without A/c: ";
         cin>>AC;
         cout<<endl;
        if (AC == 'Y' || AC == 'y')
{
         total1 =(c+suit+time+service)*days;
          cout<<"Your Total Total bill + service tax = ("<<total1<<" Rs.)"<<endl;
          cout<<endl;
           cout<<"_______________________________________"<<endl;
}
         else if (AC == 'N' || AC == 'n')
 {
         total1=(suit+time+service) * days;
          cout<<"Your Total Total bill + service tax = ("<<total1<<" Rs.)"<<endl;

        cout<<endl;
       cout<<"__________________________________________"<<endl;
}
                  break;
                 default:
                 cout<<"you have enter an invalid Choice "<<endl;
                 cout<<endl;
                 }
                 cout<<"Do you want to checkout for another room? (Y/N): ";
                 cin>>again;
                  cout<<"___________________________________"<<endl;
                 cout<<endl;
    }
       while(again == 'y' || again == 'Y');

         }
