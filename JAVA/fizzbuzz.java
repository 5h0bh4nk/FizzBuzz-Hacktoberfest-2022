//Author: @lokeshtejavath
public class fizzbuzz {
    private int Fizz = 3;
    private int Buzz = 5;

    private String FizzBeat = "Fizz";
    private String BuzzBeat = "Buzz";

    private int getRandomNumber(int min, int max) {
        return (int) ((Math.random() * (max - min)) + min);
    }

    private boolean beating(int number, int beat) {
        if (number % beat == 0)
            return true;
        return false;
    }

    private String doesThisBeat(int number) {
        if (beating(number, Fizz) || beating(number, Buzz))
            return "Yay!!";
        else
            return "Nah!!!";
    }

    public static void main(String[] args) {
        fizzbuzz music = new fizzbuzz();
        for (int i = 1; i <= 100; i++) {
            if (music.doesThisBeat(i).compareTo("Yay!!") != 0) {
                System.out.print(i);
                System.out.print("\n");
            } else {
                if (music.beating(i, music.Fizz)) {
                    for (int j = 0; j < music.FizzBeat.length(); j++) {
                        int num = music.getRandomNumber(65, 123);
                        while (num != music.FizzBeat.charAt(j)) {
                            // System.out.print(num);
                            // System.out.print("\n");
                            num = music.getRandomNumber(65, 123);
                        }
                        System.out.print(music.FizzBeat.charAt(j));
                    }

                }
                if (music.beating(i, music.Buzz)) {
                    for (int j = 0; j < music.BuzzBeat.length(); j++) {
                        int num = music.getRandomNumber(65, 123);
                        while (num != music.BuzzBeat.charAt(j))
                            num = music.getRandomNumber(65, 123);
                        System.out.print(music.BuzzBeat.charAt(j));
                    }
                }
                System.out.print("\n");
            }
        }
    }
}