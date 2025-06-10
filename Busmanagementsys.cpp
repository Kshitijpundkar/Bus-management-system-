#include<iostream>
#include<string>
using namespace std;
class parivahan{
    public:
    int result;
    int pasenger;
    int plat_no;
    string city;
    double conc;
    void getcity(string city){
        if(city == "Beed" || city == "beed"){
            cout<<"Bus Number :- MH27F5748"<<endl;
            cout<<"Time to arrive is :- 9:00 am"<<endl<<"2:55 pm"<<endl;
        }
       else if(city == "Mehkar" || city=="mehkar"){
            cout<<"Bus Number :- MH27A3879"<<endl;
            cout<<"Time to arrive is :- 9:15 am"<<endl;
        }
        else if(city=="Lonar" || city=="lonar"){
            cout<<"Bus Number :- MH27S8979"<<endl;
            cout<<"Time to arrive is :- "<<endl<<"10:15 am"<<endl<<"12:30 pm"<<'\n'<<"2:15 pm"<<endl;
        }
        else if(city=="Mahur" || city=="mahur"){
            cout<<"Bus Number :- MH27F9747"<<endl;
            cout<<"Time to arrive is :- 11:00 am"<<endl;
        }
        else if(city=="Morshi" || city=="morshi"){
            cout<<"Bus Number :- MH27S8976"<<endl;
            cout<<"Time to arrive is :- "<<endl<< "1:15 pm"<<endl<<"4:00 pm"<<endl;
        }
        else if(city=="Nagpur" || city=="nagpur"){
            cout<<"Bus Number :- MH27D5798"<<endl;
            cout<<"Time to arrive is :- "<<endl<<"11:00 am"<<endl<<"4:15 pm"<<endl;
        }
        else if(city=="Nashik" || city=="nashik"){
            cout<<"Bus Number :- MH27F67568"<<endl;
            cout<<"Time to arrive is :- "<<endl<<"12:30 pm"<<endl<<"8:00 pm"<<endl;
            
        }
        else if(city=="Chandrapur" || city=="chandrapur"){
            cout<<"Bus Number :- MH27S5232"<<endl;
            cout<<"Time to arrive is :- "<<"12:00 pm"<<endl<<"3:45"<<endl;
        }
        else if(city=="Chh. Sambhajinagar" || city=="chh. sambhajinagar" || city=="Chhatrapati Sambhaji Nagar" || city=="chhatrapti sambhaji nagar"){
            cout<<"Bus Number :- MH27S5232"<<endl;
            cout<<"Time to arrive is :- "<<"11:00 am"<<endl<<"6:00 pm"<<endl;
        }
        else if(city=="Patur" || city=="patur"){
            cout<<"Bus Number :- MH2A6456"<<endl;
            cout<<"Time to arrive is :- "<<"1:00 pm"<<endl<<"3:45 pm"<<endl;
        }
        else if(city=="Pandharpur" || city=="pandharpur"){
            cout<<"Bus Number :- MH27S5232"<<endl;
            cout<<"Time to arrive is :- "<<"12:00 pm"<<endl<<"8:45 pm"<<endl;
        }
        else if(city=="Washim" || city=="washim"){
            cout<<"Bus Number :- MH37S6732"<<endl;
            cout<<"Time to arrive is :- "<<"1:00 pm"<<endl<<"5:45 pm"<<endl;
        }
        else if(city=="Pune" || city=="pune"){
            cout<<"Bus Number :- MH27A8755"<<endl;
            cout<<"Time to arrive is :- "<<"8:00 am"<<endl<<"2:10 pm"<<endl<<"7:00 pm"<<endl;
        }
        else if(city=="Akola" || city=="akola"){
            cout<<"Bus Number :- MH27F7267"<<endl;
            cout<<"Time to arrive is :- "<<"7:30 am"<<endl<<"10:45 am"<<endl<<"2:30 pm"<<endl;
        }
        else if(city=="Rajura" || city=="rajura"){
            cout<<"Bus Number :- MH27F7267"<<endl;
                cout<<"Time to arrive is :- "<<"9:30 am"<<endl<<"1:45 pm"<<endl;
        }
        else if(city=="Wani" || city=="wani"){
             cout<<"Bus Number :- MH37S6732"<<endl;
            cout<<"Time to arrive is :- "<<"8:30 am"<<endl<<"3:45 pm"<<endl;
    }
    else if(city=="Ballapur" || city=="ballapur"){
        cout<<"Bus Number :- MH27G5721"<<endl;
        cout<<"Time to arrive is :- "<<"11:30 am"<<endl<<"5:45 pm"<<endl;
    }
    else if(city=="Satara" || city=="satara"){
        cout<<"Bus Number :- MH27E9629"<<endl;
        cout<<"Time to arrive is :- "<<"8:00 am"<<endl<<"4:00 pm"<<endl<<"9:00 pm"<<endl;
}   
 else if(city=="Telhara" || city=="telhara"){
    cout<<"Bus Number :- MH27S9476"<<endl;
    cout<<"Time to arrive is :- "<<"8:00 am"<<endl<<"3:45 pm"<<endl<<"9:00 pm"<<endl;
}
else if(city=="Tiwsa" || city=="tiwsa"){
    cout<<"Bus Number :- MH27AF6890"<<endl;
    cout<<"Time to arrive is :- "<<"10:00 am"<<endl<<"2:40 pm"<<endl<<"8:15 pm"<<endl;
}
else if(city=="Vishnora" || city=="Vishnora"){
    cout<<"Bus Number :- MH27A4892"<<endl;
    cout<<"Time to arrive is :- "<<"7:00 am"<<endl<<"11:40 pm"<<endl;
}
else if(city=="Waki" || city=="waki"){
    cout<<"Bus Number :- MH27F9929"<<endl;
    cout<<"Time to arrive is :- "<<"8:40 am"<<endl<<"1:30 pm"<<endl<<"5:00 pm"<<endl;
}
else if(city=="Akot" || city=="akot"){
    cout<<"Bus Number :- MH27E4629"<<endl;
    cout<<"Time to arrive is :- "<<"7:00 am"<<endl<<"1:30 pm"<<endl<<"7:30 pm"<<endl;
}
else if(city=="Shegaon" || city=="shegaon"){
    cout<<"Bus Number :- MH27E8689"<<endl;
    cout<<"Time to arrive is :- "<<"8:45 am"<<endl<<"11:30 pm"<<endl<<"2:15 pm"<<endl<<"5:00"<<endl;
}
else if(city=="Mozri" || city=="mozri"){
    cout<<"Bus Number :- MH27E7689"<<endl;
    cout<<"Time to arrive is :- "<<"7:40 am"<<endl<<"12:30 pm"<<endl<<"4:00 pm"<<endl;
}
else if(city=="Tapovaneshwar" || city=="tapovaneshwar"){
    cout<<"Bus Number :- MH27E5639"<<endl;
    cout<<"Time to arrive is :- "<<"9:00 am"<<endl<<"1:45 pm"<<endl<<"4:45 pm"<<endl;
}
else{
    cout<<""<<endl;
}
}
void get_concession(){
    if(city == "Pune" || city == "pune"){
        if(result == 1){
            conc = (720/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 720 *pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Akola" || city == "akola"){
        if(result == 1){
            conc = (470/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 470*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Rajura" || city == "rajura"){
        if(result == 1){
            conc = (350/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 350*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Wani" || city == "wani"){
        if(result == 1){
            conc = (330/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 330*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Ballapur" || city == "ballapur"){
        if(result == 1){
            conc = (420/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 420*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Satara" || city == "satara"){
        if(result == 1){
            conc = (2500/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 2500*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Nagpur" || city == "nagpur"){
        if(result == 1){
            conc = (400/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 400*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Nashik" || city == "nashik"){
        if(result == 1){
            conc = (720/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 720*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Chandrapur" || city == "chandrapur"){
        if(result == 1){
            conc = (440/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 440*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city=="Chh. Sambhajinagar" || city=="chh. sambhajinagar" || city=="Chhatrapati Sambhaji Nagar" || city=="chhatrapti sambhaji nagar"){
        if(result == 1){
            conc = (1200/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 1200*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Patur" || city == "patur"){
        if(result == 1){
            conc = (900/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 900*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Pandharpur" || city == "pandharpur"){
        if(result == 1){
            conc = (860/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 860*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Washim" || city == "washim"){
        if(result == 1){
            conc = (240/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 240*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Beed" || city == "beed"){
        if(result == 1){
            conc = (945/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 945*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Mehkar" || city == "mehkar"){
        if(result == 1){
            conc = (1200/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 1200*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Lonar" || city == "lonar"){
        if(result == 1){
            conc = (370/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 370*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Mahur" || city == "mahur"){
        if(result == 1){
            conc = (270/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 270*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Morshi" || city == "morshi"){
        if(result == 1){
            conc = (90/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 90*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Akot" || city == "akot"){
        if(result == 1){
            conc = (50/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 50*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Shegaon" || city == "shegaon"){
        if(result == 1){
            conc = (130/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 130*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Mozri" || city == "mozri"){
        if(result == 1){
            conc = (80/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 80*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Tapovaneshwar" || city == "tapovaneshwar"){
        if(result == 1){
            conc = (890/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 890*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Telhara" || city == "telhara"){
        if(result == 1){
            conc = (205/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 205*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Tiwsa" || city == "tiwsa"){
        if(result == 1){
            conc = (68/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 68*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Vishnora" || city == "vishnora"){
        if(result == 1){
            conc = (100/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 100*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }
    else if(city == "Waki" || city == "waki"){
        if(result == 1){
            conc = (312/2)*pasenger;
        }
        else if(result == 0){
            conc = 0;
        }
        else{
            conc = 312*pasenger;
        }
        cout<<"Your Have to pay Rupees :- "<<conc<<endl;
    }else{
    }
    }
};
int main(){
    parivahan par;
    int birth_yr;
    int p;
    int age;
    int Present_yr = 2025;
    while(p){
	//system("cls");
    cout<< "LIST OF CiTIEs "<< endl;
    cout<<"  Beed ,Lonar, Mahur, Morshi, Nagpur, Nashik"<<endl<<"Chandrapur, Chatrapati Sambhaji Nagar, Patur, Pandharpur"<<endl<<"  Pune, Rajura,Wani,  Chandrapur, Ballarpur,Satara,Shegaon"<<endl<<"  Tapovaneshwar, Telhara , Waki" <<endl;
    cout<<endl<<endl;
    cout<<"Enter Your City :- ";
    cin>>par.city;
   // par.getcity(par.city);
    
if(par.city=="Beed" || par.city == "beed" || par.city == "Mehekar"|| par.city == "mehekar"|| par.city == "Mahur"||par.city == "mahur" || par.city == "Morshi"|| par.city == "morshi" ){
     cout<<"Your platform Number is :- ";
     cout<<1<<endl;
  par.getcity(par.city);
}

else if ( par.city =="Akot"|| par.city == "akot"|| par.city == "Shegaon"||par.city == "shegaon"||par.city == "Shegaon"||par.city == "Mozhari"||par.city == "mozhari"||par.city == "Tapovaneshwar"||par.city == "tapovaneshwar" ){
    cout<<"Your platform Number is :- ";
    cout<<6<<endl;
  par.getcity(par.city);
}
else if ( par.city =="Nagpur"|| par.city == "nagpur"|| par.city == "Chandrapur"||par.city == "chandrapur"||par.city == "nashik"||par.city == "Nashik" || par.city == "Lonar" || par.city == "lonar"){
    cout<<"Your platform Number is :- ";
    cout<<2<<endl;
  par.getcity(par.city);
}
else if ( par.city =="Pune"|| par.city == "pune"||par.city == "Waki" || par.city == "waki" || par.city == "Akola"||par.city == "akola"||par.city == "Rajura"||par.city == "rajura"){
    cout<<"Your platform Number is :- ";
    cout<<4<<endl;
  par.getcity(par.city);
}else if ( par.city =="Wani"|| par.city == "wani"|| par.city == "Ballapur"||par.city == "Telhara" || par.city == "telhara" || par.city == "ballapur"||par.city == "Satara"||par.city == "satara"){
    cout<<"Your platform Number is :- ";
    cout<<5<<endl;
  par.getcity(par.city);
}

else if ( par.city=="Chh. Sambhajinagar" || par.city=="chh. sambhajinagar" || par.city=="Chhatrapati Sambhaji Nagar" || par.city=="chhatrapti sambhaji nagar"|| par.city == "Patur"|| par.city == "patur"||par.city == "Pandharpur"||par.city == "pandharpur"||par.city =="Washim"||par.city == "washim"){
    cout<<"Your platform Number is :- ";
    cout<<3<<endl;
  par.getcity(par.city);
}
else{
    cout<< "PLEASE ENTER VALID CiTY NAME ...!  "<<endl;
}

cout<<"Want to know about Payable Ticket then enter 1 or enter 0 to exit"<<endl;
int j;
cin>>j;

if(j==1){
    char g;
cout<<"Enter Your Gender(F/M) :- ";
cin>>g;
cout<<"Enter your Birth Year :- ";
cin>>birth_yr;
age = Present_yr - birth_yr;
cout<<"Note :- the Number of Passengers must have same age of eligibility"<<endl;
cout<<"Enter Number of Passenggers :- ";
cin>>par.pasenger;
cout<<"Your age is :- "<<age<<endl;
if(age<=7 || age>75 || g=='f' || g=='F'){
	//system("cls");
    cout<<"You can travell Free fo cost"<<endl;
    par.result = 0;
    par.get_concession();
}
else if(age>=65 || age>75){
    cout<<"You are Eligible for half ticket."<<endl;
    par.result = 1;
    par.get_concession();
}
else{
    cout<<"You have to pay Full Ticket"<<endl;
    par.get_concession();
}}
else{
    system("cls");
}
    int q;
    cout<<"enter 0 to continue"<<endl;
    cin>>q;
    if(q==0){
        system("cls");
    }
}
cout<< "HAPPY jOURNYE...! :-)"<< endl;
cout<<"______________________"<<endl<<endl;
    
    return 0;
}