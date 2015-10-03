#ifndef DRAW_LUSHGRAPHX2BOUND_H
#define DRAW_LUSHGRAPHX2BOUND_H
inline int cairo_code_draw_lushgraphx2bound_get_width() { return 23; }
inline int cairo_code_draw_lushgraphx2bound_get_height() { return 21; }
inline void cairo_code_draw_lushgraphx2bound_render(cairo_t *cr) {
cairo_surface_t *temp_surface;
cairo_t *old_cr;
cairo_pattern_t *pattern;
cairo_matrix_t matrix;

cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
cairo_set_line_width(cr, 3.318619);
cairo_set_miter_limit(cr, 4);
cairo_set_line_cap(cr, CAIRO_LINE_CAP_BUTT);
cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER);
pattern = cairo_pattern_create_rgba(1,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 1.671875, 0.00390625);
cairo_line_to(cr, 1.671875, 20.652344);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_matrix_init(&matrix, 1,0,0,1,7.3125,-18.09375);
cairo_pattern_set_matrix(pattern, &matrix);
cairo_stroke_preserve(cr);
/********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
cairo_set_line_width(cr, 3.318619);
cairo_set_miter_limit(cr, 4);
cairo_set_line_cap(cr, CAIRO_LINE_CAP_BUTT);
cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER);
pattern = cairo_pattern_create_rgba(1,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 21.671875, 0.00390625);
cairo_line_to(cr, 21.671875, 20.652344);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_matrix_init(&matrix, 1,0,0,1,7.3125,-18.09375);
cairo_pattern_set_matrix(pattern, &matrix);
cairo_stroke_preserve(cr);
/********************/
}
#endif