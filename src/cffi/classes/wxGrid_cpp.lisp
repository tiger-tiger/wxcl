
;;;wxGrid_cpp.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxGridCellCoordsArray_Create" wxGridCellCoordsArray_Create) :pointer)

(cffi:defcfun ("wxGridCellCoordsArray_Delete" wxGridCellCoordsArray_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxGridCellCoordsArray_GetCount" wxGridCellCoordsArray_GetCount) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridCellCoordsArray_Item" wxGridCellCoordsArray_Item) :void
  (_obj :pointer)
  (_idx :int)
  (_c :pointer)
  (_r :pointer))

(cffi:defcfun ("wxGridCellEditor_IsCreated" wxGridCellEditor_IsCreated) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridCellEditor_GetControl" wxGridCellEditor_GetControl) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxGridCellEditor_SetControl" wxGridCellEditor_SetControl) :void
  (_obj :pointer)
  (control :pointer))

(cffi:defcfun ("wxGridCellEditor_Create" wxGridCellEditor_Create) :void
  (_obj :pointer)
  (parent :pointer)
  (id :int)
  (evtHandler :pointer))

(cffi:defcfun ("wxGridCellEditor_SetSize" wxGridCellEditor_SetSize) :void
  (_obj :pointer)
  (x :int)
  (y :int)
  (w :int)
  (h :int))

(cffi:defcfun ("wxGridCellEditor_Show" wxGridCellEditor_Show) :void
  (_obj :pointer)
  (show :int)
  (attr :pointer))

(cffi:defcfun ("wxGridCellEditor_PaintBackground" wxGridCellEditor_PaintBackground) :void
  (_obj :pointer)
  (x :int)
  (y :int)
  (w :int)
  (h :int)
  (attr :pointer))

(cffi:defcfun ("wxGridCellEditor_BeginEdit" wxGridCellEditor_BeginEdit) :void
  (_obj :pointer)
  (row :int)
  (col :int)
  (grid :pointer))

(cffi:defcfun ("wxGridCellEditor_EndEdit" wxGridCellEditor_EndEdit) :int
  (_obj :pointer)
  (row :int)
  (col :int)
  (grid :pointer))

(cffi:defcfun ("wxGridCellEditor_Reset" wxGridCellEditor_Reset) :void
  (_obj :pointer))

(cffi:defcfun ("wxGridCellEditor_IsAcceptedKey" wxGridCellEditor_IsAcceptedKey) :int
  (_obj :pointer)
  (event :pointer))

(cffi:defcfun ("wxGridCellEditor_StartingKey" wxGridCellEditor_StartingKey) :void
  (_obj :pointer)
  (event :pointer))

(cffi:defcfun ("wxGridCellEditor_StartingClick" wxGridCellEditor_StartingClick) :void
  (_obj :pointer))

(cffi:defcfun ("wxGridCellEditor_HandleReturn" wxGridCellEditor_HandleReturn) :void
  (_obj :pointer)
  (event :pointer))

(cffi:defcfun ("wxGridCellEditor_Destroy" wxGridCellEditor_Destroy) :void
  (_obj :pointer))

(cffi:defcfun ("wxGridCellEditor_SetParameters" wxGridCellEditor_SetParameters) :void
  (_obj :pointer)
  (params :pointer))

(cffi:defcfun ("wxGridCellTextEditor_Ctor" wxGridCellTextEditor_Ctor) :pointer)

(cffi:defcfun ("wxGridCellNumberEditor_Ctor" wxGridCellNumberEditor_Ctor) :pointer
  (min :int)
  (max :int))

(cffi:defcfun ("wxGridCellFloatEditor_Ctor" wxGridCellFloatEditor_Ctor) :pointer
  (width :int)
  (precision :int))

(cffi:defcfun ("wxGridCellBoolEditor_Ctor" wxGridCellBoolEditor_Ctor) :pointer)

(cffi:defcfun ("wxGridCellChoiceEditor_Ctor" wxGridCellChoiceEditor_Ctor) :pointer
  (count :int)
  (choices :pointer)
  (allowOthers :int))

(cffi:defcfun ("wxGridCellAttr_Ctor" wxGridCellAttr_Ctor) :pointer)

(cffi:defcfun ("wxGridCellAttr_IncRef" wxGridCellAttr_IncRef) :void
  (_obj :pointer))

(cffi:defcfun ("wxGridCellAttr_DecRef" wxGridCellAttr_DecRef) :void
  (_obj :pointer))

(cffi:defcfun ("wxGridCellAttr_SetTextColour" wxGridCellAttr_SetTextColour) :void
  (_obj :pointer)
  (colText :pointer))

(cffi:defcfun ("wxGridCellAttr_SetBackgroundColour" wxGridCellAttr_SetBackgroundColour) :void
  (_obj :pointer)
  (colBack :pointer))

(cffi:defcfun ("wxGridCellAttr_SetFont" wxGridCellAttr_SetFont) :void
  (_obj :pointer)
  (font :pointer))

(cffi:defcfun ("wxGridCellAttr_SetAlignment" wxGridCellAttr_SetAlignment) :void
  (_obj :pointer)
  (hAlign :int)
  (vAlign :int))

(cffi:defcfun ("wxGridCellAttr_SetReadOnly" wxGridCellAttr_SetReadOnly) :void
  (_obj :pointer)
  (isReadOnly :int))

(cffi:defcfun ("wxGridCellAttr_SetRenderer" wxGridCellAttr_SetRenderer) :void
  (_obj :pointer)
  (renderer :pointer))

