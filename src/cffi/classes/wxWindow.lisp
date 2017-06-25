
;;;wxWindow.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxWindow_Create" wxWindow_Create) :pointer
  (_prt :pointer)
  (_id :int)
  (_x :int)
  (_y :int)
  (_w :int)
  (_h :int)
  (_stl :int))

(cffi:defcfun ("wxWindow_Close" wxWindow_Close) :int
  (_obj :pointer)
  (_force :int))

(cffi:defcfun ("wxWindow_Destroy" wxWindow_Destroy) :int
  (_obj :pointer))

(cffi:defcfun ("wxWindow_Clear" wxWindow_Clear) :void
  (_obj :pointer))

(cffi:defcfun ("wxWindow_Fit" wxWindow_Fit) :void
  (_obj :pointer))

(cffi:defcfun ("wxWindow_DestroyChildren" wxWindow_DestroyChildren) :int
  (_obj :pointer))

(cffi:defcfun ("wxWindow_IsBeingDeleted" wxWindow_IsBeingDeleted) :int
  (_obj :pointer))

(cffi:defcfun ("wxWindow_SetLabel" wxWindow_SetLabel) :void
  (_obj :pointer)
  (_title :string))

(cffi:defcfun ("wxWindow_GetLabel" wxWindow_GetLabel) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxWindow_SetName" wxWindow_SetName) :void
  (_obj :pointer)
  (_name :string))

(cffi:defcfun ("wxWindow_GetName" wxWindow_GetName) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxWindow_SetId" wxWindow_SetId) :void
  (_obj :pointer)
  (_id :int))

(cffi:defcfun ("wxWindow_GetId" wxWindow_GetId) :int
  (_obj :pointer))

(cffi:defcfun ("wxWindow_SetSize" wxWindow_SetSize) :void
  (_obj :pointer)
  (x :int)
  (y :int)
  (width :int)
  (height :int)
  (sizeFlags :int))

(cffi:defcfun ("wxWindow_Move" wxWindow_Move) :void
  (_obj :pointer)
  (x :int)
  (y :int))

(cffi:defcfun ("wxWindow_Raise" wxWindow_Raise) :void
  (_obj :pointer))

(cffi:defcfun ("wxWindow_Lower" wxWindow_Lower) :void
  (_obj :pointer))

(cffi:defcfun ("wxWindow_SetClientSize" wxWindow_SetClientSize) :void
  (_obj :pointer)
  (width :int)
  (height :int))

(cffi:defcfun ("wxWindow_GetPosition" wxWindow_GetPosition) :void
  (_obj :pointer)
  (_x :pointer)
  (_y :pointer))

(cffi:defcfun ("wxWindow_GetSize" wxWindow_GetSize) :void
  (_obj :pointer)
  (_w :pointer)
  (_h :pointer))

(cffi:defcfun ("wxWindow_GetRect" wxWindow_GetRect) :void
  (_obj :pointer)
  (x :pointer)
  (y :pointer)
  (w :pointer)
  (h :pointer))

(cffi:defcfun ("wxWindow_GetClientSize" wxWindow_GetClientSize) :void
  (_obj :pointer)
  (_w :pointer)
  (_h :pointer))

(cffi:defcfun ("wxWindow_GetBestSize" wxWindow_GetBestSize) :void
  (_obj :pointer)
  (_w :pointer)
  (_h :pointer))

(cffi:defcfun ("wxWindow_Center" wxWindow_Center) :void
  (_obj :pointer)
  (direction :int))

(cffi:defcfun ("wxWindow_CenterOnParent" wxWindow_CenterOnParent) :void
  (_obj :pointer)
  (dir :int))

(cffi:defcfun ("wxWindow_SetSizeHints" wxWindow_SetSizeHints) :void
  (_obj :pointer)
  (minW :int)
  (minH :int)
  (maxW :int)
  (maxH :int)
  (incW :int)
  (incH :int))

(cffi:defcfun ("wxWindow_GetMinWidth" wxWindow_GetMinWidth) :int
  (_obj :pointer))

(cffi:defcfun ("wxWindow_GetMinHeight" wxWindow_GetMinHeight) :int
  (_obj :pointer))

(cffi:defcfun ("wxWindow_GetMaxWidth" wxWindow_GetMaxWidth) :int
  (_obj :pointer))

(cffi:defcfun ("wxWindow_GetMaxHeight" wxWindow_GetMaxHeight) :int
  (_obj :pointer))

(cffi:defcfun ("wxWindow_Show" wxWindow_Show) :int
  (_obj :pointer))

(cffi:defcfun ("wxWindow_Hide" wxWindow_Hide) :int
  (_obj :pointer))

(cffi:defcfun ("wxWindow_Enable" wxWindow_Enable) :int
  (_obj :pointer))

