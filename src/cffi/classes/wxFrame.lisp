
;;;wxFrame.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxFrame_Create" wxFrame_Create) :pointer
  (_prt :pointer)
  (_id :int)
  (_txt :string)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_stl :int))

(cffi:defcfun ("wxFrame_CreateStatusBar" wxFrame_CreateStatusBar) :pointer
  (_obj :pointer)
  (number :int)
  (style :int))

(cffi:defcfun ("wxFrame_Maximize" wxFrame_Maximize) :void
  (_obj :pointer))

(cffi:defcfun ("wxFrame_Restore" wxFrame_Restore) :void
  (_obj :pointer))

(cffi:defcfun ("wxFrame_Iconize" wxFrame_Iconize) :void
  (_obj :pointer))

(cffi:defcfun ("wxFrame_IsMaximized" wxFrame_IsMaximized) :int
  (_obj :pointer))

(cffi:defcfun ("wxFrame_IsIconized" wxFrame_IsIconized) :int
  (_obj :pointer))

(cffi:defcfun ("wxFrame_GetIcon" wxFrame_GetIcon) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxFrame_SetIcon" wxFrame_SetIcon) :void
  (_obj :pointer)
  (_icon :pointer))

(cffi:defcfun ("wxFrame_GetClientAreaOrigin_left" wxFrame_GetClientAreaOrigin_left) :int
  (_obj :pointer))

(cffi:defcfun ("wxFrame_GetClientAreaOrigin_top" wxFrame_GetClientAreaOrigin_top) :int
  (_obj :pointer))

(cffi:defcfun ("wxFrame_SetMenuBar" wxFrame_SetMenuBar) :void
  (_obj :pointer)
  (menubar :pointer))

(cffi:defcfun ("wxFrame_GetMenuBar" wxFrame_GetMenuBar) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxFrame_GetStatusBar" wxFrame_GetStatusBar) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxFrame_SetStatusBar" wxFrame_SetStatusBar) :void
  (_obj :pointer)
  (statBar :pointer))

(cffi:defcfun ("wxFrame_SetStatusText" wxFrame_SetStatusText) :void
  (_obj :pointer)
  (_txt :string)
  (_number :int))

(cffi:defcfun ("wxFrame_SetStatusWidths" wxFrame_SetStatusWidths) :void
  (_obj :pointer)
  (_n :int)
  (_widths_field :pointer))

(cffi:defcfun ("wxFrame_CreateToolBar" wxFrame_CreateToolBar) :pointer
  (_obj :pointer)
  (style :long))

(cffi:defcfun ("wxFrame_GetToolBar" wxFrame_GetToolBar) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxFrame_SetToolBar" wxFrame_SetToolBar) :void
  (_obj :pointer)
  (_toolbar :pointer))

(cffi:defcfun ("wxFrame_SetIcons" wxFrame_SetIcons) :void
  (_obj :pointer)
  (_icons :pointer))

(cffi:defcfun ("wxFrame_GetTitle" wxFrame_GetTitle) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxFrame_SetTitle" wxFrame_SetTitle) :void
  (_obj :pointer)
  (_txt :string))

(cffi:defcfun ("wxFrame_SetShape" wxFrame_SetShape) :pointer
  (self :pointer)
  (region :pointer))

(cffi:defcfun ("wxFrame_ShowFullScreen" wxFrame_ShowFullScreen) :pointer
  (self :pointer)
  (show :pointer)
  (style :int))

(cffi:defcfun ("wxFrame_IsFullScreen" wxFrame_IsFullScreen) :pointer
  (self :pointer))

(cffi:defcfun ("wxFrame_Centre" wxFrame_Centre) :void
  (self :pointer)
  (orientation :int))


