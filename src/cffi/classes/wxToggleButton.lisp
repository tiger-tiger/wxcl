
;;;wxToggleButton.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxToggleButton_Create" wxToggleButton_Create) :pointer
  (parent :pointer)
  (id :int)
  (label :string)
  (x :int)
  (y :int)
  (w :int)
  (h :int)
  (style :int))

(cffi:defcfun ("wxToggleButton_SetValue" wxToggleButton_SetValue) :void
  (_obj :pointer)
  (state :int))

(cffi:defcfun ("wxToggleButton_GetValue" wxToggleButton_GetValue) :int
  (_obj :pointer))

(cffi:defcfun ("wxToggleButton_Enable" wxToggleButton_Enable) :int
  (_obj :pointer)
  (enable :int))

(cffi:defcfun ("expEVT_COMMAND_TOGGLEBUTTON_CLICKED" expEVT_COMMAND_TOGGLEBUTTON_CLICKED) :int)


