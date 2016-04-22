#include "radical.h"

radix radical(radix *data, int *err)
{
	if (data->a == 0) {
		*err = ERROR;
	}

	else {
		float d = disk(data);
			if (d < 0) {
                printf("discriminant < 0\n");
				*err = ERROR;
			}
			else {
				data->x1 = (-data->b - sqrt(d))/(2*data->a);
				data->x2 = (-data->b + sqrt(d))/(2*data->a);
				*err = NO_ERROR;
			}
	}
}
