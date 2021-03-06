
;;;wxToolBar.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxToolBar_Create" wxToolBar_Create) :pointer
  (_prt :pointer)
  (_id :int)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_stl :int))

(cffi:defcfun ("wxToolBar_Delete" wxToolBar_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxToolBar_AddControl" wxToolBar_AddControl) :int
  (_obj :pointer)
  (ctrl :pointer))

(cffi:defcfun ("wxToolBar_AddSeparator" wxToolBar_AddSeparator) :void
  (_obj :pointer))

(cffi:defcfun ("wxToolBar_AddTool" wxToolBar_AddTool) :void
  (_obj :pointer)
  (id :int)
  (bmp :pointer)
  (shelp :string)
  (lhelp :string))

(cffi:defcfun ("wxToolBar_AddToolEx" wxToolBar_AddToolEx) :void
  (_obj :pointer)
  (id :int)
  (bmp1 :pointer)
  (bmp2 :pointer)
  (tgl :int)
  (x :int)
  (y :int)
  (dat :pointer)
  (shelp :string)
  (lhelp :string))

(cffi:defcfun ("wxToolBar_DeleteTool" wxToolBar_DeleteTool) :int
  (_obj :pointer)
  (id :int))

(cffi:defcfun ("wxToolBar_DeleteToolByPos" wxToolBar_DeleteToolByPos) :int
  (_obj :pointer)
  (pos :int))

(cffi:defcfun ("wxToolBar_EnableTool" wxToolBar_EnableTool) :void
  (_obj :pointer)
  (id :int)
  (enb :int))

(cffi:defcfun ("wxToolBar_GetToolSize" wxToolBar_GetToolSize) :void
  (_obj :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("wxToolBar_GetToolBitmapSize" wxToolBar_GetToolBitmapSize) :void
  (_obj :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("wxToolBar_GetMargins" wxToolBar_GetMargins) :void
  (_obj :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("wxToolBar_GetToolClientData" wxToolBar_GetToolClientData) :pointer
  (_obj :pointer)
  (id :int))

(cffi:defcfun ("wxToolBar_GetToolEnabled" wxToolBar_GetToolEnabled) :int
  (_obj :pointer)
  (id :int))

(cffi:defcfun ("wxToolBar_GetToolLongHelp" wxToolBar_GetToolLongHelp) :wxstring
  (_obj :pointer)
  (id :int))

(cffi:defcfun ("wxToolBar_GetToolPacking" wxToolBar_GetToolPacking) :int
  (_obj :pointer))

(cffi:defcfun ("wxToolBar_GetToolShortHelp" wxToolBar_GetToolShortHelp) :wxstring
  (_obj :pointer)
  (id :int))

(cffi:defcfun ("wxToolBar_GetToolState" wxToolBar_GetToolState) :int
  (_obj :pointer)
  (id :int))

(cffi:defcfun ("wxToolBar_InsertControl" wxToolBar_InsertControl) :void
  (_obj :pointer)
  (pos :int)
  (ctrl :pointer))

(cffi:defcfun ("wxToolBar_InsertSeparator" wxToolBar_InsertSeparator) :void
  (_obj :pointer)
  (pos :int))

(cffi:defcfun ("wxToolBar_InsertTool" wxToolBar_InsertTool) :void
  (_obj :pointer)
  (pos :int)
  (id :int)
  (bmp1 :pointer)
  (bmp2 :pointer)
  (tgl :int)
  (dat :pointer)
  (shelp :string)
  (lhelp :string))

(cffi:defcfun ("wxToolBar_Realize" wxToolBar_Realize) :int
  (_obj :pointer))

(cffi:defcfun ("wxToolBar_RemoveTool" wxToolBar_RemoveTool) :void
  (_obj :pointer)
  (id :int))

(cffi:defcfun ("wxToolBar_SetMargins" wxToolBar_SetMargins) :void
  (_obj :pointer)
  (x :int)
  (y :int))

(cffi:defcfun ("wxToolBar_SetToolBitmapSize" wxToolBar_SetToolBitmapSize) :void
  (_obj :pointer)
  (x :int)
  (y :int))

(cffi:defcfun ("wxToolBar_SetToolClientData" wxToolBar_SetToolClientData) :void
  (_obj :pointer)
  (id :int)
  (dat :pointer))

(cffi:defcfun ("wxToolBar_SetToolLongHelp" wxToolBar_SetToolLongHelp) :void
  (_obj :pointer)
  (id :int)
  (str :string))

(cffi:defcfun ("wxToolBar_SetToolPacking" wxToolBar_SetToolPacking) :void
  (_obj :pointer)
  (val :int))

(cffi:defcfun ("wxToolBar_SetToolShortHelp" wxToolBar_SetToolShortHelp) :void
  (_obj :pointer)
  (id :int)
  (str :string))

(cffi:defcfun ("wxToolBar_SetToolSeparation" wxToolBar_SetToolSeparation) :void
  (_obj :pointer)
  (val :int))

(cffi:defcfun ("wxToolBar_ToggleTool" wxToolBar_ToggleTool) :void
  (_obj :pointer)
  (id :int)
  (val :int))

(cffi:defcfun ("wxToolBar_AddTool2" wxToolBar_AddTool2) :void
  (_obj :pointer)
  (toolId :int)
  (label :string)
  (bmp :pointer)
  (bmpDisabled :pointer)
  (itemKind :int)
  (shortHelp :string)
  (longHelp :string))


