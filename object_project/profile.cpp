#include <iostream>
#include "profile.hpp"

Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns)
  : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) {
  }

std::string Profile::view_profile() {
  std::string profile_str = "Name : " + name;
  profile_str += "\nBio : " + std::to_string(age);
  profile_str += "\nPronouns : " + pronouns;
  profile_str += "\nHobbies : \n";
  for (std::string hobby : hobbies) {
    profile_str += " - " + hobby + "\n";
  }

  return profile_str;
}

void Profile::add_hobby(std::string new_hobby) {
  hobbies.push_back(new_hobby);
}