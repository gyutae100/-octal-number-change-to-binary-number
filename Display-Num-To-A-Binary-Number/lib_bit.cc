#include "stdafx.h"
#include "lib_bit.h"
#include "stdio.h"


/**
@return bool :  ���� �۵��� true, �ƴ� ��� false

@param src_num : 2�� ���̳ʸ��� ��� �� ��

@brief 10���� ���� 2���� ��Ʈ ������ ����Ѵ�.

@todo ���� ó�� �̿�
*/
bool DisplayNumToBit(unsigned int src_num) {

	//�ش� �ڷ����� ��Ʈ ���� ���ϱ�
	unsigned int cnt_bit = sizeof(src_num) * 8;

	//��Ʈ MSB������ ����
	unsigned int bit_offset = 1 << (cnt_bit-1);

	//��� ��Ʈ ����ũ ��Ʈ ����
	unsigned int total_cnt_bit = cnt_bit;
	
	//MSB ���� ���������� �ݺ�
	for (int i = 1 ; i <= total_cnt_bit ; i++) {

		//��Ʈ ����ũ ����
		if (src_num & bit_offset) {

			putchar('1');
		}
		else {

			putchar('0');
		}

		//8��Ʈ ������ ���� ���� ���!
		if (0 == (i % 8)) {

			putchar(' ');
		}

		bit_offset = bit_offset >> 1;
	}

	putchar('\n');

	return true;
}





