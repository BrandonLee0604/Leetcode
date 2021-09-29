package com.company;

class Palindrome {
    public static boolean isPalindrome(String word) {
        String word_l = word.toLowerCase();
        StringBuffer stringBuffer = new StringBuffer(word_l);
        StringBuffer word_r = stringBuffer.reverse();
        return word_l.equals(word_r);
    }

    public static void main(String[] args) {
        System.out.println(Palindrome.isPalindrome("Deleveled"));
    }
}
