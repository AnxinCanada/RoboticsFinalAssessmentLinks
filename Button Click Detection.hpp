void check_for_button_click(int io) {
    if (digitalRead(io) == LOW) {
        return true;
    }
    else if (digitalRead(io) == HIGH) {
        return false;
    }
}