(cffi:defcfun ("wxWindow_Disable" wxWindow_Disable) :int
  (_obj :pointer))

(cffi:defcfun ("wxWindow_IsShown" wxWindow_IsShown) :int
  (_obj :pointer))

(cffi:defcfun ("wxWindow_IsEnabled" wxWindow_IsEnabled) :int
  (_obj :pointer))

(cffi:defcfun ("wxWindow_SetWindowStyleFlag" wxWindow_SetWindowStyleFlag) :void
  (_obj :pointer)
  (style :long))

(cffi:defcfun ("wxWindow_GetWindowStyleFlag" wxWindow_GetWindowStyleFlag) :int
  (_obj :pointer))

(cffi:defcfun ("wxWindow_HasFlag" wxWindow_HasFlag) :int
  (_obj :pointer)
  (flag :int))

(cffi:defcfun ("wxWindow_SetExtraStyle" wxWindow_SetExtraStyle) :void
  (_obj :pointer)
  (exStyle :long))

(cffi:defcfun ("wxWindow_MakeModal" wxWindow_MakeModal) :void
  (_obj :pointer)
  (modal :int))

(cffi:defcfun ("wxWindow_SetFocus" wxWindow_SetFocus) :void
  (_obj :pointer))

(cffi:defcfun ("wxWindow_FindFocus" wxWindow_FindFocus) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxWindow_GetChildren" wxWindow_GetChildren) :int
  (_obj :pointer)
  (_res :pointer)
  (_cnt :int))

(cffi:defcfun ("wxWindow_GetParent" wxWindow_GetParent) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxWindow_IsTopLevel" wxWindow_IsTopLevel) :int
  (_obj :pointer))

(cffi:defcfun ("wxWindow_FindWindow" wxWindow_FindWindow) :pointer
  (_obj :pointer)
  (name :string))

(cffi:defcfun ("wxWindow_AddChild" wxWindow_AddChild) :void
  (_obj :pointer)
  (child :pointer))

(cffi:defcfun ("wxWindow_RemoveChild" wxWindow_RemoveChild) :void
  (_obj :pointer)
  (child :pointer))

(cffi:defcfun ("wxWindow_GetEventHandler" wxWindow_GetEventHandler) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxWindow_PushEventHandler" wxWindow_PushEventHandler) :void
  (_obj :pointer)
  (handler :pointer))

(cffi:defcfun ("wxWindow_PopEventHandler" wxWindow_PopEventHandler) :pointer
  (_obj :pointer)
  (deleteHandler :int))

(cffi:defcfun ("wxWindow_SetValidator" wxWindow_SetValidator) :void
  (_obj :pointer)
  (validator :pointer))

(cffi:defcfun ("wxWindow_GetValidator" wxWindow_GetValidator) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxWindow_SetClientData" wxWindow_SetClientData) :void
  (_obj :pointer)
  (data :pointer))

(cffi:defcfun ("wxWindow_GetClientData" wxWindow_GetClientData) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxWindow_Validate" wxWindow_Validate) :int
  (_obj :pointer))

(cffi:defcfun ("wxWindow_TransferDataToWindow" wxWindow_TransferDataToWindow) :int
  (_obj :pointer))

(cffi:defcfun ("wxWindow_TransferDataFromWindow" wxWindow_TransferDataFromWindow) :int
  (_obj :pointer))

(cffi:defcfun ("wxWindow_InitDialog" wxWindow_InitDialog) :void
  (_obj :pointer))

(cffi:defcfun ("wxWindow_SetAcceleratorTable" wxWindow_SetAcceleratorTable) :void
  (_obj :pointer)
  (accel :pointer))