(cffi:defcfun ("wxGridCellAttr_SetEditor" wxGridCellAttr_SetEditor) :void
  (_obj :pointer)
  (editor :pointer))

(cffi:defcfun ("wxGridCellAttr_HasTextColour" wxGridCellAttr_HasTextColour) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridCellAttr_HasBackgroundColour" wxGridCellAttr_HasBackgroundColour) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridCellAttr_HasFont" wxGridCellAttr_HasFont) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridCellAttr_HasAlignment" wxGridCellAttr_HasAlignment) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridCellAttr_HasRenderer" wxGridCellAttr_HasRenderer) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridCellAttr_HasEditor" wxGridCellAttr_HasEditor) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridCellAttr_GetTextColour" wxGridCellAttr_GetTextColour) :void
  (_obj :pointer)
  (colour :pointer))

(cffi:defcfun ("wxGridCellAttr_GetBackgroundColour" wxGridCellAttr_GetBackgroundColour) :void
  (_obj :pointer)
  (colour :pointer))

(cffi:defcfun ("wxGridCellAttr_GetFont" wxGridCellAttr_GetFont) :void
  (_obj :pointer)
  (font :pointer))

(cffi:defcfun ("wxGridCellAttr_GetAlignment" wxGridCellAttr_GetAlignment) :void
  (_obj :pointer)
  (hAlign :pointer)
  (vAlign :pointer))

(cffi:defcfun ("wxGridCellAttr_GetRenderer" wxGridCellAttr_GetRenderer) :pointer
  (_obj :pointer)
  (grid :pointer)
  (row :int)
  (col :int))

(cffi:defcfun ("wxGridCellAttr_GetEditor" wxGridCellAttr_GetEditor) :pointer
  (_obj :pointer)
  (grid :pointer)
  (row :int)
  (col :int))

(cffi:defcfun ("wxGridCellAttr_IsReadOnly" wxGridCellAttr_IsReadOnly) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridCellAttr_SetDefAttr" wxGridCellAttr_SetDefAttr) :void
  (_obj :pointer)
  (defAttr :pointer))

(cffi:defcfun ("wxGrid_Create" wxGrid_Create) :pointer
  (_prt :pointer)
  (_id :int)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_stl :int))

(cffi:defcfun ("wxGrid_CreateGrid" wxGrid_CreateGrid) :void
  (_obj :pointer)
  (rows :int)
  (cols :int)
  (selmode :int))

(cffi:defcfun ("wxGrid_SetSelectionMode" wxGrid_SetSelectionMode) :void
  (_obj :pointer)
  (selmode :int))

(cffi:defcfun ("wxGrid_GetNumberRows" wxGrid_GetNumberRows) :int
  (_obj :pointer))

(cffi:defcfun ("wxGrid_GetNumberCols" wxGrid_GetNumberCols) :int
  (_obj :pointer))

(cffi:defcfun ("wxGrid_CalcRowLabelsExposed" wxGrid_CalcRowLabelsExposed) :void
  (_obj :pointer)
  (reg :pointer))

(cffi:defcfun ("wxGrid_CalcColLabelsExposed" wxGrid_CalcColLabelsExposed) :void
  (_obj :pointer)
  (reg :pointer))

(cffi:defcfun ("wxGrid_CalcCellsExposed" wxGrid_CalcCellsExposed) :void
  (_obj :pointer)
  (reg :pointer))

(cffi:defcfun ("wxGrid_NewCalcCellsExposed" wxGrid_NewCalcCellsExposed) :void
  (_obj :pointer)
  (reg :pointer)
  (arr :pointer))

(cffi:defcfun ("wxGrid_ProcessRowLabelMouseEvent" wxGrid_ProcessRowLabelMouseEvent) :void
  (_obj :pointer)
  (event :pointer))

(cffi:defcfun ("wxGrid_ProcessColLabelMouseEvent" wxGrid_ProcessColLabelMouseEvent) :void
  (_obj :pointer)
  (event :pointer))

(cffi:defcfun ("wxGrid_ProcessCornerLabelMouseEvent" wxGrid_ProcessCornerLabelMouseEvent) :void
  (_obj :pointer)
  (event :pointer))

(cffi:defcfun ("wxGrid_ProcessGridCellMouseEvent" wxGrid_ProcessGridCellMouseEvent) :void
  (_obj :pointer)
  (event :pointer))

(cffi:defcfun ("wxGrid_ProcessTableMessage" wxGrid_ProcessTableMessage) :int
  (_obj :pointer)
  (evt :pointer))

(cffi:defcfun ("wxGrid_DoEndDragResizeRow" wxGrid_DoEndDragResizeRow) :void
  (_obj :pointer))

(cffi:defcfun ("wxGrid_DoEndDragResizeCol" wxGrid_DoEndDragResizeCol) :void
  (_obj :pointer))

(cffi:defcfun ("wxGrid_GetTable" wxGrid_GetTable) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxGrid_SetTable" wxGrid_SetTable) :int
  (_obj :pointer)
  (table :pointer)
  (takeOwnership :int)
  (selmode :int))

(cffi:defcfun ("wxGrid_ClearGrid" wxGrid_ClearGrid) :void
  (_obj :pointer))

(cffi:defcfun ("wxGrid_InsertRows" wxGrid_InsertRows) :int
  (_obj :pointer)
  (pos :int)
  (numRows :int)
  (updateLabels :int))

