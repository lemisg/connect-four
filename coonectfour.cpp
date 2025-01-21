#include <iostream>

bool player_wants_to_keep_playing() { //return true or false y is for yes and n is for no
   char user_input      
  do {
           
           std::cout << "Do you want to play play again? (Y/N): ";
           std::cin >> user_input;

           if (user_input != 'Y' && user_input != 'N') {
                  std::cout << ""Invalid answer: try again!" << std::endl;
           }
         } while(user_input != 'Y' && user ! = 'N' );
  
         return user_input == 'Y';
}

void play_the_game() {
//to do
}

int main() {
       do{
               play_the_game();       //play the game in here
       } while (player_wants_keep_playing()); //determines how many times the player wants to play.
}
