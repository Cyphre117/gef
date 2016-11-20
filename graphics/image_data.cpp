#include <graphics/image_data.h>
#include <cstdlib>

namespace gef
{
	ImageData::ImageData() :
		image_(NULL),
		clut_(NULL)
	{
	}

	ImageData::~ImageData()
	{
		if (image_)
		{			
			delete image_;
			image_ = NULL;
		}
		
		if (clut_)
		{
			delete clut_;
			clut_ = NULL;
		}
	}
}
