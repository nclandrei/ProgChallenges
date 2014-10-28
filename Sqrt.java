class MyClass {

    public static void compute_sqrt(Integer n) {
    double guess = n / 2;
    double pctDiff = Double.MAX_VALUE;
    double lastGuess = guess;
    while (Math.abs(pctDiff) >= 0.01)
    {                        
        double r = n / guess;
        guess = (guess + r) / 2;
        pctDiff = ((guess-lastGuess)/lastGuess);
        lastGuess = guess;
    }
        System.out.println(Math.round(guess));
    }
}
