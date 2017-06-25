
;;;wxExtra.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcvar ("hasDefs" hasDefs)
 :pointer)

(cffi:defcfun ("expEVT_DELETE" expEVT_DELETE) :int)

(cffi:defcfun ("expEVT_HTML_CELL_CLICKED" expEVT_HTML_CELL_CLICKED) :int)

(cffi:defcfun ("expEVT_HTML_CELL_MOUSE_HOVER" expEVT_HTML_CELL_MOUSE_HOVER) :int)

(cffi:defcfun ("expEVT_HTML_LINK_CLICKED" expEVT_HTML_LINK_CLICKED) :int)

(cffi:defcfun ("expEVT_HTML_SET_TITLE" expEVT_HTML_SET_TITLE) :int)

(cffi:defcfun ("expEVT_INPUT_SINK" expEVT_INPUT_SINK) :int)

(cffi:defcfun ("expEVT_SORT" expEVT_SORT) :int)

(cffi:defcfun ("expEVT_COMMAND_LIST_CACHE_HINT" expEVT_COMMAND_LIST_CACHE_HINT) :int)

(cffi:defcfun ("expEVT_COMMAND_LIST_COL_RIGHT_CLICK" expEVT_COMMAND_LIST_COL_RIGHT_CLICK) :int)

(cffi:defcfun ("expEVT_COMMAND_LIST_COL_BEGIN_DRAG" expEVT_COMMAND_LIST_COL_BEGIN_DRAG) :int)

(cffi:defcfun ("expEVT_COMMAND_LIST_COL_DRAGGING" expEVT_COMMAND_LIST_COL_DRAGGING) :int)

(cffi:defcfun ("expEVT_COMMAND_LIST_COL_END_DRAG" expEVT_COMMAND_LIST_COL_END_DRAG) :int)

(cffi:defcvar ("defineDefs" defineDefs)
 :pointer)

(cffi:defcvar ("useDefs" useDefs)
 :pointer)

(cffi:defcfun ("wxVersionNumber" wxVersionNumber) :int)

(cffi:defcfun ("wxIsDefined" wxIsDefined) :int
  (s :string))

(cffi:defcfun ("wxcMalloc" wxcMalloc) :pointer
  (size :int))

(cffi:defcfun ("wxcFree" wxcFree) :void
  (p :pointer))

(cffi:defcfun ("wxcSystemSettingsGetColour" wxcSystemSettingsGetColour) :pointer
  (systemColour :int))

(cffi:defcfun ("wxcWakeUpIdle" wxcWakeUpIdle) :void)

(cffi:defcfun ("wxCursor_Delete" wxCursor_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxDateTime_Delete" wxDateTime_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxListEvent_GetCacheFrom" wxListEvent_GetCacheFrom) :int
  (_obj :pointer))

(cffi:defcfun ("wxListEvent_GetCacheTo" wxListEvent_GetCacheTo) :int
  (_obj :pointer))

(cffi:defcstruct SortData
	(id :long)
	(closure :pointer))

(cffi:defcfun ("wxListCtrl_SortItems2" wxListCtrl_SortItems2) :int
  (_obj :pointer)
  (closure :pointer))

(cffi:defcfun ("wxDC_GetPixel2" wxDC_GetPixel2) :void
  (_obj :pointer)
  (x :int)
  (y :int)
  (col :pointer))

(cffi:defcfun ("wxObject_IsKindOf" wxObject_IsKindOf) :int
  (_obj :pointer)
  (classInfo :pointer))

(cffi:defcfun ("wxObject_GetClassInfo" wxObject_GetClassInfo) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxObject_IsScrolledWindow" wxObject_IsScrolledWindow) :int
  (_obj :pointer))

(cffi:defcfun ("wxObject_Delete" wxObject_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxClassInfo_FindClass" wxClassInfo_FindClass) :pointer
  (_txt :string))

(cffi:defcfun ("wxClassInfo_GetClassNameEx" wxClassInfo_GetClassNameEx) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxClassInfo_GetBaseClassName1" wxClassInfo_GetBaseClassName1) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxClassInfo_GetBaseClassName2" wxClassInfo_GetBaseClassName2) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxClassInfo_IsKindOfEx" wxClassInfo_IsKindOfEx) :int
  (_obj :pointer)
  (classInfo :pointer))