(cffi:defcfun ("wxGrid_AppendRows" wxGrid_AppendRows) :int
  (_obj :pointer)
  (numRows :int)
  (updateLabels :int))

(cffi:defcfun ("wxGrid_DeleteRows" wxGrid_DeleteRows) :int
  (_obj :pointer)
  (pos :int)
  (numRows :int)
  (updateLabels :int))

(cffi:defcfun ("wxGrid_InsertCols" wxGrid_InsertCols) :int
  (_obj :pointer)
  (pos :int)
  (numCols :int)
  (updateLabels :int))

(cffi:defcfun ("wxGrid_AppendCols" wxGrid_AppendCols) :int
  (_obj :pointer)
  (numCols :int)
  (updateLabels :int))

(cffi:defcfun ("wxGrid_DeleteCols" wxGrid_DeleteCols) :int
  (_obj :pointer)
  (pos :int)
  (numCols :int)
  (updateLabels :int))

(cffi:defcfun ("wxGrid_DrawGridCellArea" wxGrid_DrawGridCellArea) :void
  (_obj :pointer)
  (dc :pointer))

(cffi:defcfun ("wxGrid_NewDrawGridCellArea" wxGrid_NewDrawGridCellArea) :void
  (_obj :pointer)
  (dc :pointer)
  (arr :pointer))

(cffi:defcfun ("wxGrid_DrawGridSpace" wxGrid_DrawGridSpace) :void
  (_obj :pointer)
  (dc :pointer))

(cffi:defcfun ("wxGrid_DrawCellBorder" wxGrid_DrawCellBorder) :void
  (_obj :pointer)
  (dc :pointer)
  (_row :int)
  (_col :int))

(cffi:defcfun ("wxGrid_DrawAllGridLines" wxGrid_DrawAllGridLines) :void
  (_obj :pointer)
  (dc :pointer)
  (reg :pointer))

(cffi:defcfun ("wxGrid_DrawCell" wxGrid_DrawCell) :void
  (_obj :pointer)
  (dc :pointer)
  (_row :int)
  (_col :int))

(cffi:defcfun ("wxGrid_DrawHighlight" wxGrid_DrawHighlight) :void
  (_obj :pointer)
  (dc :pointer))

(cffi:defcfun ("wxGrid_NewDrawHighlight" wxGrid_NewDrawHighlight) :void
  (_obj :pointer)
  (dc :pointer)
  (arr :pointer))

(cffi:defcfun ("wxGrid_DrawCellHighlight" wxGrid_DrawCellHighlight) :void
  (_obj :pointer)
  (dc :pointer)
  (attr :pointer))

(cffi:defcfun ("wxGrid_DrawRowLabels" wxGrid_DrawRowLabels) :void
  (_obj :pointer)
  (dc :pointer))

(cffi:defcfun ("wxGrid_DrawRowLabel" wxGrid_DrawRowLabel) :void
  (_obj :pointer)
  (dc :pointer)
  (row :int))

(cffi:defcfun ("wxGrid_DrawColLabels" wxGrid_DrawColLabels) :void
  (_obj :pointer)
  (dc :pointer))

(cffi:defcfun ("wxGrid_DrawColLabel" wxGrid_DrawColLabel) :void
  (_obj :pointer)
  (dc :pointer)
  (col :int))

(cffi:defcfun ("wxGrid_DrawTextRectangle" wxGrid_DrawTextRectangle) :void
  (_obj :pointer)
  (dc :pointer)
  (txt :pointer)
  (x :int)
  (y :int)
  (w :int)
  (h :int)
  (horizontalAlignment :int)
  (verticalAlignment :int))

(cffi:defcfun ("wxGrid_StringToLines" wxGrid_StringToLines) :int
  (_obj :pointer)
  (value :pointer)
  (lines :pointer))

(cffi:defcfun ("wxGrid_GetTextBoxSize" wxGrid_GetTextBoxSize) :void
  (_obj :pointer)
  (dc :pointer)
  (count :int)
  (lines :pointer)
  (width :pointer)
  (height :pointer))

(cffi:defcfun ("wxGrid_BeginBatch" wxGrid_BeginBatch) :void
  (_obj :pointer))

(cffi:defcfun ("wxGrid_EndBatch" wxGrid_EndBatch) :void
  (_obj :pointer))

(cffi:defcfun ("wxGrid_GetBatchCount" wxGrid_GetBatchCount) :int
  (_obj :pointer))

(cffi:defcfun ("wxGrid_IsEditable" wxGrid_IsEditable) :int
  (_obj :pointer))

(cffi:defcfun ("wxGrid_EnableEditing" wxGrid_EnableEditing) :void
  (_obj :pointer)
  (edit :int))

(cffi:defcfun ("wxGrid_EnableCellEditControl" wxGrid_EnableCellEditControl) :void
  (_obj :pointer)
  (enable :int))

(cffi:defcfun ("wxGrid_DisableCellEditControl" wxGrid_DisableCellEditControl) :void
  (_obj :pointer))

(cffi:defcfun ("wxGrid_CanEnableCellControl" wxGrid_CanEnableCellControl) :int
  (_obj :pointer))

(cffi:defcfun ("wxGrid_IsCellEditControlEnabled" wxGrid_IsCellEditControlEnabled) :int
  (_obj :pointer))

(cffi:defcfun ("wxGrid_IsCellEditControlShown" wxGrid_IsCellEditControlShown) :int
  (_obj :pointer))

