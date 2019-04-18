#pragma  once
#include "geommath.hpp"

namespace My
{
	typedef struct _Image 
	{
		uint32_t Width;
		uint32_t Height;
		R8G8B8A8Unorm* data;
		uint32_t bitcount;    //一个像素在内存上的big数
		uint32_t pitch;		  //图片一行在内存上的 bytes数
		size_t data_size;
	} Image;

	std::ostream& operator<<(std::ostream& out, const Image& image);
}