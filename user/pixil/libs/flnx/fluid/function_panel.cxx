// generated by Fast Light User Interface Designer (fluid) version 1.00

#include "function_panel.h"

Fl_Window *function_panel=(Fl_Window *)0;

Fl_Light_Button *f_public_button=(Fl_Light_Button *)0;

Fl_Light_Button *f_c_button=(Fl_Light_Button *)0;

Fl_Input *f_name_input=(Fl_Input *)0;

Fl_Input *f_return_type_input=(Fl_Input *)0;

Fl_Return_Button *f_panel_ok=(Fl_Return_Button *)0;

Fl_Button *f_panel_cancel=(Fl_Button *)0;

Fl_Window* make_function_panel() {
  Fl_Window* w;
  { Fl_Window* o = function_panel = new Fl_Window(287, 173, "function/method");
    w = o;
    { Fl_Light_Button* o = f_public_button = new Fl_Light_Button(10, 15, 65, 25, "public");
      o->labelsize(10);
      o->when(FL_WHEN_NEVER);
    }
    { Fl_Light_Button* o = f_c_button = new Fl_Light_Button(90, 15, 90, 25, "C declaration");
      o->labelsize(10);
    }
    { Fl_Input* o = f_name_input = new Fl_Input(10, 60, 270, 25, "Name(args): (blank for main())");
      o->labelsize(12);
      o->align(FL_ALIGN_TOP_LEFT);
      o->when(FL_WHEN_NEVER);
      Fl_Group::current()->resizable(o);
    }
    { Fl_Input* o = f_return_type_input = new Fl_Input(10, 105, 270, 25, "Return Type: (blank to return outermost widget)");
      o->labelsize(12);
      o->align(FL_ALIGN_TOP_LEFT);
      o->when(FL_WHEN_NEVER);
    }
    { Fl_Return_Button* o = f_panel_ok = new Fl_Return_Button(110, 140, 80, 25, "OK");
      w->hotspot(o);
    }
    { Fl_Button* o = f_panel_cancel = new Fl_Button(200, 140, 80, 25, "Cancel");
      o->shortcut(0xff1b);
    }
    o->set_modal();
    o->end();
  }
  return w;
}

Fl_Window *code_panel=(Fl_Window *)0;

Fl_Input *code_input=(Fl_Input *)0;

Fl_Return_Button *code_panel_ok=(Fl_Return_Button *)0;

Fl_Button *code_panel_cancel=(Fl_Button *)0;

Fl_Window* make_code_panel() {
  Fl_Window* w;
  { Fl_Window* o = code_panel = new Fl_Window(291, 178, "code");
    w = o;
    { Fl_Input* o = code_input = new Fl_Input(6, 5, 280, 135);
      o->type(4);
      o->labelsize(12);
      o->align(FL_ALIGN_CENTER);
      o->when(FL_WHEN_NEVER);
      Fl_Group::current()->resizable(o);
    }
    { Fl_Return_Button* o = code_panel_ok = new Fl_Return_Button(115, 145, 80, 25, "OK");
      w->hotspot(o);
    }
    { Fl_Button* o = code_panel_cancel = new Fl_Button(205, 145, 80, 25, "Cancel");
      o->shortcut(0xff1b);
    }
    o->set_modal();
    o->end();
  }
  return w;
}

Fl_Window *codeblock_panel=(Fl_Window *)0;

Fl_Input *code_before_input=(Fl_Input *)0;

Fl_Input *code_after_input=(Fl_Input *)0;

Fl_Return_Button *codeblock_panel_ok=(Fl_Return_Button *)0;

Fl_Button *codeblock_panel_cancel=(Fl_Button *)0;

Fl_Window* make_codeblock_panel() {
  Fl_Window* w;
  { Fl_Window* o = codeblock_panel = new Fl_Window(293, 134, "codeblock");
    w = o;
    { Fl_Input* o = code_before_input = new Fl_Input(10, 5, 275, 25);
      o->labelsize(12);
      o->align(FL_ALIGN_TOP_LEFT);
      o->when(FL_WHEN_NEVER);
      Fl_Group::current()->resizable(o);
    }
    { Fl_Box* o = new Fl_Box(10, 35, 270, 25, "\"{...child code...}\" is inserted here");
      o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
    }
    { Fl_Input* o = code_after_input = new Fl_Input(10, 65, 275, 25);
      o->labelsize(12);
      o->align(FL_ALIGN_TOP_LEFT);
      o->when(FL_WHEN_NEVER);
    }
    { Fl_Return_Button* o = codeblock_panel_ok = new Fl_Return_Button(115, 100, 80, 25, "OK");
      w->hotspot(o);
    }
    { Fl_Button* o = codeblock_panel_cancel = new Fl_Button(205, 100, 80, 25, "Cancel");
      o->shortcut(0xff1b);
    }
    o->set_modal();
    o->end();
  }
  return w;
}

Fl_Window *declblock_panel=(Fl_Window *)0;