(cffi:defcfun ("wxGrid_IsCurrentCellReadOnly" wxGrid_IsCurrentCellReadOnly) :int
  (_obj :pointer))

(cffi:defcfun ("wxGrid_ShowCellEditControl" wxGrid_ShowCellEditControl) :void
  (_obj :pointer))

(cffi:defcfun ("wxGrid_HideCellEditControl" wxGrid_HideCellEditControl) :void
  (_obj :pointer))

(cffi:defcfun ("wxGrid_SaveEditControlValue" wxGrid_SaveEditControlValue) :void
  (_obj :pointer))

(cffi:defcfun ("wxGrid_XYToCell" wxGrid_XYToCell) :void
  (_obj :pointer)
  (x :int)
  (y :int)
  (r :pointer)
  (c :pointer))

(cffi:defcfun ("wxGrid_YToRow" wxGrid_YToRow) :int
  (_obj :pointer)
  (y :int))

(cffi:defcfun ("wxGrid_XToCol" wxGrid_XToCol) :int
  (_obj :pointer)
  (x :int))

(cffi:defcfun ("wxGrid_YToEdgeOfRow" wxGrid_YToEdgeOfRow) :int
  (_obj :pointer)
  (y :int))

(cffi:defcfun ("wxGrid_XToEdgeOfCol" wxGrid_XToEdgeOfCol) :int
  (_obj :pointer)
  (x :int))

(cffi:defcfun ("wxGrid_CellToRect" wxGrid_CellToRect) :void
  (_obj :pointer)
  (row :int)
  (col :int)
  (x :pointer)
  (y :pointer)
  (w :pointer)
  (h :pointer))

(cffi:defcfun ("wxGrid_GetGridCursorRow" wxGrid_GetGridCursorRow) :int
  (_obj :pointer))

(cffi:defcfun ("wxGrid_GetGridCursorCol" wxGrid_GetGridCursorCol) :int
  (_obj :pointer))

(cffi:defcfun ("wxGrid_IsVisible" wxGrid_IsVisible) :int
  (_obj :pointer)
  (row :int)
  (col :int)
  (wholeCellVisible :int))

(cffi:defcfun ("wxGrid_MakeCellVisible" wxGrid_MakeCellVisible) :void
  (_obj :pointer)
  (row :int)
  (col :int))

(cffi:defcfun ("wxGrid_SetGridCursor" wxGrid_SetGridCursor) :void
  (_obj :pointer)
  (row :int)
  (col :int))

(cffi:defcfun ("wxGrid_MoveCursorUp" wxGrid_MoveCursorUp) :int
  (_obj :pointer)
  (expandSelection :int))

(cffi:defcfun ("wxGrid_MoveCursorDown" wxGrid_MoveCursorDown) :int
  (_obj :pointer)
  (expandSelection :int))

(cffi:defcfun ("wxGrid_MoveCursorLeft" wxGrid_MoveCursorLeft) :int
  (_obj :pointer)
  (expandSelection :int))

(cffi:defcfun ("wxGrid_MoveCursorRight" wxGrid_MoveCursorRight) :int
  (_obj :pointer)
  (expandSelection :int))

(cffi:defcfun ("wxGrid_MovePageDown" wxGrid_MovePageDown) :int
  (_obj :pointer))

(cffi:defcfun ("wxGrid_MovePageUp" wxGrid_MovePageUp) :int
  (_obj :pointer))

(cffi:defcfun ("wxGrid_MoveCursorUpBlock" wxGrid_MoveCursorUpBlock) :int
  (_obj :pointer)
  (expandSelection :int))

(cffi:defcfun ("wxGrid_MoveCursorDownBlock" wxGrid_MoveCursorDownBlock) :int
  (_obj :pointer)
  (expandSelection :int))

(cffi:defcfun ("wxGrid_MoveCursorLeftBlock" wxGrid_MoveCursorLeftBlock) :int
  (_obj :pointer)
  (expandSelection :int))

(cffi:defcfun ("wxGrid_MoveCursorRightBlock" wxGrid_MoveCursorRightBlock) :int
  (_obj :pointer)
  (expandSelection :int))

(cffi:defcfun ("wxGrid_GetDefaultRowLabelSize" wxGrid_GetDefaultRowLabelSize) :int
  (_obj :pointer))

(cffi:defcfun ("wxGrid_GetRowLabelSize" wxGrid_GetRowLabelSize) :int
  (_obj :pointer))

(cffi:defcfun ("wxGrid_GetDefaultColLabelSize" wxGrid_GetDefaultColLabelSize) :int
  (_obj :pointer))

(cffi:defcfun ("wxGrid_GetColLabelSize" wxGrid_GetColLabelSize) :int
  (_obj :pointer))

(cffi:defcfun ("wxGrid_GetLabelBackgroundColour" wxGrid_GetLabelBackgroundColour) :void
  (_obj :pointer)
  (colour :pointer))

(cffi:defcfun ("wxGrid_GetLabelTextColour" wxGrid_GetLabelTextColour) :void
  (_obj :pointer)
  (colour :pointer))

(cffi:defcfun ("wxGrid_GetLabelFont" wxGrid_GetLabelFont) :void
  (_obj :pointer)
  (font :pointer))

(cffi:defcfun ("wxGrid_GetRowLabelAlignment" wxGrid_GetRowLabelAlignment) :void
  (_obj :pointer)
  (horiz :pointer)
  (vert :pointer))

