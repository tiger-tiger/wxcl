
;;;wx_wrapper.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)

(defcfun ("wxStringc_str" wxStringc_str) :pointer
  (s :wxstring))




(cffi:defcvar ("idleTimer" idleTimer)
 :pointer)

(cffi:defcvar ("initClosure" initClosure)
 :pointer)

(cffi:defcvar ("APPTerminating" APPTerminating)
 :int)

(cffi:defcvar ("ELJApp" ELJApp)
 :pointer)

(cffi:defcvar ("getCallback" getCallback)
 :pointer)

(cffi:defcfun ("wxEvtHandler_Connect" wxEvtHandler_Connect) :void
  (_obj :pointer)
  (first :int)
  (last :int)
  (type :int)
  (closure :pointer))

(cffi:defcfun ("wxEvtHandler_GetClosure" wxEvtHandler_GetClosure) :pointer
  (evtHandler :pointer)
  (id :int)
  (type :int))

(cffi:defcfun ("wxClosure_Create" wxClosure_Create) :pointer
  (fun :pointer)
  (wxcl_id :unsigned-int))

(cffi:defcfun ("wxEvtHandler_GetClientClosure" wxEvtHandler_GetClientClosure) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxEvtHandler_SetClientClosure" wxEvtHandler_SetClientClosure) :void
  (_obj :pointer)
  (closure :pointer))

(cffi:defcfun ("wxObject_GetClientClosure" wxObject_GetClientClosure) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxObject_SetClientClosure" wxObject_SetClientClosure) :void
  (_obj :pointer)
  (closure :pointer))

(cffi:defcfun ("ELJApp_GetIdleInterval" ELJApp_GetIdleInterval) :int)

(cffi:defcfun ("ELJApp_SetIdleInterval" ELJApp_SetIdleInterval) :void
  (interval :int))

(cffi:defcfun ("ELJApp_MainLoop" ELJApp_MainLoop) :int)

(cffi:defcfun ("ELJApp_Initialized" ELJApp_Initialized) :int)

(cffi:defcfun ("ELJApp_Pending" ELJApp_Pending) :int)

(cffi:defcfun ("ELJApp_Dispatch" ELJApp_Dispatch) :void)

(cffi:defcfun ("ELJApp_GetAppName" ELJApp_GetAppName) :wxstring)

(cffi:defcfun ("ELJApp_SetAppName" ELJApp_SetAppName) :void
  (name :string))

(cffi:defcfun ("ELJApp_GetClassName" ELJApp_GetClassName) :wxstring)

(cffi:defcfun ("ELJApp_SetClassName" ELJApp_SetClassName) :void
  (name :string))

(cffi:defcfun ("ELJApp_GetVendorName" ELJApp_GetVendorName) :wxstring)

(cffi:defcfun ("ELJApp_SetVendorName" ELJApp_SetVendorName) :void
  (name :string))

(cffi:defcfun ("ELJApp_GetTopWindow" ELJApp_GetTopWindow) :pointer)

(cffi:defcfun ("ELJApp_SetExitOnFrameDelete" ELJApp_SetExitOnFrameDelete) :void
  (flag :int))

(cffi:defcfun ("ELJApp_GetExitOnFrameDelete" ELJApp_GetExitOnFrameDelete) :int)

(cffi:defcfun ("ELJApp_CreateLogTarget" ELJApp_CreateLogTarget) :pointer)

(cffi:defcfun ("ELJApp_SetUseBestVisual" ELJApp_SetUseBestVisual) :void
  (flag :int))

(cffi:defcfun ("ELJApp_GetUseBestVisual" ELJApp_GetUseBestVisual) :int)

(cffi:defcfun ("ELJApp_SetPrintMode" ELJApp_SetPrintMode) :void
  (mode :int))

(cffi:defcfun ("ELJApp_ExitMainLoop" ELJApp_ExitMainLoop) :void)

(cffi:defcfun ("ELJApp_SetTopWindow" ELJApp_SetTopWindow) :void
  (_wnd :pointer))

(cffi:defcfun ("ELJApp_EnableTooltips" ELJApp_EnableTooltips) :void
  (_enable :int))

(cffi:defcfun ("ELJApp_SetTooltipDelay" ELJApp_SetTooltipDelay) :void
  (_ms :int))

(cffi:defcfun ("ELJApp_InitAllImageHandlers" ELJApp_InitAllImageHandlers) :void)

(cffi:defcfun ("ELJApp_DisplaySize" ELJApp_DisplaySize) :void
  (w :pointer)
  (h :pointer))

(cffi:defcfun ("ELJApp_EnableTopLevelWindows" ELJApp_EnableTopLevelWindows) :void
  (_enb :int))

(cffi:defcfun ("ELJApp_Exit" ELJApp_Exit) :void)

(cffi:defcfun ("ELJApp_MousePosition" ELJApp_MousePosition) :void
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("ELJApp_FindWindowByLabel" ELJApp_FindWindowByLabel) :pointer
  (_lbl :pointer)
  (_prt :pointer))

(cffi:defcfun ("ELJApp_FindWindowByName" ELJApp_FindWindowByName) :pointer
  (_lbl :pointer)
  (_prt :pointer))

(cffi:defcfun ("ELJApp_FindWindowById" ELJApp_FindWindowById) :pointer
  (_id :int)
  (_prt :pointer))

