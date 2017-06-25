
;;;wxValidator.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxValidator_Create" wxValidator_Create) :pointer)

(cffi:defcfun ("wxValidator_Delete" wxValidator_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxValidator_Validate" wxValidator_Validate) :int
  (_obj :pointer)
  (parent :pointer))

(cffi:defcfun ("wxValidator_TransferToWindow" wxValidator_TransferToWindow) :int
  (_obj :pointer))

(cffi:defcfun ("wxValidator_TransferFromWindow" wxValidator_TransferFromWindow) :int
  (_obj :pointer))

(cffi:defcfun ("wxValidator_GetWindow" wxValidator_GetWindow) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxValidator_SetWindow" wxValidator_SetWindow) :void
  (_obj :pointer)
  (win :pointer))

(cffi:defcfun ("wxValidator_IsSilent" wxValidator_IsSilent) :int)

(cffi:defcfun ("wxValidator_SetBellOnError" wxValidator_SetBellOnError) :void
  (doIt :int))

(cffi:defcfun ("wxTextValidator_Create" wxTextValidator_Create) :pointer
  (style :int)
  (val :pointer))

(cffi:defcfun ("wxTextValidator_GetStyle" wxTextValidator_GetStyle) :int
  (_obj :pointer))

(cffi:defcfun ("wxTextValidator_SetStyle" wxTextValidator_SetStyle) :void
  (_obj :pointer)
  (style :int))

(cffi:defcfun ("wxTextValidator_SetIncludes" wxTextValidator_SetIncludes) :void
  (_obj :pointer)
  (list :pointer)
  (count :int))

(cffi:defcfun ("wxTextValidator_GetIncludes" wxTextValidator_GetIncludes) :int
  (_obj :pointer)
  (_ref :pointer))

(cffi:defcfun ("wxTextValidator_SetExcludes" wxTextValidator_SetExcludes) :void
  (_obj :pointer)
  (list :pointer)
  (count :int))

(cffi:defcfun ("wxTextValidator_GetExcludeList" wxTextValidator_GetExcludeList) :int
  (_obj :pointer)
  (_ref :pointer))

(cffi:defcfun ("wxTextValidator_OnChar" wxTextValidator_OnChar) :void
  (_obj :pointer)
  (event :pointer))

(cffi:defcfun ("ELJTextValidator_Create" ELJTextValidator_Create) :pointer
  (_obj :pointer)
  (_fnc :pointer)
  (_txt :pointer)
  (_stl :long))