(cffi:defcfun ("wxGrid_GetColLabelAlignment" wxGrid_GetColLabelAlignment) :void
  (_obj :pointer)
  (horiz :pointer)
  (vert :pointer))

(cffi:defcfun ("wxGrid_GetRowLabelValue" wxGrid_GetRowLabelValue) :wxstring
  (_obj :pointer)
  (row :int))

(cffi:defcfun ("wxGrid_GetColLabelValue" wxGrid_GetColLabelValue) :wxstring
  (_obj :pointer)
  (col :int))

(cffi:defcfun ("wxGrid_GetGridLineColour" wxGrid_GetGridLineColour) :void
  (_obj :pointer)
  (colour :pointer))

(cffi:defcfun ("wxGrid_GetCellHighlightColour" wxGrid_GetCellHighlightColour) :void
  (_obj :pointer)
  (colour :pointer))

(cffi:defcfun ("wxGrid_SetRowLabelSize" wxGrid_SetRowLabelSize) :void
  (_obj :pointer)
  (width :int))

(cffi:defcfun ("wxGrid_SetColLabelSize" wxGrid_SetColLabelSize) :void
  (_obj :pointer)
  (height :int))

(cffi:defcfun ("wxGrid_SetLabelBackgroundColour" wxGrid_SetLabelBackgroundColour) :void
  (_obj :pointer)
  (colour :pointer))

(cffi:defcfun ("wxGrid_SetLabelTextColour" wxGrid_SetLabelTextColour) :void
  (_obj :pointer)
  (colour :pointer))

(cffi:defcfun ("wxGrid_SetLabelFont" wxGrid_SetLabelFont) :void
  (_obj :pointer)
  (font :pointer))

(cffi:defcfun ("wxGrid_SetRowLabelAlignment" wxGrid_SetRowLabelAlignment) :void
  (_obj :pointer)
  (horiz :int)
  (vert :int))

(cffi:defcfun ("wxGrid_SetColLabelAlignment" wxGrid_SetColLabelAlignment) :void
  (_obj :pointer)
  (horiz :int)
  (vert :int))

(cffi:defcfun ("wxGrid_SetRowLabelValue" wxGrid_SetRowLabelValue) :void
  (_obj :pointer)
  (row :int)
  (label :pointer))

(cffi:defcfun ("wxGrid_SetColLabelValue" wxGrid_SetColLabelValue) :void
  (_obj :pointer)
  (col :int)
  (label :pointer))

(cffi:defcfun ("wxGrid_SetGridLineColour" wxGrid_SetGridLineColour) :void
  (_obj :pointer)
  (col :pointer))

(cffi:defcfun ("wxGrid_SetCellHighlightColour" wxGrid_SetCellHighlightColour) :void
  (_obj :pointer)
  (col :pointer))

(cffi:defcfun ("wxGrid_EnableDragRowSize" wxGrid_EnableDragRowSize) :void
  (_obj :pointer)
  (enable :int))

(cffi:defcfun ("wxGrid_DisableDragRowSize" wxGrid_DisableDragRowSize) :void
  (_obj :pointer))

(cffi:defcfun ("wxGrid_CanDragRowSize" wxGrid_CanDragRowSize) :int
  (_obj :pointer))

(cffi:defcfun ("wxGrid_EnableDragColSize" wxGrid_EnableDragColSize) :void
  (_obj :pointer)
  (enable :int))

(cffi:defcfun ("wxGrid_DisableDragColSize" wxGrid_DisableDragColSize) :void
  (_obj :pointer))

(cffi:defcfun ("wxGrid_CanDragColSize" wxGrid_CanDragColSize) :int
  (_obj :pointer))

(cffi:defcfun ("wxGrid_EnableDragGridSize" wxGrid_EnableDragGridSize) :void
  (_obj :pointer)
  (enable :int))

(cffi:defcfun ("wxGrid_DisableDragGridSize" wxGrid_DisableDragGridSize) :void
  (_obj :pointer))

(cffi:defcfun ("wxGrid_CanDragGridSize" wxGrid_CanDragGridSize) :int
  (_obj :pointer))

(cffi:defcfun ("wxGrid_SetRowAttr" wxGrid_SetRowAttr) :void
  (_obj :pointer)
  (row :int)
  (attr :pointer))

(cffi:defcfun ("wxGrid_SetColAttr" wxGrid_SetColAttr) :void
  (_obj :pointer)
  (col :int)
  (attr :pointer))

(cffi:defcfun ("wxGrid_SetColFormatBool" wxGrid_SetColFormatBool) :void
  (_obj :pointer)
  (col :int))

(cffi:defcfun ("wxGrid_SetColFormatNumber" wxGrid_SetColFormatNumber) :void
  (_obj :pointer)
  (col :int))

(cffi:defcfun ("wxGrid_SetColFormatFloat" wxGrid_SetColFormatFloat) :void
  (_obj :pointer)
  (col :int)
  (width :int)
  (precision :int))

(cffi:defcfun ("wxGrid_SetColFormatCustom" wxGrid_SetColFormatCustom) :void
  (_obj :pointer)
  (col :int)
  (typeName :pointer))

(cffi:defcfun ("wxGrid_EnableGridLines" wxGrid_EnableGridLines) :void
  (_obj :pointer)
  (enable :int))

(cffi:defcfun ("wxGrid_GridLinesEnabled" wxGrid_GridLinesEnabled) :int
  (_obj :pointer))

(cffi:defcfun ("wxGrid_GetDefaultRowSize" wxGrid_GetDefaultRowSize) :int
  (_obj :pointer))