(cffi:defcfun ("wxWindow_ConvertPixelsToDialog" wxWindow_ConvertPixelsToDialog) :void
  (_obj :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("wxWindow_ConvertDialogToPixels" wxWindow_ConvertDialogToPixels) :void
  (_obj :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("wxWindow_WarpPointer" wxWindow_WarpPointer) :void
  (_obj :pointer)
  (x :int)
  (y :int))

(cffi:defcfun ("wxWindow_CaptureMouse" wxWindow_CaptureMouse) :void
  (_obj :pointer))

(cffi:defcfun ("wxWindow_ReleaseMouse" wxWindow_ReleaseMouse) :void
  (_obj :pointer))

(cffi:defcfun ("wxWindow_Refresh" wxWindow_Refresh) :void
  (_obj :pointer)
  (eraseBackground :int))

(cffi:defcfun ("wxWindow_RefreshRect" wxWindow_RefreshRect) :void
  (_obj :pointer)
  (eraseBackground :int)
  (x :int)
  (y :int)
  (w :int)
  (h :int))

(cffi:defcfun ("wxWindow_PrepareDC" wxWindow_PrepareDC) :void
  (_obj :pointer)
  (dc :pointer))

(cffi:defcfun ("wxWindow_GetUpdateRegion" wxWindow_GetUpdateRegion) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxWindow_IsExposed" wxWindow_IsExposed) :int
  (_obj :pointer)
  (x :int)
  (y :int)
  (w :int)
  (h :int))

(cffi:defcfun ("wxWindow_SetBackgroundColour" wxWindow_SetBackgroundColour) :int
  (_obj :pointer)
  (colour :pointer))

(cffi:defcfun ("wxWindow_SetForegroundColour" wxWindow_SetForegroundColour) :int
  (_obj :pointer)
  (colour :pointer))

(cffi:defcfun ("wxWindow_GetBackgroundColour" wxWindow_GetBackgroundColour) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxWindow_GetForegroundColour" wxWindow_GetForegroundColour) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxWindow_SetCursor" wxWindow_SetCursor) :int
  (_obj :pointer)
  (cursor :pointer))

(cffi:defcfun ("wxWindow_GetCursor" wxWindow_GetCursor) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxWindow_SetFont" wxWindow_SetFont) :int
  (_obj :pointer)
  (font :pointer))

(cffi:defcfun ("wxWindow_GetFont" wxWindow_GetFont) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxWindow_SetCaret" wxWindow_SetCaret) :void
  (_obj :pointer)
  (caret :pointer))

(cffi:defcfun ("wxWindow_GetCaret" wxWindow_GetCaret) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxWindow_GetCharHeight" wxWindow_GetCharHeight) :int
  (_obj :pointer))

(cffi:defcfun ("wxWindow_GetCharWidth" wxWindow_GetCharWidth) :int
  (_obj :pointer))

(cffi:defcfun ("wxWindow_GetTextExtent" wxWindow_GetTextExtent) :void
  (_obj :pointer)
  (string :string)
  (x :pointer)
  (y :pointer)
  (descent :pointer)
  (externalLeading :pointer)
  (theFont :pointer))

(cffi:defcfun ("wxWindow_ScreenToClient" wxWindow_ScreenToClient) :void
  (_obj :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("wxWindow_UpdateWindowUI" wxWindow_UpdateWindowUI) :void
  (_obj :pointer))

(cffi:defcfun ("wxWindow_PopupMenu" wxWindow_PopupMenu) :int
  (_obj :pointer)
  (menu :pointer)
  (x :int)
  (y :int))

(cffi:defcfun ("wxWindow_SetScrollPos" wxWindow_SetScrollPos) :void
  (_obj :pointer)
  (orient :int)
  (pos :int)
  (refresh :int))

(cffi:defcfun ("wxWindow_GetScrollPos" wxWindow_GetScrollPos) :int
  (_obj :pointer)
  (orient :int))

(cffi:defcfun ("wxWindow_GetScrollThumb" wxWindow_GetScrollThumb) :int
  (_obj :pointer)
  (orient :int))

(cffi:defcfun ("wxWindow_GetScrollRange" wxWindow_GetScrollRange) :int
  (_obj :pointer)
  (orient :int))

(cffi:defcfun ("wxWindow_ScrollWindow" wxWindow_ScrollWindow) :void
  (_obj :pointer)
  (dx :int)
  (dy :int))

(cffi:defcfun ("wxWindow_ScrollWindowRect" wxWindow_ScrollWindowRect) :void
  (_obj :pointer)
  (dx :int)
  (dy :int)
  (x :int)
  (y :int)
  (w :int)
  (h :int))

(cffi:defcfun ("wxWindow_SetToolTip" wxWindow_SetToolTip) :void
  (_obj :pointer)
  (tip :string))

(cffi:defcfun ("wxWindow_GetToolTip" wxWindow_GetToolTip) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxWindow_SetDropTarget" wxWindow_SetDropTarget) :void
  (_obj :pointer)
  (dropTarget :pointer))

(cffi:defcfun ("wxWindow_GetDropTarget" wxWindow_GetDropTarget) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxWindow_SetConstraints" wxWindow_SetConstraints) :void
  (_obj :pointer)
  (constraints :pointer))

(cffi:defcfun ("wxWindow_GetConstraints" wxWindow_GetConstraints) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxWindow_SetAutoLayout" wxWindow_SetAutoLayout) :void
  (_obj :pointer)
  (autoLayout :int))

(cffi:defcfun ("wxWindow_GetAutoLayout" wxWindow_GetAutoLayout) :int
  (_obj :pointer))

(cffi:defcfun ("wxWindow_Layout" wxWindow_Layout) :void
  (_obj :pointer))

(cffi:defcfun ("wxWindow_UnsetConstraints" wxWindow_UnsetConstraints) :void
  (_obj :pointer)
  (c :pointer))

(cffi:defcfun ("wxWindow_GetConstraintsInvolvedIn" wxWindow_GetConstraintsInvolvedIn) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxWindow_AddConstraintReference" wxWindow_AddConstraintReference) :void
  (_obj :pointer)
  (otherWin :pointer))

(cffi:defcfun ("wxWindow_RemoveConstraintReference" wxWindow_RemoveConstraintReference) :void
  (_obj :pointer)
  (otherWin :pointer))

(cffi:defcfun ("wxWindow_DeleteRelatedConstraints" wxWindow_DeleteRelatedConstraints) :void
  (_obj :pointer))

(cffi:defcfun ("wxWindow_ResetConstraints" wxWindow_ResetConstraints) :void
  (_obj :pointer))

(cffi:defcfun ("wxWindow_SetConstraintSizes" wxWindow_SetConstraintSizes) :void
  (_obj :pointer)
  (recurse :int))

(cffi:defcfun ("wxWindow_LayoutPhase1" wxWindow_LayoutPhase1) :int
  (_obj :pointer)
  (noChanges :pointer))

(cffi:defcfun ("wxWindow_LayoutPhase2" wxWindow_LayoutPhase2) :int
  (_obj :pointer)
  (noChanges :pointer))

(cffi:defcfun ("wxWindow_DoPhase" wxWindow_DoPhase) :int
  (_obj :pointer)
  (phase :int))

(cffi:defcfun ("wxWindow_SetSizeConstraint" wxWindow_SetSizeConstraint) :void
  (_obj :pointer)
  (x :int)
  (y :int)
  (w :int)
  (h :int))

(cffi:defcfun ("wxWindow_MoveConstraint" wxWindow_MoveConstraint) :void
  (_obj :pointer)
  (x :int)
  (y :int))

(cffi:defcfun ("wxWindow_GetSizeConstraint" wxWindow_GetSizeConstraint) :void
  (_obj :pointer)
  (w :pointer)
  (h :pointer))

(cffi:defcfun ("wxWindow_GetClientSizeConstraint" wxWindow_GetClientSizeConstraint) :void
  (_obj :pointer)
  (w :pointer)
  (h :pointer))

(cffi:defcfun ("wxWindow_GetPositionConstraint" wxWindow_GetPositionConstraint) :void
  (_obj :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("wxWindow_SetSizer" wxWindow_SetSizer) :void
  (_obj :pointer)
  (sizer :pointer))

(cffi:defcfun ("wxWindow_GetSizer" wxWindow_GetSizer) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxWindow_GetHandle" wxWindow_GetHandle) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxWindow_SetScrollbar" wxWindow_SetScrollbar) :void
  (_obj :pointer)
  (orient :int)
  (pos :int)
  (thumbVisible :int)
  (range :int)
  (refresh :int))

(cffi:defcfun ("wxWindow_Reparent" wxWindow_Reparent) :int
  (_obj :pointer)
  (_par :pointer))

(cffi:defcfun ("wxWindow_GetAdjustedBestSize" wxWindow_GetAdjustedBestSize) :void
  (_obj :pointer)
  (_w :pointer)
  (_h :pointer))

(cffi:defcfun ("wxWindow_Freeze" wxWindow_Freeze) :void
  (_obj :pointer))

(cffi:defcfun ("wxWindow_Thaw" wxWindow_Thaw) :void
  (_obj :pointer))

(cffi:defcfun ("wxWindow_ConvertPixelsToDialogEx" wxWindow_ConvertPixelsToDialogEx) :void
  (_obj :pointer)
  (x :int)
  (y :int)
  (_x :pointer)
  (_y :pointer))

(cffi:defcfun ("wxWindow_ConvertDialogToPixelsEx" wxWindow_ConvertDialogToPixelsEx) :void
  (_obj :pointer)
  (x :int)
  (y :int)
  (_x :pointer)
  (_y :pointer))

(cffi:defcfun ("wxWindow_SetClientObject" wxWindow_SetClientObject) :void
  (_obj :pointer)
  (obj :pointer))

(cffi:defcfun ("wxWindow_SetVirtualSize" wxWindow_SetVirtualSize) :void
  (_obj :pointer)
  (w :int)
  (h :int))

(cffi:defcfun ("wxWindow_GetVirtualSize" wxWindow_GetVirtualSize) :void
  (_obj :pointer)
  (w :pointer)
  (h :pointer))

(cffi:defcfun ("wxWindow_FitInside" wxWindow_FitInside) :void
  (_obj :pointer))

(cffi:defcfun ("wxWindow_ClientToScreen" wxWindow_ClientToScreen) :void
  (self :pointer)
  (x :int)
  (y :int)
  (sx :pointer)
  (sy :pointer))

(cffi:defcfun ("wxWindow_ScreenToClient2" wxWindow_ScreenToClient2) :void
  (self :pointer)
  (x :int)
  (y :int)
  (cx :pointer)
  (cy :pointer))


