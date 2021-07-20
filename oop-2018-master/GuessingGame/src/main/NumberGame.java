package main;

public abstract class NumberGame {
    private String message;

    public NumberGame() {
        message = "";
    }

    public String getMessage() {
        return message;
    }

    public void setMessage(String message) {
        this.message = message;
    }

    public int getUpperBound() {
        return Integer.MAX_VALUE;
    }

    public int getCount() {
        return 0;
    }

    public abstract boolean guess(int answer);

    @Override
    public abstract String toString();
}
