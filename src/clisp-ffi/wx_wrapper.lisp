;;;wx_wrapper.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)

(ffi:default-foreign-language :stdc)

(ffi:def-call-out ELJApp_MainLoop
    (:name "ELJApp_MainLoop")
  (:return-type ffi:int)
  (:library +library-name+))

(ffi:def-call-out ELJApp_Initialized
    (:name "ELJApp_Initialized")
  (:return-type ffi:int)
  (:library +library-name+))

(ffi:def-call-out ELJApp_Pending
    (:name "ELJApp_Pending")
  (:return-type ffi:int)
  (:library +library-name+))

(ffi:def-call-out ELJApp_Dispatch
    (:name "ELJApp_Dispatch")
  (:return-type NIL)
  (:library +library-name+))

(ffi:def-call-out ELJApp_GetAppName
    (:name "ELJApp_GetAppName")
  (:return-type ffi:c-string :malloc-free)
  (:library +library-name+))

(ffi:def-call-out ELJApp_SetAppName
    (:name "ELJApp_SetAppName")
  (:arguments (name ffi:c-string))
  (:return-type NIL)
  (:library +library-name+))

(ffi:def-call-out ELJApp_GetClassName
    (:name "ELJApp_GetClassName")
  (:return-type ffi:c-string :malloc-free)
  (:library +library-name+))

(ffi:def-call-out ELJApp_SetClassName
    (:name "ELJApp_SetClassName")
  (:arguments (name ffi:c-string))
  (:return-type NIL)
  (:library +library-name+))

(ffi:def-call-out ELJApp_GetVendorName
    (:name "ELJApp_GetVendorName")
  (:return-type ffi:c-string :malloc-free)
  (:library +library-name+))

(ffi:def-call-out ELJApp_SetVendorName
    (:name "ELJApp_SetVendorName")
  (:arguments (name ffi:c-string))
  (:return-type NIL)
  (:library +library-name+))

(ffi:def-call-out ELJApp_GetTopWindow
    (:name "ELJApp_GetTopWindow")
  (:return-type (ffi:c-pointer NIL))
  (:library +library-name+))

(ffi:def-call-out ELJApp_SetExitOnFrameDelete
    (:name "ELJApp_SetExitOnFrameDelete")
  (:arguments (flag ffi:int))
  (:return-type NIL)
  (:library +library-name+))

(ffi:def-call-out ELJApp_GetExitOnFrameDelete
    (:name "ELJApp_GetExitOnFrameDelete")
  (:return-type ffi:int)
  (:library +library-name+))

(ffi:def-call-out ELJApp_CreateLogTarget
    (:name "ELJApp_CreateLogTarget")
  (:return-type (ffi:c-pointer NIL))
  (:library +library-name+))

; (ffi:def-call-out ELJApp_GetWantDebugOutput
;     (:name "ELJApp_GetWantDebugOutput")
;   (:return-type ffi:int)
;   (:library +library-name+))

(ffi:def-call-out ELJApp_SetUseBestVisual
    (:name "ELJApp_SetUseBestVisual")
  (:arguments (flag ffi:int))
  (:return-type NIL)
  (:library +library-name+))

(ffi:def-call-out ELJApp_GetUseBestVisual
    (:name "ELJApp_GetUseBestVisual")
  (:return-type ffi:int)
  (:library +library-name+))

(ffi:def-call-out ELJApp_SetPrintMode
    (:name "ELJApp_SetPrintMode")
  (:arguments (mode ffi:int))
  (:return-type NIL)
  (:library +library-name+))

(ffi:def-call-out ELJApp_ExitMainLoop
    (:name "ELJApp_ExitMainLoop")
  (:return-type NIL)
  (:library +library-name+))

(ffi:def-call-out ELJApp_SetTopWindow
    (:name "ELJApp_SetTopWindow")
  (:arguments (_wnd (ffi:c-pointer NIL)))
  (:return-type NIL)
  (:library +library-name+))

; (ffi:def-call-out ELJApp_SendIdleEvents
;     (:name "ELJApp_SendIdleEvents")
;   (:return-type ffi:int)
;   (:library +library-name+))

; (ffi:def-call-out ELJApp_SendIdleEventsToWindow
;     (:name "ELJApp_SendIdleEventsToWindow")
;   (:arguments (win (ffi:c-pointer NIL)))
;   (:return-type ffi:int)
;   (:library +library-name+))