(cffi:defcfun ("wxClassInfo_GetSize" wxClassInfo_GetSize) :int
  (_obj :pointer))

(cffi:defcfun ("wxcGetMousePosition" wxcGetMousePosition) :void
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("wxMouseEvent_GetWheelDelta" wxMouseEvent_GetWheelDelta) :int
  (_obj :pointer))

(cffi:defcfun ("wxMouseEvent_GetWheelRotation" wxMouseEvent_GetWheelRotation) :int
  (_obj :pointer))

(cffi:defcfun ("wxMouseEvent_GetButton" wxMouseEvent_GetButton) :int
  (_obj :pointer))

(cffi:defcfun ("expEVT_MOUSEWHEEL" expEVT_MOUSEWHEEL) :int)

(cffi:defcfun ("wxDC_GetUserScaleX" wxDC_GetUserScaleX) :double
  (dc :pointer))

(cffi:defcfun ("wxDC_GetUserScaleY" wxDC_GetUserScaleY) :double
  (dc :pointer))

(cffi:defcfun ("wxTimerEx_Create" wxTimerEx_Create) :pointer)

(cffi:defcfun ("wxTimerEx_Connect" wxTimerEx_Connect) :void
  (_obj :pointer)
  (_closure :pointer))

(cffi:defcfun ("wxTimerEx_GetClosure" wxTimerEx_GetClosure) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxcDirSelector" wxcDirSelector) :string
  (message :string)
  (path :string)
  (style :long)
  (x :int)
  (y :int)
  (parent :pointer))

(cffi:defcfun ("wxcFileSelector" wxcFileSelector) :string
  (message :string)
  (path :string)
  (filename :string)
  (extension :string)
  (wildcard :string)
  (flags :int)
  (parent :pointer)
  (x :int)
  (y :int))

(cffi:defcfun ("wxcGetColourFromUser" wxcGetColourFromUser) :pointer
  (parent :pointer)
  (colInit :pointer))

(cffi:defcfun ("wxcGetFontFromUser" wxcGetFontFromUser) :pointer
  (parent :pointer)
  (fontInit :pointer))

(cffi:defcfun ("wxcGetPasswordFromUser" wxcGetPasswordFromUser) :string
  (message :string)
  (caption :string)
  (defaultText :string)
  (parent :pointer)
  (x :int)
  (y :int)
  (center :int))

(cffi:defcfun ("wxcGetTextFromUser" wxcGetTextFromUser) :string
  (message :string)
  (caption :string)
  (defaultText :string)
  (parent :pointer)
  (x :int)
  (y :int)
  (center :int))

(cffi:defcfun ("wxcGetNumberFromUser" wxcGetNumberFromUser) :long
  (message :string)
  (prompt :string)
  (caption :string)
  (value :long)
  (min :long)
  (max :long)
  (parent :pointer)
  (x :int)
  (y :int))

(cffi:defcfun ("wxcMessageBox" wxcMessageBox) :int
  (message :string)
  (caption :string)
  (style :int)
  (parent :pointer)
  (x :int)
  (y :int))

(cffi:defcfun ("wxcBell" wxcBell) :void)

(cffi:defcfun ("wxcBeginBusyCursor" wxcBeginBusyCursor) :void)

(cffi:defcfun ("wxcIsBusy" wxcIsBusy) :int)

(cffi:defcfun ("wxcEndBusyCursor" wxcEndBusyCursor) :void)

(cffi:defcfun ("wxInputSink_Create" wxInputSink_Create) :pointer
  (input :pointer)
  (evtHandler :pointer)
  (bufferLen :int))

(cffi:defcfun ("wxInputSink_GetId" wxInputSink_GetId) :int
  (obj :pointer))

(cffi:defcfun ("wxInputSink_Start" wxInputSink_Start) :void
  (obj :pointer))

(cffi:defcfun ("wxInputSinkEvent_LastError" wxInputSinkEvent_LastError) :int
  (obj :pointer))

(cffi:defcfun ("wxInputSinkEvent_LastRead" wxInputSinkEvent_LastRead) :int
  (obj :pointer))

(cffi:defcfun ("wxInputSinkEvent_LastInput" wxInputSinkEvent_LastInput) :string
  (obj :pointer))

