
;;;wxListItem.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxListItem_Create" wxListItem_Create) :pointer)

(cffi:defcfun ("wxListItem_Delete" wxListItem_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxListItem_Clear" wxListItem_Clear) :void
  (_obj :pointer))

(cffi:defcfun ("wxListItem_ClearAttributes" wxListItem_ClearAttributes) :void
  (_obj :pointer))

(cffi:defcfun ("wxListItem_SetMask" wxListItem_SetMask) :void
  (_obj :pointer)
  (mask :int))

(cffi:defcfun ("wxListItem_SetId" wxListItem_SetId) :void
  (_obj :pointer)
  (id :int))

(cffi:defcfun ("wxListItem_SetColumn" wxListItem_SetColumn) :void
  (_obj :pointer)
  (col :int))

(cffi:defcfun ("wxListItem_SetState" wxListItem_SetState) :void
  (_obj :pointer)
  (state :int))

(cffi:defcfun ("wxListItem_SetStateMask" wxListItem_SetStateMask) :void
  (_obj :pointer)
  (stateMask :int))

(cffi:defcfun ("wxListItem_SetText" wxListItem_SetText) :void
  (_obj :pointer)
  (text :pointer))

(cffi:defcfun ("wxListItem_SetImage" wxListItem_SetImage) :void
  (_obj :pointer)
  (image :int))

(cffi:defcfun ("wxListItem_SetData" wxListItem_SetData) :void
  (_obj :pointer)
  (data :int))

(cffi:defcfun ("wxListItem_SetDataPointer" wxListItem_SetDataPointer) :void
  (_obj :pointer)
  (data :pointer))

(cffi:defcfun ("wxListItem_SetWidth" wxListItem_SetWidth) :void
  (_obj :pointer)
  (width :int))

(cffi:defcfun ("wxListItem_SetAlign" wxListItem_SetAlign) :void
  (_obj :pointer)
  (align :int))

(cffi:defcfun ("wxListItem_SetTextColour" wxListItem_SetTextColour) :void
  (_obj :pointer)
  (colText :pointer))

(cffi:defcfun ("wxListItem_SetBackgroundColour" wxListItem_SetBackgroundColour) :void
  (_obj :pointer)
  (colBack :pointer))

(cffi:defcfun ("wxListItem_SetFont" wxListItem_SetFont) :void
  (_obj :pointer)
  (font :pointer))

(cffi:defcfun ("wxListItem_GetMask" wxListItem_GetMask) :int
  (_obj :pointer))

(cffi:defcfun ("wxListItem_GetId" wxListItem_GetId) :int
  (_obj :pointer))

(cffi:defcfun ("wxListItem_GetColumn" wxListItem_GetColumn) :int
  (_obj :pointer))

(cffi:defcfun ("wxListItem_GetState" wxListItem_GetState) :int
  (_obj :pointer))

(cffi:defcfun ("wxListItem_GetText" wxListItem_GetText) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxListItem_GetImage" wxListItem_GetImage) :int
  (_obj :pointer))

(cffi:defcfun ("wxListItem_GetData" wxListItem_GetData) :int
  (_obj :pointer))

(cffi:defcfun ("wxListItem_GetWidth" wxListItem_GetWidth) :int
  (_obj :pointer))

(cffi:defcfun ("wxListItem_GetAlign" wxListItem_GetAlign) :int
  (_obj :pointer))

(cffi:defcfun ("wxListItem_GetAttributes" wxListItem_GetAttributes) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxListItem_HasAttributes" wxListItem_HasAttributes) :int
  (_obj :pointer))

(cffi:defcfun ("wxListItem_GetTextColour" wxListItem_GetTextColour) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxListItem_GetBackgroundColour" wxListItem_GetBackgroundColour) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxListItem_GetFont" wxListItem_GetFont) :pointer
  (_obj :pointer))


