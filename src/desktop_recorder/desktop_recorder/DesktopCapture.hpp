#pragma once

class DesktopCapture {
public:
	DesktopCapture()
	{
		bitmap_ = malloc(1024 * 768 * 4);
		memset(bitmap_, 255, 1024 * 768 * 2);
		char* temp_bitmap = (char*) bitmap_;
		temp_bitmap = temp_bitmap + 1024 * 768 * 2;
		memset(temp_bitmap, 0, 1024 * 768 * 2);
	}

	void start(int left, int top, int width, int height)
	{

	}

	void* getBitmap()
	{
		return bitmap_;
	}

private:
	// TODO: �׽�Ʈ�� ���� �ӽ�
	void* bitmap_;
};
