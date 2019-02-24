package com.zpq.nativebyndkbuild;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.Toast;

import com.zpq.ndkstudy.R;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Toast.makeText(this,getStringFromNative(), Toast.LENGTH_LONG).show();
        Toast.makeText(this,getString_From_c(), Toast.LENGTH_LONG).show();
    }

    static {
        System.loadLibrary("NativeByNdkBuild");//导入生成的链接库文件
    }
    public native String getStringFromNative();//本地方法
    public native String getString_From_c();
}
