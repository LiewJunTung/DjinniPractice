package com.example.juntung.myapplication;

import android.util.Log;

import com.example.juntung1.Calculator;

import org.junit.After;
import org.junit.Before;
import org.junit.Test;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNotNull;

/**
 * Example local unit test, which will execute on the development machine (host).
 *
 * @see <a href="http://d.android.com/tools/testing">Testing documentation</a>
 */
public class ExampleAndroidUnitTest {

    static {
        System.loadLibrary("calculator");
    }

    Calculator calculator;

    @Before
    public void setUp() throws Exception {
        if (calculator == null){
            calculator = Calculator.create();
        } else {
            Log.d("TEST", "NOT CREATED");
        }
        calculator.printAString("HELLO JT");
    }

    @After
    public void tearDown() throws Exception {
        Log.d("TEST", "END");
    }

    @Test
    public void testSummation(){
        System.out.println("TEST");
        assertEquals(40, calculator.multiplication(20, 2));
    }


    @Test
    public void testMultiplication(){
        assertEquals(60, calculator.multiplication(30, 2));
    }

    @Test
    public void testSubtraction(){

        assertEquals(100, calculator.subtraction(200, 100));
    }

    @Test
    public void testDivision(){

        assertEquals(10, calculator.division(20, 2));
    }


    @Test
    public void testDivisionByZero(){
        try {
            calculator.division(20, 0);
        } catch (Exception e){
            assertEquals("Divide by zero exception!!!", e.getMessage());
        }
    }


    @Test
    public void addition_isCorrect() throws Exception {
        assertEquals(4, 2 + 2);
    }
}