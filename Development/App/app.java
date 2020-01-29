package com.example.yrp;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    EditText input_given;

    public void converter(View view)
    {
        input_given=(EditText) findViewById(R.id.editText2);
        double num1=Double.parseDouble(input_given.getText().toString());
        double rupees = num1/71.02;
        String result=String.format("% .2f", rupees);
        Toast.makeText(this,result,Toast.LENGTH_LONG).show();
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
}