(cffi:defcfun ("wxGrid_GetRowSize" wxGrid_GetRowSize) :int
  (_obj :pointer)
  (row :int))

(cffi:defcfun ("wxGrid_GetDefaultColSize" wxGrid_GetDefaultColSize) :int
  (_obj :pointer))

(cffi:defcfun ("wxGrid_GetColSize" wxGrid_GetColSize) :int
  (_obj :pointer)
  (col :int))

(cffi:defcfun ("wxGrid_GetDefaultCellBackgroundColour" wxGrid_GetDefaultCellBackgroundColour) :void
  (_obj :pointer)
  (colour :pointer))

(cffi:defcfun ("wxGrid_GetCellBackgroundColour" wxGrid_GetCellBackgroundColour) :void
  (_obj :pointer)
  (row :int)
  (col :int)
  (colour :pointer))

(cffi:defcfun ("wxGrid_GetDefaultCellTextColour" wxGrid_GetDefaultCellTextColour) :void
  (_obj :pointer)
  (colour :pointer))

(cffi:defcfun ("wxGrid_GetCellTextColour" wxGrid_GetCellTextColour) :void
  (_obj :pointer)
  (row :int)
  (col :int)
  (colour :pointer))

(cffi:defcfun ("wxGrid_GetDefaultCellFont" wxGrid_GetDefaultCellFont) :void
  (_obj :pointer)
  (font :pointer))

(cffi:defcfun ("wxGrid_GetCellFont" wxGrid_GetCellFont) :void
  (_obj :pointer)
  (row :int)
  (col :int)
  (font :pointer))

(cffi:defcfun ("wxGrid_GetDefaultCellAlignment" wxGrid_GetDefaultCellAlignment) :void
  (_obj :pointer)
  (horiz :pointer)
  (vert :pointer))

(cffi:defcfun ("wxGrid_GetCellAlignment" wxGrid_GetCellAlignment) :void
  (_obj :pointer)
  (row :int)
  (col :int)
  (horiz :pointer)
  (vert :pointer))

(cffi:defcfun ("wxGrid_SetDefaultRowSize" wxGrid_SetDefaultRowSize) :void
  (_obj :pointer)
  (height :int)
  (resizeExistingRows :int))

(cffi:defcfun ("wxGrid_SetRowSize" wxGrid_SetRowSize) :void
  (_obj :pointer)
  (row :int)
  (height :int))

(cffi:defcfun ("wxGrid_SetDefaultColSize" wxGrid_SetDefaultColSize) :void
  (_obj :pointer)
  (width :int)
  (resizeExistingCols :int))

(cffi:defcfun ("wxGrid_SetColSize" wxGrid_SetColSize) :void
  (_obj :pointer)
  (col :int)
  (width :int))

(cffi:defcfun ("wxGrid_AutoSizeColumn" wxGrid_AutoSizeColumn) :void
  (_obj :pointer)
  (col :int)
  (setAsMin :int))

(cffi:defcfun ("wxGrid_AutoSizeRow" wxGrid_AutoSizeRow) :void
  (_obj :pointer)
  (row :int)
  (setAsMin :int))

(cffi:defcfun ("wxGrid_AutoSizeColumns" wxGrid_AutoSizeColumns) :void
  (_obj :pointer)
  (setAsMin :int))

(cffi:defcfun ("wxGrid_AutoSizeRows" wxGrid_AutoSizeRows) :void
  (_obj :pointer)
  (setAsMin :int))

(cffi:defcfun ("wxGrid_AutoSize" wxGrid_AutoSize) :void
  (_obj :pointer))

(cffi:defcfun ("wxGrid_SetColMinimalWidth" wxGrid_SetColMinimalWidth) :void
  (_obj :pointer)
  (col :int)
  (width :int))

(cffi:defcfun ("wxGrid_SetRowMinimalHeight" wxGrid_SetRowMinimalHeight) :void
  (_obj :pointer)
  (row :int)
  (width :int))

(cffi:defcfun ("wxGrid_SetDefaultCellBackgroundColour" wxGrid_SetDefaultCellBackgroundColour) :void
  (_obj :pointer)
  (colour :pointer))

(cffi:defcfun ("wxGrid_SetCellBackgroundColour" wxGrid_SetCellBackgroundColour) :void
  (_obj :pointer)
  (row :int)
  (col :int)
  (colour :pointer))

(cffi:defcfun ("wxGrid_SetDefaultCellTextColour" wxGrid_SetDefaultCellTextColour) :void
  (_obj :pointer)
  (colour :pointer))

(cffi:defcfun ("wxGrid_SetCellTextColour" wxGrid_SetCellTextColour) :void
  (_obj :pointer)
  (row :int)
  (col :int)
  (colour :pointer))

(cffi:defcfun ("wxGrid_SetDefaultCellFont" wxGrid_SetDefaultCellFont) :void
  (_obj :pointer)
  (font :pointer))

(cffi:defcfun ("wxGrid_SetCellFont" wxGrid_SetCellFont) :void
  (_obj :pointer)
  (row :int)
  (col :int)
  (font :pointer))

(cffi:defcfun ("wxGrid_SetDefaultCellAlignment" wxGrid_SetDefaultCellAlignment) :void
  (_obj :pointer)
  (horiz :int)
  (vert :int))

(cffi:defcfun ("wxGrid_SetCellAlignment" wxGrid_SetCellAlignment) :void
  (_obj :pointer)
  (row :int)
  (col :int)
  (horiz :int)
  (vert :int))