(cffi:defcfun ("wxcHtmlEvent_GetMouseEvent" wxcHtmlEvent_GetMouseEvent) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxcHtmlEvent_GetHtmlCell" wxcHtmlEvent_GetHtmlCell) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxcHtmlEvent_GetHtmlCellId" wxcHtmlEvent_GetHtmlCellId) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxcHtmlEvent_GetHref" wxcHtmlEvent_GetHref) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxcHtmlEvent_GetTarget" wxcHtmlEvent_GetTarget) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxcHtmlEvent_GetLogicalPosition" wxcHtmlEvent_GetLogicalPosition) :void
  (_obj :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("wxHtmlWindow_Create" wxHtmlWindow_Create) :pointer
  (_prt :pointer)
  (_id :int)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_stl :long)
  (_txt :string))

(cffi:defcfun ("wxcHtmlWindow_Create" wxcHtmlWindow_Create) :pointer
  (_prt :pointer)
  (_id :int)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_stl :long)
  (_txt :string))

(cffi:defcfun ("wxHtmlWindow_AppendToPage" wxHtmlWindow_AppendToPage) :int
  (_obj :pointer)
  (source :string))

(cffi:defcfun ("wxHtmlWindow_GetInternalRepresentation" wxHtmlWindow_GetInternalRepresentation) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxHtmlWindow_GetOpenedAnchor" wxHtmlWindow_GetOpenedAnchor) :string
  (_obj :pointer))

(cffi:defcfun ("wxHtmlWindow_GetOpenedPage" wxHtmlWindow_GetOpenedPage) :string
  (_obj :pointer))

(cffi:defcfun ("wxHtmlWindow_GetOpenedPageTitle" wxHtmlWindow_GetOpenedPageTitle) :string
  (_obj :pointer))

(cffi:defcfun ("wxHtmlWindow_GetRelatedFrame" wxHtmlWindow_GetRelatedFrame) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxHtmlWindow_HistoryBack" wxHtmlWindow_HistoryBack) :int
  (_obj :pointer))

(cffi:defcfun ("wxHtmlWindow_HistoryCanBack" wxHtmlWindow_HistoryCanBack) :int
  (_obj :pointer))

(cffi:defcfun ("wxHtmlWindow_HistoryCanForward" wxHtmlWindow_HistoryCanForward) :int
  (_obj :pointer))

(cffi:defcfun ("wxHtmlWindow_HistoryClear" wxHtmlWindow_HistoryClear) :void
  (_obj :pointer))

(cffi:defcfun ("wxHtmlWindow_HistoryForward" wxHtmlWindow_HistoryForward) :int
  (_obj :pointer))

(cffi:defcfun ("wxHtmlWindow_LoadPage" wxHtmlWindow_LoadPage) :int
  (_obj :pointer)
  (location :string))

(cffi:defcfun ("wxHtmlWindow_ReadCustomization" wxHtmlWindow_ReadCustomization) :void
  (_obj :pointer)
  (cfg :pointer)
  (path :string))

(cffi:defcfun ("wxHtmlWindow_SetBorders" wxHtmlWindow_SetBorders) :void
  (_obj :pointer)
  (b :int))

(cffi:defcfun ("wxHtmlWindow_SetFonts" wxHtmlWindow_SetFonts) :void
  (_obj :pointer)
  (normal_face :string)
  (fixed_face :string)
  (sizes :pointer))

(cffi:defcfun ("wxHtmlWindow_SetPage" wxHtmlWindow_SetPage) :int
  (_obj :pointer)
  (source :string))

(cffi:defcfun ("wxHtmlWindow_SetRelatedFrame" wxHtmlWindow_SetRelatedFrame) :void
  (_obj :pointer)
  (frame :pointer)
  (format :string))

(cffi:defcfun ("wxHtmlWindow_SetRelatedStatusBar" wxHtmlWindow_SetRelatedStatusBar) :void
  (_obj :pointer)
  (bar :int))

(cffi:defcfun ("wxHtmlWindow_WriteCustomization" wxHtmlWindow_WriteCustomization) :void
  (_obj :pointer)
  (cfg :pointer)
  (path :string))

(cffi:defcfun ("wxLogStderr_Create" wxLogStderr_Create) :pointer)

(cffi:defcfun ("wxLogStderr_CreateStdOut" wxLogStderr_CreateStdOut) :pointer)

(cffi:defcfun ("wxLogNull_Create" wxLogNull_Create) :pointer)

