#pragma once
//#ifndef _INC_STRUCTURE
//#define _INC_STRUCTURE
#ifndef 计算器主窗口_H 
#define 计算器主窗口_H

#pragma execution_character_set("utf-8") //中文

//#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication.h"

#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\头文件 opcv.h>
#include  <E:\lib\头文件 qt.h>

//头文件1
#include  <E:\lib\define.cpp>
#include  <E:\lib\全局量.cpp>
#include  <E:\lib\中文关键词.cpp>
#include  <E:\lib\执行.cpp>
#include  <E:\lib\鼠标点击.cpp>
#include  <E:\lib\按键.cpp>
#include  <E:\lib\时间.cpp>
#include  <E:\lib\截图.h>
#include  <E:\lib\WIN API.cpp>
#include  <E:\lib\按键检测.cpp>
#include  <E:\lib\opencv.cpp>


#include  <E:\lib\图片识别.cpp>
#include  <E:\lib\记忆.cpp>
#include  <E:\lib\文件读写.cpp>
#include  <E:\lib\文字读取.cpp>

//头文件2
#include  <E:\lib\代码识别.cpp>
#include  <E:\lib\程序正在干什么.cpp>


class QtWidgetsApplication : public QMainWindow
{
    Q_OBJECT

public:
    QPoint m_startPoint; //窗口移动 鼠标位置
public:
    文本 文本;
public:

    string 字数;


public:
    QtWidgetsApplication(QWidget *parent = nullptr);
    ~QtWidgetsApplication();
    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);
    
    void uu_iu(); //

private:
    Ui::QtWidgetsApplicationClass ui;

public:

public:
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#endif