(cffi:defcfun ("wxGrid_SetDefaultRenderer" wxGrid_SetDefaultRenderer) :void
  (_obj :pointer)
  (renderer :pointer))

(cffi:defcfun ("wxGrid_SetCellRenderer" wxGrid_SetCellRenderer) :void
  (_obj :pointer)
  (row :int)
  (col :int)
  (renderer :pointer))

(cffi:defcfun ("wxGrid_GetDefaultRenderer" wxGrid_GetDefaultRenderer) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxGrid_GetCellRenderer" wxGrid_GetCellRenderer) :pointer
  (_obj :pointer)
  (row :int)
  (col :int))

(cffi:defcfun ("wxGrid_SetDefaultEditor" wxGrid_SetDefaultEditor) :void
  (_obj :pointer)
  (editor :pointer))

(cffi:defcfun ("wxGrid_SetCellEditor" wxGrid_SetCellEditor) :void
  (_obj :pointer)
  (row :int)
  (col :int)
  (editor :pointer))

(cffi:defcfun ("wxGrid_GetDefaultEditor" wxGrid_GetDefaultEditor) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxGrid_GetCellEditor" wxGrid_GetCellEditor) :pointer
  (_obj :pointer)
  (row :int)
  (col :int))

(cffi:defcfun ("wxGrid_GetCellValue" wxGrid_GetCellValue) :wxstring
  (_obj :pointer)
  (row :int)
  (col :int))

(cffi:defcfun ("wxGrid_SetCellValue" wxGrid_SetCellValue) :void
  (_obj :pointer)
  (row :int)
  (col :int)
  (s :pointer))

(cffi:defcfun ("wxGrid_IsReadOnly" wxGrid_IsReadOnly) :int
  (_obj :pointer)
  (row :int)
  (col :int))

(cffi:defcfun ("wxGrid_SetReadOnly" wxGrid_SetReadOnly) :void
  (_obj :pointer)
  (row :int)
  (col :int)
  (isReadOnly :int))

(cffi:defcfun ("wxGrid_SelectRow" wxGrid_SelectRow) :void
  (_obj :pointer)
  (row :int)
  (addToSelected :int))

(cffi:defcfun ("wxGrid_SelectCol" wxGrid_SelectCol) :void
  (_obj :pointer)
  (col :int)
  (addToSelected :int))

(cffi:defcfun ("wxGrid_SelectBlock" wxGrid_SelectBlock) :void
  (_obj :pointer)
  (topRow :int)
  (leftCol :int)
  (bottomRow :int)
  (rightCol :int)
  (addToSelected :int))

(cffi:defcfun ("wxGrid_SelectAll" wxGrid_SelectAll) :void
  (_obj :pointer))

(cffi:defcfun ("wxGrid_IsSelection" wxGrid_IsSelection) :int
  (_obj :pointer))

(cffi:defcfun ("wxGrid_ClearSelection" wxGrid_ClearSelection) :void
  (_obj :pointer))

(cffi:defcfun ("wxGrid_IsInSelection" wxGrid_IsInSelection) :int
  (_obj :pointer)
  (row :int)
  (col :int))

(cffi:defcfun ("wxGrid_BlockToDeviceRect" wxGrid_BlockToDeviceRect) :void
  (_obj :pointer)
  (top :int)
  (left :int)
  (bottom :int)
  (right :int)
  (x :pointer)
  (y :pointer)
  (w :pointer)
  (h :pointer))

(cffi:defcfun ("wxGrid_GetSelectionBackground" wxGrid_GetSelectionBackground) :void
  (_obj :pointer)
  (colour :pointer))

(cffi:defcfun ("wxGrid_GetSelectionForeground" wxGrid_GetSelectionForeground) :void
  (_obj :pointer)
  (colour :pointer))

(cffi:defcfun ("wxGrid_SetSelectionBackground" wxGrid_SetSelectionBackground) :void
  (_obj :pointer)
  (c :pointer))

(cffi:defcfun ("wxGrid_SetSelectionForeground" wxGrid_SetSelectionForeground) :void
  (_obj :pointer)
  (c :pointer))

(cffi:defcfun ("wxGrid_RegisterDataType" wxGrid_RegisterDataType) :void
  (_obj :pointer)
  (typeName :pointer)
  (renderer :pointer)
  (editor :pointer))

(cffi:defcfun ("wxGrid_GetDefaultEditorForCell" wxGrid_GetDefaultEditorForCell) :pointer
  (_obj :pointer)
  (row :int)
  (col :int))

(cffi:defcfun ("wxGrid_GetDefaultRendererForCell" wxGrid_GetDefaultRendererForCell) :pointer
  (_obj :pointer)
  (row :int)
  (col :int))

(cffi:defcfun ("wxGrid_GetDefaultEditorForType" wxGrid_GetDefaultEditorForType) :pointer
  (_obj :pointer)
  (typeName :pointer))

(cffi:defcfun ("wxGrid_GetDefaultRendererForType" wxGrid_GetDefaultRendererForType) :pointer
  (_obj :pointer)
  (typeName :pointer))

(cffi:defcfun ("wxGrid_SetMargins" wxGrid_SetMargins) :void
  (_obj :pointer)
  (extraWidth :int)
  (extraHeight :int))

(cffi:defcfun ("wxGrid_GetSelectedCells" wxGrid_GetSelectedCells) :void
  (_obj :pointer)
  (_arr :pointer))

