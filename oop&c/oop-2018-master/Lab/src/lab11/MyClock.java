package lab11;

import java.util.Calendar;
import java.awt.Font;
import javax.swing.*;

public class MyClock extends JLabel implements Runnable {
    private Calendar d;
    private int sec;
    private int min;
    private int hour;

    public MyClock() {
        setFont(new Font("Arial", Font.PLAIN, 24));
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

    @Override
    public void run() {
        while (true) {
            d = Calendar.getInstance();
            setSec(d.get(Calendar.SECOND));
            setMin(d.get(Calendar.MINUTE));
            setHour(d.get(Calendar.HOUR_OF_DAY));
            setText(this.hour + ":" + this.min + ":" + this.sec);

            try {
                Thread.sleep(1000);
            } catch (InterruptedException ex) {
                ex.printStackTrace();
            }
        }
    }
}

class MyClockGUI extends JFrame {
    private MyClock clock;

    public MyClockGUI() {
        clock = new MyClock();
    }

    public void init() {
        Thread timeThread = new Thread(clock);
        add(clock);
        clock.setHorizontalAlignment(JLabel.CENTER);
        timeThread.start();
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
        setSize(300, 200);
    }

    public static void main(String[] args) {
        MyClockGUI program = new MyClockGUI();
        program.init();
    }
}
