 bool button_values[5] = {True, True, True, True, True}; 
 bool check_for_button_click(int io) {
     if (digitalRead(io) == LOW && not button_values[io - 10]) {
         button_values[io - 10] = True;
         return true;
     }
     else if (digitalRead(io) == HIGH) {
         button_values[io - 10] = False;
         return false;
     }
 }