(ffi:def-call-out ELJApp_EnableTooltips
    (:name "ELJApp_EnableTooltips")
  (:arguments (_enable ffi:int))
  (:return-type NIL)
  (:library +library-name+))

(ffi:def-call-out ELJApp_SetTooltipDelay
    (:name "ELJApp_SetTooltipDelay")
  (:arguments (_ms ffi:int))
  (:return-type NIL)
  (:library +library-name+))

(ffi:def-call-out ELJApp_InitAllImageHandlers
    (:name "ELJApp_InitAllImageHandlers")
  (:return-type NIL)
  (:library +library-name+))

(ffi:def-call-out ELJApp_DisplaySize
    (:name "ELJApp_DisplaySize")
  (:arguments (w (ffi:c-pointer NIL))
	      (h (ffi:c-pointer NIL)))
  (:return-type NIL)
  (:library +library-name+))

(ffi:def-call-out ELJApp_EnableTopLevelWindows
    (:name "ELJApp_EnableTopLevelWindows")
  (:arguments (_enb ffi:int))
  (:return-type NIL)
  (:library +library-name+))

(ffi:def-call-out ELJApp_Exit
    (:name "ELJApp_Exit")
  (:return-type NIL)
  (:library +library-name+))

(ffi:def-call-out ELJApp_MousePosition
    (:name "ELJApp_MousePosition")
  (:arguments (x (ffi:c-pointer NIL))
	      (y (ffi:c-pointer NIL)))
  (:return-type NIL)
  (:library +library-name+))

(ffi:def-call-out ELJApp_FindWindowByLabel
    (:name "ELJApp_FindWindowByLabel")
  (:arguments (_lbl (ffi:c-pointer NIL))
	      (_prt (ffi:c-pointer NIL)))
  (:return-type (ffi:c-pointer NIL))
  (:library +library-name+))

(ffi:def-call-out ELJApp_FindWindowByName
    (:name "ELJApp_FindWindowByName")
  (:arguments (_lbl (ffi:c-pointer NIL))
	      (_prt (ffi:c-pointer NIL)))
  (:return-type (ffi:c-pointer NIL))
  (:library +library-name+))

(ffi:def-call-out ELJApp_FindWindowById
    (:name "ELJApp_FindWindowById")
  (:arguments (_id ffi:int)
	      (_prt (ffi:c-pointer NIL)))
  (:return-type (ffi:c-pointer NIL))
  (:library +library-name+))

(ffi:def-call-out ELJApp_GetApp
    (:name "ELJApp_GetApp")
  (:return-type (ffi:c-pointer NIL))
  (:library +library-name+))

(ffi:def-call-out ELJApp_GetUserId
    (:name "ELJApp_GetUserId")
  (:arguments (_buf (ffi:c-pointer NIL)))
  (:return-type ffi:int)
  (:library +library-name+))

(ffi:def-call-out ELJApp_GetUserName
    (:name "ELJApp_GetUserName")
  (:arguments (_buf (ffi:c-pointer NIL)))
  (:return-type ffi:int)
  (:library +library-name+))

(ffi:def-call-out ELJApp_GetUserHome
    (:name "ELJApp_GetUserHome")
  (:arguments (_usr (ffi:c-pointer NIL))
	      (_buf (ffi:c-pointer NIL)))
  (:return-type ffi:int)
  (:library +library-name+))

(ffi:def-call-out ELJApp_ExecuteProcess
    (:name "ELJApp_ExecuteProcess")
  (:arguments (_cmd (ffi:c-pointer NIL))
	      (_snc ffi:int)
	      (_prc (ffi:c-pointer NIL)))
  (:return-type ffi:int)
  (:library +library-name+))

(ffi:def-call-out ELJApp_Yield
    (:name "ELJApp_Yield")
  (:return-type ffi:int)
  (:library +library-name+))

(ffi:def-call-out ELJApp_SafeYield
    (:name "ELJApp_SafeYield")
  (:arguments (_win (ffi:c-pointer NIL)))
  (:return-type ffi:int)
  (:library +library-name+))

(ffi:def-call-out ELJApp_GetOsVersion
    (:name "ELJApp_GetOsVersion")
  (:arguments (_maj (ffi:c-pointer NIL))
	      (_min (ffi:c-pointer NIL)))
  (:return-type ffi:int)
  (:library +library-name+))

(ffi:def-call-out ELJApp_GetOsDescription
    (:name "ELJApp_GetOsDescription")
  (:arguments (_buf (ffi:c-pointer NIL)))
  (:return-type ffi:int)
  (:library +library-name+))

