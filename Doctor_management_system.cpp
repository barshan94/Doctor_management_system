#include<iostream>
using namespace std ;
struct Doctor
{
    int age ;
    string degree ;
    string name ;
    string religion ;
    string number ;
    string gmail;
    string address ;

} ;

int main ()

{
    int num ;


    struct Doctor doctor1 ,doctor2, doctor3, doctor4,
    doctor5 ,doctor6, doctor7, doctor8,
    doctor9 ,doctor10, doctor11, doctor12,
    doctor13 ,doctor14, doctor15, doctor16,
    doctor17 ,doctor18, doctor19, doctor20 ;

    //medicine and liver

    doctor1.name = "Dr. Faruk Ahmed" ;
    doctor1.age = 45 ;
    doctor1.degree = "MBBS,FCPS,MD(GASTRO)" ;
    doctor1.religion = "Islam" ;
    doctor1.number = "01772233123" ;
    doctor1.gmail = "farukahmed@gmail.com" ;
    doctor1.address = "408/1 Kuratoli Road, Khilketh" ;


    doctor2.name = "Dr. Fahim Ahmed" ;
    doctor2.age = 38 ;
    doctor2.degree = "MBBS,MD(GASTRO)" ;
    doctor2.religion = "Islam" ;
    doctor2.number = "01775533123" ;
    doctor2.gmail = "fahim@gmail.com" ;
    doctor2.address = "51/1 Dhanmondi ,Dhaka" ;



    doctor3.name = "Dr. Mahfuz Ahmed" ;
    doctor3.age = 45 ;
    doctor3.degree = "MBBS,FCPS,MD(GASTRO)" ;
    doctor3.religion = "Islam" ;
    doctor3.number = "01992233123" ;
    doctor3.gmail = "mahfuz@gmail.com" ;
    doctor3.address = "55/5 Frmgate ,Dhaka" ;



    doctor4.name = "Dr. Habib Ahmed" ;
    doctor4.age = 38 ;
    doctor4.degree = "MBBS" ;
    doctor4.religion = "Islam" ;
    doctor4.number = "01773333123" ;
    doctor4.gmail = "habib@gmail.com" ;
    doctor4.address = "11/1 Uttora,Dhaka" ;





    doctor5.name = "Dr. Maruf Ahmed" ;
    doctor5.age = 45 ;
    doctor5.degree = "MBBS,FCPS" ;
    doctor5.religion = "Islam" ;
    doctor5.number = "01772233333" ;
    doctor5.gmail = "maruf@gmail.com" ;
    doctor5.address = "44/4 Mirpur road,Mirpur" ;








      //medicine,hormone,

    doctor6.name = "Dr.Partho Pratim Das" ;
    doctor6.age = 50 ;
    doctor6.degree = "MBBS,FCPS(Medicine)MACP(America)";
    doctor6.religion = "Hindu" ;
    doctor6.number = "01712233121" ;
    doctor6.gmail = "partho@gmail.com" ;
     doctor6.address = "408/1 Kuratoli Road, Khilketh" ;






    doctor7.name = "Dr.Pritom Das" ;
    doctor7.age = 51 ;
    doctor7.degree = "MBBS,FCPS(Medicine)MACP(America)";
    doctor7.religion = "Hindu" ;
    doctor7.number = "01712233221" ;
    doctor7.gmail = "pritom@gmail.com" ;
     doctor7.address = "51/1 Dhanmondi ,Dhaka" ;




    doctor8.name = "Dr. Pratim Das" ;
    doctor8.age = 55 ;
    doctor8.degree = "MBBS,MACP(America)";
    doctor8.religion = "Hindu" ;
    doctor8.number = "017133233121" ;
    doctor8.gmail = "pratim@gmail.com" ;
     doctor8.address = "55/5 Frmgate ,Dhaka" ;




    doctor9.name = "Dr.Pran Das" ;
    doctor9.age = 59 ;
    doctor9.degree = "MBBS,FCPS(Medicine)MACP(America)";
    doctor9.religion = "Hindu" ;
    doctor9.number = "01972233121" ;
    doctor9.gmail = "pran@gmail.com" ;
    doctor9.address = "11/1 Uttora,Dhaka" ;





    doctor10.name = "Dr.Priom Das" ;
    doctor10.age = 60 ;
    doctor10.degree = "MBBS,FCPS(Medicine)";
    doctor10.religion = "Hindu" ;
    doctor10.number = "01712233199" ;
    doctor10.gmail = "priom@gmail.com" ;
        doctor10.address = "44/4 Mirpur road,Mirpur" ;






     //orthopedic
    doctor11.name = "Dr. Sumon Kumar Roy" ;
    doctor11.age = 55 ;
    doctor11.degree = "MBBS,MS(Ortho)" ;
    doctor11.religion = "Hindu" ;
    doctor11.number = "01722233122" ;
    doctor11.gmail = "sumon@gmail.com" ;
     doctor11.address = "408/1 Kuratoli Road, Khilketh" ;



    doctor12.name = "Dr. Mehedi Hasan" ;
    doctor12.age = 50 ;
    doctor12.degree = "MBBS,MS(Ortho)" ;
    doctor12.religion = "Islam" ;
    doctor12.number = "01774539483" ;
    doctor12.gmail = "mehedi@gmail.com" ;
    doctor12.address = "51/1 Dhanmondi ,Dhaka" ;



    doctor13.name = "Dr. Anik Kumar Roy" ;
    doctor13.age = 55 ;
    doctor13.degree = "MBBS" ;
    doctor13.religion = "Hindu" ;
    doctor13.number = "01722553122" ;
    doctor13.gmail = "anik@gmail.com" ;
     doctor13.address = "55/5 Frmgate ,Dhaka" ;




    doctor14.name = "Dr. Subrata Kumar Roy" ;
    doctor14.age = 40 ;
    doctor14.degree = "MBBS" ;
    doctor14.religion = "Hindu" ;
    doctor14.number = "01882233122" ;
    doctor14.gmail = "subrata@gmail.com" ;
     doctor14.address = "11/1 Uttora,Dhaka" ;




    doctor15.name = "Dr. Tapos Kumar Roy" ;
    doctor15.age = 59 ;
    doctor15.degree = "MBBS,MS(Ortho)" ;
    doctor15.religion = "Hindu" ;
    doctor15.number = "01733333122" ;
    doctor15.gmail = "tapos@gmail.com" ;
        doctor15.address = "44/4 Mirpur road,Mirpur" ;










       //physician and cardiologist

    doctor16.name = "Dr. G.S. Saha" ;
    doctor16.age = 60 ;
    doctor16.degree = "MBBS,BCS,FCPS,PHD(Cardiology)" ;
    doctor16.religion = "Hindu" ;
    doctor16.number = "01732233123" ;
    doctor16.gmail = "gssaha@gmail.com" ;
     doctor16.address = "408/1 Kuratoli Road, Khilketh" ;





    doctor17.name = "Dr. Govinda Saha" ;
    doctor17.age = 65 ;
    doctor17.degree = "MBBS,FCPS,PHD(Cardiology)" ;
    doctor17.religion = "Hindu" ;
    doctor17.number = "01732288123" ;
    doctor17.gmail = "govinda@gmail.com" ;
    doctor17.address = "51/1 Dhanmondi ,Dhaka" ;




    doctor18.name = "Dr. Amit Saha" ;
    doctor18.age = 70 ;
    doctor18.degree = "MBBS,BCS,FCPS,PHD(Cardiology)" ;
    doctor18.religion = "Hindu" ;
    doctor18.number = "01717466081" ;
    doctor18.gmail = "amit@gmail.com" ;
     doctor18.address = "55/5 Frmgate ,Dhaka" ;




    doctor19.name = "Dr. Soumik Saha" ;
    doctor19.age = 53 ;
    doctor19.degree = "MBBS,BCS,PHD(Cardiology)" ;
    doctor19.religion = "Hindu" ;
    doctor19.number = "01732266123" ;
    doctor19.gmail = "soumik@gmail.com" ;
     doctor19.address = "11/1 Uttora,Dhaka" ;





    doctor20.name = "Dr. Kabeya Sen" ;
    doctor20.age = 68 ;
    doctor20.degree = "MBBS,BCS,FCPS" ;
    doctor20.religion = "Hindu" ;
    doctor20.number = "01732233255" ;
    doctor20.gmail = "kabeya@gmail.com" ;
        doctor20.address = "44/4 Mirpur road,Mirpur" ;




     cout<< "Welcome to Doctor Profile Management Software. I am hereby to help you.Let's start."<<endl ;
     cout << "What do you want to do??"<<endl<<endl <<endl;

    cout << "Press 1 for Medicine and Liver specialist" << endl ;

    cout << "Press 6 for Medicine and Hormone specialist" << endl ;

    cout << "Press 11 for Orthopedic specialist" << endl ;

    cout << "Press 16 for Physician and Cardiology specialist" << endl ;

    cout << "Press 0 for exit from the programme" << endl<<endl ;


    cin >> num ;
    cout <<endl<<endl;





     switch(num)
     {
     case 1 :
        {
    cout << "NAME = " <<doctor1.name <<endl ;
    cout << "AGE = " << doctor1.age <<endl ;
    cout << "Degree = " << doctor1.degree <<endl ;
    cout<< "Religion = " << doctor1.religion <<endl;
    cout<< "Phone nmuber = " <<doctor1.number <<endl ;
    cout << "Gmail = " <<doctor1.gmail <<endl ;
    cout << "Visiting hour : Only in Saturday and Tuesday from 6 p.m. to 10 p.m."<<endl ;
    cout << "Address - " <<doctor1.address <<endl<<endl ;



    cout << "NAME = " <<doctor2.name <<endl ;
    cout << "AGE = " << doctor2.age <<endl ;
    cout << "Degree = " << doctor2.degree <<endl ;
    cout<< "Religion = " << doctor2.religion <<endl;
    cout<< "Phone nmuber = " <<doctor2.number <<endl ;
    cout << "Gmail = " <<doctor2.gmail <<endl ;
    cout << "Visiting hour : Only in Saturday and Tuesday from 6 p.m. to 10 p.m."<<endl ;
    cout << "Address - " <<doctor2.address <<endl<<endl ;


    cout << "NAME = " <<doctor3.name <<endl ;
    cout << "AGE = " << doctor3.age <<endl ;
    cout << "Degree = " << doctor3.degree <<endl ;
    cout<< "Religion = " << doctor3.religion <<endl;
    cout<< "Phone nmuber = " <<doctor3.number <<endl ;
    cout << "Gmail = " <<doctor3.gmail <<endl ;
    cout << "Visiting hour : Only in Saturday and Tuesday from 6 p.m. to 10 p.m."<<endl ;
    cout << "Address - " <<doctor3.address <<endl<<endl ;



    cout << "NAME = " <<doctor4.name <<endl ;
    cout << "AGE = " << doctor4.age <<endl ;
    cout << "Degree = " << doctor4.degree <<endl ;
    cout<< "Religion = " << doctor4.religion <<endl;
    cout<< "Phone nmuber = " <<doctor4.number <<endl ;
    cout << "Gmail = " <<doctor4.gmail <<endl ;
    cout << "Visiting hour : Only in Saturday and Tuesday from 6 p.m. to 10 p.m."<<endl ;
    cout << "Address - " <<doctor4.address <<endl<<endl ;




    cout << "NAME = " <<doctor5.name <<endl ;
    cout << "AGE = " << doctor5.age <<endl ;
    cout << "Degree = " << doctor5.degree <<endl ;
    cout<< "Religion = " << doctor5.religion <<endl;
    cout<< "Phone nmuber = " <<doctor5.number <<endl ;
    cout << "Gmail = " <<doctor5.gmail <<endl ;
    cout << "Visiting hour : Only in Saturday and Tuesday from 6 p.m. to 10 p.m."<<endl;
    cout << "Address - " <<doctor5.address <<endl<<endl ;

    cout<< "Thank you"<<endl <<endl ;

      break ;
        }
     case 6 :
        {


    cout << "NAME = " << doctor6.name <<endl ;
    cout << "AGE = " << doctor6.age <<endl ;
    cout << "Degree = " << doctor6.degree <<endl ;
    cout<< "Religion = " << doctor6.religion <<endl ;
    cout<< "Phone nmuber = " <<doctor6.number <<endl ;
    cout << "Gmail = " <<doctor6.gmail <<endl ;
    cout << "Visiting hour : Only in Sunday,Tuesday and Thursday from 6 p.m. to 10 p.m."     <<endl ;
     cout << "Address - " <<doctor6.address <<endl<<endl ;



    cout << "NAME = " <<doctor7.name <<endl ;
    cout << "AGE = " << doctor7.age <<endl ;
    cout << "Degree = " << doctor7.degree <<endl ;
    cout<< "Religion = " << doctor7.religion <<endl ;
    cout<< "Phone nmuber = " <<doctor7.number <<endl ;
    cout << "Gmail = " <<doctor7.gmail <<endl ;
    cout << "Visiting hour : Only in Sunday,Tuesday and Thursday from 6 p.m. to 10 p.m." <<endl ;
    cout << "Address - " <<doctor7.address <<endl<<endl ;


    cout << "NAME = " <<doctor8.name <<endl ;
    cout << "AGE = " << doctor8.age <<endl ;
    cout << "Degree = " << doctor8.degree <<endl ;
    cout<< "Religion = " << doctor8.religion <<endl ;
    cout<< "Phone nmuber = " <<doctor8.number <<endl ;
    cout << "Gmail = " <<doctor8.gmail <<endl ;
    cout << "Visiting hour : Only in Sunday,Tuesday and Thursday from 6 p.m. to 10 p.m."     <<endl ;
    cout << "Address - " <<doctor8.address <<endl<<endl ;



    cout << "NAME = " <<doctor9.name <<endl ;
    cout << "AGE = " << doctor9.age <<endl ;
    cout << "Degree = " << doctor9.degree <<endl ;
    cout<< "Religion = " << doctor9.religion <<endl ;
    cout<< "Phone nmuber = " <<doctor9.number <<endl ;
    cout << "Gmail = " <<doctor9.gmail <<endl ;
    cout << "Visiting hour : Only in Sunday,Tuesday and Thursday from 6 p.m. to 10 p.m." <<endl ;
    cout << "Address - " <<doctor9.address <<endl<<endl ;




    cout << "NAME = " <<doctor10.name <<endl ;
    cout << "AGE = " << doctor10.age <<endl ;
    cout << "Degree = " << doctor10.degree <<endl ;
    cout<< "Religion = " << doctor10.religion <<endl ;
    cout<< "Phone nmuber = " <<doctor10.number <<endl ;
    cout << "Gmail = " <<doctor10.gmail <<endl ;
    cout << "Visiting hour : Only in Sunday,Tuesday and Thursday from 6 p.m. to 10 p.m." <<endl ;
    cout << "Address - " <<doctor10.address <<endl ;



            cout<< "Thank you"<<endl <<endl ;
             break ;

        }
     case 11 :
        {
    cout << "NAME = " <<doctor11.name <<endl ;
    cout << "AGE = " << doctor11.age <<endl ;
    cout << "Degree = " << doctor11.degree <<endl ;
    cout<< "Religion = " << doctor11.religion <<endl ;
    cout<< "Phone nmuber = " <<doctor11.number <<endl ;
    cout << "Gmail = " <<doctor11.gmail <<endl ;
     cout << "Visiting hour : Only in Sunday,Tuesday and Thursday from 6 p.m. to 10 p.m." <<endl ;
     cout << "Address - " <<doctor11.address <<endl<<endl ;



    cout << "NAME = " <<doctor12.name <<endl ;
    cout << "AGE = " << doctor12.age <<endl ;
    cout << "Degree = " << doctor12.degree <<endl ;
    cout<< "Religion = " << doctor12.religion <<endl ;
    cout<< "Phone nmuber = " <<doctor12.number <<endl ;
    cout << "Gmail = " <<doctor12.gmail <<endl ;
    cout << "Visiting hour : Only in Sunday,Tuesday and Thursday from 6 p.m. to 10 p.m." <<endl ;
    cout << "Address - " <<doctor12.address <<endl<<endl ;




    cout << "NAME = " <<doctor13.name <<endl ;
    cout << "AGE = " << doctor13.age <<endl ;
    cout << "Degree = " << doctor13.degree <<endl ;
    cout<< "Religion = " << doctor13.religion <<endl ;
    cout<< "Phone nmuber = " <<doctor13.number <<endl ;
    cout << "Gmail = " <<doctor13.gmail <<endl ;
    cout << "Visiting hour : Only in Sunday,Tuesday and Thursday from 6 p.m. to 10 p.m." <<endl ;
    cout << "Address - " <<doctor13.address <<endl<<endl ;




    cout << "NAME = " <<doctor14.name <<endl ;
    cout << "AGE = " << doctor14.age <<endl ;
    cout << "Degree = " << doctor14.degree <<endl ;
    cout<< "Religion = " << doctor14.religion <<endl ;
    cout<< "Phone nmuber = " <<doctor14.number <<endl ;
    cout << "Gmail = " <<doctor14.gmail <<endl ;
    cout << "Visiting hour : Only in Sunday,Tuesday and Thursday from 6 p.m. to 10 p.m." <<endl ;
    cout << "Address - " <<doctor14.address <<endl<<endl ;




    cout << "NAME = " <<doctor15.name <<endl ;
    cout << "AGE = " << doctor15.age <<endl ;
    cout << "Degree = " << doctor15.degree <<endl ;
    cout<< "Religion = " << doctor15.religion <<endl ;
    cout<< "Phone nmuber = " <<doctor15.number <<endl ;
    cout << "Gmail = " <<doctor15.gmail <<endl ;
    cout << "Visiting hour : Only in Sunday,Tuesday and Thursday from 6 p.m. to 10 p.m." <<endl ;
    cout << "Address - " <<doctor15.address <<endl<<endl ;



     cout<< "Thank you"<<endl <<endl ;
      break ;

        }
     case 16 :
        {
cout << "NAME = " <<doctor16.name <<endl ;
    cout << "AGE = " << doctor16.age <<endl ;
    cout << "Degree = " << doctor16.degree <<endl ;
    cout<< "Religion = " << doctor16.religion <<endl ;
    cout<< "Phone nmuber = " <<doctor16.number <<endl ;
    cout << "Gmail = " <<doctor16.gmail <<endl ;
    cout << "Visiting hour : Only in Sunday,Tuesday and Thursday from 6 p.m. to 10 p.m." <<endl ;
    cout << "Address - " <<doctor16.address <<endl<<endl ;




    cout << "NAME = " <<doctor17.name <<endl ;
    cout << "AGE = " << doctor17.age <<endl ;
    cout << "Degree = " << doctor17.degree <<endl ;
    cout<< "Religion = " << doctor17.religion <<endl ;
    cout<< "Phone nmuber = " <<doctor17.number <<endl ;
    cout << "Gmail = " <<doctor17.gmail <<endl ;
    cout << "Visiting hour : Only in Sunday,Tuesday and Thursday from 6 p.m. to 10 p.m." <<endl ;
   cout << "Address - " <<doctor17.address <<endl<<endl ;




    cout << "NAME = " <<doctor18.name <<endl ;
    cout << "AGE = " << doctor18.age <<endl ;
    cout << "Degree = " << doctor18.degree <<endl ;
    cout<< "Religion = " << doctor18.religion <<endl ;
    cout<< "Phone nmuber = " <<doctor18.number <<endl ;
    cout << "Gmail = " <<doctor18.gmail <<endl ;
    cout << "Visiting hour : Only in Sunday,Tuesday and Thursday from 6 p.m. to 10 p.m." <<endl ;
   cout << "Address - " <<doctor18.address <<endl<<endl ;




    cout << "NAME = " <<doctor19.name <<endl ;
    cout << "AGE = " << doctor19.age <<endl ;
    cout << "Degree = " << doctor19.degree <<endl ;
    cout<< "Religion = " << doctor19.religion <<endl ;
    cout<< "Phone nmuber = " <<doctor19.number <<endl ;
    cout << "Gmail = " <<doctor19.gmail <<endl ;
    cout << "Visiting hour : Only in Sunday,Tuesday and Thursday from 6 p.m. to 10 p.m." <<endl ;
    cout << "Address - " <<doctor19.address <<endl<<endl ;




    cout << "NAME = " <<doctor20.name <<endl ;
    cout << "AGE = " << doctor20.age <<endl ;
    cout << "Degree = " << doctor20.degree <<endl ;
    cout<< "Religion = " << doctor20.religion <<endl ;
    cout<< "Phone nmuber = " <<doctor20.number <<endl ;
    cout << "Gmail = " <<doctor20.gmail <<endl ;
    cout << "Visiting hour : Only in Sunday,Tuesday and Thursday from 6 p.m. to 10 p.m." <<endl ;
    cout << "Address - " <<doctor20.address <<endl<<endl ;



     cout<< "Thank you"<<endl <<endl ;
        break ;




        }
     case 0 :
        {
            cout<< "Thank you"<<endl <<endl ;
           break ;
        }

     default :

          cout <<"You have typed invalid integer." <<endl ;
          cout<< "Read the instructions carefully and try again."<<endl<<endl;
          cout<< "Thank you"<<endl <<endl ;
     }

   return 0 ;
}












