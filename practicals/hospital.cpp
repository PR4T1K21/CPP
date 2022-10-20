#include<iostream>
using namespace std;


class hosp
{
public:
    string h_name,location;
    int bed_available,date_available,contact,bed_price;

    void gethospdata();
    void printhospdata();
   void searchbyname(string);
  // bool searchbyname(string);
};

class patient:public hosp
{
public:
    string p_name;
    int id;
    void getpatientdata();
    void printpatientdata();

};

void hosp :: gethospdata()
{

    cout<<"Hospital name:\n";
    cin>>h_name;


    cout<<"Enter Location:\n";
    cin>>location;

    /*
    cout<<"No. of beds available:"<<endl;
    cin>>bed_available;

    cout<<"date available:"<<endl;
    cin>>date_available;

    cout<<"Enter Contact No.:"<<endl;
    cin>>contact;

    cout<<"Price Of 1 bed:"<<endl;
    cin>>bed_price;

    */
}


void patient :: getpatientdata()
{

    cout<<"Enter Patient name:"<<endl;
    cin>>p_name;

    cout<<"Enter patient ID:"<<endl;
    cin>>id;

}

void hosp :: printhospdata()
{
    cout<<"\nHospital Name:"<<h_name;
    cout<<"\nLocation:"<<location;
    /*
    cout<<"\nBeds available:"<<bed_available;
    cout<<"\nDate available:"<<date_available;
    cout<<"\nContact:"<<contact;
    cout<<"\nPrice:"<<bed_price;   */
}

void patient :: printpatientdata()
{
    cout<<"\nPatient Name:"<<p_name;
    cout<<"\nPatient ID\n\n:"<<id;
}

void hosp :: searchbyname(string bname_search)
{
    int f=0;

 if(bname_search==h_name)
    {
      cout<<"\nHospital Found\n";
      printhospdata();
    }

      else if(bname_search!=h_name)
      {


        cout<<"\nNot Available\n";
      }
}
/*
bool hosp :: searchbyname(string bname_search)
{
    if(bname_search==h_name)
    {
        return true;
    }
}
*/
int main()
{
    int choice;
    int i=0;
    hosp h[50];
    patient p[50];
    string bname_search,bbed_search;

    for(i=0; i<2; i++)
    {
        h[i].gethospdata();

    }
    for(i=0; i<2; i++)
    {
        p[i].getpatientdata();

    }


    while(1)

    {
        cout<<"\n1-printhospdata\n2-printpatientdata\n3-search by name\n";

        cin>>choice;
        switch (choice)
        {
        case 1:
            for(i=0; i<2; i++)
                h[i].printhospdata();
            break;

        case 2:
            for(i=0; i<2; i++)
                p[i].printpatientdata();
            break;

       case 3:
            cout<<"Enter Hospital Name\n";
            cin>>bname_search;
            int t;
            for(t=0;t<2;t++)
            {
            h[t].searchbyname(bname_search);
            }
            break;
        default:
            cout<<"Enter valid choice";
            break;

        }
    }

    return 0;
}