(ffi:def-call-out ELJApp_Sleep
    (:name "ELJApp_Sleep")
  (:arguments (_scs ffi:int))
  (:return-type NIL)
  (:library +library-name+))

(ffi:def-call-out ELJApp_USleep
    (:name "ELJApp_USleep")
  (:arguments (_mscs ffi:int))
  (:return-type NIL)
  (:library +library-name+))

(ffi:def-call-out ELJApp_IsTerminating
    (:name "ELJApp_IsTerminating")
  (:return-type ffi:int)
  (:library +library-name+))

(ffi:def-call-out QuantizePalette
    (:name "QuantizePalette")
  (:arguments (src (ffi:c-pointer NIL))
	      (dest (ffi:c-pointer NIL))
	      (pPalette (ffi:c-pointer NIL))
	      (desiredNoColours ffi:int)
	      (eightBitData (ffi:c-pointer NIL))
	      (flags ffi:int))
  (:return-type ffi:int)
  (:library +library-name+))

(ffi:def-call-out Quantize
    (:name "Quantize")
  (:arguments (src (ffi:c-pointer NIL))
	      (dest (ffi:c-pointer NIL))
	      (desiredNoColours ffi:int)
	      (eightBitData (ffi:c-pointer NIL))
	      (flags ffi:int))
  (:return-type ffi:int)
  (:library +library-name+))


(ffi:def-call-out Null_AcceleratorTable
    (:name "Null_AcceleratorTable")
  (:return-type (ffi:c-pointer NIL))
  (:library +library-name+))

(ffi:def-call-out Null_Bitmap
    (:name "Null_Bitmap")
  (:return-type (ffi:c-pointer NIL))
  (:library +library-name+))

(ffi:def-call-out Null_Icon
    (:name "Null_Icon")
  (:return-type (ffi:c-pointer NIL))
  (:library +library-name+))

(ffi:def-call-out Null_Cursor
    (:name "Null_Cursor")
  (:return-type (ffi:c-pointer NIL))
  (:library +library-name+))

(ffi:def-call-out Null_Pen
    (:name "Null_Pen")
  (:return-type (ffi:c-pointer NIL))
  (:library +library-name+))

(ffi:def-call-out Null_Palette
    (:name "Null_Palette")
  (:return-type (ffi:c-pointer NIL))
  (:library +library-name+))

(ffi:def-call-out Null_Font
    (:name "Null_Font")
  (:return-type (ffi:c-pointer NIL))
  (:library +library-name+))

; (ffi:def-call-out wxDllLoader_LoadLibrary
;     (:name "wxDllLoader_LoadLibrary")
;   (:arguments (_name (ffi:c-pointer NIL))
; 	      (_success (ffi:c-pointer NIL)))
;   (:return-type ffi:int)
;   (:library +library-name+))

; (ffi:def-call-out wxDllLoader_UnloadLibrary
;     (:name "wxDllLoader_UnloadLibrary")
;   (:arguments (_handle ffi:int))
;   (:return-type NIL)
;   (:library +library-name+))

; (ffi:def-call-out wxDllLoader_GetSymbol
;     (:name "wxDllLoader_GetSymbol")
;   (:arguments (_handle ffi:int)
; 	      (_name (ffi:c-pointer NIL)))
;   (:return-type (ffi:c-pointer NIL))
;   (:library +library-name+))

(ffi:def-call-out wxClassInfo_CreateClassByName
    (:name "wxClassInfo_CreateClassByName")
  (:arguments (_inf (ffi:c-pointer NIL)))
  (:return-type (ffi:c-pointer NIL))
  (:library +library-name+))

(ffi:def-call-out wxClassInfo_GetClassName
    (:name "wxClassInfo_GetClassName")
  (:arguments (_obj (ffi:c-pointer NIL)))
  (:return-type (ffi:c-pointer NIL))
  (:library +library-name+))

(ffi:def-call-out wxClassInfo_IsKindOf
    (:name "wxClassInfo_IsKindOf")
  (:arguments (_obj (ffi:c-pointer NIL))
	      (_name (ffi:c-pointer NIL)))
  (:return-type ffi:int)
  (:library +library-name+))

(ffi:def-call-out wxEvent_NewEventType
    (:name "wxEvent_NewEventType")
  (:return-type ffi:int)
  (:library +library-name+))
