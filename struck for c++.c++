#include<bits/stdc++.h>

struct Agent {
  std::string agent_code;
  std::string dealer_name;
  int phone;
  std::string date_received;
  std::string address;
  std::string email;
};
void inputAgent(Agent &a) {
  std::cout << "Enter agent code: ";
  std::cin >> a.agent_code;
  std::cout << "Enter dealer name: ";
  std::cin >> a.dealer_name;
  std::cout << "Enter phone number: ";
  std::cin >> a.phone;
  std::cout << "Enter date received: ";
  std::cin >> a.date_received;
  std::cout << "Enter address: ";
  std::cin >> a.address;
  std::cout << "Enter email: ";
  std::cin >> a.email;
}
void outputAgent(const Agent &a) {
  std::cout << "Agent code: " << a.agent_code << std::endl;
  std::cout << "Dealer name: " << a.dealer_name << std::endl;
  std::cout << "Phone number: " << a.phone << std::endl;
  std::cout << "Date received: " << a.date_received << std::endl;
  std::cout << "Address: " << a.address << std::endl;
  std::cout << "Email: " << a.email << std::endl;
}
int main() {
  Agent a;
  inputAgent(a);
  outputAgent(a);
  return 0;
}