(cffi:defcfun ("wxLogTextCtrl_Create" wxLogTextCtrl_Create) :pointer
  (text :pointer))

(cffi:defcfun ("wxLogWindow_Create" wxLogWindow_Create) :pointer
  (parent :pointer)
  (title :string)
  (showit :int)
  (passthrough :int))

(cffi:defcfun ("wxLogWindow_GetFrame" wxLogWindow_GetFrame) :pointer
  (obj :pointer))

(cffi:defcfun ("wxLog_Delete" wxLog_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxLog_OnLog" wxLog_OnLog) :void
  (_obj :pointer)
  (level :int)
  (szString :pointer)
  (tm :int))

(cffi:defcfun ("wxLog_Flush" wxLog_Flush) :void
  (_obj :pointer))

(cffi:defcfun ("wxLog_HasPendingMessages" wxLog_HasPendingMessages) :int
  (_obj :pointer))

(cffi:defcfun ("wxLog_FlushActive" wxLog_FlushActive) :void
  (_obj :pointer))

(cffi:defcfun ("wxLog_GetActiveTarget" wxLog_GetActiveTarget) :pointer)

(cffi:defcfun ("wxLog_SetActiveTarget" wxLog_SetActiveTarget) :pointer
  (pLogger :pointer))

(cffi:defcfun ("wxLog_Suspend" wxLog_Suspend) :void
  (_obj :pointer))

(cffi:defcfun ("wxLog_Resume" wxLog_Resume) :void
  (_obj :pointer))

(cffi:defcfun ("wxLog_SetVerbose" wxLog_SetVerbose) :void
  (_obj :pointer)
  (bVerbose :int))

(cffi:defcfun ("wxLog_DontCreateOnDemand" wxLog_DontCreateOnDemand) :void
  (_obj :pointer))

(cffi:defcfun ("wxLog_SetTraceMask" wxLog_SetTraceMask) :void
  (_obj :pointer)
  (ulMask :int))

(cffi:defcfun ("wxLog_AddTraceMask" wxLog_AddTraceMask) :void
  (_obj :pointer)
  (str :pointer))

(cffi:defcfun ("wxLog_RemoveTraceMask" wxLog_RemoveTraceMask) :void
  (_obj :pointer)
  (str :pointer))

(cffi:defcfun ("wxLog_SetTimestamp" wxLog_SetTimestamp) :void
  (_obj :pointer)
  (ts :pointer))

(cffi:defcfun ("wxLog_GetVerbose" wxLog_GetVerbose) :int
  (_obj :pointer))

(cffi:defcfun ("wxLog_GetTraceMask" wxLog_GetTraceMask) :int
  (_obj :pointer))

(cffi:defcfun ("wxLog_IsAllowedTraceMask" wxLog_IsAllowedTraceMask) :int
  (_obj :pointer)
  (mask :pointer))

(cffi:defcfun ("wxLog_GetTimestamp" wxLog_GetTimestamp) :pointer
  (_obj :pointer))

(cffi:defcfun ("LogError" LogError) :void
  (_msg :pointer))

(cffi:defcfun ("LogFatalError" LogFatalError) :void
  (_msg :pointer))

(cffi:defcfun ("LogWarning" LogWarning) :void
  (_msg :pointer))

(cffi:defcfun ("LogMessage" LogMessage) :void
  (_msg :pointer))

(cffi:defcfun ("LogVerbose" LogVerbose) :void
  (_msg :pointer))

(cffi:defcfun ("LogStatus" LogStatus) :void
  (_msg :pointer))

(cffi:defcfun ("LogSysError" LogSysError) :void
  (_msg :pointer))

(cffi:defcfun ("LogDebug" LogDebug) :void
  (_msg :pointer))

(cffi:defcfun ("LogTrace" LogTrace) :void
  (mask :pointer)
  (_msg :pointer))

(cffi:defcfun ("wxGridCellTextEnterEditor_Ctor" wxGridCellTextEnterEditor_Ctor) :pointer)

(cffi:defcfun ("wxConfigBase_Get" wxConfigBase_Get) :pointer)

(cffi:defcfun ("wxConfigBase_Set" wxConfigBase_Set) :void
  (self :pointer))

(cffi:defcfun ("wxFileConfig_Create" wxFileConfig_Create) :pointer
  (inp :pointer))


