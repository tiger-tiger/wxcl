
;;;wxBrush.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcvar ("wxNull_Brush" wxNull_Brush)
 :pointer)

(cffi:defcvar ("wxBlack_Brush" wxBlack_Brush)
 :pointer)

(cffi:defcvar ("wxWhite_Brush" wxWhite_Brush)
 :pointer)

(cffi:defcvar ("wxRed_Brush" wxRed_Brush)
 :pointer)

(cffi:defcvar ("wxBlue_Brush" wxBlue_Brush)
 :pointer)

(cffi:defcvar ("wxGreen_Brush" wxGreen_Brush)
 :pointer)

(cffi:defcvar ("wxCyan_Brush" wxCyan_Brush)
 :pointer)

(cffi:defcvar ("wxLight_Grey_Brush" wxLight_Grey_Brush)
 :pointer)

(cffi:defcvar ("wxMedium_Grey_Brush" wxMedium_Grey_Brush)
 :pointer)

(cffi:defcvar ("wxTransparent_Brush" wxTransparent_Brush)
 :pointer)

(cffi:defcvar ("wxGrey_Brush" wxGrey_Brush)
 :pointer)

(cffi:defcfun ("wxBrush_CreateDefault" wxBrush_CreateDefault) :pointer)

(cffi:defcfun ("wxBrush_CreateFromBitmap" wxBrush_CreateFromBitmap) :pointer
  (bitmap :pointer))

(cffi:defcfun ("wxBrush_CreateFromColour" wxBrush_CreateFromColour) :pointer
  (col :pointer)
  (style :int))

(cffi:defcfun ("wxBrush_Delete" wxBrush_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxBrush_SetColour" wxBrush_SetColour) :void
  (_obj :pointer)
  (col :pointer))

(cffi:defcfun ("wxBrush_SetColourName" wxBrush_SetColourName) :void
  (_obj :pointer)
  (col :string))

(cffi:defcfun ("wxBrush_SetColourRGB" wxBrush_SetColourRGB) :void
  (_obj :pointer)
  (r :char)
  (g :char)
  (b :char))

(cffi:defcfun ("wxBrush_SetStyle" wxBrush_SetStyle) :void
  (_obj :pointer)
  (style :int))

(cffi:defcfun ("wxBrush_SetStipple" wxBrush_SetStipple) :void
  (_obj :pointer)
  (stipple :pointer))

(cffi:defcfun ("wxBrush_Assign" wxBrush_Assign) :void
  (_obj :pointer)
  (brush :pointer))

(cffi:defcfun ("wxBrush_IsEqual" wxBrush_IsEqual) :int
  (_obj :pointer)
  (brush :pointer))

(cffi:defcfun ("wxBrush_GetColour" wxBrush_GetColour) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxBrush_GetStyle" wxBrush_GetStyle) :int
  (_obj :pointer))

(cffi:defcfun ("wxBrush_GetStipple" wxBrush_GetStipple) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxBrush_Ok" wxBrush_Ok) :int
  (_obj :pointer))