(cffi:defcfun ("ELJApp_GetApp" ELJApp_GetApp) :pointer)

(cffi:defcfun ("ELJApp_GetUserId" ELJApp_GetUserId) :wxstring)

(cffi:defcfun ("ELJApp_GetUserName" ELJApp_GetUserName) :wxstring)

(cffi:defcfun ("ELJApp_GetUserHome" ELJApp_GetUserHome) :wxstring
  (_usr :string))

(cffi:defcfun ("ELJApp_ExecuteProcess" ELJApp_ExecuteProcess) :int
  (_cmd :string)
  (_snc :int)
  (_prc :pointer))

(cffi:defcfun ("ELJApp_Yield" ELJApp_Yield) :int)

(cffi:defcfun ("ELJApp_SafeYield" ELJApp_SafeYield) :int
  (_win :pointer))

(cffi:defcfun ("ELJApp_GetOsVersion" ELJApp_GetOsVersion) :int
  (_maj :pointer)
  (_min :pointer))

(cffi:defcfun ("ELJApp_GetOsDescription" ELJApp_GetOsDescription) :wxstring)

(cffi:defcfun ("ELJApp_Sleep" ELJApp_Sleep) :void
  (_scs :int))

(cffi:defcfun ("ELJApp_USleep" ELJApp_USleep) :void
  (_mscs :int))

(cffi:defcfun ("ELJApp_IsTerminating" ELJApp_IsTerminating) :int)

(cffi:defcfun ("QuantizePalette" QuantizePalette) :int
  (src :pointer)
  (dest :pointer)
  (pPalette :pointer)
  (desiredNoColours :int)
  (eightBitData :pointer)
  (flags :int))

(cffi:defcfun ("Quantize" Quantize) :int
  (src :pointer)
  (dest :pointer)
  (desiredNoColours :int)
  (eightBitData :pointer)
  (flags :int))

(cffi:defcfun ("wxEvtHandler_Create" wxEvtHandler_Create) :pointer)

(cffi:defcfun ("wxEvtHandler_Delete" wxEvtHandler_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxEvtHandler_Disconnect" wxEvtHandler_Disconnect) :int
  (_obj :pointer)
  (first :int)
  (last :int)
  (type :int)
  (data :int))

(cffi:defcfun ("wxEvtHandler_GetNextHandler" wxEvtHandler_GetNextHandler) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxEvtHandler_GetPreviousHandler" wxEvtHandler_GetPreviousHandler) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxEvtHandler_SetNextHandler" wxEvtHandler_SetNextHandler) :void
  (_obj :pointer)
  (handler :pointer))

(cffi:defcfun ("wxEvtHandler_SetPreviousHandler" wxEvtHandler_SetPreviousHandler) :void
  (_obj :pointer)
  (handler :pointer))

(cffi:defcfun ("wxEvtHandler_SetEvtHandlerEnabled" wxEvtHandler_SetEvtHandlerEnabled) :void
  (_obj :pointer)
  (enabled :int))

(cffi:defcfun ("wxEvtHandler_GetEvtHandlerEnabled" wxEvtHandler_GetEvtHandlerEnabled) :int
  (_obj :pointer))

(cffi:defcfun ("wxEvtHandler_ProcessEvent" wxEvtHandler_ProcessEvent) :int
  (_obj :pointer)
  (event :pointer))

(cffi:defcfun ("wxEvtHandler_AddPendingEvent" wxEvtHandler_AddPendingEvent) :void
  (_obj :pointer)
  (event :pointer))

(cffi:defcfun ("wxEvtHandler_ProcessPendingEvents" wxEvtHandler_ProcessPendingEvents) :void
  (_obj :pointer))

(cffi:defcfun ("Null_AcceleratorTable" Null_AcceleratorTable) :pointer)

(cffi:defcfun ("Null_Bitmap" Null_Bitmap) :pointer)

(cffi:defcfun ("Null_Icon" Null_Icon) :pointer)

(cffi:defcfun ("Null_Cursor" Null_Cursor) :pointer)

(cffi:defcfun ("Null_Pen" Null_Pen) :pointer)

(cffi:defcfun ("Null_Palette" Null_Palette) :pointer)

(cffi:defcfun ("Null_Font" Null_Font) :pointer)

(cffi:defcfun ("wxCFree" wxCFree) :void
  (_ptr :pointer))

(cffi:defcfun ("wxClassInfo_CreateClassByName" wxClassInfo_CreateClassByName) :pointer
  (_inf :pointer))

(cffi:defcfun ("wxClassInfo_GetClassName" wxClassInfo_GetClassName) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxClassInfo_IsKindOf" wxClassInfo_IsKindOf) :int
  (_obj :pointer)
  (inf :pointer))

(cffi:defcfun ("wxEvent_NewEventType" wxEvent_NewEventType) :int)

(cffi:defcfun ("wxString_Create" wxString_Create) :wxstring
  (buffer :string))

(cffi:defcfun ("wxString_CreateLen" wxString_CreateLen) :wxstring
  (buffer :string)
  (len :int))

(cffi:defcfun ("wxString_Delete" wxString_Delete) :void
  (s :wxstring))

(cffi:defcfun ("wxString_GetString" wxString_GetString) :int
  (s :wxstring)
  (buffer :string))

(cffi:defcfun ("wxString_GetLength" wxString_GetLength) :int
  (s :wxstring))


