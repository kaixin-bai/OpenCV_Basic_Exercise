//---------------------------------【头文件、命名空间包含部分】---------------------------
//          描述：包含程序所使用的头文件和命名空间
//-----------------------------------------------------------------------------------------------
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
using namespace cv;


//--------------------------------------【main( )函数】-----------------------------------------
//          描述：控制台应用程序的入口函数，我们的程序从这里开始执行
//-----------------------------------------------------------------------------------------------
int main( )
{
	// 【1】加载源图像
	Mat srcImage, dstImage;
	srcImage = imread( "D:\\C++程序联系文件夹（可选择性删除）\\OpenCV_Exercise\\lena_src.png", 1 );
	if(!srcImage.data ) { printf("读取图片错误，请确定目录下是否有imread函数指定图片存在~！ \n"); return false; } 

	// 【2】转为灰度图并显示出来
	cvtColor( srcImage, srcImage, CV_BGR2GRAY );
	imshow( "原始图", srcImage );

	// 【3】进行直方图均衡化
	equalizeHist( srcImage, dstImage );

	// 【4】显示结果
	imshow( "经过直方图均衡化后的图", dstImage );

	// 等待用户按键退出程序
	waitKey(0);
	return 0;

}