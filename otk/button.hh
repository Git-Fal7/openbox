#ifndef __button_hh
#define __button_hh

#include "focuslabel.hh"

namespace otk {

class OtkButton : public OtkFocusLabel {

public:

  OtkButton(OtkWidget *parent);
  ~OtkButton();

  inline const BTexture *getPressedFocusTexture(void) const
  { return _pressed_focus_tx; }
  void setPressedFocusTexture(BTexture *texture)
  { _pressed_focus_tx = texture; }

  inline const BTexture *getPressedUnfocusTexture(void) const
  { return _pressed_unfocus_tx; }
  void setPressedUnfocusTexture(BTexture *texture)
  { _pressed_unfocus_tx = texture; }

  void setTexture(BTexture *texture);
  void setUnfocusTexture(BTexture *texture);

  inline bool isPressed(void) const { return _pressed; }
  void press(unsigned int mouse_button);
  void release(unsigned int mouse_button);

  void buttonPressHandler(const XButtonEvent &e);
  void buttonReleaseHandler(const XButtonEvent &e);

  void setStyle(Style *style);
  
private:

  bool _pressed;
  unsigned int _mouse_button;

  BTexture *_pressed_focus_tx;
  BTexture *_pressed_unfocus_tx;

  BTexture *_unpr_focus_tx;
  BTexture *_unpr_unfocus_tx;
};

}

#endif
