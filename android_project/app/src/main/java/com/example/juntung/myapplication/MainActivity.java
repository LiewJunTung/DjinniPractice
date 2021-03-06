package com.example.juntung.myapplication;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

import com.example.juntung1.Calculator;


public class MainActivity extends AppCompatActivity {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("calculator");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Example of a call to a native method
        Calculator calculator = Calculator.create();
        TextView tv = (TextView) findViewById(R.id.sample_text);
        tv.setText(calculator.multiplication(2000, 20)+"");
    }
}
