boolean validPhoneNumber(String phone) {
        if(phone.matches(".*[a-zA-Z].*"))
            return false;
        if(phone.length() != 10)
            return false;
        int a = phone.charAt(0);
        int b = phone.charAt(phone.length()-1);
        if(a != 48 || b == 52 || b == 55 || b == 48)
            return false;
        return true;
}