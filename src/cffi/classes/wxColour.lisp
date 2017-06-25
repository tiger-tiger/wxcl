
;;;wxColour.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcvar ("wxNull_Colour" wxNull_Colour)
 :pointer)

(cffi:defcvar ("wxBlack" wxBlack)
 :pointer)

(cffi:defcvar ("wxWhite" wxWhite)
 :pointer)

(cffi:defcvar ("wxRed" wxRed)
 :pointer)

(cffi:defcvar ("wxBlue" wxBlue)
 :pointer)

(cffi:defcvar ("wxGreen" wxGreen)
 :pointer)

(cffi:defcvar ("wxCyan" wxCyan)
 :pointer)

(cffi:defcvar ("wxLight_Grey" wxLight_Grey)
 :pointer)

(cffi:defcfun ("wxColour_CreateEmpty" wxColour_CreateEmpty) :pointer)

(cffi:defcfun ("wxColour_CreateRGB" wxColour_CreateRGB) :pointer
  (_red :char)
  (_green :char)
  (_blue :char))

(cffi:defcfun ("wxColour_CreateByName" wxColour_CreateByName) :pointer
  (_name :string))

(cffi:defcfun ("wxColour_Delete" wxColour_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxColour_Set" wxColour_Set) :void
  (_obj :pointer)
  (_red :char)
  (_green :char)
  (_blue :char))

(cffi:defcfun ("wxColour_Ok" wxColour_Ok) :int
  (_obj :pointer))

(cffi:defcfun ("wxColour_Red" wxColour_Red) :char
  (_obj :pointer))

(cffi:defcfun ("wxColour_Green" wxColour_Green) :char
  (_obj :pointer))

(cffi:defcfun ("wxColour_Blue" wxColour_Blue) :char
  (_obj :pointer))

(cffi:defcfun ("wxColour_GetPixel" wxColour_GetPixel) :int
  (_obj :pointer))

(cffi:defcfun ("wxColour_Copy" wxColour_Copy) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxColour_SetByName" wxColour_SetByName) :void
  (_obj :pointer)
  (_name :string))

(cffi:defcfun ("wxColour_ValidName" wxColour_ValidName) :int
  (_name :string))

(cffi:defcfun ("wxColour_CreateFromInt" wxColour_CreateFromInt) :pointer
  (rgb :int))

(cffi:defcfun ("wxColour_GetInt" wxColour_GetInt) :int
  (colour :pointer))


