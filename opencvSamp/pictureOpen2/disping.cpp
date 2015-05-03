

#include <cv.h>
#include <highgui.h>
#include <cstdio>

using namespace cv;
using namespace std;

	int
main(int argc, char **argv)
{

	

	if (argc < 2) {
		printf("使い方: %s 画像ファイル\n", argv[0]);
		return 1;
	}
	Mat image = imread(argv[1], CV_LOAD_IMAGE_COLOR);
	/* CV_LOAD_IMAGE_COLOR の代わりに CV_LOAD_IMAGE_GRAYSCALE を
	 * 使うと、読込んだ画像を濃淡画像に変換される。
	 * CV_LOAD_IMAGE_UNCHANGED を使うと，画像ファイルのままで読込まれる。
	 */
	if (image.data == 0) {
		printf("Failed to read image file %s\n", argv[1]);
		return 2;
	}
	namedWindow(argv[1], CV_WINDOW_AUTOSIZE);
	imshow(argv[1], image);
	waitKey(0);
	return 0;
}
// End "dspimg.cc"
