
typedef struct {
  double x;
  double y;
  double z;
} vertex_t;

typedef struct {
  vertex_t vertices[3];
} face_t;

void line(bitmap_t* image, const int x0, const int y0, 
	  const int x1, const int y1,
	  const pixel_t *color);
