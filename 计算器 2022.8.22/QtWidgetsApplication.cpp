#pragma once
#ifndef 计算器主窗口_CPP
#define 计算器主窗口_CPP

#include "QtWidgetsApplication.h"
#include<opencv2/opencv.hpp>


using namespace cv;
using namespace std;

QtWidgetsApplication::QtWidgetsApplication(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    setWindowTitle("计算器 2022.9.6");

    ui.pushButton->setFont(QFont("Cascadia Code Light", 36)); //字体

    connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(uu_iu()));
    //connect(ui.pushButton, SIGNAL(clicked(bool)), this, SLOT(auto QtWidgetsApplication::输出() ));



    //ui.textEdit->setTextBackgroundColor();

	/// ///////////// void
    //Mat src = imread("C://Users//PINKIE PIE//Desktop//BaiduSyncdisk//Pinkie Pie_19164487672680784-gigapixel-scale-4x.jpg");
    //Mat img;
    //cvtColor(src, img, COLOR_BGR2RGB);
    //ui->label->setPixmap(
    //    QPixmap::fromImage(
    //        QImage(img.data, img.cols, img.rows, img.step, QImage::Format_RGB888) ));

}

QtWidgetsApplication::~QtWidgetsApplication()
{}
//------------------------------------------------------------------------------窗口移动
//mousePress Event
void QtWidgetsApplication::mousePressEvent(QMouseEvent* event)
{
    //LeftButton==
    if (event->button() == Qt::LeftButton) {
        m_startPoint = frameGeometry().topLeft() - event->globalPos(); //左上角 -> globalPos

    }
}
//窗口移动 Event
void QtWidgetsApplication::mouseMoveEvent(QMouseEvent* event)
{
    //左键 位置跟随
    this->move(event->globalPos() + m_startPoint);
}
//-----------------------------------------------------------------------------//-----------------------------------------------------------------------------
void QtWidgetsApplication::uu_iu() //auto
{
    string  输入string;
    QString 输入QString;
    //文本 文本; 
    //文本.获取字数("1212");
    输入QString = ui.textEdit->toPlainText();
    输入string = 输入QString.toStdString();
    字数 = 文本.获取字数(输入string);
    ui.label_2->setText(QString::fromStdString(字数) ); //"字数:\n" +
     ui.label_3->setText("Hello World");
    //ui.gridLayout->label->setText("Hello World");
    


}


//op打开图片("C://Users//PINKIE PIE//Desktop//BaiduSyncdisk//Pinkie Pie_19164487672680784-gigapixel-scale-4x.jpg");




#endif
