package lab11;

import javax.swing.*;
import java.awt.*;
import java.util.Calendar;

public class MyStopwatch extends JLabel implements Runnable {
    private int sec;
    private int min;
    private int hour;

    public MyStopwatch() {
        this(2*3600);
    }

    public MyStopwatch(int sec) {
        setFont(new Font("Arial", Font.PLAIN, 24));
        setSec(sec % 60);
        setMin((int)(sec/60)%60);
        setHour((int)(sec/3600));
    }

    public int getSec() {
        return sec;
    }

    public void setSec(int sec) {
        this.sec = sec;
    }

    public int getMin() {
        return min;
    }

    public void setMin(int min) {
        this.min = min;
    }

    public int getHour() {
        return hour;
    }

    public void setHour(int hour) {
        this.hour = hour;
    }

    public void countdown() {
        this.sec--;

        if (this.sec == -1) {
            this.sec = 59;
            this.min--;
        }

        if (this.min == -1) {
            this.min = 59;
            this.hour--;
        }

        if (this.hour == -1) {
            this.hour = 0;
        }
    }

    @Override
    public void run() {
        while (true) {
            String text = this.hour + ":";

            if (this.min < 10) {
                text += "0";
            }
            text += + this.min + ":";
            if (this.sec < 10) {
                text += "0";
            }
            text += + this.sec;

            setText(text);

            try {
                Thread.sleep(1000);
            } catch (InterruptedException ex) {
                ex.printStackTrace();
            }

            countdown();
        }
    }
}

class MyStopwatchGUI extends JFrame {
    private MyStopwatch stopwatch;

    public MyStopwatchGUI() {
        stopwatch = new MyStopwatch(2*3600 + 5*60);
    }

    public void init() {
        Thread timeThread = new Thread(stopwatch);
        add(stopwatch);
        stopwatch.setHorizontalAlignment(JLabel.CENTER);
        timeThread.start();
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
        setSize(300, 200);
    }

    public static void main(String[] args) {
        MyStopwatchGUI program = new MyStopwatchGUI();
        program.init();
    }
}
