
;;;wxPalette.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxPalette_CreateDefault" wxPalette_CreateDefault) :pointer)

(cffi:defcfun ("wxPalette_CreateRGB" wxPalette_CreateRGB) :pointer
  (n :int)
  (red :pointer)
  (green :pointer)
  (blue :pointer))

(cffi:defcfun ("wxPalette_Delete" wxPalette_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxPalette_GetPixel" wxPalette_GetPixel) :int
  (_obj :pointer)
  (red :char)
  (green :char)
  (blue :char))

(cffi:defcfun ("wxPalette_GetRGB" wxPalette_GetRGB) :int
  (_obj :pointer)
  (pixel :int)
  (red :pointer)
  (green :pointer)
  (blue :pointer))

(cffi:defcfun ("wxPalette_Ok" wxPalette_Ok) :int
  (_obj :pointer))

(cffi:defcfun ("wxPalette_Assign" wxPalette_Assign) :void
  (_obj :pointer)
  (palette :pointer))

(cffi:defcfun ("wxPalette_IsEqual" wxPalette_IsEqual) :int
  (_obj :pointer)
  (palette :pointer))


