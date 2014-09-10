#ifndef DRAW_CHEAPTITLE_H
#define DRAW_CHEAPTITLE_H
inline int cairo_code_draw_cheapTitle_get_width() { return 252; }
inline int cairo_code_draw_cheapTitle_get_height() { return 54; }
inline void cairo_code_draw_cheapTitle_render(cairo_t *cr) {
cairo_surface_t *temp_surface;
cairo_t *old_cr;
cairo_pattern_t *pattern;
cairo_matrix_t matrix;

cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 15.898438, 0.0195312);
cairo_line_to(cr, 18.398438, 0);
cairo_line_to(cr, 18.398438, 5.019531);
cairo_line_to(cr, 20.898438, 5.019531);
cairo_line_to(cr, 20.898438, 7.519531);
cairo_line_to(cr, 18.398438, 7.519531);
cairo_line_to(cr, 18.398438, 15.019531);
cairo_line_to(cr, 15.898438, 15.019531);
cairo_line_to(cr, 15.898438, 7.519531);
cairo_line_to(cr, 13.398438, 7.519531);
cairo_line_to(cr, 13.398438, 5.019531);
cairo_line_to(cr, 15.898438, 5.019531);
cairo_line_to(cr, 15.898438, 0.0195312);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 23.398438, 0.0195312);
cairo_line_to(cr, 25.898438, 0);
cairo_line_to(cr, 25.898438, 5.019531);
cairo_line_to(cr, 28.398438, 5.019531);
cairo_line_to(cr, 28.398438, 7.519531);
cairo_line_to(cr, 30.898438, 7.519531);
cairo_line_to(cr, 30.898438, 15.019531);
cairo_line_to(cr, 28.398438, 15.019531);
cairo_line_to(cr, 28.398438, 7.519531);
cairo_line_to(cr, 25.898438, 7.519531);
cairo_line_to(cr, 25.898438, 15.019531);
cairo_line_to(cr, 23.398438, 15.019531);
cairo_line_to(cr, 23.398438, 0.0195312);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 35.898438, 2.519531);
cairo_line_to(cr, 38.417969, 2.519531);
cairo_line_to(cr, 38.398438, 5.019531);
cairo_line_to(cr, 35.898438, 5.019531);
cairo_line_to(cr, 35.898438, 2.519531);
cairo_move_to(cr, 33.398438, 5.019531);
cairo_line_to(cr, 35.898438, 5.019531);
cairo_line_to(cr, 35.898438, 7.519531);
cairo_line_to(cr, 38.398438, 7.519531);
cairo_line_to(cr, 38.398438, 5.019531);
cairo_line_to(cr, 40.898438, 5.019531);
cairo_line_to(cr, 40.898438, 10.019531);
cairo_line_to(cr, 35.898438, 10.019531);
cairo_line_to(cr, 35.898438, 12.519531);
cairo_line_to(cr, 40.898438, 12.519531);
cairo_line_to(cr, 40.898438, 15.019531);
cairo_line_to(cr, 35.898438, 15.019531);
cairo_line_to(cr, 35.898438, 12.519531);
cairo_line_to(cr, 33.398438, 12.519531);
cairo_line_to(cr, 33.398438, 5.019531);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 55.898438, 0.0195312);
cairo_line_to(cr, 58.417969, 0);
cairo_line_to(cr, 58.398438, 2.519531);
cairo_line_to(cr, 55.898438, 2.519531);
cairo_line_to(cr, 55.898438, 0.0195312);
cairo_move_to(cr, 53.398438, 5.019531);
cairo_line_to(cr, 58.398438, 5.019531);
cairo_line_to(cr, 58.398438, 12.519531);
cairo_line_to(cr, 60.898438, 12.519531);
cairo_line_to(cr, 60.898438, 15.019531);
cairo_line_to(cr, 53.398438, 15.019531);
cairo_line_to(cr, 53.398438, 12.519531);
cairo_line_to(cr, 55.898438, 12.519531);
cairo_line_to(cr, 55.898438, 7.519531);
cairo_line_to(cr, 53.398438, 7.519531);
cairo_line_to(cr, 53.398438, 5.019531);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 63.398438, 2.519531);
cairo_line_to(cr, 68.398438, 2.519531);
cairo_line_to(cr, 68.398438, 5.019531);
cairo_line_to(cr, 70.898438, 5.019531);
cairo_line_to(cr, 70.898438, 15.019531);
cairo_line_to(cr, 68.398438, 15.019531);
cairo_line_to(cr, 68.398438, 5.019531);
cairo_line_to(cr, 65.898438, 5.019531);
cairo_line_to(cr, 65.898438, 15.019531);
cairo_line_to(cr, 63.398438, 15.019531);
cairo_line_to(cr, 63.398438, 2.519531);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 78.398438, 0.0195312);
cairo_line_to(cr, 80.898438, 0);
cairo_line_to(cr, 80.898438, 2.519531);
cairo_line_to(cr, 78.398438, 2.519531);
cairo_line_to(cr, 78.398438, 0.0195312);
cairo_move_to(cr, 75.898438, 2.519531);
cairo_line_to(cr, 78.398438, 2.519531);
cairo_line_to(cr, 78.398438, 5.019531);
cairo_line_to(cr, 80.898438, 5.019531);
cairo_line_to(cr, 80.898438, 7.519531);
cairo_line_to(cr, 78.398438, 7.519531);
cairo_line_to(cr, 78.398438, 15.019531);
cairo_line_to(cr, 75.898438, 15.019531);
cairo_line_to(cr, 75.898438, 7.519531);
cairo_line_to(cr, 73.398438, 7.519531);
cairo_line_to(cr, 73.398438, 5.019531);
cairo_line_to(cr, 75.898438, 5.019531);
cairo_line_to(cr, 75.898438, 2.519531);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 88.417969, 12.519531);
cairo_line_to(cr, 88.417969, 10);
cairo_line_to(cr, 85.898438, 10.019531);
cairo_line_to(cr, 85.898438, 12.519531);
cairo_line_to(cr, 88.417969, 12.519531);
cairo_move_to(cr, 83.398438, 2.519531);
cairo_line_to(cr, 88.398438, 2.519531);
cairo_line_to(cr, 88.398438, 5.019531);
cairo_line_to(cr, 90.898438, 5.019531);
cairo_line_to(cr, 90.898438, 15.019531);
cairo_line_to(cr, 85.898438, 15.019531);
cairo_line_to(cr, 85.898438, 12.519531);
cairo_line_to(cr, 83.398438, 12.519531);
cairo_line_to(cr, 83.398438, 10.019531);
cairo_line_to(cr, 85.898438, 10.019531);
cairo_line_to(cr, 85.898438, 7.519531);
cairo_line_to(cr, 88.398438, 7.519531);
cairo_line_to(cr, 88.398438, 5.019531);
cairo_line_to(cr, 83.398438, 5.019531);
cairo_line_to(cr, 83.398438, 2.519531);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 93.398438, 2.519531);
cairo_line_to(cr, 95.898438, 2.519531);
cairo_line_to(cr, 95.898438, 5.019531);
cairo_line_to(cr, 98.398438, 5.019531);
cairo_line_to(cr, 98.398438, 2.519531);
cairo_line_to(cr, 100.898438, 2.519531);
cairo_line_to(cr, 100.898438, 15.019531);
cairo_line_to(cr, 98.398438, 15.019531);
cairo_line_to(cr, 98.398438, 7.519531);
cairo_line_to(cr, 95.898438, 7.519531);
cairo_line_to(cr, 95.898438, 15.019531);
cairo_line_to(cr, 93.398438, 15.019531);
cairo_line_to(cr, 93.398438, 2.519531);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 105.898438, 2.519531);
cairo_line_to(cr, 108.417969, 2.519531);
cairo_line_to(cr, 108.398438, 5.019531);
cairo_line_to(cr, 105.898438, 5.019531);
cairo_line_to(cr, 105.898438, 2.519531);
cairo_move_to(cr, 103.398438, 5.019531);
cairo_line_to(cr, 105.898438, 5.019531);
cairo_line_to(cr, 105.898438, 12.519531);
cairo_line_to(cr, 103.398438, 12.519531);
cairo_line_to(cr, 103.398438, 5.019531);
cairo_move_to(cr, 108.398438, 5.019531);
cairo_line_to(cr, 110.898438, 5.039062);
cairo_line_to(cr, 110.898438, 12.519531);
cairo_line_to(cr, 108.398438, 12.519531);
cairo_line_to(cr, 108.398438, 5.019531);
cairo_move_to(cr, 105.898438, 12.519531);
cairo_line_to(cr, 108.398438, 12.519531);
cairo_line_to(cr, 108.398438, 15.019531);
cairo_line_to(cr, 105.898438, 15.019531);
cairo_line_to(cr, 105.898438, 12.519531);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 113.398438, 2.519531);
cairo_line_to(cr, 115.898438, 2.519531);
cairo_line_to(cr, 115.898438, 12.519531);
cairo_line_to(cr, 118.398438, 12.519531);
cairo_line_to(cr, 118.398438, 2.519531);
cairo_line_to(cr, 120.898438, 2.519531);
cairo_line_to(cr, 120.898438, 15.019531);
cairo_line_to(cr, 113.398438, 15.019531);
cairo_line_to(cr, 113.398438, 2.519531);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 125.898438, 2.519531);
cairo_line_to(cr, 130.898438, 2.519531);
cairo_line_to(cr, 130.898438, 5.019531);
cairo_line_to(cr, 123.398438, 5.019531);
cairo_line_to(cr, 125.898438, 5.039062);
cairo_line_to(cr, 125.898438, 2.519531);
cairo_move_to(cr, 123.398438, 5.019531);
cairo_line_to(cr, 125.898438, 5.039062);
cairo_line_to(cr, 125.898438, 7.519531);
cairo_line_to(cr, 123.398438, 7.519531);
cairo_line_to(cr, 123.398438, 5.019531);
cairo_move_to(cr, 125.898438, 7.519531);
cairo_line_to(cr, 128.417969, 7.519531);
cairo_line_to(cr, 128.398438, 10.019531);
cairo_line_to(cr, 125.898438, 10.019531);
cairo_line_to(cr, 125.898438, 7.519531);
cairo_move_to(cr, 128.398438, 10.019531);
cairo_line_to(cr, 130.898438, 10);
cairo_line_to(cr, 130.898438, 12.519531);
cairo_line_to(cr, 128.417969, 12.519531);
cairo_line_to(cr, 128.398438, 10.019531);
cairo_move_to(cr, 123.398438, 12.519531);
cairo_line_to(cr, 130.898438, 12.519531);
cairo_line_to(cr, 128.417969, 12.519531);
cairo_line_to(cr, 128.398438, 15.019531);
cairo_line_to(cr, 123.398438, 15.019531);
cairo_line_to(cr, 123.398438, 12.519531);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 4, 30.113281);
cairo_line_to(cr, 12, 30.113281);
cairo_line_to(cr, 12, 34.113281);
cairo_line_to(cr, 4, 34.113281);
cairo_line_to(cr, 4, 30.113281);
cairo_move_to(cr, 0, 34.113281);
cairo_line_to(cr, 4, 34.113281);
cairo_line_to(cr, 4, 46.113281);
cairo_line_to(cr, 0, 46.113281);
cairo_line_to(cr, 0, 34.113281);
cairo_move_to(cr, 4, 46.113281);
cairo_line_to(cr, 12, 46.113281);
cairo_line_to(cr, 12, 50.113281);
cairo_line_to(cr, 4, 50.113281);
cairo_line_to(cr, 4, 46.113281);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 16, 26.113281);
cairo_line_to(cr, 20, 26.078125);
cairo_line_to(cr, 20, 34.113281);
cairo_line_to(cr, 24, 34.113281);
cairo_line_to(cr, 24, 38.113281);
cairo_line_to(cr, 28, 38.113281);
cairo_line_to(cr, 28, 50.113281);
cairo_line_to(cr, 24, 50.113281);
cairo_line_to(cr, 24, 38.113281);
cairo_line_to(cr, 20, 38.113281);
cairo_line_to(cr, 20, 50.113281);
cairo_line_to(cr, 16, 50.113281);
cairo_line_to(cr, 16, 26.113281);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 36, 30.113281);
cairo_line_to(cr, 40.03125, 30.113281);
cairo_line_to(cr, 40, 34.113281);
cairo_line_to(cr, 36, 34.113281);
cairo_line_to(cr, 36, 30.113281);
cairo_move_to(cr, 32, 34.113281);
cairo_line_to(cr, 36, 34.113281);
cairo_line_to(cr, 36, 38.113281);
cairo_line_to(cr, 40, 38.113281);
cairo_line_to(cr, 40, 34.113281);
cairo_line_to(cr, 44, 34.113281);
cairo_line_to(cr, 44, 42.113281);
cairo_line_to(cr, 36, 42.113281);
cairo_line_to(cr, 36, 46.113281);
cairo_line_to(cr, 44, 46.113281);
cairo_line_to(cr, 44, 50.113281);
cairo_line_to(cr, 36, 50.113281);
cairo_line_to(cr, 36, 46.113281);
cairo_line_to(cr, 32, 46.113281);
cairo_line_to(cr, 32, 34.113281);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 56.03125, 46.113281);
cairo_line_to(cr, 56.03125, 42.078125);
cairo_line_to(cr, 52, 42.113281);
cairo_line_to(cr, 52, 46.113281);
cairo_line_to(cr, 56.03125, 46.113281);
cairo_move_to(cr, 48, 30.113281);
cairo_line_to(cr, 56, 30.113281);
cairo_line_to(cr, 56, 34.113281);
cairo_line_to(cr, 60, 34.113281);
cairo_line_to(cr, 60, 50.113281);
cairo_line_to(cr, 52, 50.113281);
cairo_line_to(cr, 52, 46.113281);
cairo_line_to(cr, 48, 46.113281);
cairo_line_to(cr, 48, 42.113281);
cairo_line_to(cr, 52, 42.113281);
cairo_line_to(cr, 52, 38.113281);
cairo_line_to(cr, 56, 38.113281);
cairo_line_to(cr, 56, 34.113281);
cairo_line_to(cr, 48, 34.113281);
cairo_line_to(cr, 48, 30.113281);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 68, 34.144531);
cairo_line_to(cr, 68, 34.144531);
cairo_move_to(cr, 68, 42.078125);
cairo_line_to(cr, 68, 34.144531);
cairo_line_to(cr, 68, 42.078125);
cairo_move_to(cr, 64, 30.113281);
cairo_line_to(cr, 72, 30.113281);
cairo_line_to(cr, 72.03125, 34.144531);
cairo_line_to(cr, 68, 34.144531);
cairo_line_to(cr, 68, 42.078125);
cairo_line_to(cr, 72, 42.113281);
cairo_line_to(cr, 72.03125, 34.144531);
cairo_line_to(cr, 76, 34.113281);
cairo_line_to(cr, 76, 42.113281);
cairo_line_to(cr, 72, 42.113281);
cairo_line_to(cr, 72, 46.113281);
cairo_line_to(cr, 68, 46.113281);
cairo_line_to(cr, 68, 54.113281);
cairo_line_to(cr, 64, 54.113281);
cairo_line_to(cr, 64, 30.113281);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 104, 26.113281);
cairo_line_to(cr, 108, 26.113281);
cairo_line_to(cr, 108, 50.113281);
cairo_line_to(cr, 100, 50.113281);
cairo_line_to(cr, 100, 46.113281);
cairo_line_to(cr, 104, 46.113281);
cairo_line_to(cr, 104, 38.113281);
cairo_line_to(cr, 100, 38.113281);
cairo_line_to(cr, 100, 34.113281);
cairo_line_to(cr, 104, 34.113281);
cairo_line_to(cr, 104, 26.113281);
cairo_move_to(cr, 96, 38.113281);
cairo_line_to(cr, 100, 38.113281);
cairo_line_to(cr, 100, 46.113281);
cairo_line_to(cr, 96, 46.113281);
cairo_line_to(cr, 96, 38.113281);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 116, 26.113281);
cairo_line_to(cr, 120.03125, 26.078125);
cairo_line_to(cr, 120, 30.113281);
cairo_line_to(cr, 116, 30.113281);
cairo_line_to(cr, 116, 26.113281);
cairo_move_to(cr, 112, 34.113281);
cairo_line_to(cr, 120, 34.113281);
cairo_line_to(cr, 120, 46.113281);
cairo_line_to(cr, 124, 46.113281);
cairo_line_to(cr, 124, 50.113281);
cairo_line_to(cr, 112, 50.113281);
cairo_line_to(cr, 112, 46.113281);
cairo_line_to(cr, 116, 46.113281);
cairo_line_to(cr, 116, 38.113281);
cairo_line_to(cr, 112, 38.113281);
cairo_line_to(cr, 112, 34.113281);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 132, 30.113281);
cairo_line_to(cr, 140, 30.113281);
cairo_line_to(cr, 140, 34.113281);
cairo_line_to(cr, 128, 34.113281);
cairo_line_to(cr, 132, 34.144531);
cairo_line_to(cr, 132, 30.113281);
cairo_move_to(cr, 128, 34.113281);
cairo_line_to(cr, 132, 34.144531);
cairo_line_to(cr, 132, 38.113281);
cairo_line_to(cr, 128, 38.113281);
cairo_line_to(cr, 128, 34.113281);
cairo_move_to(cr, 132, 38.113281);
cairo_line_to(cr, 136.03125, 38.113281);
cairo_line_to(cr, 136, 42.113281);
cairo_line_to(cr, 132, 42.113281);
cairo_line_to(cr, 132, 38.113281);
cairo_move_to(cr, 136, 42.113281);
cairo_line_to(cr, 140, 42.078125);
cairo_line_to(cr, 140, 46.113281);
cairo_line_to(cr, 136.03125, 46.113281);
cairo_line_to(cr, 136, 42.113281);
cairo_move_to(cr, 128, 46.113281);
cairo_line_to(cr, 140, 46.113281);
cairo_line_to(cr, 136.03125, 46.113281);
cairo_line_to(cr, 136, 50.113281);
cairo_line_to(cr, 128, 50.113281);
cairo_line_to(cr, 128, 46.113281);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 148, 26.113281);
cairo_line_to(cr, 152, 26.078125);
cairo_line_to(cr, 152, 34.113281);
cairo_line_to(cr, 156, 34.113281);
cairo_line_to(cr, 156, 38.113281);
cairo_line_to(cr, 152, 38.113281);
cairo_line_to(cr, 152, 50.113281);
cairo_line_to(cr, 148, 50.113281);
cairo_line_to(cr, 148, 38.113281);
cairo_line_to(cr, 144, 38.113281);
cairo_line_to(cr, 144, 34.113281);
cairo_line_to(cr, 148, 34.113281);
cairo_line_to(cr, 148, 26.113281);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 164, 30.113281);
cairo_line_to(cr, 168.03125, 30.113281);
cairo_line_to(cr, 168, 34.113281);
cairo_line_to(cr, 164, 34.113281);
cairo_line_to(cr, 164, 30.113281);
cairo_move_to(cr, 160, 34.113281);
cairo_line_to(cr, 164, 34.113281);
cairo_line_to(cr, 164, 46.113281);
cairo_line_to(cr, 160, 46.113281);
cairo_line_to(cr, 160, 34.113281);
cairo_move_to(cr, 168, 34.113281);
cairo_line_to(cr, 172, 34.144531);
cairo_line_to(cr, 172, 46.113281);
cairo_line_to(cr, 168, 46.113281);
cairo_line_to(cr, 168, 34.113281);
cairo_move_to(cr, 164, 46.113281);
cairo_line_to(cr, 168, 46.113281);
cairo_line_to(cr, 168, 50.113281);
cairo_line_to(cr, 164, 50.113281);
cairo_line_to(cr, 164, 46.113281);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 180, 30.113281);
cairo_line_to(cr, 188, 30.113281);
cairo_line_to(cr, 188, 34.113281);
cairo_line_to(cr, 180, 34.113281);
cairo_line_to(cr, 180, 30.113281);
cairo_move_to(cr, 176, 34.113281);
cairo_line_to(cr, 180, 34.113281);
cairo_line_to(cr, 180, 30.113281);
cairo_line_to(cr, 180, 50.113281);
cairo_line_to(cr, 176, 50.113281);
cairo_line_to(cr, 176, 34.113281);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 196, 26.113281);
cairo_line_to(cr, 200, 26.078125);
cairo_line_to(cr, 200, 34.113281);
cairo_line_to(cr, 204, 34.113281);
cairo_line_to(cr, 204, 38.113281);
cairo_line_to(cr, 200, 38.113281);
cairo_line_to(cr, 200, 50.113281);
cairo_line_to(cr, 196, 50.113281);
cairo_line_to(cr, 196, 38.113281);
cairo_line_to(cr, 192, 38.113281);
cairo_line_to(cr, 192, 34.113281);
cairo_line_to(cr, 196, 34.113281);
cairo_line_to(cr, 196, 26.113281);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 212, 26.113281);
cairo_line_to(cr, 216.03125, 26.078125);
cairo_line_to(cr, 216, 30.113281);
cairo_line_to(cr, 212, 30.113281);
cairo_line_to(cr, 212, 26.113281);
cairo_move_to(cr, 208, 34.113281);
cairo_line_to(cr, 216, 34.113281);
cairo_line_to(cr, 216, 46.113281);
cairo_line_to(cr, 220, 46.113281);
cairo_line_to(cr, 220, 50.113281);
cairo_line_to(cr, 208, 50.113281);
cairo_line_to(cr, 208, 46.113281);
cairo_line_to(cr, 212, 46.113281);
cairo_line_to(cr, 212, 38.113281);
cairo_line_to(cr, 208, 38.113281);
cairo_line_to(cr, 208, 34.113281);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 228, 30.113281);
cairo_line_to(cr, 232.03125, 30.113281);
cairo_line_to(cr, 232, 34.113281);
cairo_line_to(cr, 228, 34.113281);
cairo_line_to(cr, 228, 30.113281);
cairo_move_to(cr, 224, 34.113281);
cairo_line_to(cr, 228, 34.113281);
cairo_line_to(cr, 228, 46.113281);
cairo_line_to(cr, 224, 46.113281);
cairo_line_to(cr, 224, 34.113281);
cairo_move_to(cr, 232, 34.113281);
cairo_line_to(cr, 236, 34.144531);
cairo_line_to(cr, 236, 46.113281);
cairo_line_to(cr, 232, 46.113281);
cairo_line_to(cr, 232, 34.113281);
cairo_move_to(cr, 228, 46.113281);
cairo_line_to(cr, 232, 46.113281);
cairo_line_to(cr, 232, 50.113281);
cairo_line_to(cr, 228, 50.113281);
cairo_line_to(cr, 228, 46.113281);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 240, 30.113281);
cairo_line_to(cr, 248, 30.113281);
cairo_line_to(cr, 248, 34.113281);
cairo_line_to(cr, 252, 34.113281);
cairo_line_to(cr, 252, 50.113281);
cairo_line_to(cr, 248, 50.113281);
cairo_line_to(cr, 248, 34.113281);
cairo_line_to(cr, 244, 34.113281);
cairo_line_to(cr, 244, 50.113281);
cairo_line_to(cr, 240, 50.113281);
cairo_line_to(cr, 240, 30.113281);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
}
#endif
#ifndef DRAW_CHEAPAGGRESSION_H
#define DRAW_CHEAPAGGRESSION_H
inline int cairo_code_draw_cheapAggression_get_width() { return 98; }
inline int cairo_code_draw_cheapAggression_get_height() { return 18; }
inline void cairo_code_draw_cheapAggression_render(cairo_t *cr) {
cairo_surface_t *temp_surface;
cairo_t *old_cr;
cairo_pattern_t *pattern;
cairo_matrix_t matrix;

cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 5.019531, 12.519531);
cairo_line_to(cr, 5.019531, 10);
cairo_line_to(cr, 2.5, 10.019531);
cairo_line_to(cr, 2.5, 12.519531);
cairo_line_to(cr, 5.019531, 12.519531);
cairo_move_to(cr, 0, 2.519531);
cairo_line_to(cr, 5, 2.519531);
cairo_line_to(cr, 5, 5.019531);
cairo_line_to(cr, 7.5, 5.019531);
cairo_line_to(cr, 7.5, 15.019531);
cairo_line_to(cr, 2.5, 15.019531);
cairo_line_to(cr, 2.5, 12.519531);
cairo_line_to(cr, 0, 12.519531);
cairo_line_to(cr, 0, 10.019531);
cairo_line_to(cr, 2.5, 10.019531);
cairo_line_to(cr, 2.5, 7.519531);
cairo_line_to(cr, 5, 7.519531);
cairo_line_to(cr, 5, 5.019531);
cairo_line_to(cr, 0, 5.019531);
cairo_line_to(cr, 0, 2.519531);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 12.5, 2.519531);
cairo_line_to(cr, 17.5, 2.519531);
cairo_line_to(cr, 17.5, 15.019531);
cairo_line_to(cr, 15, 15.019531);
cairo_line_to(cr, 15, 12.519531);
cairo_line_to(cr, 12.5, 12.519531);
cairo_line_to(cr, 12.5, 10.019531);
cairo_line_to(cr, 15, 10.019531);
cairo_line_to(cr, 15, 5.019531);
cairo_line_to(cr, 12.5, 5.019531);
cairo_line_to(cr, 12.5, 2.519531);
cairo_move_to(cr, 10, 5.019531);
cairo_line_to(cr, 12.5, 5.019531);
cairo_line_to(cr, 12.5, 10.019531);
cairo_line_to(cr, 10, 10.019531);
cairo_line_to(cr, 10, 5.019531);
cairo_move_to(cr, 10, 15.019531);
cairo_line_to(cr, 15, 15.019531);
cairo_line_to(cr, 15, 17.519531);
cairo_line_to(cr, 10, 17.519531);
cairo_line_to(cr, 10, 15.019531);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 22.5, 2.519531);
cairo_line_to(cr, 27.5, 2.519531);
cairo_line_to(cr, 27.5, 15.019531);
cairo_line_to(cr, 25, 15.019531);
cairo_line_to(cr, 25, 12.519531);
cairo_line_to(cr, 22.5, 12.519531);
cairo_line_to(cr, 22.5, 10.019531);
cairo_line_to(cr, 25, 10.019531);
cairo_line_to(cr, 25, 5.019531);
cairo_line_to(cr, 22.5, 5.019531);
cairo_line_to(cr, 22.5, 2.519531);
cairo_move_to(cr, 20, 5.019531);
cairo_line_to(cr, 22.5, 5.019531);
cairo_line_to(cr, 22.5, 10.019531);
cairo_line_to(cr, 20, 10.019531);
cairo_line_to(cr, 20, 5.019531);
cairo_move_to(cr, 20, 15.019531);
cairo_line_to(cr, 25, 15.019531);
cairo_line_to(cr, 25, 17.519531);
cairo_line_to(cr, 20, 17.519531);
cairo_line_to(cr, 20, 15.019531);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 32.5, 2.519531);
cairo_line_to(cr, 37.5, 2.519531);
cairo_line_to(cr, 37.5, 5.019531);
cairo_line_to(cr, 32.5, 5.019531);
cairo_line_to(cr, 32.5, 2.519531);
cairo_move_to(cr, 30, 5.019531);
cairo_line_to(cr, 32.5, 5.019531);
cairo_line_to(cr, 32.5, 2.519531);
cairo_line_to(cr, 32.5, 15.019531);
cairo_line_to(cr, 30, 15.019531);
cairo_line_to(cr, 30, 5.019531);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 42.5, 2.519531);
cairo_line_to(cr, 45.019531, 2.519531);
cairo_line_to(cr, 45, 5.019531);
cairo_line_to(cr, 42.5, 5.019531);
cairo_line_to(cr, 42.5, 2.519531);
cairo_move_to(cr, 40, 5.019531);
cairo_line_to(cr, 42.5, 5.019531);
cairo_line_to(cr, 42.5, 7.519531);
cairo_line_to(cr, 45, 7.519531);
cairo_line_to(cr, 45, 5.019531);
cairo_line_to(cr, 47.5, 5.019531);
cairo_line_to(cr, 47.5, 10.019531);
cairo_line_to(cr, 42.5, 10.019531);
cairo_line_to(cr, 42.5, 12.519531);
cairo_line_to(cr, 47.5, 12.519531);
cairo_line_to(cr, 47.5, 15.019531);
cairo_line_to(cr, 42.5, 15.019531);
cairo_line_to(cr, 42.5, 12.519531);
cairo_line_to(cr, 40, 12.519531);
cairo_line_to(cr, 40, 5.019531);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 52.5, 2.519531);
cairo_line_to(cr, 57.5, 2.519531);
cairo_line_to(cr, 57.5, 5.019531);
cairo_line_to(cr, 50, 5.019531);
cairo_line_to(cr, 52.5, 5.039062);
cairo_line_to(cr, 52.5, 2.519531);
cairo_move_to(cr, 50, 5.019531);
cairo_line_to(cr, 52.5, 5.039062);
cairo_line_to(cr, 52.5, 7.519531);
cairo_line_to(cr, 50, 7.519531);
cairo_line_to(cr, 50, 5.019531);
cairo_move_to(cr, 52.5, 7.519531);
cairo_line_to(cr, 55.019531, 7.519531);
cairo_line_to(cr, 55, 10.019531);
cairo_line_to(cr, 52.5, 10.019531);
cairo_line_to(cr, 52.5, 7.519531);
cairo_move_to(cr, 55, 10.019531);
cairo_line_to(cr, 57.5, 10);
cairo_line_to(cr, 57.5, 12.519531);
cairo_line_to(cr, 55.019531, 12.519531);
cairo_line_to(cr, 55, 10.019531);
cairo_move_to(cr, 50, 12.519531);
cairo_line_to(cr, 57.5, 12.519531);
cairo_line_to(cr, 55.019531, 12.519531);
cairo_line_to(cr, 55, 15.019531);
cairo_line_to(cr, 50, 15.019531);
cairo_line_to(cr, 50, 12.519531);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 62.5, 2.519531);
cairo_line_to(cr, 67.5, 2.519531);
cairo_line_to(cr, 67.5, 5.019531);
cairo_line_to(cr, 60, 5.019531);
cairo_line_to(cr, 62.5, 5.039062);
cairo_line_to(cr, 62.5, 2.519531);
cairo_move_to(cr, 60, 5.019531);
cairo_line_to(cr, 62.5, 5.039062);
cairo_line_to(cr, 62.5, 7.519531);
cairo_line_to(cr, 60, 7.519531);
cairo_line_to(cr, 60, 5.019531);
cairo_move_to(cr, 62.5, 7.519531);
cairo_line_to(cr, 65.019531, 7.519531);
cairo_line_to(cr, 65, 10.019531);
cairo_line_to(cr, 62.5, 10.019531);
cairo_line_to(cr, 62.5, 7.519531);
cairo_move_to(cr, 65, 10.019531);
cairo_line_to(cr, 67.5, 10);
cairo_line_to(cr, 67.5, 12.519531);
cairo_line_to(cr, 65.019531, 12.519531);
cairo_line_to(cr, 65, 10.019531);
cairo_move_to(cr, 60, 12.519531);
cairo_line_to(cr, 67.5, 12.519531);
cairo_line_to(cr, 65.019531, 12.519531);
cairo_line_to(cr, 65, 15.019531);
cairo_line_to(cr, 60, 15.019531);
cairo_line_to(cr, 60, 12.519531);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 72.5, 0.0195312);
cairo_line_to(cr, 75.019531, 0);
cairo_line_to(cr, 75, 2.519531);
cairo_line_to(cr, 72.5, 2.519531);
cairo_line_to(cr, 72.5, 0.0195312);
cairo_move_to(cr, 70, 5.019531);
cairo_line_to(cr, 75, 5.019531);
cairo_line_to(cr, 75, 12.519531);
cairo_line_to(cr, 77.5, 12.519531);
cairo_line_to(cr, 77.5, 15.019531);
cairo_line_to(cr, 70, 15.019531);
cairo_line_to(cr, 70, 12.519531);
cairo_line_to(cr, 72.5, 12.519531);
cairo_line_to(cr, 72.5, 7.519531);
cairo_line_to(cr, 70, 7.519531);
cairo_line_to(cr, 70, 5.019531);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 82.5, 2.519531);
cairo_line_to(cr, 85.019531, 2.519531);
cairo_line_to(cr, 85, 5.019531);
cairo_line_to(cr, 82.5, 5.019531);
cairo_line_to(cr, 82.5, 2.519531);
cairo_move_to(cr, 80, 5.019531);
cairo_line_to(cr, 82.5, 5.019531);
cairo_line_to(cr, 82.5, 12.519531);
cairo_line_to(cr, 80, 12.519531);
cairo_line_to(cr, 80, 5.019531);
cairo_move_to(cr, 85, 5.019531);
cairo_line_to(cr, 87.5, 5.039062);
cairo_line_to(cr, 87.5, 12.519531);
cairo_line_to(cr, 85, 12.519531);
cairo_line_to(cr, 85, 5.019531);
cairo_move_to(cr, 82.5, 12.519531);
cairo_line_to(cr, 85, 12.519531);
cairo_line_to(cr, 85, 15.019531);
cairo_line_to(cr, 82.5, 15.019531);
cairo_line_to(cr, 82.5, 12.519531);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 90, 2.519531);
cairo_line_to(cr, 95, 2.519531);
cairo_line_to(cr, 95, 5.019531);
cairo_line_to(cr, 97.5, 5.019531);
cairo_line_to(cr, 97.5, 15.019531);
cairo_line_to(cr, 95, 15.019531);
cairo_line_to(cr, 95, 5.019531);
cairo_line_to(cr, 92.5, 5.019531);
cairo_line_to(cr, 92.5, 15.019531);
cairo_line_to(cr, 90, 15.019531);
cairo_line_to(cr, 90, 2.519531);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
}
#endif