(cffi:defcfun ("wxGrid_GetSelectionBlockTopLeft" wxGrid_GetSelectionBlockTopLeft) :void
  (_obj :pointer)
  (_arr :pointer))

(cffi:defcfun ("wxGrid_GetSelectionBlockBottomRight" wxGrid_GetSelectionBlockBottomRight) :void
  (_obj :pointer)
  (_arr :pointer))

(cffi:defcfun ("wxGrid_GetSelectedRows" wxGrid_GetSelectedRows) :int
  (_obj :pointer)
  (_arr :pointer))

(cffi:defcfun ("wxGrid_GetSelectedCols" wxGrid_GetSelectedCols) :int
  (_obj :pointer)
  (_arr :pointer))

(cffi:defcfun ("ELJGridTable_Create" ELJGridTable_Create) :pointer
  (_obj :pointer)
  (_EifGetNumberRows :pointer)
  (_EifGetNumberCols :pointer)
  (_EifGetValue :pointer)
  (_EifSetValue :pointer)
  (_EifIsEmptyCell :pointer)
  (_EifClear :pointer)
  (_EifInsertRows :pointer)
  (_EifAppendRows :pointer)
  (_EifDeleteRows :pointer)
  (_EifInsertCols :pointer)
  (_EifAppendCols :pointer)
  (_EifDeleteCols :pointer)
  (_EifSetRowLabelValue :pointer)
  (_EifSetColLabelValue :pointer)
  (_EifGetRowLabelValue :pointer)
  (_EifGetColLabelValue :pointer))

(cffi:defcfun ("ELJGridTable_Delete" ELJGridTable_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("ELJGridTable_GetView" ELJGridTable_GetView) :pointer
  (_obj :pointer))

(cffi:defcfun ("ELJGridTable_SendTableMessage" ELJGridTable_SendTableMessage) :void
  (_obj :pointer)
  (id :int)
  (val1 :int)
  (val2 :int))

(cffi:defcfun ("wxGridEvent_GetRow" wxGridEvent_GetRow) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridEvent_GetCol" wxGridEvent_GetCol) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridEvent_GetPosition" wxGridEvent_GetPosition) :void
  (_obj :pointer)
  (_x :pointer)
  (_y :pointer))

(cffi:defcfun ("wxGridEvent_Selecting" wxGridEvent_Selecting) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridEvent_ControlDown" wxGridEvent_ControlDown) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridEvent_MetaDown" wxGridEvent_MetaDown) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridEvent_ShiftDown" wxGridEvent_ShiftDown) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridEvent_AltDown" wxGridEvent_AltDown) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridSizeEvent_GetRowOrCol" wxGridSizeEvent_GetRowOrCol) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridSizeEvent_GetPosition" wxGridSizeEvent_GetPosition) :void
  (_obj :pointer)
  (_x :pointer)
  (_y :pointer))

(cffi:defcfun ("wxGridSizeEvent_ControlDown" wxGridSizeEvent_ControlDown) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridSizeEvent_MetaDown" wxGridSizeEvent_MetaDown) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridSizeEvent_ShiftDown" wxGridSizeEvent_ShiftDown) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridSizeEvent_AltDown" wxGridSizeEvent_AltDown) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridRangeSelectEvent_GetTopLeftCoords" wxGridRangeSelectEvent_GetTopLeftCoords) :void
  (_obj :pointer)
  (_c :pointer)
  (_r :pointer))

(cffi:defcfun ("wxGridRangeSelectEvent_GetBottomRightCoords" wxGridRangeSelectEvent_GetBottomRightCoords) :void
  (_obj :pointer)
  (_c :pointer)
  (_r :pointer))

(cffi:defcfun ("wxGridRangeSelectEvent_GetTopRow" wxGridRangeSelectEvent_GetTopRow) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridRangeSelectEvent_GetBottomRow" wxGridRangeSelectEvent_GetBottomRow) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridRangeSelectEvent_GetLeftCol" wxGridRangeSelectEvent_GetLeftCol) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridRangeSelectEvent_GetRightCol" wxGridRangeSelectEvent_GetRightCol) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridRangeSelectEvent_Selecting" wxGridRangeSelectEvent_Selecting) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridRangeSelectEvent_ControlDown" wxGridRangeSelectEvent_ControlDown) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridRangeSelectEvent_MetaDown" wxGridRangeSelectEvent_MetaDown) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridRangeSelectEvent_ShiftDown" wxGridRangeSelectEvent_ShiftDown) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridRangeSelectEvent_AltDown" wxGridRangeSelectEvent_AltDown) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridEditorCreatedEvent_GetRow" wxGridEditorCreatedEvent_GetRow) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridEditorCreatedEvent_GetCol" wxGridEditorCreatedEvent_GetCol) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridEditorCreatedEvent_GetControl" wxGridEditorCreatedEvent_GetControl) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxGridEditorCreatedEvent_SetRow" wxGridEditorCreatedEvent_SetRow) :void
  (_obj :pointer)
  (row :int))

(cffi:defcfun ("wxGridEditorCreatedEvent_SetCol" wxGridEditorCreatedEvent_SetCol) :void
  (_obj :pointer)
  (col :int))

(cffi:defcfun ("wxGridEditorCreatedEvent_SetControl" wxGridEditorCreatedEvent_SetControl) :void
  (_obj :pointer)
  (ctrl :pointer))