Fl_Input *decl_before_input=(Fl_Input *)0;

Fl_Input *decl_after_input=(Fl_Input *)0;

Fl_Return_Button *declblock_panel_ok=(Fl_Return_Button *)0;

Fl_Button *declblock_panel_cancel=(Fl_Button *)0;

Fl_Window* make_declblock_panel() {
  Fl_Window* w;
  { Fl_Window* o = declblock_panel = new Fl_Window(293, 134, "declaration block");
    w = o;
    { Fl_Input* o = decl_before_input = new Fl_Input(15, 10, 275, 25);
      o->labelsize(12);
      o->align(FL_ALIGN_TOP_LEFT);
      o->when(FL_WHEN_NEVER);
      Fl_Group::current()->resizable(o);
    }
    { Fl_Box* o = new Fl_Box(15, 40, 270, 25, "\"\\n...child code...\\n\" is inserted here");
      o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
    }
    { Fl_Input* o = decl_after_input = new Fl_Input(15, 70, 275, 25);
      o->labelsize(12);
      o->align(FL_ALIGN_TOP_LEFT);
      o->when(FL_WHEN_NEVER);
    }
    { Fl_Return_Button* o = declblock_panel_ok = new Fl_Return_Button(120, 105, 80, 25, "OK");
      w->hotspot(o);
    }
    { Fl_Button* o = declblock_panel_cancel = new Fl_Button(210, 105, 80, 25, "Cancel");
      o->shortcut(0xff1b);
    }
    o->set_modal();
    o->end();
  }
  return w;
}

Fl_Window *decl_panel=(Fl_Window *)0;

Fl_Light_Button *decl_public_button=(Fl_Light_Button *)0;

Fl_Input *decl_input=(Fl_Input *)0;

Fl_Return_Button *decl_panel_ok=(Fl_Return_Button *)0;

Fl_Button *decl_panel_cancel=(Fl_Button *)0;

Fl_Window* make_decl_panel() {
  Fl_Window* w;
  { Fl_Window* o = decl_panel = new Fl_Window(290, 176, "declaration");
    w = o;
    { Fl_Light_Button* o = decl_public_button = new Fl_Light_Button(10, 15, 65, 25, "public");
      o->labelsize(10);
      o->when(FL_WHEN_NEVER);
    }
    { Fl_Input* o = decl_input = new Fl_Input(10, 50, 270, 25, "can be any declartion, like \"int x;\",\nan external symbol like \"extern int\
 foo();\",\na #directive like \"#include <foo.h>\",\nor a comment like \"//foo\
\" or \"/*foo*/\",\nor typedef like \"typedef char byte;\"");
      o->labelsize(12);
      o->align(FL_ALIGN_BOTTOM_LEFT);
      o->when(FL_WHEN_NEVER);
      Fl_Group::current()->resizable(o);
    }
    { Fl_Return_Button* o = decl_panel_ok = new Fl_Return_Button(115, 145, 80, 25, "OK");
      w->hotspot(o);
    }
    { Fl_Button* o = decl_panel_cancel = new Fl_Button(205, 145, 80, 25, "Cancel");
      o->shortcut(0xff1b);
    }
    o->end();
  }
  return w;
}

Fl_Window *class_panel=(Fl_Window *)0;

Fl_Light_Button *c_public_button=(Fl_Light_Button *)0;

Fl_Input *c_name_input=(Fl_Input *)0;

Fl_Input *c_subclass_input=(Fl_Input *)0;

Fl_Return_Button *c_panel_ok=(Fl_Return_Button *)0;

Fl_Button *c_panel_cancel=(Fl_Button *)0;

Fl_Window* make_class_panel() {
  Fl_Window* w;
  { Fl_Window* o = class_panel = new Fl_Window(287, 173, "class");
    w = o;
    { Fl_Light_Button* o = c_public_button = new Fl_Light_Button(10, 10, 65, 25, "public");
      o->labelsize(10);
      o->when(FL_WHEN_NEVER);
    }
    { Fl_Input* o = c_name_input = new Fl_Input(10, 55, 270, 25, "name:");
      o->labelsize(12);
      o->align(FL_ALIGN_TOP_LEFT);
      o->when(FL_WHEN_NEVER);
      Fl_Group::current()->resizable(o);
    }
    { Fl_Input* o = c_subclass_input = new Fl_Input(10, 100, 270, 25, "subclass of (text between : and {)");
      o->labelsize(12);
      o->align(FL_ALIGN_TOP_LEFT);
      o->when(FL_WHEN_NEVER);
    }
    { Fl_Return_Button* o = c_panel_ok = new Fl_Return_Button(110, 135, 80, 25, "OK");
      w->hotspot(o);
    }
    { Fl_Button* o = c_panel_cancel = new Fl_Button(200, 135, 80, 25, "Cancel");
      o->shortcut(0xff1b);
    }
    o->set_modal();
    o->end();
  }
  return w;
}
