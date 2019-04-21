///function definition
void del_resdata()
{
   char again;
   int x;
   fstream deletefile;
  do
  {
    cout<<"Enter 1 to delete the reservation data or 2 to cancel: ";
    cin>>x;
    cout<<endl;
    if (x==1)
    {
    deletefile.open("User info input.txt", ios::out | ios::trunc); //trunc for delete data
    if(!deletefile)
    {
    cout<<"File not found."<<endl;
    exit(1);
    }
    else
    {
    cout<<"Data has been deleted from the file."<<endl;
    cout<<endl;
    }
}
else
{
cout<<"Data not deleted.."<<endl;
cout<<endl;
}
cout<<"Enter Y to run this function again or N to cancel: ";
cin>>again;
cout<<endl;
cout<<"_____________________________________________"<<endl;
}
while (again=='Y' || again=='y');
deletefile.close();
