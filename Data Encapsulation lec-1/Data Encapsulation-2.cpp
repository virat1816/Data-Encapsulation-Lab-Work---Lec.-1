#include<iostream>
using namespace std;

class Customer {
   private:
      int cust_id;
      string cust_name;
      int cust_age;
      string cust_telecome_brand_name;
      string cust_mobile_number;
      string cust_city;
      int cust_simcard_validity;
   
   public:
      void setCustomerId(int id) {
         cust_id = id;
      }
      void setCustomerName(string name) {
         cust_name = name;
      }
      void setCustomerAge(int age) {
         cust_age = age;
      }
      void setTelecomeBrandName(string brand_name) {
         cust_telecome_brand_name = brand_name;
      }
      void setMobileNumber(string number) {
         cust_mobile_number = number;
      }
      void setCustomerCity(string city) {
         cust_city = city;
      }
      void setSimCardValidity(int validity) {
         cust_simcard_validity = validity;
      }
      void displayCustomerInfo() {
         cout<<"Customer ID: "<<cust_id<<endl;
         cout<<"Customer Name: "<<cust_name<<endl;
         cout<<"Customer Age: "<<cust_age<<endl;
         cout<<"Telecome Brand Name: "<<cust_telecome_brand_name<<endl;
         cout<<"Mobile Number: "<<cust_mobile_number<<endl;
         cout<<"Customer City: "<<cust_city<<endl;
         cout<<"SimCard Validity: "<<cust_simcard_validity<<" years"<<endl;
      }
};

int main() {
   Customer customer[5];

   for(int i=0; i<5; i++) {
      int id, age, validity;
      string name, brand_name, number, city;

      cout<<"\nEnter customer "<<i+1<<" details:"<<endl;
      cout<<"Customer ID: ";
      cin>>id;
      customer[i].setCustomerId(id);

      cout<<"Customer Name: ";
      cin>>name;
      customer[i].setCustomerName(name);

      cout<<"Customer Age: ";
      cin>>age;
      customer[i].setCustomerAge(age);

      cout<<"Telecome Brand Name: ";
      cin>>brand_name;
      customer[i].setTelecomeBrandName(brand_name);

      cout<<"Mobile Number: ";
      cin>>number;
      customer[i].setMobileNumber(number);

      cout<<"Customer City: ";
      cin>>city;
      customer[i].setCustomerCity(city);

      cout<<"SimCard Validity (in years): ";
      cin>>validity;
      customer[i].setSimCardValidity(validity);
   }

   cout<<"\nDisplaying Customer details:"<<endl;
   for(int i=0; i<5; i++) {
      cout<<"\nCustomer "<<i+1<<" details:"<<endl;
      customer[i].displayCustomerInfo();
   }
   
   return 0;
}

