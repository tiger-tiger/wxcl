#ifndef WXC_GLUE_H
#define WXC_GLUE_H

/* $Id: wxc_glue.h 4 2005-07-22 04:08:34Z efuzzyone $ */

/* Null */
TClass(wxAcceleratorTable) Null_AcceleratorTable(  );
TClass(wxBitmap) Null_Bitmap(  );
TClass(wxBrush) Null_Brush(  );
TClass(wxColour) Null_Colour(  );
TClass(wxCursor) Null_Cursor(  );
TClass(wxFont) Null_Font(  );
TClass(wxIcon) Null_Icon(  );
TClass(wxPalette) Null_Palette(  );
TClass(wxPen) Null_Pen(  );

/* Events */
int        expEVT_ACTIVATE(  );
int        expEVT_ACTIVATE_APP(  );
int        expEVT_CALENDAR_DAY_CHANGED(  );
int        expEVT_CALENDAR_DOUBLECLICKED(  );
int        expEVT_CALENDAR_MONTH_CHANGED(  );
int        expEVT_CALENDAR_SEL_CHANGED(  );
int        expEVT_CALENDAR_WEEKDAY_CLICKED(  );
int        expEVT_CALENDAR_YEAR_CHANGED(  );
int        expEVT_CHAR(  );
int        expEVT_CHAR_HOOK(  );
int        expEVT_CLOSE_WINDOW(  );
int        expEVT_COMMAND_BUTTON_CLICKED(  );
int        expEVT_COMMAND_CHECKBOX_CLICKED(  );
int        expEVT_COMMAND_CHECKLISTBOX_TOGGLED(  );
int        expEVT_COMMAND_CHOICE_SELECTED(  );
int        expEVT_COMMAND_COMBOBOX_SELECTED(  );
int        expEVT_COMMAND_ENTER(  );
int        expEVT_COMMAND_FIND(  );
int        expEVT_COMMAND_FIND_CLOSE(  );
int        expEVT_COMMAND_FIND_NEXT(  );
int        expEVT_COMMAND_FIND_REPLACE(  );
int        expEVT_COMMAND_FIND_REPLACE_ALL(  );
int        expEVT_COMMAND_KILL_FOCUS(  );
int        expEVT_COMMAND_LEFT_CLICK(  );
int        expEVT_COMMAND_LEFT_DCLICK(  );
int        expEVT_COMMAND_LISTBOX_DOUBLECLICKED(  );
int        expEVT_COMMAND_LISTBOX_SELECTED(  );
int        expEVT_COMMAND_LIST_BEGIN_DRAG(  );
int        expEVT_COMMAND_LIST_BEGIN_LABEL_EDIT(  );
int        expEVT_COMMAND_LIST_BEGIN_RDRAG(  );
int        expEVT_COMMAND_LIST_COL_CLICK(  );
int        expEVT_COMMAND_LIST_DELETE_ALL_ITEMS(  );
int        expEVT_COMMAND_LIST_DELETE_ITEM(  );
int        expEVT_COMMAND_LIST_END_LABEL_EDIT(  );
int        expEVT_COMMAND_LIST_GET_INFO(  );
int        expEVT_COMMAND_LIST_INSERT_ITEM(  );
int        expEVT_COMMAND_LIST_ITEM_ACTIVATED(  );
int        expEVT_COMMAND_LIST_ITEM_DESELECTED(  );
int        expEVT_COMMAND_LIST_ITEM_MIDDLE_CLICK(  );
int        expEVT_COMMAND_LIST_ITEM_RIGHT_CLICK(  );
int        expEVT_COMMAND_LIST_ITEM_SELECTED(  );
int        expEVT_COMMAND_LIST_ITEM_FOCUSED(  );
int        expEVT_COMMAND_LIST_KEY_DOWN(  );
int        expEVT_COMMAND_LIST_SET_INFO(  );
int        expEVT_COMMAND_MENU_SELECTED(  );
int        expEVT_COMMAND_NOTEBOOK_PAGE_CHANGED(  );
int        expEVT_COMMAND_NOTEBOOK_PAGE_CHANGING(  );
int        expEVT_COMMAND_RADIOBOX_SELECTED(  );
int        expEVT_COMMAND_RADIOBUTTON_SELECTED(  );
int        expEVT_COMMAND_RIGHT_CLICK(  );
int        expEVT_COMMAND_RIGHT_DCLICK(  );
int        expEVT_COMMAND_SCROLLBAR_UPDATED(  );
int        expEVT_COMMAND_SET_FOCUS(  );
int        expEVT_COMMAND_SLIDER_UPDATED(  );
int        expEVT_COMMAND_SPINCTRL_UPDATED(  );
int        expEVT_COMMAND_SPLITTER_DOUBLECLICKED(  );
int        expEVT_COMMAND_SPLITTER_SASH_POS_CHANGED(  );
int        expEVT_COMMAND_SPLITTER_SASH_POS_CHANGING(  );
int        expEVT_COMMAND_SPLITTER_UNSPLIT(  );
int        expEVT_COMMAND_TAB_SEL_CHANGED(  );
int        expEVT_COMMAND_TAB_SEL_CHANGING(  );
int        expEVT_COMMAND_TEXT_ENTER(  );
int        expEVT_COMMAND_TEXT_UPDATED(  );
int        expEVT_COMMAND_TOGGLEBUTTON_CLICKED(  );
int        expEVT_COMMAND_TOOL_CLICKED(  );
int        expEVT_COMMAND_TOOL_ENTER(  );
int        expEVT_COMMAND_TOOL_RCLICKED(  );
int        expEVT_COMMAND_TREE_BEGIN_DRAG(  );
int        expEVT_COMMAND_TREE_BEGIN_LABEL_EDIT(  );
int        expEVT_COMMAND_TREE_BEGIN_RDRAG(  );
int        expEVT_COMMAND_TREE_DELETE_ITEM(  );
int        expEVT_COMMAND_TREE_END_DRAG(  );
int        expEVT_COMMAND_TREE_END_LABEL_EDIT(  );
int        expEVT_COMMAND_TREE_GET_INFO(  );
int        expEVT_COMMAND_TREE_ITEM_ACTIVATED(  );
int        expEVT_COMMAND_TREE_ITEM_COLLAPSED(  );
int        expEVT_COMMAND_TREE_ITEM_COLLAPSING(  );
int        expEVT_COMMAND_TREE_ITEM_EXPANDED(  );
int        expEVT_COMMAND_TREE_ITEM_EXPANDING(  );
int        expEVT_COMMAND_TREE_ITEM_MIDDLE_CLICK(  );
int        expEVT_COMMAND_TREE_ITEM_RIGHT_CLICK(  );
int        expEVT_COMMAND_TREE_KEY_DOWN(  );
int        expEVT_COMMAND_TREE_SEL_CHANGED(  );
int        expEVT_COMMAND_TREE_SEL_CHANGING(  );
int        expEVT_COMMAND_TREE_SET_INFO(  );
int        expEVT_COMMAND_VLBOX_SELECTED(  );
int        expEVT_COMPARE_ITEM(  );
int        expEVT_CONTEXT_MENU(  );
int        expEVT_CREATE(  );
int        expEVT_DESTROY(  );
int        expEVT_DETAILED_HELP(  );
int        expEVT_DIALUP_CONNECTED(  );
int        expEVT_DIALUP_DISCONNECTED(  );
int        expEVT_DRAW_ITEM(  );
int        expEVT_DROP_FILES(  );
int        expEVT_DYNAMIC_SASH_SPLIT(  );
int        expEVT_DYNAMIC_SASH_UNIFY(  );
int        expEVT_END_PROCESS(  );
int        expEVT_END_SESSION(  );
int        expEVT_ENTER_WINDOW(  );
int        expEVT_ERASE_BACKGROUND(  );
int        expEVT_GRID_CELL_CHANGE(  );
int        expEVT_GRID_CELL_LEFT_CLICK(  );
int        expEVT_GRID_CELL_LEFT_DCLICK(  );
int        expEVT_GRID_CELL_RIGHT_CLICK(  );
int        expEVT_GRID_CELL_RIGHT_DCLICK(  );
int        expEVT_GRID_COL_SIZE(  );
int        expEVT_GRID_EDITOR_CREATED(  );
int        expEVT_GRID_EDITOR_HIDDEN(  );
int        expEVT_GRID_EDITOR_SHOWN(  );
int        expEVT_GRID_LABEL_LEFT_CLICK(  );
int        expEVT_GRID_LABEL_LEFT_DCLICK(  );
int        expEVT_GRID_LABEL_RIGHT_CLICK(  );
int        expEVT_GRID_LABEL_RIGHT_DCLICK(  );
int        expEVT_GRID_RANGE_SELECT(  );
int        expEVT_GRID_ROW_SIZE(  );
int        expEVT_GRID_SELECT_CELL(  );
int        expEVT_HELP(  );
int        expEVT_ICONIZE(  );
int        expEVT_IDLE(  );
int        expEVT_INIT_DIALOG(  );
int        expEVT_JOY_BUTTON_DOWN(  );
int        expEVT_JOY_BUTTON_UP(  );
int        expEVT_JOY_MOVE(  );
int        expEVT_JOY_ZMOVE(  );
int        expEVT_KEY_DOWN(  );
int        expEVT_KEY_UP(  );
int        expEVT_KILL_FOCUS(  );
int        expEVT_LEAVE_WINDOW(  );
int        expEVT_LEFT_DCLICK(  );
int        expEVT_LEFT_DOWN(  );
int        expEVT_LEFT_UP(  );
int        expEVT_MAXIMIZE(  );
int        expEVT_MEASURE_ITEM(  );
int        expEVT_MENU_CHAR(  );
int        expEVT_MENU_HIGHLIGHT(  );
int        expEVT_MENU_INIT(  );
int        expEVT_MIDDLE_DCLICK(  );
int        expEVT_MIDDLE_DOWN(  );
int        expEVT_MIDDLE_UP(  );
int        expEVT_MOTION(  );
int        expEVT_MOUSE_CAPTURE_CHANGED(  );
int        expEVT_MOVE(  );
int        expEVT_NAVIGATION_KEY(  );
int        expEVT_NC_ENTER_WINDOW(  );
int        expEVT_NC_LEAVE_WINDOW(  );
int        expEVT_NC_LEFT_DCLICK(  );
int        expEVT_NC_LEFT_DOWN(  );
int        expEVT_NC_LEFT_UP(  );
int        expEVT_NC_MIDDLE_DCLICK(  );
int        expEVT_NC_MIDDLE_DOWN(  );
int        expEVT_NC_MIDDLE_UP(  );
int        expEVT_NC_MOTION(  );
int        expEVT_NC_PAINT(  );
int        expEVT_NC_RIGHT_DCLICK(  );
int        expEVT_NC_RIGHT_DOWN(  );
int        expEVT_NC_RIGHT_UP(  );
int        expEVT_PAINT(  );
int        expEVT_PAINT_ICON(  );
int        expEVT_PALETTE_CHANGED(  );
int        expEVT_PLOT_AREA_CREATE(  );
int        expEVT_PLOT_AREA_SEL_CHANGED(  );
int        expEVT_PLOT_AREA_SEL_CHANGING(  );
int        expEVT_PLOT_AREA_SEL_CREATED(  );
int        expEVT_PLOT_AREA_SEL_CREATING(  );
int        expEVT_PLOT_BEGIN_TITLE_EDIT(  );
int        expEVT_PLOT_BEGIN_X_LABEL_EDIT(  );
int        expEVT_PLOT_BEGIN_Y_LABEL_EDIT(  );
int        expEVT_PLOT_CLICKED(  );
int        expEVT_PLOT_DOUBLECLICKED(  );
int        expEVT_PLOT_END_TITLE_EDIT(  );
int        expEVT_PLOT_END_X_LABEL_EDIT(  );
int        expEVT_PLOT_END_Y_LABEL_EDIT(  );
int        expEVT_PLOT_SEL_CHANGED(  );
int        expEVT_PLOT_SEL_CHANGING(  );
int        expEVT_PLOT_VALUE_SEL_CHANGED(  );
int        expEVT_PLOT_VALUE_SEL_CHANGING(  );
int        expEVT_PLOT_VALUE_SEL_CREATED(  );
int        expEVT_PLOT_VALUE_SEL_CREATING(  );
int        expEVT_PLOT_ZOOM_IN(  );
int        expEVT_PLOT_ZOOM_OUT(  );
int        expEVT_POPUP_MENU_INIT(  );
int        expEVT_POWER(  );
int        expEVT_QUERY_END_SESSION(  );
int        expEVT_QUERY_NEW_PALETTE(  );
int        expEVT_RIGHT_DCLICK(  );
int        expEVT_RIGHT_DOWN(  );
int        expEVT_RIGHT_UP(  );
int        expEVT_SCROLLWIN_BOTTOM(  );
int        expEVT_SCROLLWIN_LINEDOWN(  );
int        expEVT_SCROLLWIN_LINEUP(  );
int        expEVT_SCROLLWIN_PAGEDOWN(  );
int        expEVT_SCROLLWIN_PAGEUP(  );
int        expEVT_SCROLLWIN_THUMBRELEASE(  );
int        expEVT_SCROLLWIN_THUMBTRACK(  );
int        expEVT_SCROLLWIN_TOP(  );
int        expEVT_SCROLL_BOTTOM(  );
int        expEVT_SCROLL_LINEDOWN(  );
int        expEVT_SCROLL_LINEUP(  );
int        expEVT_SCROLL_PAGEDOWN(  );
int        expEVT_SCROLL_PAGEUP(  );
int        expEVT_SCROLL_THUMBRELEASE(  );
int        expEVT_SCROLL_THUMBTRACK(  );
int        expEVT_SCROLL_TOP(  );
int        expEVT_SETTING_CHANGED(  );
int        expEVT_SET_CURSOR(  );
int        expEVT_SET_FOCUS(  );
int        expEVT_SHOW(  );
int        expEVT_SIZE(  );
int        expEVT_SOCKET(  );
int        expEVT_SYS_COLOUR_CHANGED(  );
int        expEVT_TIMER(  );
int        expEVT_UPDATE_UI(  );
int        expEVT_USER_FIRST(  );
int        expEVT_WIZARD_CANCEL(  );
int        expEVT_WIZARD_PAGE_CHANGED(  );
int        expEVT_WIZARD_PAGE_CHANGING(  );


/* Misc. */
int        ELJSysErrorCode(  );
void*      ELJSysErrorMsg( int nErrCode );
void       LogErrorMsg( TStringVoid _msg );
void       LogFatalErrorMsg( TStringVoid _msg );
void       LogMessageMsg( TStringVoid _msg );
void       LogWarningMsg( TStringVoid _msg );
TBool      Quantize( TClass(wxImage) src, TClass(wxImage) dest, int desiredNoColours, void* eightBitData, int flags );
TBool      QuantizePalette( TClass(wxImage) src, TClass(wxImage) dest, void* pPalette, int desiredNoColours, void* eightBitData, int flags );
void       wxCFree( void* _ptr );
TClass(ELJLocale) wxGetELJLocale(  );
void*      wxGetELJTranslation( TStringVoid sz );
void       wxMutexGui_Enter(  );
void       wxMutexGui_Leave(  );

/* ELJApp */
TClassDefExtend(ELJApp,wxApp)
void       ELJApp_Bell(  );
void*      ELJApp_CreateLogTarget(  );
void       ELJApp_Dispatch(  );
void       ELJApp_DisplaySize( TSizeOutVoid(_w,_h) );
void       ELJApp_EnableTooltips( TBool _enable );
void       ELJApp_EnableTopLevelWindows( int _enb );
int        ELJApp_ExecuteProcess( TStringVoid _cmd, int _snc, TClass(wxProcess) _prc );
void       ELJApp_Exit(  );
void       ELJApp_ExitMainLoop(  );
void*      ELJApp_FindWindowById( int _id, TClass(wxWindow) _prt );
TClass(wxWindow) ELJApp_FindWindowByLabel( TStringVoid _lbl, TClass(wxWindow) _prt );
TClass(wxWindow) ELJApp_FindWindowByName( TStringVoid _lbl, TClass(wxWindow) _prt );
TClass(wxApp) ELJApp_GetApp(  );
TStringLen ELJApp_GetAppName( TStringOutVoid _buf );
TStringLen ELJApp_GetClassName( TStringOutVoid _buf );
int        ELJApp_GetExitOnFrameDelete(  );
TStringLen ELJApp_GetOsDescription( TStringOutVoid _buf );
int        ELJApp_GetOsVersion( void* _maj, void* _min );
TClass(wxWindow) ELJApp_GetTopWindow(  );
int        ELJApp_GetUseBestVisual(  );
TStringLen ELJApp_GetUserHome( void* _usr, TStringOutVoid _buf );
TStringLen ELJApp_GetUserId( TStringOutVoid _buf );
TStringLen ELJApp_GetUserName( TStringOutVoid _buf );
TStringLen ELJApp_GetVendorName( TStringOutVoid _buf );
/* int        ELJApp_GetWantDebugOutput(  ); */
void       ELJApp_InitAllImageHandlers(  );
int        ELJApp_Initialized(  );
int        ELJApp_MainLoop(  );
void       ELJApp_MousePosition( TPointOutVoid(_x,_y) );
int        ELJApp_Pending(  );
int        ELJApp_SafeYield( TClass(wxWindow) _win );
/* int        ELJApp_SendIdleEvents(  ); */
/* int        ELJApp_SendIdleEventsToWindow( TClass(wxWindow) win ); */
void       ELJApp_SetAppName( TString name );
void       ELJApp_SetClassName( TString name );
void       ELJApp_SetExitOnFrameDelete( int flag );
void       ELJApp_SetPrintMode( int mode );
void       ELJApp_SetTooltipDelay( int _ms );
void       ELJApp_SetTopWindow( TClass(wxWindow) _wnd );
void       ELJApp_SetUseBestVisual( int flag );
void       ELJApp_SetVendorName( TString name );
void       ELJApp_Sleep( int _scs );
void       ELJApp_USleep( int _mscs );
int        ELJApp_Yield(  );
TBoolInt   ELJApp_IsTerminating(  );


/* ELJArtProv */
TClassDefExtend(ELJArtProv,wxArtProvider)
TClass(ELJArtProv) ELJArtProv_Create( void* _obj, void* _clb );
void       ELJArtProv_Release( TSelf(ELJArtProv) _obj );

/* ELJClient */
TClassDefExtend(ELJClient,wxClient)
TClass(ELJClient) ELJClient_Create( void* _eobj, void* _cnct );
void       ELJClient_Delete( TSelf(ELJClient) _obj );
void       ELJClient_MakeConnection( TSelf(ELJClient) _obj, void* host, TClass(wxServer) server, void* topic );

/* ELJCommand */
TClassDefExtend(ELJCommand,wxCommand)
TBool      ELJCommand_CanUndo( TSelf(ELJCommand) _obj );
TClass(ELJCommand) ELJCommand_Create( int _und, void* _nme, void* _obj, void* _clb );
void       ELJCommand_Delete( TSelf(ELJCommand) _obj );
TStringLen ELJCommand_GetName( TSelf(ELJCommand) _obj, TStringOutVoid _buf );

/* ELJConnection */
TClassDefExtend(ELJConnection,wxConnection)
int        ELJConnection_Advise( TSelf(ELJConnection) _obj, void* item, void* data, int size, int format );
void       ELJConnection_Compress( TSelf(ELJConnection) _obj, int on );
TClass(ELJConnection) ELJConnection_Create( void* _obj, void* buffer, int size );
TClass(ELJConnection) ELJConnection_CreateDefault( TSelf(ELJConnection) _obj );
void       ELJConnection_Delete( TSelf(ELJConnection) _obj );
int        ELJConnection_Disconnect( TSelf(ELJConnection) _obj );
int        ELJConnection_Execute( TSelf(ELJConnection) _obj, void* data, int size, int format );
int        ELJConnection_Poke( TSelf(ELJConnection) _obj, void* item, void* data, int size, int format );
void*      ELJConnection_Request( TSelf(ELJConnection) _obj, void* item, TClass(wxSize) size, int format );
void       ELJConnection_SetOnAdvise( TSelf(ELJConnection) _obj, void* _fnc );
void       ELJConnection_SetOnDisconnect( TSelf(ELJConnection) _obj, void* _fnc );
void       ELJConnection_SetOnExecute( TSelf(ELJConnection) _obj, void* _fnc );
void       ELJConnection_SetOnPoke( TSelf(ELJConnection) _obj, void* _fnc );
void       ELJConnection_SetOnRequest( TSelf(ELJConnection) _obj, void* _fnc );
void       ELJConnection_SetOnStartAdvise( TSelf(ELJConnection) _obj, void* _fnc );
void       ELJConnection_SetOnStopAdvise( TSelf(ELJConnection) _obj, void* _fnc );
int        ELJConnection_StartAdvise( TSelf(ELJConnection) _obj, void* item );
int        ELJConnection_StopAdvise( TSelf(ELJConnection) _obj, void* item );

/* ELJDragDataObject */
TClassDef(ELJDragDataObject)
TClass(ELJDragDataObject) ELJDragDataObject_Create( void* _obj, void* _fmt, void* _func1, void* _func2, void* _func3 );
void       ELJDragDataObject_Delete( TSelf(ELJDragDataObject) _obj );

/* ELJDropTarget */
TClassDefExtend(ELJDropTarget,wxDropTarget)
TClass(ELJDropTarget) ELJDropTarget_Create( void* _obj );
void       ELJDropTarget_Delete( TSelf(ELJDropTarget) _obj );
void       ELJDropTarget_SetOnData( TSelf(ELJDropTarget) _obj, void* _func );
void       ELJDropTarget_SetOnDragOver( TSelf(ELJDropTarget) _obj, void* _func );
void       ELJDropTarget_SetOnDrop( TSelf(ELJDropTarget) _obj, void* _func );
void       ELJDropTarget_SetOnEnter( TSelf(ELJDropTarget) _obj, void* _func );
void       ELJDropTarget_SetOnLeave( TSelf(ELJDropTarget) _obj, void* _func );

/* ELJFileDropTarget */
TClassDefExtend(ELJFileDropTarget,wxFileDropTarget)
TClass(ELJFileDropTarget) ELJFileDropTarget_Create( void* _obj, void* _func );
void       ELJFileDropTarget_Delete( TSelf(ELJFileDropTarget) _obj );
void       ELJFileDropTarget_SetOnData( TSelf(ELJFileDropTarget) _obj, void* _func );
void       ELJFileDropTarget_SetOnDragOver( TSelf(ELJFileDropTarget) _obj, void* _func );
void       ELJFileDropTarget_SetOnDrop( TSelf(ELJFileDropTarget) _obj, void* _func );
void       ELJFileDropTarget_SetOnEnter( TSelf(ELJFileDropTarget) _obj, void* _func );
void       ELJFileDropTarget_SetOnLeave( TSelf(ELJFileDropTarget) _obj, void* _func );

/* ELJGridTable */
TClassDefExtend(ELJGridTable,wxGridTableBase)
TClass(ELJGridTable) ELJGridTable_Create( void* _obj, void* _EifGetNumberRows, void* _EifGetNumberCols, void* _EifGetValue, void* _EifSetValue, void* _EifIsEmptyCell, void* _EifClear, void* _EifInsertRows, void* _EifAppendRows, void* _EifDeleteRows, void* _EifInsertCols, void* _EifAppendCols, void* _EifDeleteCols, void* _EifSetRowLabelValue, void* _EifSetColLabelValue, void* _EifGetRowLabelValue, void* _EifGetColLabelValue );
void       ELJGridTable_Delete( TSelf(ELJGridTable) _obj );
TClass(wxView) ELJGridTable_GetView( TSelf(ELJGridTable) _obj );
void*      ELJGridTable_SendTableMessage( TSelf(ELJGridTable) _obj, int id, int val1, int val2 );

/* ELJLocale */
TClassDefExtend(ELJLocale,wxLocale)

/* ELJLog */
TClassDefExtend(ELJLog,wxLog)
void       ELJLog_AddTraceMask( TSelf(ELJLog) _obj, TStringVoid str );
TClass(ELJLog) ELJLog_Create( void* _obj, void* _fnc );
void       ELJLog_Delete( TSelf(ELJLog) _obj );
void       ELJLog_DontCreateOnDemand( TSelf(ELJLog) _obj );
int        ELJLog_EnableLogging( TSelf(ELJLog) _obj, TBool doIt );
void       ELJLog_Flush( TSelf(ELJLog) _obj );
void       ELJLog_FlushActive( TSelf(ELJLog) _obj );
void*      ELJLog_GetActiveTarget(  );
void*      ELJLog_GetTimestamp( TSelf(ELJLog) _obj );
int        ELJLog_GetTraceMask( TSelf(ELJLog) _obj );
int        ELJLog_GetVerbose( TSelf(ELJLog) _obj );
TBool      ELJLog_HasPendingMessages( TSelf(ELJLog) _obj );
TBool      ELJLog_IsAllowedTraceMask( TSelf(ELJLog) _obj, TClass(wxMask) mask );
TBool      ELJLog_IsEnabled( TSelf(ELJLog) _obj );
void       ELJLog_OnLog( TSelf(ELJLog) _obj, int level, void* szString, int t );
void       ELJLog_RemoveTraceMask( TSelf(ELJLog) _obj, TStringVoid str );
void       ELJLog_Resume( TSelf(ELJLog) _obj );
void*      ELJLog_SetActiveTarget( TSelf(ELJLog) pLogger );
void       ELJLog_SetTimestamp( TSelf(ELJLog) _obj, void* ts );
void       ELJLog_SetTraceMask( TSelf(ELJLog) _obj, int ulMask );
void       ELJLog_SetVerbose( TSelf(ELJLog) _obj, int bVerbose );
void       ELJLog_Suspend( TSelf(ELJLog) _obj );

/* ELJMessageParameters */
TClassDef(ELJMessageParameters)
TClass(ELJMessageParameters) wxMessageParameters_Create( TStringVoid _file, TStringVoid _type, void* _object, void* _func );
void       wxMessageParameters_Delete( TSelf(ELJMessageParameters) _obj );

/* ELJPlotCurve */
TClassDefExtend(ELJPlotCurve,wxPlotCurve)
TClass(ELJPlotCurve) ELJPlotCurve_Create( void* _obj, void* _str, void* _end, void* _y, int offsetY, double startY, double endY );
void       ELJPlotCurve_Delete( TSelf(ELJPlotCurve) _obj );
double     ELJPlotCurve_GetEndY( TSelf(ELJPlotCurve) _obj );
int        ELJPlotCurve_GetOffsetY( TSelf(ELJPlotCurve) _obj );
double     ELJPlotCurve_GetStartY( TSelf(ELJPlotCurve) _obj );
void       ELJPlotCurve_SetEndY( TSelf(ELJPlotCurve) _obj, double endY );
void       ELJPlotCurve_SetOffsetY( TSelf(ELJPlotCurve) _obj, int offsetY );
void       ELJPlotCurve_SetPenNormal( TSelf(ELJPlotCurve) _obj, TClass(wxPen) pen );
void       ELJPlotCurve_SetPenSelected( TSelf(ELJPlotCurve) _obj, TClass(wxPen) pen );
void       ELJPlotCurve_SetStartY( TSelf(ELJPlotCurve) _obj, double startY );

/* ELJPreviewControlBar */
TClassDefExtend(ELJPreviewControlBar,wxPreviewControlBar)
TClass(ELJPreviewControlBar) ELJPreviewControlBar_Create( void* preview, int buttons, TClass(wxWindow) parent, void* title, TRect(x,y,w,h), int style );

/* ELJPreviewFrame */
TClassDefExtend(ELJPreviewFrame,wxPreviewFrame)
TClass(ELJPreviewFrame) ELJPreviewFrame_Create( void* _obj, void* _init, void* _create_canvas, void* _create_toolbar, void* preview, TClass(wxWindow) parent, void* title, TRect(x,y,w,h), int style );
void*      ELJPreviewFrame_GetControlBar( TSelf(ELJPreviewFrame) _obj );
TClass(wxPreviewCanvas) ELJPreviewFrame_GetPreviewCanvas( TSelf(ELJPreviewFrame) _obj );
TClass(wxPrintPreview) ELJPreviewFrame_GetPrintPreview( TSelf(ELJPreviewFrame) _obj );
void       ELJPreviewFrame_Initialize( TSelf(ELJPreviewFrame) _obj );
void       ELJPreviewFrame_SetControlBar( TSelf(ELJPreviewFrame) _obj, void* obj );
void       ELJPreviewFrame_SetPreviewCanvas( TSelf(ELJPreviewFrame) _obj, TClass(wxPreviewCanvas) obj );
void       ELJPreviewFrame_SetPrintPreview( TSelf(ELJPreviewFrame) _obj, TClass(wxPrintPreview) obj );

/* ELJPrintout */
/*
TClassDefExtend(ELJPrintout,wxPrintout)
TClass(ELJPrintout) ELJPrintout_Create( void* title, void* _obj, void* _DoOnBeginDocument, void* _DoOnEndDocument, void* _DoOnBeginPrinting, void* _DoOnEndPrinting, void* _DoOnPreparePrinting, void* _DoOnPrintPage, void* _DoOnHasPage, void* _DoOnPageInfo );
void       ELJPrintout_Delete( TSelf(ELJPrintout) _obj );
TClass(wxDC) ELJPrintout_GetDC( TSelf(ELJPrintout) _obj );
void       ELJPrintout_GetPPIPrinter( TSelf(ELJPrintout) _obj, TPointOutVoid(_x,_y) );
void       ELJPrintout_GetPPIScreen( TSelf(ELJPrintout) _obj, TPointOutVoid(_x,_y) );
void       ELJPrintout_GetPageSizeMM( TSelf(ELJPrintout) _obj, TSizeOutVoid(_w,_h) );
void       ELJPrintout_GetPageSizePixels( TSelf(ELJPrintout) _obj, TSizeOutVoid(_w,_h) );
TStringLen ELJPrintout_GetTitle( TSelf(ELJPrintout) _obj, TStringOutVoid _buf );
TBool      ELJPrintout_IsPreview( TSelf(ELJPrintout) _obj );
void       ELJPrintout_SetDC( TSelf(ELJPrintout) _obj, TClass(wxDC) dc );
void       ELJPrintout_SetIsPreview( TSelf(ELJPrintout) _obj, int p );
void       ELJPrintout_SetPPIPrinter( TSelf(ELJPrintout) _obj, TPoint(x,y) );
void       ELJPrintout_SetPPIScreen( TSelf(ELJPrintout) _obj, TPoint(x,y) );
void       ELJPrintout_SetPageSizeMM( TSelf(ELJPrintout) _obj, TSize(w,h) );
void       ELJPrintout_SetPageSizePixels( TSelf(ELJPrintout) _obj, TSize(w,h) );
*/

/* ELJServer */
TClassDefExtend(ELJServer,wxServer)
TClass(ELJServer) ELJServer_Create( void* _eobj, void* _cnct );
void       ELJServer_Delete( TSelf(ELJServer) _obj );
int        ELJServer_Initialize( TSelf(ELJServer) _obj, TStringVoid name );

/* ELJTextDropTarget */
TClassDefExtend(ELJTextDropTarget,wxTextDropTarget)
TClass(ELJTextDropTarget) ELJTextDropTarget_Create( void* _obj, void* _func );
void       ELJTextDropTarget_Delete( TSelf(ELJTextDropTarget) _obj );
void       ELJTextDropTarget_SetOnData( TSelf(ELJTextDropTarget) _obj, void* _func );
void       ELJTextDropTarget_SetOnDragOver( TSelf(ELJTextDropTarget) _obj, void* _func );
void       ELJTextDropTarget_SetOnDrop( TSelf(ELJTextDropTarget) _obj, void* _func );
void       ELJTextDropTarget_SetOnEnter( TSelf(ELJTextDropTarget) _obj, void* _func );
void       ELJTextDropTarget_SetOnLeave( TSelf(ELJTextDropTarget) _obj, void* _func );

/* ELJTextValidator */
TClassDefExtend(ELJTextValidator,wxTextValidator)
TClass(ELJTextValidator) ELJTextValidator_Create( void* _obj, void* _fnc, TStringVoid _txt, int _stl );

/* cbAntiflickerPlugin */
TClassDefExtend(cbAntiflickerPlugin,cbPluginBase)
TClass(cbAntiflickerPlugin) cbAntiflickerPlugin_Create( void* pPanel, int paneMask );
TClass(cbAntiflickerPlugin) cbAntiflickerPlugin_CreateDefault(  );
void       cbAntiflickerPlugin_Delete( TSelf(cbAntiflickerPlugin) _obj );

/* cbBarDragPlugin */
TClassDefExtend(cbBarDragPlugin,cbPluginBase)
TClass(cbBarDragPlugin) cbBarDragPlugin_Create( void* pPanel, int paneMask );
TClass(cbBarDragPlugin) cbBarDragPlugin_CreateDefault(  );
void       cbBarDragPlugin_Delete( TSelf(cbBarDragPlugin) _obj );

/* cbBarHintsPlugin */
TClassDefExtend(cbBarHintsPlugin,cbPluginBase)
TClass(cbBarHintsPlugin) cbBarHintsPlugin_Create( void* pPanel, int paneMask );
TClass(cbBarHintsPlugin) cbBarHintsPlugin_CreateDefault(  );
void       cbBarHintsPlugin_Delete( TSelf(cbBarHintsPlugin) _obj );
void       cbBarHintsPlugin_SetGrooveCount( TSelf(cbBarHintsPlugin) _obj, int nGrooves );

/* cbBarInfo */
TClassDefExtend(cbBarInfo,wxObject)
TClass(cbBarInfo) cbBarInfo_Create(  );
void       cbBarInfo_Delete( TSelf(cbBarInfo) _obj );
TBool      cbBarInfo_IsExpanded( TSelf(cbBarInfo) _obj );
TBool      cbBarInfo_IsFixed( TSelf(cbBarInfo) _obj );

/* cbBarSpy */
TClassDefExtend(cbBarSpy,wxEvtHandler)
TClass(cbBarSpy) cbBarSpy_Create( void* pPanel );
TClass(cbBarSpy) cbBarSpy_CreateDefault(  );
void       cbBarSpy_Delete( TSelf(cbBarSpy) _obj );
int        cbBarSpy_ProcessEvent( TSelf(cbBarSpy) _obj, TClass(wxEvent) event );
void       cbBarSpy_SetBarWindow( TSelf(cbBarSpy) _obj, void* pWnd );

/* cbCloseBox */
TClassDefExtend(cbCloseBox,cbMiniButton)
TClass(cbCloseBox) cbCloseBox_Create(  );

/* cbCollapseBox */
TClassDefExtend(cbCollapseBox,cbMiniButton)
TClass(cbCollapseBox) cbCollapseBox_Create(  );

/* cbCommonPaneProperties */
TClassDefExtend(cbCommonPaneProperties,wxObject)
void       cbCommonPaneProperties_Assign( TSelf(cbCommonPaneProperties) _obj, void* _other );
int        cbCommonPaneProperties_BarCollapseIconsOn( TSelf(cbCommonPaneProperties) _obj );
int        cbCommonPaneProperties_BarDragHintsOn( TSelf(cbCommonPaneProperties) _obj );
int        cbCommonPaneProperties_BarFloatingOn( TSelf(cbCommonPaneProperties) _obj );
int        cbCommonPaneProperties_ColProportionsOn( TSelf(cbCommonPaneProperties) _obj );
TClass(cbCommonPaneProperties) cbCommonPaneProperties_CreateDefault(  );
void       cbCommonPaneProperties_Delete( TSelf(cbCommonPaneProperties) _obj );
int        cbCommonPaneProperties_ExactDockPredictionOn( TSelf(cbCommonPaneProperties) _obj );
void       cbCommonPaneProperties_MinCBarDim( TSelf(cbCommonPaneProperties) _obj, TSizeOutVoid(_w,_h) );
int        cbCommonPaneProperties_NonDestructFrictionOn( TSelf(cbCommonPaneProperties) _obj );
int        cbCommonPaneProperties_OutOfPaneDragOn( TSelf(cbCommonPaneProperties) _obj );
int        cbCommonPaneProperties_RealTimeUpdatesOn( TSelf(cbCommonPaneProperties) _obj );
int        cbCommonPaneProperties_ResizeHandleSize( TSelf(cbCommonPaneProperties) _obj );
int        cbCommonPaneProperties_RowProportionsOn( TSelf(cbCommonPaneProperties) _obj );
void       cbCommonPaneProperties_SetBarCollapseIconsOn( TSelf(cbCommonPaneProperties) _obj, int _val );
void       cbCommonPaneProperties_SetBarDragHintsOn( TSelf(cbCommonPaneProperties) _obj, int _val );
void       cbCommonPaneProperties_SetBarFloatingOn( TSelf(cbCommonPaneProperties) _obj, int _val );
void       cbCommonPaneProperties_SetColProportionsOn( TSelf(cbCommonPaneProperties) _obj, int _val );
void       cbCommonPaneProperties_SetExactDockPredictionOn( TSelf(cbCommonPaneProperties) _obj, int _val );
void       cbCommonPaneProperties_SetMinCBarDim( TSelf(cbCommonPaneProperties) _obj, TSize(_w,_h) );
void       cbCommonPaneProperties_SetNonDestructFrictionOn( TSelf(cbCommonPaneProperties) _obj, int _val );
void       cbCommonPaneProperties_SetOutOfPaneDragOn( TSelf(cbCommonPaneProperties) _obj, int _val );
void       cbCommonPaneProperties_SetRealTimeUpdatesOn( TSelf(cbCommonPaneProperties) _obj, int _val );
void       cbCommonPaneProperties_SetResizeHandleSize( TSelf(cbCommonPaneProperties) _obj, int _val );
void       cbCommonPaneProperties_SetRowProportionsOn( TSelf(cbCommonPaneProperties) _obj, int _val );
void       cbCommonPaneProperties_SetShow3DPaneBorderOn( TSelf(cbCommonPaneProperties) _obj, int _val );
int        cbCommonPaneProperties_Show3DPaneBorderOn( TSelf(cbCommonPaneProperties) _obj );

/* cbCustomizeBarEvent */
TClassDefExtend(cbCustomizeBarEvent,cbPluginEvent)
void*      cbCustomizeBarEvent_Bar( TSelf(cbCustomizeBarEvent) _obj );
void       cbCustomizeBarEvent_ClickPos( TSelf(cbCustomizeBarEvent) _obj, TPointOutVoid(_x,_y) );

/* cbCustomizeLayoutEvent */
TClassDefExtend(cbCustomizeLayoutEvent,cbPluginEvent)
void       cbCustomizeLayoutEvent_ClickPos( TSelf(cbCustomizeLayoutEvent) _obj, TPointOutVoid(_x,_y) );

/* cbDimHandlerBase */
TClassDefExtend(cbDimHandlerBase,wxObject)

/* cbDimInfo */
TClassDefExtend(cbDimInfo,wxObject)
void       cbDimInfo_Assign( TSelf(cbDimInfo) _obj, void* other );
TClass(cbDimInfo) cbDimInfo_Create( TPoint(x,y), TBool isFixed, int gap, void* pDimHandler );
TClass(cbDimInfo) cbDimInfo_CreateDefault(  );
void*      cbDimInfo_CreateWithHandler( TSelf(cbDimInfo) pDimHandler, TBool isFixed );
void*      cbDimInfo_CreateWithInfo( int dh_x, int dh_y, int dv_x, int dv_y, int f_x, int f_y, TBool isFixed, int horizGap, int vertGap, void* pDimHandler );
void       cbDimInfo_Delete( TSelf(cbDimInfo) _obj );
void*      cbDimInfo_GetDimHandler( TSelf(cbDimInfo) _obj );

/* cbDockBox */
TClassDefExtend(cbDockBox,cbMiniButton)
TClass(cbDockBox) cbDockBox_Create(  );

/* cbDockPane */
TClassDefExtend(cbDockPane,wxObject)
int        cbDockPane_BarPresent( TSelf(cbDockPane) _obj, void* pBar );
TClass(cbDockPane) cbDockPane_Create( int alignment, void* pPanel );
TClass(cbDockPane) cbDockPane_CreateDefault(  );
void       cbDockPane_Delete( TSelf(cbDockPane) _obj );
int        cbDockPane_GetAlignment( TSelf(cbDockPane) _obj );
void*      cbDockPane_GetBarInfoByWindow( TSelf(cbDockPane) _obj, void* pBarWnd );
void       cbDockPane_GetBarResizeRange( TSelf(cbDockPane) _obj, void* pBar, void* from, void* till, int forLeftHandle );
int        cbDockPane_GetDockingState( TSelf(cbDockPane) _obj );
void*      cbDockPane_GetFirstRow( TSelf(cbDockPane) _obj );
int        cbDockPane_GetPaneHeight( TSelf(cbDockPane) _obj );
void       cbDockPane_GetRealRect( TSelf(cbDockPane) _obj, TRectOutVoid(_x,_y,_w,_h) );
int        cbDockPane_GetRowList( TSelf(cbDockPane) _obj, void* _ref );
void       cbDockPane_GetRowResizeRange( TSelf(cbDockPane) _obj, void* pRow, void* from, void* till, int forUpperHandle );
int        cbDockPane_HitTestPaneItems( TSelf(cbDockPane) _obj, TPoint(x,y), void* ppRow, void* ppBar );
void       cbDockPane_InsertBarByCoord( TSelf(cbDockPane) _obj, void* pBar, TRect(x,y,w,h) );
void       cbDockPane_InsertBarByInfo( TSelf(cbDockPane) _obj, void* pBarInfo );
void       cbDockPane_InsertBarToRow( TSelf(cbDockPane) _obj, void* pBar, void* pIntoRow );
void       cbDockPane_InsertRow( TSelf(cbDockPane) _obj, void* pRow, void* pBeforeRow );
TBool      cbDockPane_IsHorizontal( TSelf(cbDockPane) _obj );
int        cbDockPane_MatchesMask( TSelf(cbDockPane) _obj, int paneMask );
void       cbDockPane_RemoveBar( TSelf(cbDockPane) _obj, void* pBar );
void       cbDockPane_RemoveRow( TSelf(cbDockPane) _obj, void* pRow );
void       cbDockPane_SetBoundsInParent( TSelf(cbDockPane) _obj, TRect(x,y,w,h));
void       cbDockPane_SetMargins( TSelf(cbDockPane) _obj, int top, int bottom, int left, int right );
void       cbDockPane_SetPaneWidth( TSelf(cbDockPane) _obj, int width );

/* cbDrawBarDecorEvent */
TClassDefExtend(cbDrawBarDecorEvent,cbPluginEvent)
void*      cbDrawBarDecorEvent_Bar( TSelf(cbDrawBarDecorEvent) _obj );
void       cbDrawBarDecorEvent_BoundsInParent( TSelf(cbDrawBarDecorEvent) _obj, TRectOutVoid(_x,_y,_w,_h) );
void*      cbDrawBarDecorEvent_Dc( TSelf(cbDrawBarDecorEvent) _obj );

/* cbDrawBarHandlesEvent */
TClassDefExtend(cbDrawBarHandlesEvent,cbPluginEvent)
void*      cbDrawBarHandlesEvent_Bar( TSelf(cbDrawBarHandlesEvent) _obj );
void*      cbDrawBarHandlesEvent_Dc( TSelf(cbDrawBarHandlesEvent) _obj );

/* cbDrawHintRectEvent */
TClassDefExtend(cbDrawHintRectEvent,cbPluginEvent)
int        cbDrawHintRectEvent_EraseRect( TSelf(cbDrawHintRectEvent) _obj );
TBool      cbDrawHintRectEvent_IsInClient( TSelf(cbDrawHintRectEvent) _obj );
int        cbDrawHintRectEvent_LastTime( TSelf(cbDrawHintRectEvent) _obj );
void       cbDrawHintRectEvent_Rect( TSelf(cbDrawHintRectEvent) _obj, TRectOutVoid(_x,_y,_w,_h) );

/* cbDrawPaneBkGroundEvent */
TClassDefExtend(cbDrawPaneBkGroundEvent,cbPluginEvent)
void*      cbDrawPaneBkGroundEvent_Dc( TSelf(cbDrawPaneBkGroundEvent) _obj );

/* cbDrawPaneDecorEvent */
TClassDefExtend(cbDrawPaneDecorEvent,cbPluginEvent)
void*      cbDrawPaneDecorEvent_Dc( TSelf(cbDrawPaneDecorEvent) _obj );

/* cbDrawRowBkGroundEvent */
TClassDefExtend(cbDrawRowBkGroundEvent,cbPluginEvent)
void*      cbDrawRowBkGroundEvent_Dc( TSelf(cbDrawRowBkGroundEvent) _obj );
void*      cbDrawRowBkGroundEvent_Row( TSelf(cbDrawRowBkGroundEvent) _obj );

/* cbDrawRowDecorEvent */
TClassDefExtend(cbDrawRowDecorEvent,cbPluginEvent)
void*      cbDrawRowDecorEvent_Dc( TSelf(cbDrawRowDecorEvent) _obj );
void*      cbDrawRowDecorEvent_Row( TSelf(cbDrawRowDecorEvent) _obj );

/* cbDrawRowHandlesEvent */
TClassDefExtend(cbDrawRowHandlesEvent,cbPluginEvent)
void*      cbDrawRowHandlesEvent_Dc( TSelf(cbDrawRowHandlesEvent) _obj );
void*      cbDrawRowHandlesEvent_Row( TSelf(cbDrawRowHandlesEvent) _obj );

/* cbDynToolBarDimHandler */
TClassDefExtend(cbDynToolBarDimHandler,cbDimHandlerBase)
TClass(cbDynToolBarDimHandler) cbDynToolBarDimHandler_Create(  );
void       cbDynToolBarDimHandler_Delete( TSelf(cbDynToolBarDimHandler) _obj );

/* cbFinishDrawInAreaEvent */
TClassDefExtend(cbFinishDrawInAreaEvent,cbPluginEvent)
void       cbFinishDrawInAreaEvent_Area( TSelf(cbFinishDrawInAreaEvent) _obj, TRectOutVoid(_x,_y,_w,_h) );

/* cbFloatedBarWindow */
TClassDefExtend(cbFloatedBarWindow,wxToolWindow)
TClass(cbFloatedBarWindow) cbFloatedBarWindow_Create( void* _obj );
void*      cbFloatedBarWindow_GetBar( TSelf(cbFloatedBarWindow) _obj );
void       cbFloatedBarWindow_PositionFloatedWnd( TSelf(cbFloatedBarWindow) _obj, TRect(_x,_y,_w,_h) );
void       cbFloatedBarWindow_SetBar( TSelf(cbFloatedBarWindow) _obj, void* _bar );
void       cbFloatedBarWindow_SetLayout( TSelf(cbFloatedBarWindow) _obj, void* _layout );

/* cbGCUpdatesMgr */
TClassDefExtend(cbGCUpdatesMgr,cbSimpleUpdatesMgr)
TClass(cbGCUpdatesMgr) cbGCUpdatesMgr_Create( void* pPanel );
TClass(cbGCUpdatesMgr) cbGCUpdatesMgr_CreateDefault(  );
void       cbGCUpdatesMgr_Delete( TSelf(cbGCUpdatesMgr) _obj );
void       cbGCUpdatesMgr_UpdateNow( TSelf(cbGCUpdatesMgr) _obj );

/* cbHintAnimationPlugin */
TClassDefExtend(cbHintAnimationPlugin,cbPluginBase)
TClass(cbHintAnimationPlugin) cbHintAnimationPlugin_Create( void* pPanel, int paneMask );
TClass(cbHintAnimationPlugin) cbHintAnimationPlugin_CreateDefault(  );
void       cbHintAnimationPlugin_Delete( TSelf(cbHintAnimationPlugin) _obj );

/* cbInsertBarEvent */
TClassDefExtend(cbInsertBarEvent,cbPluginEvent)
void*      cbInsertBarEvent_Bar( TSelf(cbInsertBarEvent) _obj );
void*      cbInsertBarEvent_Row( TSelf(cbInsertBarEvent) _obj );

/* cbLayoutRowEvent */
TClassDefExtend(cbLayoutRowEvent,cbPluginEvent)
void*      cbLayoutRowEvent_Row( TSelf(cbLayoutRowEvent) _obj );

/* cbLeftDClickEvent */
TClassDefExtend(cbLeftDClickEvent,cbPluginEvent)
void       cbLeftDClickEvent_Pos( TSelf(cbLeftDClickEvent) _obj, TPointOutVoid(_x,_y) );

/* cbLeftDownEvent */
TClassDefExtend(cbLeftDownEvent,cbPluginEvent)
void       cbLeftDownEvent_Pos( TSelf(cbLeftDownEvent) _obj, TPointOutVoid(_x,_y) );

/* cbLeftUpEvent */
TClassDefExtend(cbLeftUpEvent,cbPluginEvent)
void       cbLeftUpEvent_Pos( TSelf(cbLeftUpEvent) _obj, TPointOutVoid(_x,_y) );

/* cbMiniButton */
TClassDefExtend(cbMiniButton,wxObject)
TClass(cbMiniButton) cbMiniButton_Create(  );
void       cbMiniButton_Delete( TSelf(cbMiniButton) _obj );
void       cbMiniButton_Dim( TSelf(cbMiniButton) _obj, TSizeOutVoid(_w,_h) );
int        cbMiniButton_DragStarted( TSelf(cbMiniButton) _obj );
void       cbMiniButton_Enable( TSelf(cbMiniButton) _obj, TBool enable );
int        cbMiniButton_Enabled( TSelf(cbMiniButton) _obj );
int        cbMiniButton_HitTest( TSelf(cbMiniButton) _obj, TPoint(x,y) );
TBool      cbMiniButton_IsPressed( TSelf(cbMiniButton) _obj );
void*      cbMiniButton_Layout( TSelf(cbMiniButton) _obj );
void*      cbMiniButton_Pane( TSelf(cbMiniButton) _obj );
void*      cbMiniButton_Plugin( TSelf(cbMiniButton) _obj );
void       cbMiniButton_Pos( TSelf(cbMiniButton) _obj, TPointOutVoid(_x,_y) );
int        cbMiniButton_Pressed( TSelf(cbMiniButton) _obj );
void       cbMiniButton_Refresh( TSelf(cbMiniButton) _obj );
void       cbMiniButton_Reset( TSelf(cbMiniButton) _obj );
void       cbMiniButton_SetPos( TSelf(cbMiniButton) _obj, TPoint(x,y) );
int        cbMiniButton_Visible( TSelf(cbMiniButton) _obj );
int        cbMiniButton_WasClicked( TSelf(cbMiniButton) _obj );
void*      cbMiniButton_Wnd( TSelf(cbMiniButton) _obj );

/* cbMotionEvent */
TClassDefExtend(cbMotionEvent,cbPluginEvent)
void       cbMotionEvent_Pos( TSelf(cbMotionEvent) _obj, TPointOutVoid(_x,_y) );

/* cbPaneDrawPlugin */
TClassDefExtend(cbPaneDrawPlugin,cbPluginBase)
TClass(cbPaneDrawPlugin) cbPaneDrawPlugin_Create( void* pPanel, int paneMask );
TClass(cbPaneDrawPlugin) cbPaneDrawPlugin_CreateDefault(  );
void       cbPaneDrawPlugin_Delete( TSelf(cbPaneDrawPlugin) _obj );

/* cbPluginBase */
TClassDefExtend(cbPluginBase,wxEvtHandler)
void       cbPluginBase_Delete( TSelf(cbPluginBase) _obj );
int        cbPluginBase_GetPaneMask( TSelf(cbPluginBase) _obj );
TBool      cbPluginBase_IsReady( TSelf(cbPluginBase) _obj );
void*      cbPluginBase_Plugin( int _swt );
int        cbPluginBase_ProcessEvent( TSelf(cbPluginBase) _obj, TClass(wxEvent) event );

/* cbPluginEvent */
TClassDefExtend(cbPluginEvent,wxEvent)
void*      cbPluginEvent_Pane( TSelf(cbPluginEvent) _obj );

/* cbRemoveBarEvent */
TClassDefExtend(cbRemoveBarEvent,cbPluginEvent)
void*      cbRemoveBarEvent_Bar( TSelf(cbRemoveBarEvent) _obj );

/* cbResizeBarEvent */
TClassDefExtend(cbResizeBarEvent,cbPluginEvent)
void*      cbResizeBarEvent_Bar( TSelf(cbResizeBarEvent) _obj );
void*      cbResizeBarEvent_Row( TSelf(cbResizeBarEvent) _obj );

/* cbResizeRowEvent */
TClassDefExtend(cbResizeRowEvent,cbPluginEvent)
int        cbResizeRowEvent_ForUpperHandle( TSelf(cbResizeRowEvent) _obj );
int        cbResizeRowEvent_HandleOfs( TSelf(cbResizeRowEvent) _obj );
void*      cbResizeRowEvent_Row( TSelf(cbResizeRowEvent) _obj );

/* cbRightDownEvent */
TClassDefExtend(cbRightDownEvent,cbPluginEvent)
void       cbRightDownEvent_Pos( TSelf(cbRightDownEvent) _obj, TPointOutVoid(_x,_y) );

/* cbRightUpEvent */
TClassDefExtend(cbRightUpEvent,cbPluginEvent)
void       cbRightUpEvent_Pos( TSelf(cbRightUpEvent) _obj, TPointOutVoid(_x,_y) );

/* cbRowDragPlugin */
TClassDefExtend(cbRowDragPlugin,cbPluginBase)
TClass(cbRowDragPlugin) cbRowDragPlugin_Create( void* pPanel, int paneMask );
TClass(cbRowDragPlugin) cbRowDragPlugin_CreateDefault(  );
void       cbRowDragPlugin_Delete( TSelf(cbRowDragPlugin) _obj );

/* cbRowInfo */
TClassDefExtend(cbRowInfo,wxObject)
TClass(cbRowInfo) cbRowInfo_Create(  );
void       cbRowInfo_Delete( TSelf(cbRowInfo) _obj );
void*      cbRowInfo_GetFirstBar( TSelf(cbRowInfo) _obj );

/* cbRowLayoutPlugin */
TClassDefExtend(cbRowLayoutPlugin,cbPluginBase)
TClass(cbRowLayoutPlugin) cbRowLayoutPlugin_Create( void* pPanel, int paneMask );
TClass(cbRowLayoutPlugin) cbRowLayoutPlugin_CreateDefault(  );
void       cbRowLayoutPlugin_Delete( TSelf(cbRowLayoutPlugin) _obj );

/* cbSimpleCustomizationPlugin */
TClassDefExtend(cbSimpleCustomizationPlugin,cbPluginBase)
TClass(cbSimpleCustomizationPlugin) cbSimpleCustomizationPlugin_Create( void* pPanel, int paneMask );
TClass(cbSimpleCustomizationPlugin) cbSimpleCustomizationPlugin_CreateDefault(  );
void       cbSimpleCustomizationPlugin_Delete( TSelf(cbSimpleCustomizationPlugin) _obj );

/* cbSimpleUpdatesMgr */
TClassDefExtend(cbSimpleUpdatesMgr,cbUpdatesManagerBase)

/* cbSizeBarWndEvent */
TClassDefExtend(cbSizeBarWndEvent,cbPluginEvent)
void*      cbSizeBarWndEvent_Bar( TSelf(cbSizeBarWndEvent) _obj );
void       cbSizeBarWndEvent_BoundsInParent( TSelf(cbSizeBarWndEvent) _obj, TRectOutVoid(_x,_y,_w,_h) );

/* cbStartBarDraggingEvent */
TClassDefExtend(cbStartBarDraggingEvent,cbPluginEvent)
void*      cbStartBarDraggingEvent_Bar( TSelf(cbStartBarDraggingEvent) _obj );
void       cbStartBarDraggingEvent_Pos( TSelf(cbStartBarDraggingEvent) _obj, TPointOutVoid(_x,_y) );

/* cbStartDrawInAreaEvent */
TClassDefExtend(cbStartDrawInAreaEvent,cbPluginEvent)
void       cbStartDrawInAreaEvent_Area( TSelf(cbStartDrawInAreaEvent) _obj, TRectOutVoid(_x,_y,_w,_h) );

/* cbUpdatesManagerBase */
TClassDefExtend(cbUpdatesManagerBase,wxObject)

/* wxAcceleratorEntry */
TClassDef(wxAcceleratorEntry)
TClass(wxAcceleratorEntry) wxAcceleratorEntry_Create( int flags, int keyCode, int cmd );
void       wxAcceleratorEntry_Delete( TSelf(wxAcceleratorEntry) _obj );
int        wxAcceleratorEntry_GetCommand( TSelf(wxAcceleratorEntry) _obj );
int        wxAcceleratorEntry_GetFlags( TSelf(wxAcceleratorEntry) _obj );
int        wxAcceleratorEntry_GetKeyCode( TSelf(wxAcceleratorEntry) _obj );
void       wxAcceleratorEntry_Set( TSelf(wxAcceleratorEntry) _obj, int flags, int keyCode, int cmd );

/* wxAcceleratorTable */
TClassDef(wxAcceleratorTable)
TClass(wxAcceleratorTable) wxAcceleratorTable_Create( int n, void* entries );
void       wxAcceleratorTable_Delete( TSelf(wxAcceleratorTable) _obj );

/* wxActivateEvent */
TClassDefExtend(wxActivateEvent,wxEvent)
void       wxActivateEvent_CopyObject( TSelf(wxActivateEvent) _obj, void* obj );
int        wxActivateEvent_GetActive( TSelf(wxActivateEvent) _obj );

/* wxApp */
TClassDefExtend(wxApp,wxEvtHandler)

/* wxArray */
TClassDef(wxArray)

/* wxArrayString */
TClassDefExtend(wxArrayString,wxArray)

/* wxArtProvider */
TClassDefExtend(wxArtProvider,wxObject)
int        PopProvider(  );
void       PushProvider( TClass(wxArtProvider) provider );
TBool      RemoveProvider( TClass(wxArtProvider) provider );

/* wxAutomationObject */
TClassDefExtend(wxAutomationObject,wxObject)

/* wxBitmap */
TClassDefExtend(wxBitmap,wxGDIObject)
void       wxBitmap_AddHandler( TClass(wxEvtHandler) handler );
void       wxBitmap_CleanUpHandlers(  );
TClass(wxBitmap) wxBitmap_Create( void* _data, int _type, TSize(_width,_height), int _depth );
TClass(wxBitmap) wxBitmap_CreateDefault(  );
TClass(wxBitmap) wxBitmap_CreateEmpty( TSize(_width,_height), int _depth );
TClass(wxBitmap) wxBitmap_CreateFromXPM( TSelf(wxBitmap) data );
TClass(wxBitmap) wxBitmap_CreateLoad( TStringVoid name, int type );
void       wxBitmap_Delete( TSelf(wxBitmap) _obj );
void*      wxBitmap_FindHandlerByExtension( TSelf(wxBitmap) extension, int type );
void*      wxBitmap_FindHandlerByName( TStringVoid name );
void*      wxBitmap_FindHandlerByType( int type );
int        wxBitmap_GetDepth( TSelf(wxBitmap) _obj );
int        wxBitmap_GetHeight( TSelf(wxBitmap) _obj );
TClass(wxMask) wxBitmap_GetMask( TSelf(wxBitmap) _obj );
void       wxBitmap_GetSubBitmap( TSelf(wxBitmap) _obj, TRect(x,y,w,h), TClassRef(wxBitmap) _ref );
int        wxBitmap_GetWidth( TSelf(wxBitmap) _obj );
void       wxBitmap_InitStandardHandlers(  );
void       wxBitmap_InsertHandler( TClass(wxEvtHandler) handler );
int        wxBitmap_LoadFile( TSelf(wxBitmap) _obj, TStringVoid name, int type );
TBool      wxBitmap_Ok( TSelf(wxBitmap) _obj );
int        wxBitmap_RemoveHandler( TStringVoid name );
int        wxBitmap_SaveFile( TSelf(wxBitmap) _obj, TStringVoid name, int type, TClass(wxPalette) cmap );
void       wxBitmap_SetDepth( TSelf(wxBitmap) _obj, int d );
void       wxBitmap_SetHeight( TSelf(wxBitmap) _obj, int h );
void       wxBitmap_SetMask( TSelf(wxBitmap) _obj, TClass(wxMask) mask );
void       wxBitmap_SetWidth( TSelf(wxBitmap) _obj, int w );

/* wxBitmapButton */
TClassDefExtend(wxBitmapButton,wxButton)
TClass(wxBitmapButton) wxBitmapButton_Create( TClass(wxWindow) _prt, int _id, TClass(wxBitmap) _bmp, TRect(_lft,_top,_wdt,_hgt), int _stl );
void       wxBitmapButton_GetBitmapDisabled( TSelf(wxBitmapButton) _obj, TClassRef(wxBitmap) _ref );
void       wxBitmapButton_GetBitmapFocus( TSelf(wxBitmapButton) _obj, TClassRef(wxBitmap) _ref );
void       wxBitmapButton_GetBitmapLabel( TSelf(wxBitmapButton) _obj, TClassRef(wxBitmap) _ref );
void       wxBitmapButton_GetBitmapSelected( TSelf(wxBitmapButton) _obj, TClassRef(wxBitmap) _ref );
int        wxBitmapButton_GetMarginX( TSelf(wxBitmapButton) _obj );
int        wxBitmapButton_GetMarginY( TSelf(wxBitmapButton) _obj );
void       wxBitmapButton_SetBitmapDisabled( TSelf(wxBitmapButton) _obj, TClass(wxBitmap) disabled );
void       wxBitmapButton_SetBitmapFocus( TSelf(wxBitmapButton) _obj, TClass(wxBitmap) focus );
void       wxBitmapButton_SetBitmapLabel( TSelf(wxBitmapButton) _obj, TClass(wxBitmap) bitmap );
void       wxBitmapButton_SetBitmapSelected( TSelf(wxBitmapButton) _obj, TClass(wxBitmap) sel );
void       wxBitmapButton_SetMargins( TSelf(wxBitmapButton) _obj, TPoint(x,y) );

/* wxBitmapDataObject */
TClassDefExtend(wxBitmapDataObject,wxDataObjectSimple)
TClass(wxBitmapDataObject) BitmapDataObject_Create( TClass(wxBitmap) _bmp );
TClass(wxBitmapDataObject) BitmapDataObject_CreateEmpty(  );
void       BitmapDataObject_Delete( TSelf(wxBitmapDataObject) _obj );
void       BitmapDataObject_GetBitmap( TSelf(wxBitmapDataObject) _obj, TClassRef(wxBitmap) _bmp );
void       BitmapDataObject_SetBitmap( TSelf(wxBitmapDataObject) _obj, TClass(wxBitmap) _bmp );

/* wxBitmapHandler */
TClassDefExtend(wxBitmapHandler,wxObject)

/* wxBoxSizer */
TClassDefExtend(wxBoxSizer,wxSizer)
void       wxBoxSizer_CalcMin( TSelf(wxBoxSizer) _obj, TSizeOutVoid(_w,_h) );
TClass(wxBoxSizer) wxBoxSizer_Create( int orient );
int        wxBoxSizer_GetOrientation( TSelf(wxBoxSizer) _obj );
void       wxBoxSizer_RecalcSizes( TSelf(wxBoxSizer) _obj );

/* wxBrush */
TClassDefExtend(wxBrush,wxGDIObject)
void       wxBrush_Assign( TSelf(wxBrush) _obj, TClass(wxBrush) brush );
TClass(wxBrush) wxBrush_CreateDefault(  );
TClass(wxBrush) wxBrush_CreateFromBitmap( TClass(wxBitmap) bitmap );
TClass(wxBrush) wxBrush_CreateFromColour( TClass(wxColour) col, int style );
TClass(wxBrush) wxBrush_CreateFromStock( int id );
void       wxBrush_Delete( TSelf(wxBrush) _obj );
void       wxBrush_GetColour( TSelf(wxBrush) _obj, TClassRef(wxColour) _ref );
void       wxBrush_GetStipple( TSelf(wxBrush) _obj, TClassRef(wxBitmap) _ref );
int        wxBrush_GetStyle( TSelf(wxBrush) _obj );
TBool      wxBrush_IsEqual( TSelf(wxBrush) _obj, TClass(wxBrush) brush );
TBool      wxBrush_Ok( TSelf(wxBrush) _obj );
void       wxBrush_SetColour( TSelf(wxBrush) _obj, TClass(wxColour) col );
void       wxBrush_SetColourSingle( TSelf(wxBrush) _obj, TChar r, TChar g, TChar b );
void       wxBrush_SetStipple( TSelf(wxBrush) _obj, TClass(wxBitmap) stipple );
void       wxBrush_SetStyle( TSelf(wxBrush) _obj, int style );

/* wxBrushList */
TClassDefExtend(wxBrushList,wxList)

/* wxBufferedInputStream */
TClassDefExtend(wxBufferedInputStream,wxFilterInputStream)

/* wxBufferedOutputStream */
TClassDefExtend(wxBufferedOutputStream,wxFilterOutputStream)

/* wxBusyCursor */
TClassDef(wxBusyCursor)
TClass(wxBusyCursor) wxBusyCursor_Create(  );
void*      wxBusyCursor_CreateWithCursor( TSelf(wxBusyCursor) _cur );
void       wxBusyCursor_Delete( TSelf(wxBusyCursor) _obj );

/* wxBusyInfo */
TClassDef(wxBusyInfo)
TClass(wxBusyInfo) wxBusyInfo_Create( TStringVoid _txt );
void       wxBusyInfo_Delete( TSelf(wxBusyInfo) _obj );

/* wxButton */
TClassDefExtend(wxButton,wxControl)
TClass(wxButton) wxButton_Create( TClass(wxWindow) _prt, int _id, TString _txt, TRect(_lft,_top,_wdt,_hgt), int _stl );
int        wxButton_SetBackgroundColour( TSelf(wxButton) _obj, TClass(wxColour) colour );
void       wxButton_SetDefault( TSelf(wxButton) _obj );

/* wxCSConv */
TClassDefExtend(wxCSConv,wxMBConv)

/* wxCalculateLayoutEvent */
TClassDefExtend(wxCalculateLayoutEvent,wxEvent)
TClass(wxCalculateLayoutEvent) wxCalculateLayoutEvent_Create( int id );
int        wxCalculateLayoutEvent_GetFlags( TSelf(wxCalculateLayoutEvent) _obj );
void       wxCalculateLayoutEvent_GetRect( TSelf(wxCalculateLayoutEvent) _obj, TRectOutVoid(_x,_y,_w,_h) );
void       wxCalculateLayoutEvent_SetFlags( TSelf(wxCalculateLayoutEvent) _obj, int flags );
void       wxCalculateLayoutEvent_SetRect( TSelf(wxCalculateLayoutEvent) _obj, TRect(x,y,w,h) );

/* wxCalendarCtrl */
TClassDefExtend(wxCalendarCtrl,wxControl)
TClass(wxCalendarCtrl) wxCalendarCtrl_Create( TClass(wxWindow) _prt, int _id, void* _dat, TRect(_lft,_top,_wdt,_hgt), int _stl );
void       wxCalendarCtrl_EnableHolidayDisplay( TSelf(wxCalendarCtrl) _obj, int display );
void       wxCalendarCtrl_EnableMonthChange( TSelf(wxCalendarCtrl) _obj, TBool enable );
void       wxCalendarCtrl_EnableYearChange( TSelf(wxCalendarCtrl) _obj, TBool enable );
void*      wxCalendarCtrl_GetAttr( TSelf(wxCalendarCtrl) _obj, int day );
void       wxCalendarCtrl_GetDate( TSelf(wxCalendarCtrl) _obj, void* date );
void       wxCalendarCtrl_GetHeaderColourBg( TSelf(wxCalendarCtrl) _obj, TClassRef(wxColour) _ref );
void       wxCalendarCtrl_GetHeaderColourFg( TSelf(wxCalendarCtrl) _obj, TClassRef(wxColour) _ref );
void       wxCalendarCtrl_GetHighlightColourBg( TSelf(wxCalendarCtrl) _obj, TClassRef(wxColour) _ref );
void       wxCalendarCtrl_GetHighlightColourFg( TSelf(wxCalendarCtrl) _obj, TClassRef(wxColour) _ref );
void       wxCalendarCtrl_GetHolidayColourBg( TSelf(wxCalendarCtrl) _obj, TClassRef(wxColour) _ref );
void       wxCalendarCtrl_GetHolidayColourFg( TSelf(wxCalendarCtrl) _obj, TClassRef(wxColour) _ref );
int        wxCalendarCtrl_HitTest( TSelf(wxCalendarCtrl) _obj, TPoint(x,y), void* date, void* wd );
void       wxCalendarCtrl_ResetAttr( TSelf(wxCalendarCtrl) _obj, int day );
void       wxCalendarCtrl_SetAttr( TSelf(wxCalendarCtrl) _obj, int day, void* attr );
void       wxCalendarCtrl_SetDate( TSelf(wxCalendarCtrl) _obj, void* date );
void       wxCalendarCtrl_SetHeaderColours( TSelf(wxCalendarCtrl) _obj, void* colFg, void* colBg );
void       wxCalendarCtrl_SetHighlightColours( TSelf(wxCalendarCtrl) _obj, void* colFg, void* colBg );
void       wxCalendarCtrl_SetHoliday( TSelf(wxCalendarCtrl) _obj, int day );
void       wxCalendarCtrl_SetHolidayColours( TSelf(wxCalendarCtrl) _obj, void* colFg, void* colBg );

/* wxCalendarDateAttr */
TClassDef(wxCalendarDateAttr)
TClass(wxCalendarDateAttr) wxCalendarDateAttr_Create( void* _ctxt, void* _cbck, void* _cbrd, void* _fnt, int _brd );
TClass(wxCalendarDateAttr) wxCalendarDateAttr_CreateDefault(  );
void       wxCalendarDateAttr_Delete( TSelf(wxCalendarDateAttr) _obj );
void       wxCalendarDateAttr_GetBackgroundColour( TSelf(wxCalendarDateAttr) _obj, TClassRef(wxColour) _ref );
int        wxCalendarDateAttr_GetBorder( TSelf(wxCalendarDateAttr) _obj );
void       wxCalendarDateAttr_GetBorderColour( TSelf(wxCalendarDateAttr) _obj, TClassRef(wxColour) _ref );
void       wxCalendarDateAttr_GetFont( TSelf(wxCalendarDateAttr) _obj, TClassRef(wxFont) _ref );
void       wxCalendarDateAttr_GetTextColour( TSelf(wxCalendarDateAttr) _obj, TClassRef(wxColour) _ref );
TBool      wxCalendarDateAttr_HasBackgroundColour( TSelf(wxCalendarDateAttr) _obj );
TBool      wxCalendarDateAttr_HasBorder( TSelf(wxCalendarDateAttr) _obj );
TBool      wxCalendarDateAttr_HasBorderColour( TSelf(wxCalendarDateAttr) _obj );
TBool      wxCalendarDateAttr_HasFont( TSelf(wxCalendarDateAttr) _obj );
TBool      wxCalendarDateAttr_HasTextColour( TSelf(wxCalendarDateAttr) _obj );
TBool      wxCalendarDateAttr_IsHoliday( TSelf(wxCalendarDateAttr) _obj );
void       wxCalendarDateAttr_SetBackgroundColour( TSelf(wxCalendarDateAttr) _obj, TClass(wxColour) col );
void       wxCalendarDateAttr_SetBorder( TSelf(wxCalendarDateAttr) _obj, int border );
void       wxCalendarDateAttr_SetBorderColour( TSelf(wxCalendarDateAttr) _obj, TClass(wxColour) col );
void       wxCalendarDateAttr_SetFont( TSelf(wxCalendarDateAttr) _obj, TClass(wxFont) font );
void       wxCalendarDateAttr_SetHoliday( TSelf(wxCalendarDateAttr) _obj, int holiday );
void       wxCalendarDateAttr_SetTextColour( TSelf(wxCalendarDateAttr) _obj, TClass(wxColour) col );

/* wxCalendarEvent */
TClassDefExtend(wxCalendarEvent,wxCommandEvent)
void       wxCalendarEvent_GetDate( TSelf(wxCalendarEvent) _obj, void* _dte );
int        wxCalendarEvent_GetWeekDay( TSelf(wxCalendarEvent) _obj );

/* wxCaret */
TClassDef(wxCaret)
TClass(wxCaret) wxCaret_Create( TClass(wxWindow) _wnd, int _wth, int _hgt );
int        wxCaret_GetBlinkTime(  );
void       wxCaret_GetPosition( TSelf(wxCaret) _obj, TPointOutVoid(_x,_y) );
void       wxCaret_GetSize( TSelf(wxCaret) _obj, TSizeOutVoid(_w,_h) );
TClass(wxWindow) wxCaret_GetWindow( TSelf(wxCaret) _obj );
void       wxCaret_Hide( TSelf(wxCaret) _obj );
TBool      wxCaret_IsOk( TSelf(wxCaret) _obj );
TBool      wxCaret_IsVisible( TSelf(wxCaret) _obj );
void       wxCaret_Move( TSelf(wxCaret) _obj, TPoint(x,y) );
void       wxCaret_SetBlinkTime( int milliseconds );
void       wxCaret_SetSize( TSelf(wxCaret) _obj, TSize(width,height) );
void       wxCaret_Show( TSelf(wxCaret) _obj );

/* wxCheckBox */
TClassDefExtend(wxCheckBox,wxControl)
TClass(wxCheckBox) wxCheckBox_Create( TClass(wxWindow) _prt, int _id, TString _txt, TRect(_lft,_top,_wdt,_hgt), int _stl );
TBoolInt   wxCheckBox_GetValue( TSelf(wxCheckBox) _obj );
void       wxCheckBox_SetValue( TSelf(wxCheckBox) _obj, TBoolInt value );

/* wxCheckListBox */
TClassDefExtend(wxCheckListBox,wxListBox)
void       wxCheckListBox_Check( TSelf(wxCheckListBox) _obj, int item, TBool check );
TClass(wxCheckListBox) wxCheckListBox_Create( TClass(wxWindow) _prt, int _id, TRect(_lft,_top,_wdt,_hgt), TArrayString(n,str), int _stl );
TBool      wxCheckListBox_IsChecked( TSelf(wxCheckListBox) _obj, int item );

/* wxChoice */
TClassDefExtend(wxChoice,wxControl)
void       wxChoice_Append( TSelf(wxChoice) _obj, TString item );
void       wxChoice_Clear( TSelf(wxChoice) _obj );
TClass(wxChoice) wxChoice_Create( TClass(wxWindow) _prt, int _id, TRect(_lft,_top,_wdt,_hgt), TArrayString(n,str), int _stl );
void       wxChoice_Delete( TSelf(wxChoice) _obj, int n );
int        wxChoice_FindString( TSelf(wxChoice) _obj, TString s );
int        wxChoice_GetCount( TSelf(wxChoice) _obj );
int        wxChoice_GetSelection( TSelf(wxChoice) _obj );
TStringLen wxChoice_GetString( TSelf(wxChoice) _obj, int n, TStringOutVoid _buf );
void       wxChoice_SetSelection( TSelf(wxChoice) _obj, int n );
void       wxChoice_SetString( TSelf(wxChoice) _obj, int n, TString s );

/* wxClassInfo */
TClassDef(wxClassInfo)
void*      wxClassInfo_CreateClassByName( TSelf(wxClassInfo) _inf );
void*      wxClassInfo_GetClassName( TSelf(wxClassInfo) _inf );
TBool      wxClassInfo_IsKindOf( TSelf(wxClassInfo) _obj, TStringVoid _name );

/* wxClient */
TClassDefExtend(wxClient,wxClientBase)

/* wxClientBase */
TClassDefExtend(wxClientBase,wxObject)

/* wxClientDC */
TClassDefExtend(wxClientDC,wxWindowDC)
TClass(wxClientDC) wxClientDC_Create( TClass(wxWindow) win );
void       wxClientDC_Delete( TSelf(wxClientDC) _obj );

/* wxClientData */
TClassDef(wxClientData)

/* wxClientDataContainer */
TClassDef(wxClientDataContainer)

/* wxClipboard */
TClassDefExtend(wxClipboard,wxObject)
int        wxClipboard_AddData( TSelf(wxClipboard) _obj, void* data );
void       wxClipboard_Clear( TSelf(wxClipboard) _obj );
void       wxClipboard_Close( TSelf(wxClipboard) _obj );
TClass(wxClipboard) wxClipboard_Create(  );
int        wxClipboard_Flush( TSelf(wxClipboard) _obj );
int        wxClipboard_GetData( TSelf(wxClipboard) _obj, void* data );
TBool      wxClipboard_IsOpened( TSelf(wxClipboard) _obj );
TBool      wxClipboard_IsSupported( TSelf(wxClipboard) _obj, void* format );
int        wxClipboard_Open( TSelf(wxClipboard) _obj );
int        wxClipboard_SetData( TSelf(wxClipboard) _obj, void* data );
void       wxClipboard_UsePrimarySelection( TSelf(wxClipboard) _obj, int primary );

/* wxCloseEvent */
TClassDefExtend(wxCloseEvent,wxEvent)
TBool      wxCloseEvent_CanVeto( TSelf(wxCloseEvent) _obj );
void       wxCloseEvent_CopyObject( TSelf(wxCloseEvent) _obj, void* obj );
int        wxCloseEvent_GetLoggingOff( TSelf(wxCloseEvent) _obj );
int        wxCloseEvent_GetVeto( TSelf(wxCloseEvent) _obj );
void       wxCloseEvent_SetCanVeto( TSelf(wxCloseEvent) _obj, int canVeto );
void       wxCloseEvent_SetLoggingOff( TSelf(wxCloseEvent) _obj, int logOff );
void       wxCloseEvent_Veto( TSelf(wxCloseEvent) _obj, int veto );

/* wxClosure */
TClassDefExtend(wxClosure,wxObject)

/* wxColour */
TClassDefExtend(wxColour,wxObject)
void       wxColour_Assign( TSelf(wxColour) _obj, void* other );
TChar      wxColour_Blue( TSelf(wxColour) _obj );
void       wxColour_Copy( TSelf(wxColour) _obj, void* _other );
void*      wxColour_CreateByName( TStringVoid _name );
TClass(wxColour) wxColour_CreateEmpty(  );
TClass(wxColour) wxColour_CreateFromStock( int id );
void*      wxColour_CreateRGB( TChar _red, TChar _green, TChar _blue );
void       wxColour_Delete( TSelf(wxColour) _obj );
int        wxColour_GetPixel( TSelf(wxColour) _obj );
TChar      wxColour_Green( TSelf(wxColour) _obj );
TBool      wxColour_Ok( TSelf(wxColour) _obj );
TChar      wxColour_Red( TSelf(wxColour) _obj );
void       wxColour_Set( TSelf(wxColour) _obj, TChar _red, TChar _green, TChar _blue );
void       wxColour_SetByName( TSelf(wxColour) _obj, TStringVoid _name );
TBoolInt   wxColour_ValidName( TStringVoid _name );

/* wxColourData */
TClassDefExtend(wxColourData,wxObject)
TClass(wxColourData) wxColourData_Create(  );
void       wxColourData_Delete( TSelf(wxColourData) _obj );
int        wxColourData_GetChooseFull( TSelf(wxColourData) _obj );
void       wxColourData_GetColour( TSelf(wxColourData) _obj, TClassRef(wxColour) _ref );
void       wxColourData_GetCustomColour( TSelf(wxColourData) _obj, int i, TClassRef(wxColour) _ref );
void       wxColourData_SetChooseFull( TSelf(wxColourData) _obj, int flag );
void       wxColourData_SetColour( TSelf(wxColourData) _obj, TClass(wxColour) colour );
void       wxColourData_SetCustomColour( TSelf(wxColourData) _obj, int i, TClass(wxColour) colour );

/* wxColourDatabase */
TClassDefExtend(wxColourDatabase,wxList)

/* wxColourDialog */
TClassDefExtend(wxColourDialog,wxDialog)
TClass(wxColourDialog) wxColourDialog_Create( TClass(wxWindow) _prt, TClass(wxColour) col );
void       wxColourDialog_GetColourData( TSelf(wxColourDialog) _obj, TClassRef(wxColour) _ref );

/* wxComboBox */
TClassDefExtend(wxComboBox,wxChoice)
void       wxComboBox_Append( TSelf(wxComboBox) _obj, TString item );
void       wxComboBox_AppendData( TSelf(wxComboBox) _obj, TString item, void* d );
void       wxComboBox_Clear( TSelf(wxComboBox) _obj );
void       wxComboBox_Copy( TSelf(wxComboBox) _obj );
TClass(wxComboBox) wxComboBox_Create( TClass(wxWindow) _prt, int _id, TStringVoid _txt, TRect(_lft,_top,_wdt,_hgt), TArrayString(n,str), int _stl );
void       wxComboBox_Cut( TSelf(wxComboBox) _obj );
void       wxComboBox_Delete( TSelf(wxComboBox) _obj, int n );
int        wxComboBox_FindString( TSelf(wxComboBox) _obj, TString s );
TClass(wxClientData) wxComboBox_GetClientData( TSelf(wxComboBox) _obj, int n );
int        wxComboBox_GetCount( TSelf(wxComboBox) _obj );
int        wxComboBox_GetInsertionPoint( TSelf(wxComboBox) _obj );
int        wxComboBox_GetLastPosition( TSelf(wxComboBox) _obj );
int        wxComboBox_GetSelection( TSelf(wxComboBox) _obj );
TStringLen wxComboBox_GetString( TSelf(wxComboBox) _obj, int n, TStringOutVoid _buf );
TStringLen wxComboBox_GetStringSelection( TSelf(wxComboBox) _obj, TStringOutVoid _buf );
TStringLen wxComboBox_GetValue( TSelf(wxComboBox) _obj, TStringOutVoid _buf );
void       wxComboBox_Paste( TSelf(wxComboBox) _obj );
void       wxComboBox_Remove( TSelf(wxComboBox) _obj, int from, int to );
void       wxComboBox_Replace( TSelf(wxComboBox) _obj, int from, int to, TString value );
void       wxComboBox_SetClientData( TSelf(wxComboBox) _obj, int n, TClass(wxClientData) clientData );
void       wxComboBox_SetEditable( TSelf(wxComboBox) _obj, TBool editable );
void       wxComboBox_SetInsertionPoint( TSelf(wxComboBox) _obj, int pos );
void       wxComboBox_SetInsertionPointEnd( TSelf(wxComboBox) _obj );
void       wxComboBox_SetSelection( TSelf(wxComboBox) _obj, int n );
void       wxComboBox_SetTextSelection( TSelf(wxComboBox) _obj, int from, int to );

/* wxCommand */
TClassDefExtend(wxCommand,wxObject)

/* wxCommandEvent */
TClassDefExtend(wxCommandEvent,wxEvent)
void       wxCommandEvent_CopyObject( TSelf(wxCommandEvent) _obj, void* object_dest );
TClass(wxCommandEvent) wxCommandEvent_Create( int _typ, int _id );
void       wxCommandEvent_Delete( TSelf(wxCommandEvent) _obj );
TClass(wxClientData) wxCommandEvent_GetClientData( TSelf(wxCommandEvent) _obj );
TClass(wxClientData) wxCommandEvent_GetClientObject( TSelf(wxCommandEvent) _obj );
long       wxCommandEvent_GetExtraLong( TSelf(wxCommandEvent) _obj );
long       wxCommandEvent_GetInt( TSelf(wxCommandEvent) _obj );
int        wxCommandEvent_GetSelection( TSelf(wxCommandEvent) _obj );
TStringLen wxCommandEvent_GetString( TSelf(wxCommandEvent) _obj, TStringOutVoid _buf );
TBool      wxCommandEvent_IsChecked( TSelf(wxCommandEvent) _obj );
TBool      wxCommandEvent_IsSelection( TSelf(wxCommandEvent) _obj );
void       wxCommandEvent_SetClientData( TSelf(wxCommandEvent) _obj, TClass(wxClientData) clientData );
void       wxCommandEvent_SetClientObject( TSelf(wxCommandEvent) _obj, TClass(wxClientData) clientObject );
void       wxCommandEvent_SetExtraLong( TSelf(wxCommandEvent) _obj, long extraLong );
void       wxCommandEvent_SetInt( TSelf(wxCommandEvent) _obj, int i );
void       wxCommandEvent_SetString( TSelf(wxCommandEvent) _obj, TString s );

/* wxCommandLineParser */
TClassDef(wxCommandLineParser)

/* wxCommandProcessor */
TClassDefExtend(wxCommandProcessor,wxObject)
TBool      wxCommandProcessor_CanRedo( TSelf(wxCommandProcessor) _obj );
TBool      wxCommandProcessor_CanUndo( TSelf(wxCommandProcessor) _obj );
void       wxCommandProcessor_ClearCommands( TSelf(wxCommandProcessor) _obj );
void       wxCommandProcessor_Delete( TSelf(wxCommandProcessor) _obj );
int        wxCommandProcessor_GetCommands( TSelf(wxCommandProcessor) _obj, void* _ref );
void*      wxCommandProcessor_GetEditMenu( TSelf(wxCommandProcessor) _obj );
int        wxCommandProcessor_GetMaxCommands( TSelf(wxCommandProcessor) _obj );
void       wxCommandProcessor_Initialize( TSelf(wxCommandProcessor) _obj );
int        wxCommandProcessor_Redo( TSelf(wxCommandProcessor) _obj );
void       wxCommandProcessor_SetEditMenu( TSelf(wxCommandProcessor) _obj, TClass(wxMenu) menu );
void       wxCommandProcessor_SetMenuStrings( TSelf(wxCommandProcessor) _obj );
int        wxCommandProcessor_Submit( TSelf(wxCommandProcessor) _obj, TClass(wxCommand) command, int storeIt );
int        wxCommandProcessor_Undo( TSelf(wxCommandProcessor) _obj );
void*      wxCommandProcessor_wxCommandProcessor( int maxCommands );

/* wxCondition */
TClassDef(wxCondition)
void       wxCondition_Broadcast( TSelf(wxCondition) _obj );
TClass(wxCondition) wxCondition_Create( void* _mut );
void       wxCondition_Delete( TSelf(wxCondition) _obj );
void       wxCondition_Signal( TSelf(wxCondition) _obj );
void       wxCondition_Wait( TSelf(wxCondition) _obj );
int        wxCondition_WaitFor( TSelf(wxCondition) _obj, int sec, int nsec );

/* wxConfigBase */
TClassDef(wxConfigBase)
TClass(wxConfigBase) wxConfigBase_Create(  );
void       wxConfigBase_Delete( TSelf(wxConfigBase) _obj );
TBool      wxConfigBase_DeleteAll( TSelf(wxConfigBase) _obj );
TBool      wxConfigBase_DeleteEntry( TSelf(wxConfigBase) _obj, TStringVoid key, TBoolInt bDeleteGroupIfEmpty );
TBool      wxConfigBase_DeleteGroup( TSelf(wxConfigBase) _obj, TStringVoid key );
TBool      wxConfigBase_Exists( TSelf(wxConfigBase) _obj, TStringVoid strName );
TStringLen wxConfigBase_ExpandEnvVars( TSelf(wxConfigBase) _obj, TStringVoid str, TStringOutVoid _buf );
TBool      wxConfigBase_Flush( TSelf(wxConfigBase) _obj, TBool bCurrentOnly );
TStringLen wxConfigBase_GetAppName( TSelf(wxConfigBase) _obj, TStringOutVoid _buf );
int        wxConfigBase_GetEntryType( TSelf(wxConfigBase) _obj, TStringVoid name );
TClass(wxString) wxConfigBase_GetFirstEntry( TSelf(wxConfigBase) _obj, void* lIndex );
TClass(wxString) wxConfigBase_GetFirstGroup( TSelf(wxConfigBase) _obj, void* lIndex );
TClass(wxString) wxConfigBase_GetNextEntry( TSelf(wxConfigBase) _obj, void* lIndex);
TClass(wxString) wxConfigBase_GetNextGroup( TSelf(wxConfigBase) _obj, void* lIndex);
int        wxConfigBase_GetNumberOfEntries( TSelf(wxConfigBase) _obj, TBoolInt bRecursive );
int        wxConfigBase_GetNumberOfGroups( TSelf(wxConfigBase) _obj, TBoolInt bRecursive );
TStringLen wxConfigBase_GetPath( TSelf(wxConfigBase) _obj, TStringOutVoid _buf );
int        wxConfigBase_GetStyle( TSelf(wxConfigBase) _obj );
TStringLen wxConfigBase_GetVendorName( TSelf(wxConfigBase) _obj, TStringOutVoid _buf );
TBool      wxConfigBase_HasEntry( TSelf(wxConfigBase) _obj, TStringVoid strName );
TBool      wxConfigBase_HasGroup( TSelf(wxConfigBase) _obj, TStringVoid strName );
TBool      wxConfigBase_IsExpandingEnvVars( TSelf(wxConfigBase) _obj );
TBool      wxConfigBase_IsRecordingDefaults( TSelf(wxConfigBase) _obj );
TBoolInt   wxConfigBase_ReadBool( TSelf(wxConfigBase) _obj, TStringVoid key, TBoolInt defVal );
double     wxConfigBase_ReadDouble( TSelf(wxConfigBase) _obj, TStringVoid key, double defVal );
int        wxConfigBase_ReadInteger( TSelf(wxConfigBase) _obj, TStringVoid key, int defVal );
TClass(wxString) wxConfigBase_ReadString( TSelf(wxConfigBase) _obj, TStringVoid key, TStringVoid defVal );
TBoolInt   wxConfigBase_RenameEntry( TSelf(wxConfigBase) _obj, TStringVoid oldName, TStringVoid newName );
TBoolInt   wxConfigBase_RenameGroup( TSelf(wxConfigBase) _obj, TStringVoid oldName, TStringVoid newName );
void       wxConfigBase_SetAppName( TSelf(wxConfigBase) _obj, TStringVoid appName );
void       wxConfigBase_SetExpandEnvVars( TSelf(wxConfigBase) _obj, TBoolInt bDoIt );
void       wxConfigBase_SetPath( TSelf(wxConfigBase) _obj, TStringVoid strPath );
void       wxConfigBase_SetRecordDefaults( TSelf(wxConfigBase) _obj, TBoolInt bDoIt );
void       wxConfigBase_SetStyle( TSelf(wxConfigBase) _obj, int style );
void       wxConfigBase_SetVendorName( TSelf(wxConfigBase) _obj, TStringVoid vendorName );
TBoolInt   wxConfigBase_WriteBool( TSelf(wxConfigBase) _obj, TStringVoid key, TBoolInt value );
TBoolInt   wxConfigBase_WriteDouble( TSelf(wxConfigBase) _obj, TStringVoid key, double value );
TBoolInt   wxConfigBase_WriteInteger( TSelf(wxConfigBase) _obj, TStringVoid key, int value );
TBoolInt   wxConfigBase_WriteString( TSelf(wxConfigBase) _obj, TStringVoid key, TStringVoid value );

/* wxConnection */
TClassDefExtend(wxConnection,wxConnectionBase)

/* wxConnectionBase */
TClassDefExtend(wxConnectionBase,wxObject)

/* wxContextHelp */
TClassDefExtend(wxContextHelp,wxObject)
int        wxContextHelp_BeginContextHelp( TSelf(wxContextHelp) _obj, TClass(wxWindow) win );
TClass(wxContextHelp) wxContextHelp_Create( TClass(wxWindow) win, int beginHelp );
void       wxContextHelp_Delete( TSelf(wxContextHelp) _obj );
int        wxContextHelp_EndContextHelp( TSelf(wxContextHelp) _obj );

/* wxContextHelpButton */
TClassDefExtend(wxContextHelpButton,wxBitmapButton)
TClass(wxContextHelpButton) wxContextHelpButton_Create( TClass(wxWindow) parent, int id, TRect(x,y,w,h), long style );

/* wxControl */
TClassDefExtend(wxControl,wxWindow)
void       wxControl_Command( TSelf(wxControl) _obj, TClass(wxEvent) event );
TStringLen wxControl_GetLabel( TSelf(wxControl) _obj, TStringOutVoid _buf );
void       wxControl_SetLabel( TSelf(wxControl) _obj, TString text );

/* wxCountingOutputStream */
TClassDefExtend(wxCountingOutputStream,wxOutputStream)

/* wxCriticalSection */
TClassDef(wxCriticalSection)
TClass(wxCriticalSection) wxCriticalSection_Create(  );
void       wxCriticalSection_Delete( TSelf(wxCriticalSection) _obj );
void       wxCriticalSection_Enter( TSelf(wxCriticalSection) _obj );
void       wxCriticalSection_Leave( TSelf(wxCriticalSection) _obj );

/* wxCriticalSectionLocker */
TClassDef(wxCriticalSectionLocker)

/* wxCursor */
TClassDefExtend(wxCursor,wxBitmap)
TClass(wxCursor)  Cursor_CreateFromStock( int _id );

/* wxCustomDataObject */
TClassDefExtend(wxCustomDataObject,wxDataObjectSimple)

/* wxDC */
TClassDefExtend(wxDC,wxObject)
void       wxDC_BeginDrawing( TSelf(wxDC) _obj );
int        wxDC_Blit( TSelf(wxDC) _obj, TRect(xdest,ydest,width,height), TClass(wxDC) source, TPoint(xsrc,ysrc), int rop, TBool useMask );
void       wxDC_CalcBoundingBox( TSelf(wxDC) _obj, TPoint(x,y) );
TBool      wxDC_CanDrawBitmap( TSelf(wxDC) _obj );
TBool      wxDC_CanGetTextExtent( TSelf(wxDC) _obj );
void       wxDC_Clear( TSelf(wxDC) _obj );
void       wxDC_CrossHair( TSelf(wxDC) _obj, TPoint(x,y) );
void       wxDC_Delete( TSelf(wxDC) _obj );
void       wxDC_DestroyClippingRegion( TSelf(wxDC) _obj );
int        wxDC_DeviceToLogicalX( TSelf(wxDC) _obj, int x );
int        wxDC_DeviceToLogicalXRel( TSelf(wxDC) _obj, int x );
int        wxDC_DeviceToLogicalY( TSelf(wxDC) _obj, int y );
int        wxDC_DeviceToLogicalYRel( TSelf(wxDC) _obj, int y );
void       wxDC_DrawArc( TSelf(wxDC) _obj, TPoint(x1,y1), TPoint(x2,y2), TPoint(xc,yc) );
void       wxDC_DrawBitmap( TSelf(wxDC) _obj, TClass(wxBitmap) bmp, TPoint(x,y), TBool useMask );
void       wxDC_DrawCheckMark( TSelf(wxDC) _obj, TRect(x,y,width,height) );
void       wxDC_DrawCircle( TSelf(wxDC) _obj, TPoint(x,y), int radius );
void       wxDC_DrawEllipse( TSelf(wxDC) _obj, TRect(x,y,width,height) );
void       wxDC_DrawEllipticArc( TSelf(wxDC) _obj, TRect(x,y,w,h), double sa, double ea );
void       wxDC_DrawIcon( TSelf(wxDC) _obj, TClass(wxIcon) icon, TPoint(x,y) );
void       wxDC_DrawLine( TSelf(wxDC) _obj, TPoint(x1,y1), TPoint(x2,y2) );
void       wxDC_DrawLines( TSelf(wxDC) _obj, int n, void* x, void* y, TPoint(xoffset,yoffset) );
void       wxDC_DrawPoint( TSelf(wxDC) _obj, TPoint(x,y) );
void       wxDC_DrawPolygon( TSelf(wxDC) _obj, int n, void* x, void* y, TPoint(xoffset,yoffset), int fillStyle );
void       wxDC_DrawRectangle( TSelf(wxDC) _obj, TRect(x,y,width,height) );
void       wxDC_DrawRotatedText( TSelf(wxDC) _obj, TStringVoid text, TPoint(x,y), double angle );
void       wxDC_DrawRoundedRectangle( TSelf(wxDC) _obj, TRect(x,y,width,height), double radius );
void       wxDC_DrawText( TSelf(wxDC) _obj, TStringVoid text, TPoint(x,y) );
void       wxDC_EndDoc( TSelf(wxDC) _obj );
void       wxDC_EndDrawing( TSelf(wxDC) _obj );
void       wxDC_EndPage( TSelf(wxDC) _obj );
void       wxDC_FloodFill( TSelf(wxDC) _obj, TPoint(x,y), TClass(wxColour) col, int style );
void       wxDC_GetBackground( TSelf(wxDC) _obj, TClassRef(wxBrush) _ref );
int        wxDC_GetBackgroundMode( TSelf(wxDC) _obj );
void       wxDC_GetBrush( TSelf(wxDC) _obj, TClassRef(wxBrush) _ref );
int        wxDC_GetCharHeight( TSelf(wxDC) _obj );
int        wxDC_GetCharWidth( TSelf(wxDC) _obj );
void       wxDC_GetClippingBox( TSelf(wxDC) _obj, TRectOutVoid(_x,_y,_w,_h) );
int        wxDC_GetDepth( TSelf(wxDC) _obj );
void       wxDC_GetDeviceOrigin( TSelf(wxDC) _obj, TPointOutVoid(_x,_y) );
void       wxDC_GetFont( TSelf(wxDC) _obj, TClassRef(wxFont) _ref );
int        wxDC_GetLogicalFunction( TSelf(wxDC) _obj );
void       wxDC_GetLogicalOrigin( TSelf(wxDC) _obj, TPointOutVoid(_x,_y) );
void       wxDC_GetLogicalScale( TSelf(wxDC) _obj, TPointOutVoid(_x,_y) );
int        wxDC_GetMapMode( TSelf(wxDC) _obj );
int        wxDC_GetOptimization( TSelf(wxDC) _obj );
void       wxDC_GetPPI( TSelf(wxDC) _obj, TSizeOutVoid(_w,_h) );
void       wxDC_GetPen( TSelf(wxDC) _obj, TClassRef(wxPen) _ref );
TBoolInt   wxDC_GetPixel( TSelf(wxDC) _obj, TPoint(x,y), TClass(wxColour) col );
void       wxDC_GetSize( TSelf(wxDC) _obj, TSizeOutVoid(_w,_h) );
void       wxDC_GetSizeMM( TSelf(wxDC) _obj, TSizeOutVoid(_w,_h) );
void       wxDC_GetTextBackground( TSelf(wxDC) _obj, TClassRef(wxColour) _ref );
void       wxDC_GetTextExtent( TSelf(wxDC) _obj, TStringVoid string, void* x, void* y, void* descent, void* externalLeading, TClass(wxFont) theFont );
void       wxDC_GetTextForeground( TSelf(wxDC) _obj, TClassRef(wxColour) _ref );
void       wxDC_GetUserScale( TSelf(wxDC) _obj, void* x, void* y );
int        wxDC_LogicalToDeviceX( TSelf(wxDC) _obj, int x );
int        wxDC_LogicalToDeviceXRel( TSelf(wxDC) _obj, int x );
int        wxDC_LogicalToDeviceY( TSelf(wxDC) _obj, int y );
int        wxDC_LogicalToDeviceYRel( TSelf(wxDC) _obj, int y );
int        wxDC_MaxX( TSelf(wxDC) _obj );
int        wxDC_MaxY( TSelf(wxDC) _obj );
int        wxDC_MinX( TSelf(wxDC) _obj );
int        wxDC_MinY( TSelf(wxDC) _obj );
TBool      wxDC_Ok( TSelf(wxDC) _obj );
void       wxDC_ResetBoundingBox( TSelf(wxDC) _obj );
void       wxDC_SetAxisOrientation( TSelf(wxDC) _obj, TBoolInt xLeftRight, TBoolInt yBottomUp );
void       wxDC_SetBackground( TSelf(wxDC) _obj, TClass(wxBrush) brush );
void       wxDC_SetBackgroundMode( TSelf(wxDC) _obj, int mode );
void       wxDC_SetBrush( TSelf(wxDC) _obj, TClass(wxBrush) brush );
void       wxDC_SetClippingRegion( TSelf(wxDC) _obj, TRect(x,y,width,height) );
void       wxDC_SetClippingRegionFromRegion( TSelf(wxDC) _obj, TClass(wxRegion) region );
void       wxDC_SetDeviceOrigin( TSelf(wxDC) _obj, TPoint(x,y) );
void       wxDC_SetFont( TSelf(wxDC) _obj, TClass(wxFont) font );
void       wxDC_SetLogicalFunction( TSelf(wxDC) _obj, int function );
void       wxDC_SetLogicalOrigin( TSelf(wxDC) _obj, TPoint(x,y) );
void       wxDC_SetLogicalScale( TSelf(wxDC) _obj, double x, double y );
void       wxDC_SetMapMode( TSelf(wxDC) _obj, int mode );
void       wxDC_SetOptimization( TSelf(wxDC) _obj, int opt );
void       wxDC_SetPalette( TSelf(wxDC) _obj, TClass(wxPalette) palette );
void       wxDC_SetPen( TSelf(wxDC) _obj, TClass(wxPen) pen );
void       wxDC_SetTextBackground( TSelf(wxDC) _obj, TClass(wxColour) colour );
void       wxDC_SetTextForeground( TSelf(wxDC) _obj, TClass(wxColour) colour );
void       wxDC_SetUserScale( TSelf(wxDC) _obj, double x, double y );
int        wxDC_StartDoc( TSelf(wxDC) _obj, TStringVoid msg );
void       wxDC_StartPage( TSelf(wxDC) _obj );

/* wxDCClipper */
TClassDef(wxDCClipper)

/* wxDDEClient */
TClassDefExtend(wxDDEClient,wxClientBase)

/* wxDDEConnection */
TClassDefExtend(wxDDEConnection,wxConnectionBase)

/* wxDDEServer */
TClassDefExtend(wxDDEServer,wxServerBase)

/* wxDataFormat */
TClassDef(wxDataFormat)
TClass(wxDataFormat) wxDataFormat_CreateFromId( TStringVoid name );
TClass(wxDataFormat) wxDataFormat_CreateFromType( int typ );
void       wxDataFormat_Delete( TSelf(wxDataFormat) _obj );
TStringLen wxDataFormat_GetId( TSelf(wxDataFormat) _obj, TStringOutVoid _buf );
int        wxDataFormat_GetType( TSelf(wxDataFormat) _obj );
TBool      wxDataFormat_IsEqual( TSelf(wxDataFormat) _obj, void* other );
void       wxDataFormat_SetId( TSelf(wxDataFormat) _obj, void* id );
void       wxDataFormat_SetType( TSelf(wxDataFormat) _obj, int typ );

/* wxDataInputStream */
TClassDef(wxDataInputStream)

/* wxDataObject */
TClassDef(wxDataObject)

/* wxDataObjectComposite */
TClassDefExtend(wxDataObjectComposite,wxDataObject)
void       wxDataObjectComposite_Add( TSelf(wxDataObjectComposite) _obj, void* _dat, int _preferred );
TClass(wxDataObjectComposite) wxDataObjectComposite_Create(  );
void       wxDataObjectComposite_Delete( TSelf(wxDataObjectComposite) _obj );

/* wxDataObjectSimple */
TClassDefExtend(wxDataObjectSimple,wxDataObject)

/* wxDataOutputStream */
TClassDef(wxDataOutputStream)

/* wxDatabase */
TClassDefExtend(wxDatabase,wxObject)

/* wxDateTime */
TClassDef(wxDateTime)
void       wxDateTime_AddDate( TSelf(wxDateTime) _obj, void* diff, TClassRef(wxDateTime) _ref );
void       wxDateTime_AddDateValues( TSelf(wxDateTime) _obj, int _yrs, int _mnt, int _wek, int _day );
void       wxDateTime_AddTime( TSelf(wxDateTime) _obj, void* diff, TClassRef(wxDateTime) _ref );
void       wxDateTime_AddTimeValues( TSelf(wxDateTime) _obj, int _hrs, int _min, int _sec, int _mls );
int        wxDateTime_ConvertYearToBC( int year );
TClass(wxDateTime) wxDateTime_Create(  );
TStringLen wxDateTime_Format( TSelf(wxDateTime) _obj, void* format, int tz, TStringOutVoid _buf );
TStringLen wxDateTime_FormatDate( TSelf(wxDateTime) _obj, TStringOutVoid _buf );
TStringLen wxDateTime_FormatISODate( TSelf(wxDateTime) _obj, TStringOutVoid _buf );
TStringLen wxDateTime_FormatISOTime( TSelf(wxDateTime) _obj, TStringOutVoid _buf );
TStringLen wxDateTime_FormatTime( TSelf(wxDateTime) _obj, TStringOutVoid _buf );
TStringLen wxDateTime_GetAmString( TStringOutVoid _buf );
void       wxDateTime_GetBeginDST( int year, int country, TClass(wxDateTime) dt );
int        wxDateTime_GetCentury( int year );
int        wxDateTime_GetCountry(  );
int        wxDateTime_GetCurrentMonth( int cal );
int        wxDateTime_GetCurrentYear( int cal );
int        wxDateTime_GetDay( TSelf(wxDateTime) _obj, int tz );
int        wxDateTime_GetDayOfYear( TSelf(wxDateTime) _obj, int tz );
void       wxDateTime_GetEndDST( int year, int country, TClass(wxDateTime) dt );
int        wxDateTime_GetHour( TSelf(wxDateTime) _obj, int tz );
void       wxDateTime_GetLastMonthDay( TSelf(wxDateTime) _obj, int month, int year, TClassRef(wxDateTime) _ref );
void       wxDateTime_GetLastWeekDay( TSelf(wxDateTime) _obj, int weekday, int month, int year, TClassRef(wxDateTime) _ref );
int        wxDateTime_GetMillisecond( TSelf(wxDateTime) _obj, int tz );
int        wxDateTime_GetMinute( TSelf(wxDateTime) _obj, int tz );
int        wxDateTime_GetMonth( TSelf(wxDateTime) _obj, int tz );
TStringLen wxDateTime_GetMonthName( int month, int flags, TStringOutVoid _buf );
void       wxDateTime_GetNextWeekDay( TSelf(wxDateTime) _obj, int weekday, TClassRef(wxDateTime) _ref );
int        wxDateTime_GetNumberOfDays( int year, int cal );
int        wxDateTime_GetNumberOfDaysMonth( int month, int year, int cal );
TStringLen wxDateTime_GetPmString( TStringOutVoid _buf );
void       wxDateTime_GetPrevWeekDay( TSelf(wxDateTime) _obj, int weekday, TClassRef(wxDateTime) _ref );
int        wxDateTime_GetSecond( TSelf(wxDateTime) _obj, int tz );
time_t     wxDateTime_GetTicks( TSelf(wxDateTime) _obj );
int        wxDateTime_GetTimeNow(  );
void       wxDateTime_GetValue( TSelf(wxDateTime) _obj, void* hi_long, void* lo_long );
void       wxDateTime_GetWeek( TSelf(wxDateTime) _obj, int numWeek, int weekday, TClassRef(wxDateTime) _ref );
void       wxDateTime_GetWeekDay( TSelf(wxDateTime) _obj, int weekday, int n, int month, int year, TClassRef(wxDateTime) _ref );
void       wxDateTime_GetWeekDayInSameWeek( TSelf(wxDateTime) _obj, int weekday, TClassRef(wxDateTime) _ref );
TStringLen wxDateTime_GetWeekDayName( int weekday, int flags, TStringOutVoid _buf );
int        wxDateTime_GetWeekDayTZ( TSelf(wxDateTime) _obj, int tz );
int        wxDateTime_GetWeekOfMonth( TSelf(wxDateTime) _obj, int flags, int tz );
int        wxDateTime_GetWeekOfYear( TSelf(wxDateTime) _obj, int flags, int tz );
int        wxDateTime_GetYear( TSelf(wxDateTime) _obj, int tz );
TBool      wxDateTime_IsBetween( TSelf(wxDateTime) _obj, TClass(wxDateTime) t1, TClass(wxDateTime) t2 );
TBool      wxDateTime_IsDST( TSelf(wxDateTime) _obj, int country );
TBool      wxDateTime_IsDSTApplicable( int year, int country );
TBool      wxDateTime_IsEarlierThan( TSelf(wxDateTime) _obj, void* datetime );
TBool      wxDateTime_IsEqualTo( TSelf(wxDateTime) _obj, void* datetime );
TBool      wxDateTime_IsEqualUpTo( TSelf(wxDateTime) _obj, TClass(wxDateTime) dt, void* ts );
TBool      wxDateTime_IsGregorianDate( TSelf(wxDateTime) _obj, int country );
TBool      wxDateTime_IsLaterThan( TSelf(wxDateTime) _obj, void* datetime );
TBool      wxDateTime_IsLeapYear( int year, int cal );
TBool      wxDateTime_IsSameDate( TSelf(wxDateTime) _obj, TClass(wxDateTime) dt );
TBool      wxDateTime_IsSameTime( TSelf(wxDateTime) _obj, TClass(wxDateTime) dt );
TBool      wxDateTime_IsStrictlyBetween( TSelf(wxDateTime) _obj, TClass(wxDateTime) t1, TClass(wxDateTime) t2 );
TBool      wxDateTime_IsValid( TSelf(wxDateTime) _obj );
TBool      wxDateTime_IsWestEuropeanCountry( int country );
TBool      wxDateTime_IsWorkDay( TSelf(wxDateTime) _obj, int country );
void       wxDateTime_MakeGMT( TSelf(wxDateTime) _obj, int noDST );
void       wxDateTime_MakeTimezone( TSelf(wxDateTime) _obj, int tz, int noDST );
void       wxDateTime_Now( TSelf(wxDateTime) dt );
void*      wxDateTime_ParseDate( TSelf(wxDateTime) _obj, void* date );
void*      wxDateTime_ParseDateTime( TSelf(wxDateTime) _obj, void* datetime );
void*      wxDateTime_ParseFormat( TSelf(wxDateTime) _obj, void* date, void* format, void* dateDef );
void*      wxDateTime_ParseRfc822Date( TSelf(wxDateTime) _obj, void* date );
void*      wxDateTime_ParseTime( TSelf(wxDateTime) _obj, TClass(wxTime) time );
void       wxDateTime_ResetTime( TSelf(wxDateTime) _obj );
void       wxDateTime_Set( TSelf(wxDateTime) _obj, int day, int month, int year, int hour, int minute, int second, int millisec );
void       wxDateTime_SetCountry( int country );
void       wxDateTime_SetDay( TSelf(wxDateTime) _obj, int day );
void       wxDateTime_SetHour( TSelf(wxDateTime) _obj, int hour );
void       wxDateTime_SetMillisecond( TSelf(wxDateTime) _obj, int millisecond );
void       wxDateTime_SetMinute( TSelf(wxDateTime) _obj, int minute );
void       wxDateTime_SetMonth( TSelf(wxDateTime) _obj, int month );
void       wxDateTime_SetSecond( TSelf(wxDateTime) _obj, int second );
void       wxDateTime_SetTime( TSelf(wxDateTime) _obj, int hour, int minute, int second, int millisec );
void       wxDateTime_SetToCurrent( TSelf(wxDateTime) _obj );
void       wxDateTime_SetToLastMonthDay( TSelf(wxDateTime) _obj, int month, int year );
int        wxDateTime_SetToLastWeekDay( TSelf(wxDateTime) _obj, int weekday, int month, int year );
void       wxDateTime_SetToNextWeekDay( TSelf(wxDateTime) _obj, int weekday );
void       wxDateTime_SetToPrevWeekDay( TSelf(wxDateTime) _obj, int weekday );
int        wxDateTime_SetToTheWeek( TSelf(wxDateTime) _obj, int numWeek, int weekday );
int        wxDateTime_SetToWeekDay( TSelf(wxDateTime) _obj, int weekday, int n, int month, int year );
void       wxDateTime_SetToWeekDayInSameWeek( TSelf(wxDateTime) _obj, int weekday );
void       wxDateTime_SetYear( TSelf(wxDateTime) _obj, int year );
void       wxDateTime_SubtractDate( TSelf(wxDateTime) _obj, void* diff, TClassRef(wxDateTime) _ref );
void       wxDateTime_SubtractTime( TSelf(wxDateTime) _obj, void* diff, TClassRef(wxDateTime) _ref );
void       wxDateTime_ToGMT( TSelf(wxDateTime) _obj, int noDST );
void       wxDateTime_ToTimezone( TSelf(wxDateTime) _obj, int tz, int noDST );
void       wxDateTime_Today( TSelf(wxDateTime) dt );
void       wxDateTime_UNow( TSelf(wxDateTime) dt );
void*      wxDateTime_wxDateTime( int hi_long, int lo_long );

/* wxDb */
TClassDef(wxDb)

/* wxDbColDef */
TClassDef(wxDbColDef)

/* wxDbColFor */
TClassDef(wxDbColFor)

/* wxDbColInf */
TClassDef(wxDbColInf)

/* wxDbConnectInf */
TClassDef(wxDbConnectInf)

/* wxDbInf */
TClassDef(wxDbInf)

/* wxDbSqlTypeInfo */
TClassDef(wxDbSqlTypeInfo)

/* wxDbTable */
TClassDef(wxDbTable)

/* wxDbTableInfo */
TClassDef(wxDbTableInfo)

/* wxDebugContext */
TClassDef(wxDebugContext)

/* wxDialUpEvent */
TClassDefExtend(wxDialUpEvent,wxEvent)
TBool      wxDialUpEvent_IsConnectedEvent( TSelf(wxDialUpEvent) _obj );
TBool      wxDialUpEvent_IsOwnEvent( TSelf(wxDialUpEvent) _obj );

/* wxDialUpManager */
TClassDef(wxDialUpManager)
TBool      wxDialUpManager_CancelDialing( TSelf(wxDialUpManager) _obj );
TClass(wxDialUpManager) wxDialUpManager_Create(  );
void       wxDialUpManager_Delete( TSelf(wxDialUpManager) _obj );
int        wxDialUpManager_Dial( TSelf(wxDialUpManager) _obj, void* nameOfISP, void* username, void* password, int async );
void       wxDialUpManager_DisableAutoCheckOnlineStatus( TSelf(wxDialUpManager) _obj );
int        wxDialUpManager_EnableAutoCheckOnlineStatus( TSelf(wxDialUpManager) _obj, int nSeconds );
int        wxDialUpManager_GetISPNames( TSelf(wxDialUpManager) _obj, TClass(wxList) _lst );
int        wxDialUpManager_HangUp( TSelf(wxDialUpManager) _obj );
TBool      wxDialUpManager_IsAlwaysOnline( TSelf(wxDialUpManager) _obj );
TBool      wxDialUpManager_IsDialing( TSelf(wxDialUpManager) _obj );
TBool      wxDialUpManager_IsOk( TSelf(wxDialUpManager) _obj );
TBool      wxDialUpManager_IsOnline( TSelf(wxDialUpManager) _obj );
void       wxDialUpManager_SetConnectCommand( TSelf(wxDialUpManager) _obj, void* commandDial, void* commandHangup );
void       wxDialUpManager_SetOnlineStatus( TSelf(wxDialUpManager) _obj, TBool isOnline );
void       wxDialUpManager_SetWellKnownHost( TSelf(wxDialUpManager) _obj, void* hostname, int portno );

/* wxDialog */
TClassDefExtend(wxDialog,wxWindow)
TClass(wxDialog) wxDialog_Create( TClass(wxWindow) _prt, int _id, TString _txt, TRect(_lft,_top,_wdt,_hgt), int _stl );
void       wxDialog_EndModal( TSelf(wxDialog) _obj, int retCode );
int        wxDialog_GetReturnCode( TSelf(wxDialog) _obj );
TBool      wxDialog_IsModal( TSelf(wxDialog) _obj );
void       wxDialog_SetIcons( TSelf(wxDialog) _obj, void* _icons );
void       wxDialog_SetReturnCode( TSelf(wxDialog) _obj, int returnCode );
int        wxDialog_ShowModal( TSelf(wxDialog) _obj );

/* wxDirDialog */
TClassDefExtend(wxDirDialog,wxDialog)
TClass(wxDirDialog) wxDirDialog_Create( TClass(wxWindow) _prt, TStringVoid _msg, TStringVoid _dir, TPoint(_lft,_top), int _stl );
TStringLen wxDirDialog_GetMessage( TSelf(wxDirDialog) _obj, TStringOutVoid _buf );
TStringLen wxDirDialog_GetPath( TSelf(wxDirDialog) _obj, TStringOutVoid _buf );
int        wxDirDialog_GetStyle( TSelf(wxDirDialog) _obj );
void       wxDirDialog_SetMessage( TSelf(wxDirDialog) _obj, TStringVoid msg );
void       wxDirDialog_SetPath( TSelf(wxDirDialog) _obj, TStringVoid pth );
void       wxDirDialog_SetStyle( TSelf(wxDirDialog) _obj, int style );

/* wxDirTraverser */
TClassDef(wxDirTraverser)

/* wxDllLoader */
TClassDef(wxDllLoader)
/*
void*      wxDllLoader_GetSymbol( int _handle, TStringVoid _name );
int        wxDllLoader_LoadLibrary( TStringVoid _name, void* _success );
void       wxDllLoader_UnloadLibrary( int _handle );
*/

/* wxDocChildFrame */
TClassDefExtend(wxDocChildFrame,wxFrame)

/* wxDocMDIChildFrame */
TClassDefExtend(wxDocMDIChildFrame,wxMDIChildFrame)

/* wxDocMDIParentFrame */
TClassDefExtend(wxDocMDIParentFrame,wxMDIParentFrame)

/* wxDocManager */
TClassDefExtend(wxDocManager,wxEvtHandler)

/* wxDocParentFrame */
TClassDefExtend(wxDocParentFrame,wxFrame)

/* wxDocTemplate */
TClassDefExtend(wxDocTemplate,wxObject)

/* wxDocument */
TClassDefExtend(wxDocument,wxEvtHandler)

/* wxDragImage */
TClassDefExtend(wxDragImage,wxObject)

/* wxDrawControl */
TClassDefExtend(wxDrawControl,wxControl)
TClass(wxDrawControl) wxDrawControl_Create( TClass(wxWindow) _prt, int _id, TRect(_lft,_top,_wdt,_hgt), int _stl );

/* wxDrawWindow */
TClassDefExtend(wxDrawWindow,wxWindow)
TClass(wxDrawWindow) wxDrawWindow_Create( TClass(wxWindow) _prt, int _id, TRect(_lft,_top,_wdt,_hgt), int _stl );

/* wxDropFilesEvent */
TClassDefExtend(wxDropFilesEvent,wxEvent)

/* wxDropSource */
TClassDef(wxDropSource)
TClass(wxDropSource) DropSource_Create( void* data, TClass(wxWindow) win, void* copy, void* move, void* none );
void       DropSource_Delete( TSelf(wxDropSource) _obj );
int        DropSource_DoDragDrop( TSelf(wxDropSource) _obj, int _move );

/* wxDropTarget */
TClassDef(wxDropTarget)
void       wxDropTarget_GetData( TSelf(wxDropTarget) _obj );
void       wxDropTarget_SetDataObject( TSelf(wxDropTarget) _obj, TClass(wxDataObject) _dat );

/* wxDynToolInfo */
TClassDefExtend(wxDynToolInfo,wxToolLayoutItem)
int        wxDynToolInfo_Index( TSelf(wxDynToolInfo) _obj );
void       wxDynToolInfo_RealSize( TSelf(wxDynToolInfo) _obj, TSizeOutVoid(_w,_h) );
void*      wxDynToolInfo_pToolWnd( TSelf(wxDynToolInfo) _obj );

/* wxDynamicLibrary */
TClassDef(wxDynamicLibrary)

/* wxDynamicSashWindow */
TClassDefExtend(wxDynamicSashWindow,wxWindow)
TClass(wxDynamicSashWindow) wxDynamicSashWindow_Create( TClass(wxWindow) parent, int id, TRect(x,y,w,h), int style );
void       wxDynamicSashWindow_Delete( TSelf(wxDynamicSashWindow) _obj );
void*      wxDynamicSashWindow_GetHScrollBar( TSelf(wxDynamicSashWindow) _obj, TClass(wxWindow) child );
void*      wxDynamicSashWindow_GetVScrollBar( TSelf(wxDynamicSashWindow) _obj, TClass(wxWindow) child );

/* wxDynamicToolBar */
TClassDefExtend(wxDynamicToolBar,wxToolBarBase)
void       wxDynamicToolBar_AddSeparator( TSelf(wxDynamicToolBar) _obj, void* pSepartorWnd );
void       wxDynamicToolBar_AddTool( TSelf(wxDynamicToolBar) _obj, int toolIndex, void* pToolWindow, TSize(w,h) );
void*      wxDynamicToolBar_AddToolBitmap( TSelf(wxDynamicToolBar) _obj, int toolIndex, TClass(wxBitmap) bitmap, void* pushedBitmap, int toggle, TPoint(x,y), TClass(wxClientData) clientData, void* helpString1, void* helpString2 );
void       wxDynamicToolBar_AddToolImage( TSelf(wxDynamicToolBar) _obj, int toolIndex, void* imageFileName, int imageFileType, void* labelText, int alignTextRight, TBool isFlat );
void       wxDynamicToolBar_AddToolLabel( TSelf(wxDynamicToolBar) _obj, int toolIndex, void* labelBmp, void* labelText, int alignTextRight, TBool isFlat );
TClass(wxDynamicToolBar) wxDynamicToolBar_Create( TClass(wxWindow) parent, int id, TRect(x,y,w,h), int style, int orientation, int RowsOrColumns );
TClass(wxDynamicToolBar) wxDynamicToolBar_CreateDefault(  );
void*      wxDynamicToolBar_CreateDefaultLayout( TSelf(wxDynamicToolBar) _obj );
int        wxDynamicToolBar_CreateParams( TSelf(wxDynamicToolBar) _obj, TClass(wxWindow) parent, int id, TRect(x,y,w,h), int style, int orientation, int RowsOrColumns );
void*      wxDynamicToolBar_CreateTool( TSelf(wxDynamicToolBar) _obj, int id, void* label, void* bmpNormal, void* bmpDisabled, int kind, TClass(wxClientData) clientData, void* shortHelp, void* longHelp );
void*      wxDynamicToolBar_CreateToolControl( TSelf(wxDynamicToolBar) _obj, TClass(wxControl) control );
void       wxDynamicToolBar_Delete( TSelf(wxDynamicToolBar) _obj );
int        wxDynamicToolBar_DoDeleteTool( TSelf(wxDynamicToolBar) _obj, int pos, void* tool );
void       wxDynamicToolBar_DoEnableTool( TSelf(wxDynamicToolBar) _obj, void* tool, TBool enable );
int        wxDynamicToolBar_DoInsertTool( TSelf(wxDynamicToolBar) _obj, int pos, void* tool );
void       wxDynamicToolBar_DoSetToggle( TSelf(wxDynamicToolBar) _obj, void* tool, int toggle );
void       wxDynamicToolBar_DoToggleTool( TSelf(wxDynamicToolBar) _obj, void* tool, int toggle );
void       wxDynamicToolBar_DrawSeparator( TSelf(wxDynamicToolBar) _obj, void* info, TClass(wxDC) dc );
void       wxDynamicToolBar_EnableTool( TSelf(wxDynamicToolBar) _obj, int toolIndex, TBool enable );
void*      wxDynamicToolBar_FindToolForPosition( TSelf(wxDynamicToolBar) _obj, TPoint(x,y) );
void       wxDynamicToolBar_GetPreferredDim( TSelf(wxDynamicToolBar) _obj, int gw, int gh, void* pw, void* ph );
void*      wxDynamicToolBar_GetToolInfo( TSelf(wxDynamicToolBar) _obj, int toolIndex );
int        wxDynamicToolBar_Layout( TSelf(wxDynamicToolBar) _obj );
void       wxDynamicToolBar_RemoveTool( TSelf(wxDynamicToolBar) _obj, int toolIndex );
void       wxDynamicToolBar_SetLayout( TSelf(wxDynamicToolBar) _obj, void* pLayout );

/* wxEditableListBox */
TClassDefExtend(wxEditableListBox,wxPanel)
TClass(wxEditableListBox) wxEditableListBox_Create( TClass(wxWindow) parent, int id, TStringVoid label, TRect(x,y,w,h), int style );
void*      wxEditableListBox_GetDelButton( TSelf(wxEditableListBox) _obj );
void*      wxEditableListBox_GetDownButton( TSelf(wxEditableListBox) _obj );
void*      wxEditableListBox_GetEditButton( TSelf(wxEditableListBox) _obj );
TClass(wxListCtrl) wxEditableListBox_GetListCtrl( TSelf(wxEditableListBox) _obj );
void*      wxEditableListBox_GetNewButton( TSelf(wxEditableListBox) _obj );
TArrayLen  wxEditableListBox_GetStrings( TSelf(wxEditableListBox) _obj, TArrayStringOutVoid _ref );
void*      wxEditableListBox_GetUpButton( TSelf(wxEditableListBox) _obj );
void       wxEditableListBox_SetStrings( TSelf(wxEditableListBox) _obj, void* strings, int _n );

/* wxEncodingConverter */
TClassDefExtend(wxEncodingConverter,wxObject)
void       wxEncodingConverter_Convert( TSelf(wxEncodingConverter) _obj, void* input, void* output );
TClass(wxEncodingConverter) wxEncodingConverter_Create(  );
void       wxEncodingConverter_Delete( TSelf(wxEncodingConverter) _obj );
int        wxEncodingConverter_GetAllEquivalents( TSelf(wxEncodingConverter) _obj, int enc, TClass(wxList) _lst );
int        wxEncodingConverter_GetPlatformEquivalents( TSelf(wxEncodingConverter) _obj, int enc, int platform, TClass(wxList) _lst );
int        wxEncodingConverter_Init( TSelf(wxEncodingConverter) _obj, int input_enc, int output_enc, int method );

/* wxEraseEvent */
TClassDefExtend(wxEraseEvent,wxEvent)
void       wxEraseEvent_CopyObject( TSelf(wxEraseEvent) _obj, void* obj );
TClass(wxDC) wxEraseEvent_GetDC( TSelf(wxEraseEvent) _obj );

/* wxEvent */
TClassDefExtend(wxEvent,wxObject)
void       wxEvent_CopyObject( TSelf(wxEvent) _obj, void* object_dest );
TClass(wxObject) wxEvent_GetEventObject( TSelf(wxEvent) _obj );
int        wxEvent_GetEventType( TSelf(wxEvent) _obj );
int        wxEvent_GetId( TSelf(wxEvent) _obj );
TBool      wxEvent_GetSkipped( TSelf(wxEvent) _obj );
int        wxEvent_GetTimestamp( TSelf(wxEvent) _obj );
TBool      wxEvent_IsCommandEvent( TSelf(wxEvent) _obj );
int        wxEvent_NewEventType(  );
void       wxEvent_SetEventObject( TSelf(wxEvent) _obj, TClass(wxObject) obj );
void       wxEvent_SetEventType( TSelf(wxEvent) _obj, int typ );
void       wxEvent_SetId( TSelf(wxEvent) _obj, int Id );
void       wxEvent_SetTimestamp( TSelf(wxEvent) _obj, int ts );
void       wxEvent_Skip( TSelf(wxEvent) _obj );

/* wxEvtHandler */
TClassDefExtend(wxEvtHandler,wxObject)
void       wxEvtHandler_AddPendingEvent( TSelf(wxEvtHandler) _obj, TClass(wxEvent) event );
int        wxEvtHandler_Connect( TSelf(wxEvtHandler) _obj, int first, int last, int type, void* data );
TClass(wxEvtHandler) wxEvtHandler_Create(  );
void       wxEvtHandler_Delete( TSelf(wxEvtHandler) _obj );
int        wxEvtHandler_Disconnect( TSelf(wxEvtHandler) _obj, int first, int last, int type, int id );
TBool      wxEvtHandler_GetEvtHandlerEnabled( TSelf(wxEvtHandler) _obj );
TClass(wxEvtHandler) wxEvtHandler_GetNextHandler( TSelf(wxEvtHandler) _obj );
TClass(wxEvtHandler) wxEvtHandler_GetPreviousHandler( TSelf(wxEvtHandler) _obj );
int        wxEvtHandler_ProcessEvent( TSelf(wxEvtHandler) _obj, TClass(wxEvent) event );
void       wxEvtHandler_ProcessPendingEvents( TSelf(wxEvtHandler) _obj );
void       wxEvtHandler_SetEvtHandlerEnabled( TSelf(wxEvtHandler) _obj, TBool enabled );
void       wxEvtHandler_SetNextHandler( TSelf(wxEvtHandler) _obj, TClass(wxEvtHandler) handler );
void       wxEvtHandler_SetPreviousHandler( TSelf(wxEvtHandler) _obj, TClass(wxEvtHandler) handler );

/* wxExpr */
TClassDef(wxExpr)

/* wxExprDatabase */
TClassDefExtend(wxExprDatabase,wxList)

/* wxFFile */
TClassDef(wxFFile)

/* wxFFileInputStream */
TClassDefExtend(wxFFileInputStream,wxInputStream)

/* wxFFileOutputStream */
TClassDefExtend(wxFFileOutputStream,wxOutputStream)

/* wxFSFile */
TClassDefExtend(wxFSFile,wxObject)

/* wxFTP */
TClassDefExtend(wxFTP,wxProtocol)

/* wxFileDataObject */
TClassDefExtend(wxFileDataObject,wxDataObjectSimple)
void       FileDataObject_AddFile( TSelf(wxFileDataObject) _obj, TStringVoid _fle );
TClass(wxFileDataObject) FileDataObject_Create( TClass(wxList) _lst, int _cnt );
void       FileDataObject_Delete( TSelf(wxFileDataObject) _obj );
int        FileDataObject_GetFilenames( TSelf(wxFileDataObject) _obj, TClass(wxList) _lst );

/* wxFileDialog */
TClassDefExtend(wxFileDialog,wxDialog)
TClass(wxFileDialog) wxFileDialog_Create( TClass(wxWindow) _prt, TStringVoid _msg, TStringVoid _dir, TStringVoid _fle, TStringVoid _wcd, TPoint(_lft,_top), int _stl );
TStringLen wxFileDialog_GetDirectory( TSelf(wxFileDialog) _obj, TStringOutVoid _buf );
TStringLen wxFileDialog_GetFilename( TSelf(wxFileDialog) _obj, TStringOutVoid _buf );
TArrayLen  wxFileDialog_GetFilenames( TSelf(wxFileDialog) _obj, TArrayStringOutVoid paths );
int        wxFileDialog_GetFilterIndex( TSelf(wxFileDialog) _obj );
TStringLen wxFileDialog_GetMessage( TSelf(wxFileDialog) _obj, TStringOutVoid _buf );
TStringLen wxFileDialog_GetPath( TSelf(wxFileDialog) _obj, TStringOutVoid _buf );
TArrayLen  wxFileDialog_GetPaths( TSelf(wxFileDialog) _obj, TArrayStringOutVoid paths );
int        wxFileDialog_GetStyle( TSelf(wxFileDialog) _obj );
TStringLen wxFileDialog_GetWildcard( TSelf(wxFileDialog) _obj, TStringOutVoid _buf );
void       wxFileDialog_SetDirectory( TSelf(wxFileDialog) _obj, TStringVoid dir );
void       wxFileDialog_SetFilename( TSelf(wxFileDialog) _obj, TStringVoid name );
void       wxFileDialog_SetFilterIndex( TSelf(wxFileDialog) _obj, int filterIndex );
void       wxFileDialog_SetMessage( TSelf(wxFileDialog) _obj, TStringVoid message );
void       wxFileDialog_SetPath( TSelf(wxFileDialog) _obj, TStringVoid path );
void       wxFileDialog_SetStyle( TSelf(wxFileDialog) _obj, int style );
void       wxFileDialog_SetWildcard( TSelf(wxFileDialog) _obj, TStringVoid wildCard );

/* wxFileDropTarget */
TClassDefExtend(wxFileDropTarget,wxDropTarget)

/* wxFileHistory */
TClassDefExtend(wxFileHistory,wxObject)
void       wxFileHistory_AddFileToHistory( TSelf(wxFileHistory) _obj, TStringVoid file );
void       wxFileHistory_AddFilesToMenu( TSelf(wxFileHistory) _obj, TClass(wxMenu) menu );
TClass(wxFileHistory) wxFileHistory_Create( int maxFiles );
void       wxFileHistory_Delete( TSelf(wxFileHistory) _obj );
int        wxFileHistory_GetCount( TSelf(wxFileHistory) _obj );
TStringLen wxFileHistory_GetHistoryFile( TSelf(wxFileHistory) _obj, int i, TStringOutVoid _buf );
int        wxFileHistory_GetMaxFiles( TSelf(wxFileHistory) _obj );
TArrayLen  wxFileHistory_GetMenus( TSelf(wxFileHistory) _obj, TArrayObjectOutVoid(wxMenu) _ref );
int        wxFileHistory_GetNoHistoryFiles( TSelf(wxFileHistory) _obj );
void       wxFileHistory_Load( TSelf(wxFileHistory) _obj, TClass(wxConfigBase) config );
void       wxFileHistory_RemoveFileFromHistory( TSelf(wxFileHistory) _obj, int i );
void       wxFileHistory_RemoveMenu( TSelf(wxFileHistory) _obj, TClass(wxMenu) menu );
void       wxFileHistory_Save( TSelf(wxFileHistory) _obj, TClass(wxConfigBase) config );
void       wxFileHistory_UseMenu( TSelf(wxFileHistory) _obj, TClass(wxMenu) menu );

/* wxFileInputStream */
TClassDefExtend(wxFileInputStream,wxInputStream)

/* wxFileName */
TClassDef(wxFileName)

/* wxFileOutputStream */
TClassDefExtend(wxFileOutputStream,wxOutputStream)

/* wxFileSystem */
TClassDefExtend(wxFileSystem,wxObject)

/* wxFileSystemHandler */
TClassDefExtend(wxFileSystemHandler,wxObject)

/* wxFileType */
TClassDef(wxFileType)
void       wxFileType_Delete( TSelf(wxFileType) _obj );
TStringLen wxFileType_ExpandCommand( TSelf(wxFileType) _obj, void* _cmd, void* _params, TStringOutVoid _buf );
TStringLen wxFileType_GetDescription( TSelf(wxFileType) _obj, TStringOutVoid _buf );
int        wxFileType_GetExtensions( TSelf(wxFileType) _obj, TClass(wxList) _lst );
int        wxFileType_GetIcon( TSelf(wxFileType) _obj, TClass(wxIcon) icon );
TStringLen wxFileType_GetMimeType( TSelf(wxFileType) _obj, TStringOutVoid _buf );
int        wxFileType_GetMimeTypes( TSelf(wxFileType) _obj, TClass(wxList) _lst );
int        wxFileType_GetOpenCommand( TSelf(wxFileType) _obj, void* _buf, void* _params );
int        wxFileType_GetPrintCommand( TSelf(wxFileType) _obj, void* _buf, void* _params );

/* wxFilterInputStream */
TClassDefExtend(wxFilterInputStream,wxInputStream)

/* wxFilterOutputStream */
TClassDefExtend(wxFilterOutputStream,wxOutputStream)

/* wxFindDialogEvent */
TClassDefExtend(wxFindDialogEvent,wxCommandEvent)
int        wxFindDialogEvent_GetFindString( TSelf(wxFindDialogEvent) _obj, void* _ref );
int        wxFindDialogEvent_GetFlags( TSelf(wxFindDialogEvent) _obj );
int        wxFindDialogEvent_GetReplaceString( TSelf(wxFindDialogEvent) _obj, void* _ref );

/* wxFindReplaceData */
TClassDefExtend(wxFindReplaceData,wxObject)
TClass(wxFindReplaceData) wxFindReplaceData_Create( int flags );
TClass(wxFindReplaceData) wxFindReplaceData_CreateDefault(  );
void       wxFindReplaceData_Delete( TSelf(wxFindReplaceData) _obj );
TStringLen wxFindReplaceData_GetFindString( TSelf(wxFindReplaceData) _obj, TStringOutVoid _ref );
int        wxFindReplaceData_GetFlags( TSelf(wxFindReplaceData) _obj );
TStringLen wxFindReplaceData_GetReplaceString( TSelf(wxFindReplaceData) _obj, TStringOutVoid _ref );
void       wxFindReplaceData_SetFindString( TSelf(wxFindReplaceData) _obj, TStringVoid str );
void       wxFindReplaceData_SetFlags( TSelf(wxFindReplaceData) _obj, int flags );
void       wxFindReplaceData_SetReplaceString( TSelf(wxFindReplaceData) _obj, TStringVoid str );

/* wxFindReplaceDialog */
TClassDefExtend(wxFindReplaceDialog,wxDialog)
TClass(wxFindReplaceDialog) wxFindReplaceDialog_Create( TClass(wxWindow) parent, TClass(wxFindReplaceData) data, TStringVoid title, int style );
TClass(wxFindReplaceData)   wxFindReplaceDialog_GetData( TSelf(wxFindReplaceDialog) _obj );
void       wxFindReplaceDialog_SetData( TSelf(wxFindReplaceDialog) _obj, TClass(wxFindReplaceData) data );

/* wxFlexGridSizer */
TClassDefExtend(wxFlexGridSizer,wxGridSizer)
void       wxFlexGridSizer_AddGrowableCol( TSelf(wxFlexGridSizer) _obj, size_t idx );
void       wxFlexGridSizer_AddGrowableRow( TSelf(wxFlexGridSizer) _obj, size_t idx );
void       wxFlexGridSizer_CalcMin( TSelf(wxFlexGridSizer) _obj, TSizeOutVoid(_w,_h) );
TClass(wxFlexGridSizer) wxFlexGridSizer_Create( int rows, int cols, int vgap, int hgap );
void       wxFlexGridSizer_RecalcSizes( TSelf(wxFlexGridSizer) _obj );
void       wxFlexGridSizer_RemoveGrowableCol( TSelf(wxFlexGridSizer) _obj, size_t idx );
void       wxFlexGridSizer_RemoveGrowableRow( TSelf(wxFlexGridSizer) _obj, size_t idx );

/* wxFocusEvent */
TClassDefExtend(wxFocusEvent,wxEvent)

/* wxFont */
TClassDefExtend(wxFont,wxGDIObject)
TClass(wxFont) wxFont_Create( int pointSize, int family, int style, int weight, int underlined, TString face, int enc );
TClass(wxFont) wxFont_CreateDefault(  );
void       wxFont_Delete( TSelf(wxFont) _obj );
int        wxFont_GetDefaultEncoding( TSelf(wxFont) _obj );
int        wxFont_GetEncoding( TSelf(wxFont) _obj );
TStringLen wxFont_GetFaceName( TSelf(wxFont) _obj, TStringOutVoid _buf );
int        wxFont_GetFamily( TSelf(wxFont) _obj );
TStringLen wxFont_GetFamilyString( TSelf(wxFont) _obj, TStringOutVoid _buf );
int        wxFont_GetPointSize( TSelf(wxFont) _obj );
int        wxFont_GetStyle( TSelf(wxFont) _obj );
TStringLen wxFont_GetStyleString( TSelf(wxFont) _obj, TStringOutVoid _buf );
int        wxFont_GetUnderlined( TSelf(wxFont) _obj );
int        wxFont_GetWeight( TSelf(wxFont) _obj );
TStringLen wxFont_GetWeightString( TSelf(wxFont) _obj, TStringOutVoid _buf );
TBool      wxFont_Ok( TSelf(wxFont) _obj );
void       wxFont_SetDefaultEncoding( TSelf(wxFont) _obj, int encoding );
void       wxFont_SetEncoding( TSelf(wxFont) _obj, int encoding );
void       wxFont_SetFaceName( TSelf(wxFont) _obj, TString faceName );
void       wxFont_SetFamily( TSelf(wxFont) _obj, int family );
void       wxFont_SetPointSize( TSelf(wxFont) _obj, int pointSize );
void       wxFont_SetStyle( TSelf(wxFont) _obj, int style );
void       wxFont_SetUnderlined( TSelf(wxFont) _obj, int underlined );
void       wxFont_SetWeight( TSelf(wxFont) _obj, int weight );

/* wxFontData */
TClassDefExtend(wxFontData,wxObject)
TClass(wxFontData) wxFontData_Create(  );
void       wxFontData_Delete( TSelf(wxFontData) _obj );
void       wxFontData_EnableEffects( TSelf(wxFontData) _obj, TBool flag );
TBool      wxFontData_GetAllowSymbols( TSelf(wxFontData) _obj );
void       wxFontData_GetChosenFont( TSelf(wxFontData) _obj, TClassRef(wxFont) ref );
void       wxFontData_GetColour( TSelf(wxFontData) _obj, TClassRef(wxColour) _ref );
TBool      wxFontData_GetEnableEffects( TSelf(wxFontData) _obj );
int        wxFontData_GetEncoding( TSelf(wxFontData) _obj );
void       wxFontData_GetInitialFont( TSelf(wxFontData) _obj, TClassRef(wxFont) ref );
int        wxFontData_GetShowHelp( TSelf(wxFontData) _obj );
void       wxFontData_SetAllowSymbols( TSelf(wxFontData) _obj, TBool flag );
void       wxFontData_SetChosenFont( TSelf(wxFontData) _obj, TClass(wxFont) font );
void       wxFontData_SetColour( TSelf(wxFontData) _obj, TClass(wxColour) colour );
void       wxFontData_SetEncoding( TSelf(wxFontData) _obj, int encoding );
void       wxFontData_SetInitialFont( TSelf(wxFontData) _obj, TClass(wxFont) font );
void       wxFontData_SetRange( TSelf(wxFontData) _obj, int minRange, int maxRange );
void       wxFontData_SetShowHelp( TSelf(wxFontData) _obj, TBool flag );

/* wxFontDialog */
TClassDefExtend(wxFontDialog,wxDialog)
TClass(wxFontDialog) wxFontDialog_Create( TClass(wxWindow) _prt, TClass(wxFontData) fnt );
void       wxFontDialog_GetFontData( TSelf(wxFontDialog) _obj, TClassRef(wxFontData) _ref );

/* wxFontEnumerator */
TClassDef(wxFontEnumerator)
TClass(wxFontEnumerator) wxFontEnumerator_Create( void* _obj, void* _fnc );
void       wxFontEnumerator_Delete( TSelf(wxFontEnumerator) _obj );
int        wxFontEnumerator_EnumerateEncodings( TSelf(wxFontEnumerator) _obj, TStringVoid facename );
int        wxFontEnumerator_EnumerateFacenames( TSelf(wxFontEnumerator) _obj, int encoding, int fixedWidthOnly );

/* wxFontList */
TClassDefExtend(wxFontList,wxList)

/* wxFontMapper */
TClassDef(wxFontMapper)
TClass(wxFontMapper) wxFontMapper_Create(  );
TStringLen wxFontMapper_GetAltForEncoding( TSelf(wxFontMapper) _obj, int encoding, void* alt_encoding, TStringOutVoid _buf );
TStringLen wxFontMapper_IsEncodingAvailable( TSelf(wxFontMapper) _obj, int encoding, TStringOutVoid _buf );

/* wxFrame */
TClassDefExtend(wxFrame,wxWindow)
TClass(wxFrame) wxFrame_Create( TClass(wxWindow) _prt, int _id, TString _txt, TRect(_lft,_top,_wdt,_hgt), int _stl );
TClass(wxStatusBar) wxFrame_CreateStatusBar( TSelf(wxFrame) _obj, int number, int style );
TClass(wxToolBar)   wxFrame_CreateToolBar( TSelf(wxFrame) _obj, long style );
int        wxFrame_GetClientAreaOrigin_left( TSelf(wxFrame) _obj );
int        wxFrame_GetClientAreaOrigin_top( TSelf(wxFrame) _obj );
TClass(wxIcon) wxFrame_GetIcon( TSelf(wxFrame) _obj );
TClass(wxMenuBar) wxFrame_GetMenuBar( TSelf(wxFrame) _obj );
TClass(wxStatusBar) wxFrame_GetStatusBar( TSelf(wxFrame) _obj );
TClass(wxToolBar) wxFrame_GetToolBar( TSelf(wxFrame) _obj );
void       wxFrame_Iconize( TSelf(wxFrame) _obj );
TBool      wxFrame_IsIconized( TSelf(wxFrame) _obj );
TBool      wxFrame_IsMaximized( TSelf(wxFrame) _obj );
void       wxFrame_Maximize( TSelf(wxFrame) _obj );
void       wxFrame_Restore( TSelf(wxFrame) _obj );
void       wxFrame_SetIcon( TSelf(wxFrame) _obj, TClass(wxIcon) _icon );
void       wxFrame_SetIcons( TSelf(wxFrame) _obj, void* _icons );
void       wxFrame_SetMenuBar( TSelf(wxFrame) _obj, TClass(wxMenuBar) menubar );
void       wxFrame_SetStatusBar( TSelf(wxFrame) _obj, TClass(wxStatusBar) statBar );
void       wxFrame_SetStatusText( TSelf(wxFrame) _obj, TString _txt, int _number );
void       wxFrame_SetStatusWidths( TSelf(wxFrame) _obj, int _n, void* _widths_field );
void       wxFrame_SetToolBar( TSelf(wxFrame) _obj, TClass(wxToolBar) _toolbar );

/* wxFrameLayout */
TClassDefExtend(wxFrameLayout,wxEvtHandler)
void       wxFrameLayout_Activate( TSelf(wxFrameLayout) _obj );
void       wxFrameLayout_AddBar( TSelf(wxFrameLayout) _obj, void* pBarWnd, void* dimInfo, int alignment, int rowNo, int columnPos, TStringVoid name, int spyEvents, int state );
void       wxFrameLayout_AddPlugin( TSelf(wxFrameLayout) _obj, void* pPlInfo, int paneMask );
void       wxFrameLayout_AddPluginBefore( TSelf(wxFrameLayout) _obj, void* pNextPlInfo, void* pPlInfo, int paneMask );
void       wxFrameLayout_ApplyBarProperties( TSelf(wxFrameLayout) _obj, void* pBar );
void       wxFrameLayout_CaptureEventsForPane( TSelf(wxFrameLayout) _obj, void* toPane );
void       wxFrameLayout_CaptureEventsForPlugin( TSelf(wxFrameLayout) _obj, void* pPlugin );
TClass(wxFrameLayout) wxFrameLayout_Create( void* pParentFrame, void* pFrameClient, int activateNow );
void       wxFrameLayout_Deactivate( TSelf(wxFrameLayout) _obj );
void       wxFrameLayout_Delete( TSelf(wxFrameLayout) _obj );
void       wxFrameLayout_DestroyBarWindows( TSelf(wxFrameLayout) _obj );
void       wxFrameLayout_EnableFloating( TSelf(wxFrameLayout) _obj, TBool enable );
void*      wxFrameLayout_FindBarByName( TSelf(wxFrameLayout) _obj, TStringVoid name );
void*      wxFrameLayout_FindBarByWindow( TSelf(wxFrameLayout) _obj, void* pWnd );
void*      wxFrameLayout_FindPlugin( TSelf(wxFrameLayout) _obj, void* pPlInfo );
void       wxFrameLayout_FirePluginEvent( TSelf(wxFrameLayout) _obj, TClass(wxEvent) event );
int        wxFrameLayout_GetBars( TSelf(wxFrameLayout) _obj, void* _ref );
int        wxFrameLayout_GetClientHeight( TSelf(wxFrameLayout) _obj );
void       wxFrameLayout_GetClientRect( TSelf(wxFrameLayout) _obj, TRectOutVoid(_x,_y,_w,_h) );
int        wxFrameLayout_GetClientWidth( TSelf(wxFrameLayout) _obj );
void*      wxFrameLayout_GetFrameClient( TSelf(wxFrameLayout) _obj );
void*      wxFrameLayout_GetPane( TSelf(wxFrameLayout) _obj, int alignment );
void       wxFrameLayout_GetPaneProperties( TSelf(wxFrameLayout) _obj, void* props, int alignment );
void*      wxFrameLayout_GetParentFrame( TSelf(wxFrameLayout) _obj );
void*      wxFrameLayout_GetTopPlugin( TSelf(wxFrameLayout) _obj );
void*      wxFrameLayout_GetUpdatesManager( TSelf(wxFrameLayout) _obj );
TBool      wxFrameLayout_HasTopPlugin( TSelf(wxFrameLayout) _obj );
void       wxFrameLayout_HideBarWindows( TSelf(wxFrameLayout) _obj );
void       wxFrameLayout_InverseVisibility( TSelf(wxFrameLayout) _obj, void* pBar );
void       wxFrameLayout_OnLButtonDown( TSelf(wxFrameLayout) _obj, TClass(wxEvent) event );
void       wxFrameLayout_OnLButtonUp( TSelf(wxFrameLayout) _obj, TClass(wxEvent) event );
void       wxFrameLayout_OnLDblClick( TSelf(wxFrameLayout) _obj, TClass(wxEvent) event );
void       wxFrameLayout_OnMouseMove( TSelf(wxFrameLayout) _obj, TClass(wxEvent) event );
void       wxFrameLayout_OnRButtonDown( TSelf(wxFrameLayout) _obj, TClass(wxEvent) event );
void       wxFrameLayout_OnRButtonUp( TSelf(wxFrameLayout) _obj, TClass(wxEvent) event );
void       wxFrameLayout_OnSize( TSelf(wxFrameLayout) _obj, TClass(wxEvent) event );
void       wxFrameLayout_PopAllPlugins( TSelf(wxFrameLayout) _obj );
void       wxFrameLayout_PopPlugin( TSelf(wxFrameLayout) _obj );
void       wxFrameLayout_PushDefaultPlugins( TSelf(wxFrameLayout) _obj );
void       wxFrameLayout_PushPlugin( TSelf(wxFrameLayout) _obj, void* pPugin );
void       wxFrameLayout_RecalcLayout( TSelf(wxFrameLayout) _obj, int repositionBarsNow );
int        wxFrameLayout_RedockBar( TSelf(wxFrameLayout) _obj, void* pBar, TRect(x,y,w,h), void* pToPane, int updateNow );
void       wxFrameLayout_RefreshNow( TSelf(wxFrameLayout) _obj, int recalcLayout );
void       wxFrameLayout_ReleaseEventsFromPane( TSelf(wxFrameLayout) _obj, void* fromPane );
void       wxFrameLayout_ReleaseEventsFromPlugin( TSelf(wxFrameLayout) _obj, void* pPlugin );
void       wxFrameLayout_RemoveBar( TSelf(wxFrameLayout) _obj, void* pBar );
void       wxFrameLayout_RemovePlugin( TSelf(wxFrameLayout) _obj, void* pPlInfo );
void       wxFrameLayout_SetBarState( TSelf(wxFrameLayout) _obj, void* pBar, int newStatem, int updateNow );
void       wxFrameLayout_SetFrameClient( TSelf(wxFrameLayout) _obj, void* pFrameClient );
void       wxFrameLayout_SetMargins( TSelf(wxFrameLayout) _obj, int top, int bottom, int left, int right, int paneMask );
void       wxFrameLayout_SetPaneBackground( TSelf(wxFrameLayout) _obj, TClass(wxColour) colour );
void       wxFrameLayout_SetPaneProperties( TSelf(wxFrameLayout) _obj, void* props, int paneMask );
void       wxFrameLayout_SetTopPlugin( TSelf(wxFrameLayout) _obj, void* pPlugin );
void       wxFrameLayout_SetUpdatesManager( TSelf(wxFrameLayout) _obj, void* pUMgr );

/* wxGDIObject */
TClassDefExtend(wxGDIObject,wxObject)

/* wxGLCanvas */
TClassDefExtend(wxGLCanvas,wxScrolledWindow)

/* wxGauge */
TClassDefExtend(wxGauge,wxControl)
TClass(wxGauge) wxGauge_Create( TClass(wxWindow) _prt, int _id, int _rng, TRect(_lft,_top,_wdt,_hgt), int _stl );
int        wxGauge_GetBezelFace( TSelf(wxGauge) _obj );
int        wxGauge_GetRange( TSelf(wxGauge) _obj );
int        wxGauge_GetShadowWidth( TSelf(wxGauge) _obj );
int        wxGauge_GetValue( TSelf(wxGauge) _obj );
void       wxGauge_SetBezelFace( TSelf(wxGauge) _obj, int w );
void       wxGauge_SetRange( TSelf(wxGauge) _obj, int r );
void       wxGauge_SetShadowWidth( TSelf(wxGauge) _obj, int w );
void       wxGauge_SetValue( TSelf(wxGauge) _obj, int pos );

/* wxGenericDirCtrl */
TClassDefExtend(wxGenericDirCtrl,wxControl)

/* wxGenericValidator */
TClassDefExtend(wxGenericValidator,wxValidator)

/* wxGrid */
TClassDefExtend(wxGrid,wxScrolledWindow)
TBoolInt   wxGrid_AppendCols( TSelf(wxGrid) _obj, int numCols, TBoolInt updateLabels );
TBoolInt   wxGrid_AppendRows( TSelf(wxGrid) _obj, int numRows, TBoolInt updateLabels );
void       wxGrid_AutoSize( TSelf(wxGrid) _obj );
void       wxGrid_AutoSizeColumn( TSelf(wxGrid) _obj, int col, TBoolInt setAsMin );
void       wxGrid_AutoSizeColumns( TSelf(wxGrid) _obj, TBoolInt setAsMin );
void       wxGrid_AutoSizeRow( TSelf(wxGrid) _obj, int row, TBoolInt setAsMin );
void       wxGrid_AutoSizeRows( TSelf(wxGrid) _obj, TBoolInt setAsMin );
void       wxGrid_BeginBatch( TSelf(wxGrid) _obj );
void       wxGrid_BlockToDeviceRect( TSelf(wxGrid) _obj, int top, int left, int bottom, int right, TRectOut(_x,_y,_w,_h) );
void       wxGrid_CalcCellsExposed( TSelf(wxGrid) _obj, TClass(wxRegion) reg );
void       wxGrid_CalcColLabelsExposed( TSelf(wxGrid) _obj, TClass(wxRegion) reg );
void       wxGrid_CalcRowLabelsExposed( TSelf(wxGrid) _obj, TClass(wxRegion) reg );
TBool      wxGrid_CanDragColSize( TSelf(wxGrid) _obj );
TBool      wxGrid_CanDragGridSize( TSelf(wxGrid) _obj );
TBool      wxGrid_CanDragRowSize( TSelf(wxGrid) _obj );
TBool      wxGrid_CanEnableCellControl( TSelf(wxGrid) _obj );
void       wxGrid_CellToRect( TSelf(wxGrid) _obj, int row, int col, TRectOut(_x,_y,_w,_h) );
void       wxGrid_ClearGrid( TSelf(wxGrid) _obj );
void       wxGrid_ClearSelection( TSelf(wxGrid) _obj );
TClass(wxGrid) wxGrid_Create( TClass(wxWindow) _prt, int _id, TRect(_lft,_top,_wdt,_hgt), int _stl );
void       wxGrid_CreateGrid( TSelf(wxGrid) _obj, int rows, int cols, int selmode );
TBoolInt   wxGrid_DeleteCols( TSelf(wxGrid) _obj, int pos, int numCols, TBoolInt updateLabels );
TBoolInt   wxGrid_DeleteRows( TSelf(wxGrid) _obj, int pos, int numRows, TBoolInt updateLabels );
void       wxGrid_DisableCellEditControl( TSelf(wxGrid) _obj );
void       wxGrid_DisableDragColSize( TSelf(wxGrid) _obj );
void       wxGrid_DisableDragGridSize( TSelf(wxGrid) _obj );
void       wxGrid_DisableDragRowSize( TSelf(wxGrid) _obj );
void       wxGrid_DoEndDragResizeCol( TSelf(wxGrid) _obj );
void       wxGrid_DoEndDragResizeRow( TSelf(wxGrid) _obj );
void       wxGrid_DrawAllGridLines( TSelf(wxGrid) _obj, TClass(wxDC) dc, TClass(wxRegion) reg );
void       wxGrid_DrawCell( TSelf(wxGrid) _obj, TClass(wxDC) dc, int _row, int _col );
void       wxGrid_DrawCellBorder( TSelf(wxGrid) _obj, TClass(wxDC) dc, int _row, int _col );
void       wxGrid_DrawCellHighlight( TSelf(wxGrid) _obj, TClass(wxDC) dc, TClass(wxGridCellAttr) attr );
void       wxGrid_DrawColLabel( TSelf(wxGrid) _obj, TClass(wxDC) dc, int col );
void       wxGrid_DrawColLabels( TSelf(wxGrid) _obj, TClass(wxDC) dc );
void       wxGrid_DrawGridCellArea( TSelf(wxGrid) _obj, TClass(wxDC) dc );
void       wxGrid_DrawGridSpace( TSelf(wxGrid) _obj, TClass(wxDC) dc );
void       wxGrid_DrawHighlight( TSelf(wxGrid) _obj, TClass(wxDC) dc );
void       wxGrid_DrawRowLabel( TSelf(wxGrid) _obj, TClass(wxDC) dc, int row );
void       wxGrid_DrawRowLabels( TSelf(wxGrid) _obj, TClass(wxDC) dc );
void       wxGrid_DrawTextRectangle( TSelf(wxGrid) _obj, TClass(wxDC) dc, TString txt, TRect(x,y,w,h), int horizontalAlignment, int verticalAlignment );
void       wxGrid_EnableCellEditControl( TSelf(wxGrid) _obj, TBool enable );
void       wxGrid_EnableDragColSize( TSelf(wxGrid) _obj, TBool enable );
void       wxGrid_EnableDragGridSize( TSelf(wxGrid) _obj, TBool enable );
void       wxGrid_EnableDragRowSize( TSelf(wxGrid) _obj, TBool enable );
void       wxGrid_EnableEditing( TSelf(wxGrid) _obj, TBoolInt edit );
void       wxGrid_EnableGridLines( TSelf(wxGrid) _obj, TBool enable );
void       wxGrid_EndBatch( TSelf(wxGrid) _obj );
int        wxGrid_GetBatchCount( TSelf(wxGrid) _obj );
void       wxGrid_GetCellAlignment( TSelf(wxGrid) _obj, int row, int col, TSizeOut(horiz, vert) );
void       wxGrid_GetCellBackgroundColour( TSelf(wxGrid) _obj, int row, int col, TClass(wxColour) colour );
TClass(wxGridCellEditor) wxGrid_GetCellEditor( TSelf(wxGrid) _obj, int row, int col );
void       wxGrid_GetCellFont( TSelf(wxGrid) _obj, int row, int col, TClass(wxFont) font );
void       wxGrid_GetCellHighlightColour( TSelf(wxGrid) _obj, TClassRef(wxColour) _ref );
TClass(wxGridCellRenderer) wxGrid_GetCellRenderer( TSelf(wxGrid) _obj, int row, int col );
void       wxGrid_GetCellTextColour( TSelf(wxGrid) _obj, int row, int col, TClass(wxColour) colour );
TStringLen wxGrid_GetCellValue( TSelf(wxGrid) _obj, int row, int col, TStringOutVoid _buf );
void       wxGrid_GetColLabelAlignment( TSelf(wxGrid) _obj, TSizeOut(horiz, vert)  );
int        wxGrid_GetColLabelSize( TSelf(wxGrid) _obj );
TStringLen wxGrid_GetColLabelValue( TSelf(wxGrid) _obj, int col, TStringOutVoid _buf );
int        wxGrid_GetColSize( TSelf(wxGrid) _obj, int col );
void       wxGrid_GetDefaultCellAlignment( TSelf(wxGrid) _obj, TSizeOut(horiz, vert)  );
void       wxGrid_GetDefaultCellBackgroundColour( TSelf(wxGrid) _obj, TClassRef(wxColour) _ref );
void       wxGrid_GetDefaultCellFont( TSelf(wxGrid) _obj, TClassRef(wxFont) _ref );
void       wxGrid_GetDefaultCellTextColour( TSelf(wxGrid) _obj, TClassRef(wxColour) _ref );
int        wxGrid_GetDefaultColLabelSize( TSelf(wxGrid) _obj );
int        wxGrid_GetDefaultColSize( TSelf(wxGrid) _obj );
TClass(wxGridCellEditor) wxGrid_GetDefaultEditor( TSelf(wxGrid) _obj );
TClass(wxGridCellEditor) wxGrid_GetDefaultEditorForCell( TSelf(wxGrid) _obj, int row, int col );
TClass(wxGridCellEditor) wxGrid_GetDefaultEditorForType( TSelf(wxGrid) _obj, TString typeName );
TClass(wxGridCellRenderer) wxGrid_GetDefaultRenderer( TSelf(wxGrid) _obj );
TClass(wxGridCellRenderer) wxGrid_GetDefaultRendererForCell( TSelf(wxGrid) _obj, int row, int col );
TClass(wxGridCellRenderer) wxGrid_GetDefaultRendererForType( TSelf(wxGrid) _obj, TString typeName );
int        wxGrid_GetDefaultRowLabelSize( TSelf(wxGrid) _obj );
int        wxGrid_GetDefaultRowSize( TSelf(wxGrid) _obj );
int        wxGrid_GetGridCursorCol( TSelf(wxGrid) _obj );
int        wxGrid_GetGridCursorRow( TSelf(wxGrid) _obj );
void       wxGrid_GetGridLineColour( TSelf(wxGrid) _obj, TClassRef(wxColour) _ref );
void       wxGrid_GetLabelBackgroundColour( TSelf(wxGrid) _obj, TClassRef(wxColour) _ref );
void       wxGrid_GetLabelFont( TSelf(wxGrid) _obj, TClassRef(wxFont) _ref );
void       wxGrid_GetLabelTextColour( TSelf(wxGrid) _obj, TClassRef(wxColour) _ref );
int        wxGrid_GetNumberCols( TSelf(wxGrid) _obj );
int        wxGrid_GetNumberRows( TSelf(wxGrid) _obj );
void       wxGrid_GetRowLabelAlignment( TSelf(wxGrid) _obj, TSizeOut(horiz,vert) );
int        wxGrid_GetRowLabelSize( TSelf(wxGrid) _obj );
TStringLen wxGrid_GetRowLabelValue( TSelf(wxGrid) _obj, int row, TStringOutVoid _buf );
int        wxGrid_GetRowSize( TSelf(wxGrid) _obj, int row );
void       wxGrid_GetSelectionBackground( TSelf(wxGrid) _obj, TClassRef(wxColour) _ref );
void       wxGrid_GetSelectionForeground( TSelf(wxGrid) _obj, TClassRef(wxColour) _ref );
TClass(wxGridTableBase) wxGrid_GetTable( TSelf(wxGrid) _obj );
void       wxGrid_GetTextBoxSize( TSelf(wxGrid) _obj, TClass(wxDC) dc, TArrayString(count,lines), TSizeOutVoid(_w,_h) );
int        wxGrid_GridLinesEnabled( TSelf(wxGrid) _obj );
void       wxGrid_HideCellEditControl( TSelf(wxGrid) _obj );
TBoolInt   wxGrid_InsertCols( TSelf(wxGrid) _obj, int pos, int numCols, TBoolInt updateLabels );
TBoolInt   wxGrid_InsertRows( TSelf(wxGrid) _obj, int pos, int numRows, TBoolInt updateLabels );
TBool      wxGrid_IsCellEditControlEnabled( TSelf(wxGrid) _obj );
TBool      wxGrid_IsCellEditControlShown( TSelf(wxGrid) _obj );
TBool      wxGrid_IsCurrentCellReadOnly( TSelf(wxGrid) _obj );
TBool      wxGrid_IsEditable( TSelf(wxGrid) _obj );
TBool      wxGrid_IsInSelection( TSelf(wxGrid) _obj, int row, int col );
TBool      wxGrid_IsReadOnly( TSelf(wxGrid) _obj, int row, int col );
TBool      wxGrid_IsSelection( TSelf(wxGrid) _obj );
TBool      wxGrid_IsVisible( TSelf(wxGrid) _obj, int row, int col, TBoolInt wholeCellVisible );
void       wxGrid_MakeCellVisible( TSelf(wxGrid) _obj, int row, int col );
TBoolInt   wxGrid_MoveCursorDown( TSelf(wxGrid) _obj, TBoolInt expandSelection );
TBoolInt   wxGrid_MoveCursorDownBlock( TSelf(wxGrid) _obj, TBoolInt expandSelection );
TBoolInt   wxGrid_MoveCursorLeft( TSelf(wxGrid) _obj, TBoolInt expandSelection );
TBoolInt   wxGrid_MoveCursorLeftBlock( TSelf(wxGrid) _obj, TBoolInt expandSelection );
TBoolInt   wxGrid_MoveCursorRight( TSelf(wxGrid) _obj, TBoolInt expandSelection );
TBoolInt   wxGrid_MoveCursorRightBlock( TSelf(wxGrid) _obj, TBoolInt expandSelection );
TBoolInt   wxGrid_MoveCursorUp( TSelf(wxGrid) _obj, TBoolInt expandSelection );
TBoolInt   wxGrid_MoveCursorUpBlock( TSelf(wxGrid) _obj, TBoolInt expandSelection );
TBoolInt   wxGrid_MovePageDown( TSelf(wxGrid) _obj );
TBoolInt   wxGrid_MovePageUp( TSelf(wxGrid) _obj );
void       wxGrid_ProcessColLabelMouseEvent( TSelf(wxGrid) _obj, TClass(wxMouseEvent) event );
void       wxGrid_ProcessCornerLabelMouseEvent( TSelf(wxGrid) _obj, TClass(wxMouseEvent) event );
void       wxGrid_ProcessGridCellMouseEvent( TSelf(wxGrid) _obj, TClass(wxMouseEvent) event );
void       wxGrid_ProcessRowLabelMouseEvent( TSelf(wxGrid) _obj, TClass(wxMouseEvent) event );
int        wxGrid_ProcessTableMessage( TSelf(wxGrid) _obj, TClass(wxEvent) evt );
void       wxGrid_RegisterDataType( TSelf(wxGrid) _obj, TString typeName, TClass(wxGridCellRenderer) renderer, TClass(wxGridCellEditor) editor );
void       wxGrid_SaveEditControlValue( TSelf(wxGrid) _obj );
void       wxGrid_SelectAll( TSelf(wxGrid) _obj );
void       wxGrid_SelectBlock( TSelf(wxGrid) _obj, int topRow, int leftCol, int bottomRow, int rightCol, TBoolInt addToSelected );
void       wxGrid_SelectCol( TSelf(wxGrid) _obj, int col, TBoolInt addToSelected );
void       wxGrid_SelectRow( TSelf(wxGrid) _obj, int row, TBoolInt addToSelected );
void       wxGrid_SetCellAlignment( TSelf(wxGrid) _obj, int row, int col, int horiz, int vert );
void       wxGrid_SetCellBackgroundColour( TSelf(wxGrid) _obj, int row, int col, TClass(wxColour) colour );
void       wxGrid_SetCellEditor( TSelf(wxGrid) _obj, int row, int col, TClass(wxGridCellEditor) editor );
void       wxGrid_SetCellFont( TSelf(wxGrid) _obj, int row, int col, TClass(wxFont) font );
void       wxGrid_SetCellHighlightColour( TSelf(wxGrid) _obj, TClass(wxColour) col );
void       wxGrid_SetCellRenderer( TSelf(wxGrid) _obj, int row, int col, TClass(wxGridCellRenderer) renderer );
void       wxGrid_SetCellTextColour( TSelf(wxGrid) _obj, int row, int col, TClass(wxColour) colour );
void       wxGrid_SetCellValue( TSelf(wxGrid) _obj, int row, int col, TString s );
void       wxGrid_SetColAttr( TSelf(wxGrid) _obj, int col, TClass(wxGridCellAttr) attr );
void       wxGrid_SetColFormatBool( TSelf(wxGrid) _obj, int col );
void       wxGrid_SetColFormatCustom( TSelf(wxGrid) _obj, int col, TString typeName );
void       wxGrid_SetColFormatFloat( TSelf(wxGrid) _obj, int col, int width, int precision );
void       wxGrid_SetColFormatNumber( TSelf(wxGrid) _obj, int col );
void       wxGrid_SetColLabelAlignment( TSelf(wxGrid) _obj, int horiz, int vert );
void       wxGrid_SetColLabelSize( TSelf(wxGrid) _obj, int height );
void       wxGrid_SetColLabelValue( TSelf(wxGrid) _obj, int col, TString label );
void       wxGrid_SetColMinimalWidth( TSelf(wxGrid) _obj, int col, int width );
void       wxGrid_SetColSize( TSelf(wxGrid) _obj, int col, int width );
void       wxGrid_SetDefaultCellAlignment( TSelf(wxGrid) _obj, int horiz, int vert );
void       wxGrid_SetDefaultCellBackgroundColour( TSelf(wxGrid) _obj, TClass(wxColour) colour );
void       wxGrid_SetDefaultCellFont( TSelf(wxGrid) _obj, TClass(wxFont) font );
void       wxGrid_SetDefaultCellTextColour( TSelf(wxGrid) _obj, TClass(wxColour) colour );
void       wxGrid_SetDefaultColSize( TSelf(wxGrid) _obj, int width, TBoolInt resizeExistingCols );
void       wxGrid_SetDefaultEditor( TSelf(wxGrid) _obj, TClass(wxGridCellEditor) editor );
void       wxGrid_SetDefaultRenderer( TSelf(wxGrid) _obj, TClass(wxGridCellRenderer) renderer );
void       wxGrid_SetDefaultRowSize( TSelf(wxGrid) _obj, int height, TBoolInt resizeExistingRows );
void       wxGrid_SetGridCursor( TSelf(wxGrid) _obj, int row, int col );
void       wxGrid_SetGridLineColour( TSelf(wxGrid) _obj, TClass(wxColour) col );
void       wxGrid_SetLabelBackgroundColour( TSelf(wxGrid) _obj, TClass(wxColour) colour );
void       wxGrid_SetLabelFont( TSelf(wxGrid) _obj, TClass(wxFont) font );
void       wxGrid_SetLabelTextColour( TSelf(wxGrid) _obj, TClass(wxColour) colour );
void       wxGrid_SetMargins( TSelf(wxGrid) _obj, int extraWidth, int extraHeight );
void       wxGrid_SetReadOnly( TSelf(wxGrid) _obj, int row, int col, TBool isReadOnly );
void       wxGrid_SetRowAttr( TSelf(wxGrid) _obj, int row, TClass(wxGridCellAttr) attr );
void       wxGrid_SetRowLabelAlignment( TSelf(wxGrid) _obj, int horiz, int vert );
void       wxGrid_SetRowLabelSize( TSelf(wxGrid) _obj, int width );
void       wxGrid_SetRowLabelValue( TSelf(wxGrid) _obj, int row, TString label );
void       wxGrid_SetRowMinimalHeight( TSelf(wxGrid) _obj, int row, int width );
void       wxGrid_SetRowSize( TSelf(wxGrid) _obj, int row, int height );
void       wxGrid_SetSelectionBackground( TSelf(wxGrid) _obj, TClass(wxColour) c );
void       wxGrid_SetSelectionForeground( TSelf(wxGrid) _obj, TClass(wxColour) c );
void       wxGrid_SetSelectionMode( TSelf(wxGrid) _obj, int selmode );
TBoolInt   wxGrid_SetTable( TSelf(wxGrid) _obj, TClass(wxGridTableBase) table, TBoolInt takeOwnership, int selmode );
void       wxGrid_ShowCellEditControl( TSelf(wxGrid) _obj );
int        wxGrid_StringToLines( TSelf(wxGrid) _obj, TStringVoid value, void* lines );
int        wxGrid_XToCol( TSelf(wxGrid) _obj, int x );
int        wxGrid_XToEdgeOfCol( TSelf(wxGrid) _obj, int x );
void       wxGrid_XYToCell( TSelf(wxGrid) _obj, TPoint(x,y), TPointOut(row,col) );
int        wxGrid_YToEdgeOfRow( TSelf(wxGrid) _obj, int y );
int        wxGrid_YToRow( TSelf(wxGrid) _obj, int y );
void       wxGrid_NewCalcCellsExposed( TSelf(wxGrid) _obj, TClass(wxRegion) reg, TClassRef(wxGridCellCoordsArray) arr );
void       wxGrid_NewDrawGridCellArea( TSelf(wxGrid) _obj, TClass(wxDC) dc, TClass(wxGridCellCoordsArray) arr );
void       wxGrid_NewDrawHighlight( TSelf(wxGrid) _obj, TClass(wxDC) dc, TClass(wxGridCellCoordsArray) arr );
void       wxGrid_GetSelectedCells(TSelf(wxGrid) _obj, TClassRef(wxGridCellCoordsArray) _arr);
void       wxGrid_GetSelectionBlockTopLeft(TSelf(wxGrid) _obj, TClassRef(wxGridCellCoordsArray) _arr);
void       wxGrid_GetSelectionBlockBottomRight(TSelf(wxGrid) _obj, TClassRef(wxGridCellCoordsArray) _arr);
TArrayLen  wxGrid_GetSelectedRows(TSelf(wxGrid) _obj, TArrayIntOutVoid _arr);
TArrayLen  wxGrid_GetSelectedCols(TSelf(wxGrid) _obj, TArrayIntOutVoid _arr);

/* wxGridCellAttr */
TClassDef(wxGridCellAttr)
TClass(wxGridCellAttr)    wxGridCellAttr_Ctor(  );
void       wxGridCellAttr_DecRef( TSelf(wxGridCellAttr) _obj );
void       wxGridCellAttr_GetAlignment( TSelf(wxGridCellAttr) _obj, TSizeOut(hAlign, vAlign) );
void       wxGridCellAttr_GetBackgroundColour( TSelf(wxGridCellAttr) _obj, TClassRef(wxColour) _ref );
TClass(wxGridCellEditor) wxGridCellAttr_GetEditor( TSelf(wxGridCellAttr) _obj, TClass(wxGrid) grid, int row, int col );
void       wxGridCellAttr_GetFont( TSelf(wxGridCellAttr) _obj, TClassRef(wxFont) _ref );
TClass(wxGridCellRenderer)  wxGridCellAttr_GetRenderer( TSelf(wxGridCellAttr) _obj, TClass(wxGrid) grid, int row, int col );
void       wxGridCellAttr_GetTextColour( TSelf(wxGridCellAttr) _obj, TClassRef(wxColour) _ref );
TBool      wxGridCellAttr_HasAlignment( TSelf(wxGridCellAttr) _obj );
TBool      wxGridCellAttr_HasBackgroundColour( TSelf(wxGridCellAttr) _obj );
TBool      wxGridCellAttr_HasEditor( TSelf(wxGridCellAttr) _obj );
TBool      wxGridCellAttr_HasFont( TSelf(wxGridCellAttr) _obj );
TBool      wxGridCellAttr_HasRenderer( TSelf(wxGridCellAttr) _obj );
TBool      wxGridCellAttr_HasTextColour( TSelf(wxGridCellAttr) _obj );
void       wxGridCellAttr_IncRef( TSelf(wxGridCellAttr) _obj );
TBool      wxGridCellAttr_IsReadOnly( TSelf(wxGridCellAttr) _obj );
void       wxGridCellAttr_SetAlignment( TSelf(wxGridCellAttr) _obj, int hAlign, int vAlign );
void       wxGridCellAttr_SetBackgroundColour( TSelf(wxGridCellAttr) _obj, TClass(wxColour) colBack );
void       wxGridCellAttr_SetDefAttr( TSelf(wxGridCellAttr) _obj, TClass(wxGridCellAttr) defAttr );
void       wxGridCellAttr_SetEditor( TSelf(wxGridCellAttr) _obj, TClass(wxGridCellEditor) editor );
void       wxGridCellAttr_SetFont( TSelf(wxGridCellAttr) _obj, TClass(wxFont) font );
void       wxGridCellAttr_SetReadOnly( TSelf(wxGridCellAttr) _obj, TBool isReadOnly );
void       wxGridCellAttr_SetRenderer( TSelf(wxGridCellAttr) _obj, TClass(wxGridCellRenderer) renderer );
void       wxGridCellAttr_SetTextColour( TSelf(wxGridCellAttr) _obj, TClass(wxColour) colText );

/* wxGridCellBoolEditor */
TClassDefExtend(wxGridCellBoolEditor,wxGridCellEditor)
TClass(wxGridCellBoolEditor)   wxGridCellBoolEditor_Ctor(  );

/* wxGridCellBoolRenderer */
TClassDefExtend(wxGridCellBoolRenderer,wxGridCellRenderer)

/* wxGridCellChoiceEditor */
TClassDefExtend(wxGridCellChoiceEditor,wxGridCellEditor)
TClass(wxGridCellChoiceEditor) wxGridCellChoiceEditor_Ctor( TArrayString(count,choices), TBoolInt allowOthers );

/* wxGridCellCoordsArray */
TClassDef(wxGridCellCoordsArray)
TClass(wxGridCellCoordsArray) wxGridCellCoordsArray_Create();
void       wxGridCellCoordsArray_Delete(TSelf(wxGridCellCoordsArray) _obj);
int        wxGridCellCoordsArray_GetCount(TSelf(wxGridCellCoordsArray) _obj);
void       wxGridCellCoordsArray_Item(TSelf(wxGridCellCoordsArray) _obj, int _idx, TPointOut(_c,_r));

/* wxGridCellEditor */
TClassDefExtend(wxGridCellEditor,wxGridCellWorker)
void       wxGridCellEditor_BeginEdit( TSelf(wxGridCellEditor) _obj, int row, int col, TClass(wxGrid) grid );
void       wxGridCellEditor_Create( TSelf(wxGridCellEditor) _obj, TClass(wxWindow) parent, int id, TClass(wxEvtHandler) evtHandler );
void       wxGridCellEditor_Destroy( TSelf(wxGridCellEditor) _obj );
int        wxGridCellEditor_EndEdit( TSelf(wxGridCellEditor) _obj, int row, int col, TClass(wxGrid) grid );
TClass(wxControl) wxGridCellEditor_GetControl( TSelf(wxGridCellEditor) _obj );
void       wxGridCellEditor_HandleReturn( TSelf(wxGridCellEditor) _obj, TClass(wxEvent) event );
TBool      wxGridCellEditor_IsAcceptedKey( TSelf(wxGridCellEditor) _obj, TClass(wxEvent) event );
TBool      wxGridCellEditor_IsCreated( TSelf(wxGridCellEditor) _obj );
void       wxGridCellEditor_PaintBackground( TSelf(wxGridCellEditor) _obj, TRect(x,y,w,h), TClass(wxGridCellAttr) attr );
void       wxGridCellEditor_Reset( TSelf(wxGridCellEditor) _obj );
void       wxGridCellEditor_SetControl( TSelf(wxGridCellEditor) _obj, TClass(wxControl) control );
void       wxGridCellEditor_SetParameters( TSelf(wxGridCellEditor) _obj, TString params );
void       wxGridCellEditor_SetSize( TSelf(wxGridCellEditor) _obj, TRect(x,y,w,h) );
void       wxGridCellEditor_Show( TSelf(wxGridCellEditor) _obj, TBoolInt show, TClass(wxGridCellAttr) attr );
void       wxGridCellEditor_StartingClick( TSelf(wxGridCellEditor) _obj );
void       wxGridCellEditor_StartingKey( TSelf(wxGridCellEditor) _obj, TClass(wxEvent) event );

/* wxGridCellFloatEditor */
TClassDefExtend(wxGridCellFloatEditor,wxGridCellTextEditor)
TClass(wxGridCellFloatEditor) wxGridCellFloatEditor_Ctor( int width, int precision );

/* wxGridCellFloatRenderer */
TClassDefExtend(wxGridCellFloatRenderer,wxGridCellStringRenderer)

/* wxGridCellNumberEditor */
TClassDefExtend(wxGridCellNumberEditor,wxGridCellTextEditor)
TClass(wxGridCellNumberEditor)  wxGridCellNumberEditor_Ctor( int min, int max );

/* wxGridCellNumberRenderer */
TClassDefExtend(wxGridCellNumberRenderer,wxGridCellStringRenderer)

/* wxGridCellRenderer */
TClassDefExtend(wxGridCellRenderer,wxGridCellWorker)

/* wxGridCellStringRenderer */
TClassDefExtend(wxGridCellStringRenderer,wxGridCellRenderer)

/* wxGridCellTextEditor */
TClassDefExtend(wxGridCellTextEditor,wxGridCellEditor)
TClass(wxGridCellTextEditor) wxGridCellTextEditor_Ctor(  );

/* wxGridCellWorker */
TClassDef(wxGridCellWorker)

/* wxGridEditorCreatedEvent */
TClassDefExtend(wxGridEditorCreatedEvent,wxCommandEvent)
int        wxGridEditorCreatedEvent_GetCol (TSelf(wxGridEditorCreatedEvent) _obj);
TClass(wxControl) wxGridEditorCreatedEvent_GetControl (TSelf(wxGridEditorCreatedEvent) _obj);
int        wxGridEditorCreatedEvent_GetRow (TSelf(wxGridEditorCreatedEvent) _obj);
void       wxGridEditorCreatedEvent_SetCol (TSelf(wxGridEditorCreatedEvent) _obj, int col);
void       wxGridEditorCreatedEvent_SetControl (TSelf(wxGridEditorCreatedEvent) _obj, TClass(wxControl) ctrl);
void       wxGridEditorCreatedEvent_SetRow (TSelf(wxGridEditorCreatedEvent) _obj, int row);

/* wxGridEvent */
TClassDefExtend(wxGridEvent,wxNotifyEvent)
TBool      wxGridEvent_AltDown (TSelf(wxGridEvent) _obj);
TBool      wxGridEvent_ControlDown (TSelf(wxGridEvent) _obj);
int        wxGridEvent_GetCol (TSelf(wxGridEvent) _obj);
void       wxGridEvent_GetPosition (TSelf(wxGridEvent) _obj, TPointOutVoid(x,y));
int        wxGridEvent_GetRow (TSelf(wxGridEvent) _obj);
TBool      wxGridEvent_MetaDown (TSelf(wxGridEvent) _obj);
TBool      wxGridEvent_Selecting (TSelf(wxGridEvent) _obj);
TBool      wxGridEvent_ShiftDown (TSelf(wxGridEvent) _obj);

/* wxGridRangeSelectEvent */
TClassDefExtend(wxGridRangeSelectEvent,wxNotifyEvent)
void       wxGridRangeSelectEvent_GetTopLeftCoords (TSelf(wxGridRangeSelectEvent) _obj, TPointOutVoid(col,row));
void       wxGridRangeSelectEvent_GetBottomRightCoords (TSelf(wxGridRangeSelectEvent) _obj, TPointOutVoid(col,row));
int        wxGridRangeSelectEvent_GetTopRow (TSelf(wxGridRangeSelectEvent) _obj);
int        wxGridRangeSelectEvent_GetBottomRow (TSelf(wxGridRangeSelectEvent) _obj);
int        wxGridRangeSelectEvent_GetLeftCol (TSelf(wxGridRangeSelectEvent) _obj);
int        wxGridRangeSelectEvent_GetRightCol (TSelf(wxGridRangeSelectEvent) _obj);
TBool      wxGridRangeSelectEvent_Selecting (TSelf(wxGridRangeSelectEvent) _obj);
TBool      wxGridRangeSelectEvent_ControlDown (TSelf(wxGridRangeSelectEvent) _obj);
TBool      wxGridRangeSelectEvent_MetaDown (TSelf(wxGridRangeSelectEvent) _obj);
TBool      wxGridRangeSelectEvent_ShiftDown (TSelf(wxGridRangeSelectEvent) _obj);
TBool      wxGridRangeSelectEvent_AltDown (TSelf(wxGridRangeSelectEvent) _obj);

/* wxGridSizeEvent */
TClassDefExtend(wxGridSizeEvent,wxNotifyEvent)
int        wxGridSizeEvent_GetRowOrCol (TSelf(wxGridSizeEvent) _obj);
void       wxGridSizeEvent_GetPosition (TSelf(wxGridSizeEvent) _obj, TPointOutVoid(x,y));
TBool      wxGridSizeEvent_ControlDown (TSelf(wxGridSizeEvent) _obj);
TBool      wxGridSizeEvent_MetaDown (TSelf(wxGridSizeEvent) _obj);
TBool      wxGridSizeEvent_ShiftDown (TSelf(wxGridSizeEvent) _obj);
TBool      wxGridSizeEvent_AltDown (TSelf(wxGridSizeEvent) _obj);


/* wxGridSizer */
TClassDefExtend(wxGridSizer,wxSizer)
void       wxGridSizer_CalcMin( TSelf(wxGridSizer) _obj, TSizeOutVoid(_w,_h) );
TClass(wxGridSizer) wxGridSizer_Create( int rows, int cols, int vgap, int hgap );
int        wxGridSizer_GetCols( TSelf(wxGridSizer) _obj );
int        wxGridSizer_GetHGap( TSelf(wxGridSizer) _obj );
int        wxGridSizer_GetRows( TSelf(wxGridSizer) _obj );
int        wxGridSizer_GetVGap( TSelf(wxGridSizer) _obj );
void       wxGridSizer_RecalcSizes( TSelf(wxGridSizer) _obj );
void       wxGridSizer_SetCols( TSelf(wxGridSizer) _obj, int cols );
void       wxGridSizer_SetHGap( TSelf(wxGridSizer) _obj, int gap );
void       wxGridSizer_SetRows( TSelf(wxGridSizer) _obj, int rows );
void       wxGridSizer_SetVGap( TSelf(wxGridSizer) _obj, int gap );

/* wxGridTableBase */
TClassDefExtend(wxGridTableBase,wxObject)

/* wxHTTP */
TClassDefExtend(wxHTTP,wxProtocol)

/* wxHashMap */
TClassDef(wxHashMap)

/* wxHelpController */
TClassDefExtend(wxHelpController,wxHelpControllerBase)

/* wxHelpControllerBase */
TClassDefExtend(wxHelpControllerBase,wxObject)

/* wxHelpControllerHelpProvider */
TClassDefExtend(wxHelpControllerHelpProvider,wxSimpleHelpProvider)
TClass(wxHelpControllerHelpProvider) wxHelpControllerHelpProvider_Create( void* ctr );
TClass(wxHelpController) wxHelpControllerHelpProvider_GetHelpController( TSelf(wxHelpControllerHelpProvider) _obj );
void       wxHelpControllerHelpProvider_SetHelpController( TSelf(wxHelpControllerHelpProvider) _obj, TClass(wxHelpController) hc );

/* wxHelpEvent */
TClassDefExtend(wxHelpEvent,wxCommandEvent)
int        wxHelpEvent_GetLink( TSelf(wxHelpEvent) _obj, void* _ref );
void       wxHelpEvent_GetPosition( TSelf(wxHelpEvent) _obj, TPointOutVoid(_x,_y) );
int        wxHelpEvent_GetTarget( TSelf(wxHelpEvent) _obj, void* _ref );
int        wxHelpEvent_SetLink( TSelf(wxHelpEvent) _obj, void* link );
void       wxHelpEvent_SetPosition( TSelf(wxHelpEvent) _obj, TPoint(x,y) );
void       wxHelpEvent_SetTarget( TSelf(wxHelpEvent) _obj, void* target );

/* wxHelpProvider */
TClassDef(wxHelpProvider)
void       wxHelpProvider_AddHelp( TSelf(wxHelpProvider) _obj, TClass(wxWindow) window, TStringVoid text );
void       wxHelpProvider_AddHelpById( TSelf(wxHelpProvider) _obj, int id, TStringVoid text );
void       wxHelpProvider_Delete( TSelf(wxHelpProvider) _obj );
void*      wxHelpProvider_Get(  );
int        wxHelpProvider_GetHelp( TSelf(wxHelpProvider) _obj, TClass(wxWindow) window, void* _ref );
void       wxHelpProvider_RemoveHelp( TSelf(wxHelpProvider) _obj, TClass(wxWindow) window );
void*      wxHelpProvider_Set( TSelf(wxHelpProvider) helpProvider );
int        wxHelpProvider_ShowHelp( TSelf(wxHelpProvider) _obj, TClass(wxWindow) window );

/* wxHtmlCell */
TClassDefExtend(wxHtmlCell,wxObject)

/* wxHtmlColourCell */
TClassDefExtend(wxHtmlColourCell,wxHtmlCell)

/* wxHtmlContainerCell */
TClassDefExtend(wxHtmlContainerCell,wxHtmlCell)

/* wxHtmlDCRenderer */
TClassDefExtend(wxHtmlDCRenderer,wxObject)

/* wxHtmlEasyPrinting */
TClassDefExtend(wxHtmlEasyPrinting,wxObject)

/* wxHtmlFilter */
TClassDefExtend(wxHtmlFilter,wxObject)

/* wxHtmlHelpController */
TClassDefExtend(wxHtmlHelpController,wxHelpControllerBase)
int        wxHtmlHelpController_AddBook( TSelf(wxHtmlHelpController) _obj, void* book, int show_wait_msg );
TClass(wxHtmlHelpController) wxHtmlHelpController_Create( int _style );
void       wxHtmlHelpController_Delete( TSelf(wxHtmlHelpController) _obj );
int        wxHtmlHelpController_Display( TSelf(wxHtmlHelpController) _obj, void* x );
int        wxHtmlHelpController_DisplayBlock( TSelf(wxHtmlHelpController) _obj, int blockNo );
int        wxHtmlHelpController_DisplayContents( TSelf(wxHtmlHelpController) _obj );
int        wxHtmlHelpController_DisplayIndex( TSelf(wxHtmlHelpController) _obj );
int        wxHtmlHelpController_DisplayNumber( TSelf(wxHtmlHelpController) _obj, int id );
int        wxHtmlHelpController_DisplaySection( TSelf(wxHtmlHelpController) _obj, TStringVoid section );
int        wxHtmlHelpController_DisplaySectionNumber( TSelf(wxHtmlHelpController) _obj, int sectionNo );
TClass(wxFrame) wxHtmlHelpController_GetFrame( TSelf(wxHtmlHelpController) _obj );
void*      wxHtmlHelpController_GetFrameParameters( TSelf(wxHtmlHelpController) _obj, void* title, int* width, int* height, int* pos_x, int* pos_y, int* newFrameEachTime );
int        wxHtmlHelpController_Initialize( TSelf(wxHtmlHelpController) _obj, TStringVoid file );
int        wxHtmlHelpController_KeywordSearch( TSelf(wxHtmlHelpController) _obj, TStringVoid keyword );
int        wxHtmlHelpController_LoadFile( TSelf(wxHtmlHelpController) _obj, TStringVoid file );
int        wxHtmlHelpController_Quit( TSelf(wxHtmlHelpController) _obj );
void       wxHtmlHelpController_ReadCustomization( TSelf(wxHtmlHelpController) _obj, TClass(wxConfigBase) cfg, TStringVoid path );
void       wxHtmlHelpController_SetFrameParameters( TSelf(wxHtmlHelpController) _obj, void* title, TSize(width,height), int pos_x, int pos_y, int newFrameEachTime );
void       wxHtmlHelpController_SetTempDir( TSelf(wxHtmlHelpController) _obj, TStringVoid path );
void       wxHtmlHelpController_SetTitleFormat( TSelf(wxHtmlHelpController) _obj, void* format );
void       wxHtmlHelpController_SetViewer( TSelf(wxHtmlHelpController) _obj, TStringVoid viewer, int flags );
void       wxHtmlHelpController_UseConfig( TSelf(wxHtmlHelpController) _obj, TClass(wxConfigBase) config, TStringVoid rootpath );
void       wxHtmlHelpController_WriteCustomization( TSelf(wxHtmlHelpController) _obj, TClass(wxConfigBase) cfg, TStringVoid path );

/* wxHtmlHelpData */
TClassDefExtend(wxHtmlHelpData,wxObject)

/* wxHtmlHelpFrame */
TClassDefExtend(wxHtmlHelpFrame,wxFrame)

/* wxHtmlLinkInfo */
TClassDefExtend(wxHtmlLinkInfo,wxObject)

/* wxHtmlParser */
TClassDefExtend(wxHtmlParser,wxObject)

/* wxHtmlPrintout */
TClassDefExtend(wxHtmlPrintout,wxPrintout)

/* wxHtmlTag */
TClassDefExtend(wxHtmlTag,wxObject)

/* wxHtmlTagHandler */
TClassDefExtend(wxHtmlTagHandler,wxObject)

/* wxHtmlTagsModule */
TClassDefExtend(wxHtmlTagsModule,wxModule)

/* wxHtmlWidgetCell */
TClassDefExtend(wxHtmlWidgetCell,wxHtmlCell)

/* wxHtmlWinParser */
TClassDefExtend(wxHtmlWinParser,wxHtmlParser)

/* wxHtmlWinTagHandler */
TClassDefExtend(wxHtmlWinTagHandler,wxHtmlTagHandler)

/* wxHtmlWindow */
TClassDefExtend(wxHtmlWindow,wxScrolledWindow)

/* wxIPV4address */
TClassDefExtend(wxIPV4address,wxSockAddress)

/* wxIcon */
TClassDefExtend(wxIcon,wxBitmap)
void       wxIcon_Assign( TSelf(wxIcon) _obj, void* other );
void       wxIcon_CopyFromBitmap( TSelf(wxIcon) _obj, TClass(wxBitmap) bmp );
TClass(wxIcon) wxIcon_CreateDefault(  );
TClass(wxIcon) wxIcon_CreateLoad( TStringVoid name, long type, TSize(width,height) );
void       wxIcon_Delete( TSelf(wxIcon) _obj );
TClass(wxIcon) wxIcon_FromRaw( TSelf(wxIcon) data, TSize(width,height) );
TClass(wxIcon) wxIcon_FromXPM( TSelf(wxIcon) data );
int        wxIcon_GetDepth( TSelf(wxIcon) _obj );
int        wxIcon_GetHeight( TSelf(wxIcon) _obj );
int        wxIcon_GetWidth( TSelf(wxIcon) _obj );
TBool      wxIcon_IsEqual( TSelf(wxIcon) _obj, void* other );
int        wxIcon_Load( TSelf(wxIcon) _obj, TStringVoid name, long type, TSize(width,height) );
TBool      wxIcon_Ok( TSelf(wxIcon) _obj );

/* wxIconBundle */
TClassDef(wxIconBundle)
void       wxIconBundle_AddIcon( TSelf(wxIconBundle) _obj, TClass(wxIcon) icon );
void       wxIconBundle_AddIconFromFile( TSelf(wxIconBundle) _obj, TStringVoid file, int type );
void       wxIconBundle_Assign( TSelf(wxIconBundle) _obj, TClassRef(wxIconBundle) _ref );
TClass(wxIconBundle) wxIconBundle_CreateDefault(  );
TClass(wxIconBundle) wxIconBundle_CreateFromFile( TStringVoid file, int type );
TClass(wxIconBundle) wxIconBundle_CreateFromIcon( TClass(wxIcon) icon );
void       wxIconBundle_Delete( TSelf(wxIconBundle) _obj );
void       wxIconBundle_GetIcon( TSelf(wxIconBundle) _obj, TSize(w,h), TClassRef(wxIcon) _ref );

/* wxIconizeEvent */
TClassDefExtend(wxIconizeEvent,wxEvent)

/* wxIdleEvent */
TClassDefExtend(wxIdleEvent,wxEvent)
void       wxIdleEvent_CopyObject( TSelf(wxIdleEvent) _obj, void* object_dest );
TBool      wxIdleEvent_MoreRequested( TSelf(wxIdleEvent) _obj );
void       wxIdleEvent_RequestMore( TSelf(wxIdleEvent) _obj, TBool needMore );

/* wxImage */
TClassDefExtend(wxImage,wxObject)
TBool      wxImage_CanRead( TStringVoid name );
void       wxImage_ConvertToBitmap( TSelf(wxImage) _obj, TClassRef(wxBitmap) bitmap );
int        wxImage_CountColours( TSelf(wxImage) _obj, int stopafter );
TClass(wxImage) wxImage_CreateDefault(  );
TClass(wxImage) wxImage_CreateFromBitmap( TClass(wxBitmap) bitmap );
TClass(wxImage) wxImage_CreateFromData( TSize(width,height), void* data );
TClass(wxImage) wxImage_CreateFromFile( TStringVoid name );
TClass(wxImage) wxImage_CreateSized( TSize(width,height) );
void       wxImage_Destroy( TSelf(wxImage) _obj );
TChar      wxImage_GetBlue( TSelf(wxImage) _obj, TPoint(x,y) );
void*      wxImage_GetData( TSelf(wxImage) _obj );
TChar      wxImage_GetGreen( TSelf(wxImage) _obj, TPoint(x,y) );
int        wxImage_GetHeight( TSelf(wxImage) _obj );
TChar      wxImage_GetMaskBlue( TSelf(wxImage) _obj );
TChar      wxImage_GetMaskGreen( TSelf(wxImage) _obj );
TChar      wxImage_GetMaskRed( TSelf(wxImage) _obj );
TChar      wxImage_GetRed( TSelf(wxImage) _obj, TPoint(x,y) );
void       wxImage_GetSubImage( TSelf(wxImage) _obj, TRect(x,y,w,h), TClassRef(wxImage) image );
int        wxImage_GetWidth( TSelf(wxImage) _obj );
TBool      wxImage_HasMask( TSelf(wxImage) _obj );
void       wxImage_Initialize( TSelf(wxImage) _obj, TSize(width,height) );
void       wxImage_InitializeFromData( TSelf(wxImage) _obj, TSize(width,height), void* data );
TBoolInt   wxImage_LoadFile( TSelf(wxImage) _obj, TStringVoid name, int type );
void       wxImage_Mirror( TSelf(wxImage) _obj, TBoolInt horizontally, TClassRef(wxImage) image );
TBool      wxImage_Ok( TSelf(wxImage) _obj );
void       wxImage_Paste( TSelf(wxImage) _obj, TClass(wxImage) image, TPoint(x,y) );
void       wxImage_Replace( TSelf(wxImage) _obj, TColorRGB(r1,g1,b1), TColorRGB(r2,g2,b2) );
void       wxImage_Rescale( TSelf(wxImage) _obj, TSize(width,height) );
void       wxImage_Rotate( TSelf(wxImage) _obj, double angle, TPoint(c_x,c_y), TBoolInt interpolating, void* offset_after_rotation, TClassRef(wxImage) image );
void       wxImage_Rotate90( TSelf(wxImage) _obj, TBoolInt clockwise, TClassRef(wxImage) image );
TBoolInt   wxImage_SaveFile( TSelf(wxImage) _obj, TStringVoid name, int type );
void       wxImage_Scale( TSelf(wxImage) _obj, TSize(width,height), TClassRef(wxImage) image );
void       wxImage_SetData( TSelf(wxImage) _obj, void* data );
void       wxImage_SetDataAndSize( TSelf(wxImage) _obj, void* data, TSize(new_width,new_height) );
void       wxImage_SetMask( TSelf(wxImage) _obj, int mask );
void       wxImage_SetMaskColour( TSelf(wxImage) _obj, TColorRGB(r,g,b) );
void       wxImage_SetRGB( TSelf(wxImage) _obj, TPoint(x,y), TColorRGB(r,g,b) );

/* wxImageHandler */
TClassDefExtend(wxImageHandler,wxObject)

/* wxImageList */
TClassDefExtend(wxImageList,wxObject)
int        wxImageList_AddBitmap( TSelf(wxImageList) _obj, TClass(wxBitmap) bitmap, TClass(wxBitmap) mask );
int        wxImageList_AddIcon( TSelf(wxImageList) _obj, TClass(wxIcon) icon );
int        wxImageList_AddMasked( TSelf(wxImageList) _obj, TClass(wxBitmap) bitmap, TClass(wxColour) maskColour );
TClass(wxImageList) wxImageList_Create( TSize(width,height), TBoolInt mask, int initialCount );
void       wxImageList_Delete( TSelf(wxImageList) _obj );
TBoolInt   wxImageList_Draw( TSelf(wxImageList) _obj, int index, TClass(wxDC) dc, TPoint(x,y), int flags, TBoolInt solidBackground );
int        wxImageList_GetImageCount( TSelf(wxImageList) _obj );
void       wxImageList_GetSize( TSelf(wxImageList) _obj, int index, TSizeOut(width,height) );
TBoolInt   wxImageList_Remove( TSelf(wxImageList) _obj, int index );
TBoolInt   wxImageList_RemoveAll( TSelf(wxImageList) _obj );
TBoolInt   wxImageList_Replace( TSelf(wxImageList) _obj, int index, TClass(wxBitmap) bitmap, TClass(wxBitmap) mask );
TBoolInt   wxImageList_ReplaceIcon( TSelf(wxImageList) _obj, int index, TClass(wxIcon) icon );

/* wxIndividualLayoutConstraint */
TClassDefExtend(wxIndividualLayoutConstraint,wxObject)
void       wxIndividualLayoutConstraint_Above( TSelf(wxIndividualLayoutConstraint) _obj, TClass(wxWindow) sibling, int marg );
void       wxIndividualLayoutConstraint_Absolute( TSelf(wxIndividualLayoutConstraint) _obj, int val );
void       wxIndividualLayoutConstraint_AsIs( TSelf(wxIndividualLayoutConstraint) _obj );
void       wxIndividualLayoutConstraint_Below( TSelf(wxIndividualLayoutConstraint) _obj, TClass(wxWindow) sibling, int marg );
int        wxIndividualLayoutConstraint_GetDone( TSelf(wxIndividualLayoutConstraint) _obj );
int        wxIndividualLayoutConstraint_GetEdge( TSelf(wxIndividualLayoutConstraint) _obj, int which, void* thisWin, void* other );
int        wxIndividualLayoutConstraint_GetMargin( TSelf(wxIndividualLayoutConstraint) _obj );
int        wxIndividualLayoutConstraint_GetMyEdge( TSelf(wxIndividualLayoutConstraint) _obj );
int        wxIndividualLayoutConstraint_GetOtherEdge( TSelf(wxIndividualLayoutConstraint) _obj );
void*      wxIndividualLayoutConstraint_GetOtherWindow( TSelf(wxIndividualLayoutConstraint) _obj );
int        wxIndividualLayoutConstraint_GetPercent( TSelf(wxIndividualLayoutConstraint) _obj );
int        wxIndividualLayoutConstraint_GetRelationship( TSelf(wxIndividualLayoutConstraint) _obj );
int        wxIndividualLayoutConstraint_GetValue( TSelf(wxIndividualLayoutConstraint) _obj );
void       wxIndividualLayoutConstraint_LeftOf( TSelf(wxIndividualLayoutConstraint) _obj, TClass(wxWindow) sibling, int marg );
void       wxIndividualLayoutConstraint_PercentOf( TSelf(wxIndividualLayoutConstraint) _obj, TClass(wxWindow) otherW, int wh, int per );
int        wxIndividualLayoutConstraint_ResetIfWin( TSelf(wxIndividualLayoutConstraint) _obj, TClass(wxWindow) otherW );
void       wxIndividualLayoutConstraint_RightOf( TSelf(wxIndividualLayoutConstraint) _obj, TClass(wxWindow) sibling, int marg );
void       wxIndividualLayoutConstraint_SameAs( TSelf(wxIndividualLayoutConstraint) _obj, TClass(wxWindow) otherW, int edge, int marg );
int        wxIndividualLayoutConstraint_SatisfyConstraint( TSelf(wxIndividualLayoutConstraint) _obj, void* constraints, TClass(wxWindow) win );
void       wxIndividualLayoutConstraint_Set( TSelf(wxIndividualLayoutConstraint) _obj, int rel, TClass(wxWindow) otherW, int otherE, int val, int marg );
void       wxIndividualLayoutConstraint_SetDone( TSelf(wxIndividualLayoutConstraint) _obj, int d );
void       wxIndividualLayoutConstraint_SetEdge( TSelf(wxIndividualLayoutConstraint) _obj, int which );
void       wxIndividualLayoutConstraint_SetMargin( TSelf(wxIndividualLayoutConstraint) _obj, int m );
void       wxIndividualLayoutConstraint_SetRelationship( TSelf(wxIndividualLayoutConstraint) _obj, int r );
void       wxIndividualLayoutConstraint_SetValue( TSelf(wxIndividualLayoutConstraint) _obj, int v );
void       wxIndividualLayoutConstraint_Unconstrained( TSelf(wxIndividualLayoutConstraint) _obj );

/* wxInitDialogEvent */
TClassDefExtend(wxInitDialogEvent,wxEvent)

/* wxInputStream */
TClassDefExtend(wxInputStream,wxStreamBase)
void       wxInputStream_Delete( TSelf(wxInputStream) _obj );
TBool      wxInputStream_Eof( TSelf(wxInputStream) _obj );
TChar      wxInputStream_GetC( TSelf(wxInputStream) _obj );
int        wxInputStream_LastRead( TSelf(wxInputStream) _obj );
TChar      wxInputStream_Peek( TSelf(wxInputStream) _obj );
void       wxInputStream_Read( TSelf(wxInputStream) _obj, void* buffer, int size );
int        wxInputStream_SeekI( TSelf(wxInputStream) _obj, int pos, int mode );
int        wxInputStream_Tell( TSelf(wxInputStream) _obj );
int        wxInputStream_UngetBuffer( TSelf(wxInputStream) _obj, void* buffer, int size );
int        wxInputStream_Ungetch( TSelf(wxInputStream) _obj, TChar c );

/* wxJoystick */
TClassDefExtend(wxJoystick,wxObject)
TClass(wxJoystick) wxJoystick_Create( int joystick );
void       wxJoystick_Delete( TSelf(wxJoystick) _obj );
int        wxJoystick_GetButtonState( TSelf(wxJoystick) _obj );
int        wxJoystick_GetManufacturerId( TSelf(wxJoystick) _obj );
int        wxJoystick_GetMaxAxes( TSelf(wxJoystick) _obj );
int        wxJoystick_GetMaxButtons( TSelf(wxJoystick) _obj );
int        wxJoystick_GetMovementThreshold( TSelf(wxJoystick) _obj );
int        wxJoystick_GetNumberAxes( TSelf(wxJoystick) _obj );
int        wxJoystick_GetNumberButtons( TSelf(wxJoystick) _obj );
int        wxJoystick_GetNumberJoysticks( TSelf(wxJoystick) _obj );
int        wxJoystick_GetPOVCTSPosition( TSelf(wxJoystick) _obj );
int        wxJoystick_GetPOVPosition( TSelf(wxJoystick) _obj );
int        wxJoystick_GetPollingMax( TSelf(wxJoystick) _obj );
int        wxJoystick_GetPollingMin( TSelf(wxJoystick) _obj );
void       wxJoystick_GetPosition( TSelf(wxJoystick) _obj, TPointOutVoid(_x,_y) );
int        wxJoystick_GetProductId( TSelf(wxJoystick) _obj );
TStringLen wxJoystick_GetProductName( TSelf(wxJoystick) _obj, TStringOutVoid _buf );
int        wxJoystick_GetRudderMax( TSelf(wxJoystick) _obj );
int        wxJoystick_GetRudderMin( TSelf(wxJoystick) _obj );
int        wxJoystick_GetRudderPosition( TSelf(wxJoystick) _obj );
int        wxJoystick_GetUMax( TSelf(wxJoystick) _obj );
int        wxJoystick_GetUMin( TSelf(wxJoystick) _obj );
int        wxJoystick_GetUPosition( TSelf(wxJoystick) _obj );
int        wxJoystick_GetVMax( TSelf(wxJoystick) _obj );
int        wxJoystick_GetVMin( TSelf(wxJoystick) _obj );
int        wxJoystick_GetVPosition( TSelf(wxJoystick) _obj );
int        wxJoystick_GetXMax( TSelf(wxJoystick) _obj );
int        wxJoystick_GetXMin( TSelf(wxJoystick) _obj );
int        wxJoystick_GetYMax( TSelf(wxJoystick) _obj );
int        wxJoystick_GetYMin( TSelf(wxJoystick) _obj );
int        wxJoystick_GetZMax( TSelf(wxJoystick) _obj );
int        wxJoystick_GetZMin( TSelf(wxJoystick) _obj );
int        wxJoystick_GetZPosition( TSelf(wxJoystick) _obj );
TBool      wxJoystick_HasPOV( TSelf(wxJoystick) _obj );
TBool      wxJoystick_HasPOV4Dir( TSelf(wxJoystick) _obj );
TBool      wxJoystick_HasPOVCTS( TSelf(wxJoystick) _obj );
TBool      wxJoystick_HasRudder( TSelf(wxJoystick) _obj );
TBool      wxJoystick_HasU( TSelf(wxJoystick) _obj );
TBool      wxJoystick_HasV( TSelf(wxJoystick) _obj );
TBool      wxJoystick_HasZ( TSelf(wxJoystick) _obj );
TBool      wxJoystick_IsOk( TSelf(wxJoystick) _obj );
int        wxJoystick_ReleaseCapture( TSelf(wxJoystick) _obj );
int        wxJoystick_SetCapture( TSelf(wxJoystick) _obj, TClass(wxWindow) win, int pollingFreq );
void       wxJoystick_SetMovementThreshold( TSelf(wxJoystick) _obj, int threshold );

/* wxJoystickEvent */
TClassDefExtend(wxJoystickEvent,wxEvent)
TBool      wxJoystickEvent_ButtonDown( TSelf(wxJoystickEvent) _obj, int but );
TBool      wxJoystickEvent_ButtonIsDown( TSelf(wxJoystickEvent) _obj, int but );
TBool      wxJoystickEvent_ButtonUp( TSelf(wxJoystickEvent) _obj, int but );
void       wxJoystickEvent_CopyObject( TSelf(wxJoystickEvent) _obj, void* obj );
int        wxJoystickEvent_GetButtonChange( TSelf(wxJoystickEvent) _obj );
int        wxJoystickEvent_GetButtonState( TSelf(wxJoystickEvent) _obj );
int        wxJoystickEvent_GetJoystick( TSelf(wxJoystickEvent) _obj );
void       wxJoystickEvent_GetPosition( TSelf(wxJoystickEvent) _obj, TPointOut(_x,_y) );
int        wxJoystickEvent_GetZPosition( TSelf(wxJoystickEvent) _obj );
TBool      wxJoystickEvent_IsButton( TSelf(wxJoystickEvent) _obj );
TBool      wxJoystickEvent_IsMove( TSelf(wxJoystickEvent) _obj );
TBool      wxJoystickEvent_IsZMove( TSelf(wxJoystickEvent) _obj );
void       wxJoystickEvent_SetButtonChange( TSelf(wxJoystickEvent) _obj, int change );
void       wxJoystickEvent_SetButtonState( TSelf(wxJoystickEvent) _obj, int state );
void       wxJoystickEvent_SetJoystick( TSelf(wxJoystickEvent) _obj, int stick );
void       wxJoystickEvent_SetPosition( TSelf(wxJoystickEvent) _obj, void* pos );
void       wxJoystickEvent_SetZPosition( TSelf(wxJoystickEvent) _obj, int zPos );

/* wxKeyEvent */
TClassDefExtend(wxKeyEvent,wxEvent)
TBool      wxKeyEvent_AltDown( TSelf(wxKeyEvent) _obj );
TBool      wxKeyEvent_ControlDown( TSelf(wxKeyEvent) _obj );
void       wxKeyEvent_CopyObject( TSelf(wxKeyEvent) _obj, void* obj );
int        wxKeyEvent_GetKeyCode( TSelf(wxKeyEvent) _obj );
void       wxKeyEvent_GetPosition( TSelf(wxKeyEvent) _obj, TPointOut(_x,_y) );
int        wxKeyEvent_GetX( TSelf(wxKeyEvent) _obj );
int        wxKeyEvent_GetY( TSelf(wxKeyEvent) _obj );
TBool      wxKeyEvent_HasModifiers( TSelf(wxKeyEvent) _obj );
TBool      wxKeyEvent_MetaDown( TSelf(wxKeyEvent) _obj );
void       wxKeyEvent_SetKeyCode( TSelf(wxKeyEvent) _obj, int code );
TBool      wxKeyEvent_ShiftDown( TSelf(wxKeyEvent) _obj );

/* wxLEDNumberCtrl */
TClassDefExtend(wxLEDNumberCtrl,wxControl)
TClass(wxLEDNumberCtrl) wxLEDNumberCtrl_Create( TClass(wxWindow) parent, int id, TRect(x,y,w,h), int style );
int        wxLEDNumberCtrl_GetAlignment( TSelf(wxLEDNumberCtrl) _obj );
int        wxLEDNumberCtrl_GetDrawFaded( TSelf(wxLEDNumberCtrl) _obj );
int        wxLEDNumberCtrl_GetValue( TSelf(wxLEDNumberCtrl) _obj, void* _ref );
void       wxLEDNumberCtrl_SetAlignment( TSelf(wxLEDNumberCtrl) _obj, int Alignment, int Redraw );
void       wxLEDNumberCtrl_SetDrawFaded( TSelf(wxLEDNumberCtrl) _obj, int DrawFaded, int Redraw );
void       wxLEDNumberCtrl_SetValue( TSelf(wxLEDNumberCtrl) _obj, void* Value, int Redraw );

/* wxLayoutAlgorithm */
TClassDefExtend(wxLayoutAlgorithm,wxObject)
TClass(wxLayoutAlgorithm) wxLayoutAlgorithm_Create(  );
void       wxLayoutAlgorithm_Delete( TSelf(wxLayoutAlgorithm) _obj );
int        wxLayoutAlgorithm_LayoutFrame( TSelf(wxLayoutAlgorithm) _obj, TClass(wxFrame) frame, void* mainWindow );
int        wxLayoutAlgorithm_LayoutMDIFrame( TSelf(wxLayoutAlgorithm) _obj, TClass(wxFrame) frame, TRect(x,y,w,h), int use );
int        wxLayoutAlgorithm_LayoutWindow( TSelf(wxLayoutAlgorithm) _obj, TClass(wxFrame) frame, void* mainWindow );

/* wxLayoutConstraints */
TClassDefExtend(wxLayoutConstraints,wxObject)
TClass(wxLayoutConstraints) wxLayoutConstraints_Create(  );
void*      wxLayoutConstraints_bottom( TSelf(wxLayoutConstraints) _obj );
void*      wxLayoutConstraints_centreX( TSelf(wxLayoutConstraints) _obj );
void*      wxLayoutConstraints_centreY( TSelf(wxLayoutConstraints) _obj );
void*      wxLayoutConstraints_height( TSelf(wxLayoutConstraints) _obj );
void*      wxLayoutConstraints_left( TSelf(wxLayoutConstraints) _obj );
void*      wxLayoutConstraints_right( TSelf(wxLayoutConstraints) _obj );
void*      wxLayoutConstraints_top( TSelf(wxLayoutConstraints) _obj );
void*      wxLayoutConstraints_width( TSelf(wxLayoutConstraints) _obj );

/* wxList */
TClassDefExtend(wxList,wxObject)

/* wxListBox */
TClassDefExtend(wxListBox,wxControl)
void       wxListBox_Append( TSelf(wxListBox) _obj, TString item );
void       wxListBox_AppendData( TSelf(wxListBox) _obj, TString item, void* data );
void       wxListBox_Clear( TSelf(wxListBox) _obj );
TClass(wxListBox) wxListBox_Create( TClass(wxWindow) _prt, int _id, TRect(_lft,_top,_wdt,_hgt), TArrayString(n,str), int _stl );
void       wxListBox_Delete( TSelf(wxListBox) _obj, int n );
int        wxListBox_FindString( TSelf(wxListBox) _obj, TString s );
TClass(wxClientData) wxListBox_GetClientData( TSelf(wxListBox) _obj, int n );
int        wxListBox_GetCount( TSelf(wxListBox) _obj );
int        wxListBox_GetSelection( TSelf(wxListBox) _obj );
int        wxListBox_GetSelections( TSelf(wxListBox) _obj, int* aSelections, int allocated );
TStringLen wxListBox_GetString( TSelf(wxListBox) _obj, int n, TStringOutVoid _buf );
void       wxListBox_InsertItems( TSelf(wxListBox) _obj, void* items, int pos, int count );
TBool      wxListBox_IsSelected( TSelf(wxListBox) _obj, int n );
void       wxListBox_SetClientData( TSelf(wxListBox) _obj, int n, TClass(wxClientData) clientData );
void       wxListBox_SetFirstItem( TSelf(wxListBox) _obj, int n );
void       wxListBox_SetSelection( TSelf(wxListBox) _obj, int n, TBoolInt select );
void       wxListBox_SetString( TSelf(wxListBox) _obj, int n, TString s );
void       wxListBox_SetStringSelection( TSelf(wxListBox) _obj, TString str, TBoolInt sel );

/* wxListCtrl */
TClassDefExtend(wxListCtrl,wxControl)
TBoolInt   wxListCtrl_Arrange( TSelf(wxListCtrl) _obj, int flag );
void       wxListCtrl_ClearAll( TSelf(wxListCtrl) _obj );
TClass(wxListCtrl) wxListCtrl_Create( TClass(wxWindow) _prt, int _id, TRect(_lft,_top,_wdt,_hgt), int _stl );
TBoolInt   wxListCtrl_DeleteAllColumns( TSelf(wxListCtrl) _obj );
TBoolInt   wxListCtrl_DeleteAllItems( TSelf(wxListCtrl) _obj );
TBoolInt   wxListCtrl_DeleteColumn( TSelf(wxListCtrl) _obj, int col );
TBoolInt   wxListCtrl_DeleteItem( TSelf(wxListCtrl) _obj, int item );
void       wxListCtrl_EditLabel( TSelf(wxListCtrl) _obj, int item );
TBoolInt   wxListCtrl_EndEditLabel( TSelf(wxListCtrl) _obj, int cancel );
TBoolInt   wxListCtrl_EnsureVisible( TSelf(wxListCtrl) _obj, int item );
int        wxListCtrl_FindItem( TSelf(wxListCtrl) _obj, int start, TStringVoid str, TBoolInt partial );
int        wxListCtrl_FindItemByData( TSelf(wxListCtrl) _obj, int start, int data );
int        wxListCtrl_FindItemByPosition( TSelf(wxListCtrl) _obj, int start, TPoint(x,y), int direction );
TBoolInt   wxListCtrl_GetColumn( TSelf(wxListCtrl) _obj, int col, TClass(wxListItem) item );
int        wxListCtrl_GetColumnCount( TSelf(wxListCtrl) _obj );
int        wxListCtrl_GetColumnWidth( TSelf(wxListCtrl) _obj, int col );
int        wxListCtrl_GetCountPerPage( TSelf(wxListCtrl) _obj );
TClass(wxTextCtrl)  wxListCtrl_GetEditControl( TSelf(wxListCtrl) _obj );
TClass(wxImageList) wxListCtrl_GetImageList( TSelf(wxListCtrl) _obj, int which );
TBoolInt   wxListCtrl_GetItem( TSelf(wxListCtrl) _obj, TClass(wxListItem) info );
int        wxListCtrl_GetItemCount( TSelf(wxListCtrl) _obj );
int        wxListCtrl_GetItemData( TSelf(wxListCtrl) _obj, int item );
TBoolInt   wxListCtrl_GetItemPosition( TSelf(wxListCtrl) _obj, int item, int*x, int* y );
int        wxListCtrl_GetItemRect( TSelf(wxListCtrl) _obj, int item, int code, TRectOutVoid(x,y,w,h) );
int        wxListCtrl_GetItemSpacing( TSelf(wxListCtrl) _obj, TBool isSmall );
int        wxListCtrl_GetItemState( TSelf(wxListCtrl) _obj, int item, int stateMask );
TStringLen wxListCtrl_GetItemText( TSelf(wxListCtrl) _obj, int item, TStringOutVoid buf );
int        wxListCtrl_GetNextItem( TSelf(wxListCtrl) _obj, int item, int geometry, int state );
int        wxListCtrl_GetSelectedItemCount( TSelf(wxListCtrl) _obj );
void       wxListCtrl_GetTextColour( TSelf(wxListCtrl) _obj, TClassRef(wxColour) _ref );
int        wxListCtrl_GetTopItem( TSelf(wxListCtrl) _obj );
int        wxListCtrl_HitTest( TSelf(wxListCtrl) _obj, TPoint(x,y), void* flags );
int        wxListCtrl_InsertColumn( TSelf(wxListCtrl) _obj, int col, TStringVoid heading, int format, int width );
int        wxListCtrl_InsertColumnFromInfo( TSelf(wxListCtrl) _obj, int col, TClass(wxListItem) info );
int        wxListCtrl_InsertItem( TSelf(wxListCtrl) _obj, TClass(wxListItem) info );
int        wxListCtrl_InsertItemWithData( TSelf(wxListCtrl) _obj, int index, TStringVoid label );
int        wxListCtrl_InsertItemWithImage( TSelf(wxListCtrl) _obj, int index, int imageIndex );
int        wxListCtrl_InsertItemWithLabel( TSelf(wxListCtrl) _obj, int index, TStringVoid label, int imageIndex );
TBoolInt   wxListCtrl_ScrollList( TSelf(wxListCtrl) _obj, TVector(dx,dy) );
void       wxListCtrl_SetBackgroundColour( TSelf(wxListCtrl) _obj, TClass(wxColour) col );
TBoolInt   wxListCtrl_SetColumn( TSelf(wxListCtrl) _obj, int col, TClass(wxListItem) item );
TBoolInt   wxListCtrl_SetColumnWidth( TSelf(wxListCtrl) _obj, int col, int width );
int        wxListCtrl_SetForegroundColour( TSelf(wxListCtrl) _obj, TClass(wxColour) col );
void       wxListCtrl_SetImageList( TSelf(wxListCtrl) _obj, TClass(wxImageList) imageList, int which );
TBoolInt   wxListCtrl_SetItem( TSelf(wxListCtrl) _obj, int index, int col, TStringVoid label, int imageId );
TBoolInt   wxListCtrl_SetItemData( TSelf(wxListCtrl) _obj, int item, int data );
TBoolInt   wxListCtrl_SetItemFromInfo( TSelf(wxListCtrl) _obj, TClass(wxListItem) info );
TBoolInt   wxListCtrl_SetItemImage( TSelf(wxListCtrl) _obj, int item, int image, int selImage );
TBoolInt   wxListCtrl_SetItemPosition( TSelf(wxListCtrl) _obj, int item, TPoint(x,y) );
TBoolInt   wxListCtrl_SetItemState( TSelf(wxListCtrl) _obj, int item, int state, int stateMask );
void       wxListCtrl_SetItemText( TSelf(wxListCtrl) _obj, int item, TStringVoid str );
void       wxListCtrl_SetSingleStyle( TSelf(wxListCtrl) _obj, int style, TBoolInt add );
void       wxListCtrl_SetTextColour( TSelf(wxListCtrl) _obj, TClass(wxColour) col );
void       wxListCtrl_SetWindowStyleFlag( TSelf(wxListCtrl) _obj, int style );
TBoolInt   wxListCtrl_SortItems( TSelf(wxListCtrl) _obj, void* fn, void* eif_obj );
void       wxListCtrl_UpdateStyle( TSelf(wxListCtrl) _obj );

/* wxListEvent */
TClassDefExtend(wxListEvent,wxNotifyEvent)
TBool      wxListEvent_Cancelled( TSelf(wxListEvent) _obj );
int        wxListEvent_GetCode( TSelf(wxListEvent) _obj );
int        wxListEvent_GetColumn( TSelf(wxListEvent) _obj );
int        wxListEvent_GetData( TSelf(wxListEvent) _obj );
int        wxListEvent_GetImage( TSelf(wxListEvent) _obj );
int        wxListEvent_GetIndex( TSelf(wxListEvent) _obj );
void       wxListEvent_GetItem( TSelf(wxListEvent) _obj, TClassRef(wxListItem) _ref );
TStringLen wxListEvent_GetLabel( TSelf(wxListEvent) _obj, TStringOutVoid _buf );
int        wxListEvent_GetMask( TSelf(wxListEvent) _obj );
/*
int        wxListEvent_GetOldIndex( TSelf(wxListEvent) _obj );
int        wxListEvent_GetOldItem( TSelf(wxListEvent) _obj );
*/
void       wxListEvent_GetPoint( TSelf(wxListEvent) _obj, TPointOutVoid(_x,_y) );
TStringLen wxListEvent_GetText( TSelf(wxListEvent) _obj, TStringOutVoid _buf );

/* wxListItem */
TClassDefExtend(wxListItem,wxObject)
void       wxListItem_Clear( TSelf(wxListItem) _obj );
void       wxListItem_ClearAttributes( TSelf(wxListItem) _obj );
TClass(wxListItem) wxListItem_Create(  );
void       wxListItem_Delete( TSelf(wxListItem) _obj );
int        wxListItem_GetAlign( TSelf(wxListItem) _obj );
void*      wxListItem_GetAttributes( TSelf(wxListItem) _obj );
void       wxListItem_GetBackgroundColour( TSelf(wxListItem) _obj, TClassRef(wxColour) _ref );
int        wxListItem_GetColumn( TSelf(wxListItem) _obj );
int        wxListItem_GetData( TSelf(wxListItem) _obj );
void       wxListItem_GetFont( TSelf(wxListItem) _obj, TClassRef(wxFont) _ref );
int        wxListItem_GetId( TSelf(wxListItem) _obj );
int        wxListItem_GetImage( TSelf(wxListItem) _obj );
int        wxListItem_GetMask( TSelf(wxListItem) _obj );
int        wxListItem_GetState( TSelf(wxListItem) _obj );
TStringLen wxListItem_GetText( TSelf(wxListItem) _obj, TStringOutVoid _buf );
void       wxListItem_GetTextColour( TSelf(wxListItem) _obj, TClassRef(wxColour) _ref );
int        wxListItem_GetWidth( TSelf(wxListItem) _obj );
TBool      wxListItem_HasAttributes( TSelf(wxListItem) _obj );
void       wxListItem_SetAlign( TSelf(wxListItem) _obj, int align );
void       wxListItem_SetBackgroundColour( TSelf(wxListItem) _obj, TClass(wxColour) colBack );
void       wxListItem_SetColumn( TSelf(wxListItem) _obj, int col );
void       wxListItem_SetData( TSelf(wxListItem) _obj, int data );
void       wxListItem_SetDataPointer( TSelf(wxListItem) _obj, void* data );
void       wxListItem_SetFont( TSelf(wxListItem) _obj, TClass(wxFont) font );
void       wxListItem_SetId( TSelf(wxListItem) _obj, int id );
void       wxListItem_SetImage( TSelf(wxListItem) _obj, int image );
void       wxListItem_SetMask( TSelf(wxListItem) _obj, int mask );
void       wxListItem_SetState( TSelf(wxListItem) _obj, int state );
void       wxListItem_SetStateMask( TSelf(wxListItem) _obj, int stateMask );
void       wxListItem_SetText( TSelf(wxListItem) _obj, TStringVoid text );
void       wxListItem_SetTextColour( TSelf(wxListItem) _obj, TClass(wxColour) colText );
void       wxListItem_SetWidth( TSelf(wxListItem) _obj, int width );

/* wxLocale */
TClassDef(wxLocale)
int        wxLocale_AddCatalog( TSelf(wxLocale) _obj, void* szDomain );
void       wxLocale_AddCatalogLookupPathPrefix( TSelf(wxLocale) _obj, void* prefix );
TClass(wxLocale) wxLocale_Create( int _name, int _flags );
void       wxLocale_Delete( TSelf(wxLocale) _obj );
TClass(wxLocale) wxLocale_GetLocale( TSelf(wxLocale) _obj );
int        wxLocale_GetName( TSelf(wxLocale) _obj, void* _ref );
TClass(wxString) wxLocale_GetString( TSelf(wxLocale) _obj, void* szOrigString, void* szDomain );
TBool      wxLocale_IsLoaded( TSelf(wxLocale) _obj, void* szDomain );
TBool      wxLocale_IsOk( TSelf(wxLocale) _obj );

/* wxLog */
TClassDef(wxLog)

/* wxLogChain */
TClassDefExtend(wxLogChain,wxLog)
TClass(wxLogChain) wxLogChain_Create( TClass(wxLog) logger );
void       wxLogChain_Delete( TSelf(wxLogChain) _obj );
TClass(wxLog) wxLogChain_GetOldLog( TSelf(wxLogChain) _obj );
TBool      wxLogChain_IsPassingMessages( TSelf(wxLogChain) _obj );
void       wxLogChain_PassMessages( TSelf(wxLogChain) _obj, TBoolInt bDoPass );
void       wxLogChain_SetLog( TSelf(wxLogChain) _obj, TClass(wxLog) logger );

/* wxLogGUI */
TClassDefExtend(wxLogGUI,wxLog)

/* wxLogNull */
TClassDefExtend(wxLogNull,wxLog)

/* wxLogPassThrough */
TClassDefExtend(wxLogPassThrough,wxLogChain)

/* wxLogStderr */
TClassDefExtend(wxLogStderr,wxLog)

/* wxLogStream */
TClassDefExtend(wxLogStream,wxLog)

/* wxLogTextCtrl */
TClassDefExtend(wxLogTextCtrl,wxLog)

/* wxLogWindow */
TClassDefExtend(wxLogWindow,wxLogPassThrough)

/* wxLongLong */
TClassDef(wxLongLong)

/* wxMBConv */
TClassDef(wxMBConv)

/* wxMBConvFile */
TClassDefExtend(wxMBConvFile,wxMBConv)

/* wxMBConvUTF7 */
TClassDefExtend(wxMBConvUTF7,wxMBConv)

/* wxMBConvUTF8 */
TClassDefExtend(wxMBConvUTF8,wxMBConv)

/* wxMDIChildFrame */
TClassDefExtend(wxMDIChildFrame,wxFrame)
void       wxMDIChildFrame_Activate( TSelf(wxMDIChildFrame) _obj );
TClass(wxMDIChildFrame) wxMDIChildFrame_Create( TClass(wxWindow) _prt, int _id, TString _txt, TRect(_lft,_top,_wdt,_hgt), int _stl );

/* wxMDIClientWindow */
TClassDefExtend(wxMDIClientWindow,wxWindow)

/* wxMDIParentFrame */
TClassDefExtend(wxMDIParentFrame,wxFrame)
void       wxMDIParentFrame_ActivateNext( TSelf(wxMDIParentFrame) _obj );
void       wxMDIParentFrame_ActivatePrevious( TSelf(wxMDIParentFrame) _obj );
void       wxMDIParentFrame_ArrangeIcons( TSelf(wxMDIParentFrame) _obj );
void       wxMDIParentFrame_Cascade( TSelf(wxMDIParentFrame) _obj );
TClass(wxMDIParentFrame)  wxMDIParentFrame_Create( TClass(wxWindow) _prt, int _id, TString _txt, TRect(_lft,_top,_wdt,_hgt), int _stl );
TClass(wxMDIChildFrame)   wxMDIParentFrame_GetActiveChild( TSelf(wxMDIParentFrame) _obj );
TClass(wxMDIClientWindow) wxMDIParentFrame_GetClientWindow( TSelf(wxMDIParentFrame) _obj );
TClass(wxMenu)            wxMDIParentFrame_GetWindowMenu( TSelf(wxMDIParentFrame) _obj );
TClass(wxMDIClientWindow) wxMDIParentFrame_OnCreateClient( TSelf(wxMDIParentFrame) _obj );
void       wxMDIParentFrame_SetWindowMenu( TSelf(wxMDIParentFrame) _obj, TClass(wxMenu) menu );
void       wxMDIParentFrame_Tile( TSelf(wxMDIParentFrame) _obj );

/* wxMask */
TClassDefExtend(wxMask,wxObject)
TClass(wxMask) wxMask_Create( TClass(wxBitmap) bitmap );
void*      wxMask_CreateColoured( TClass(wxBitmap) bitmap, TClass(wxColour) colour );

/* wxMaximizeEvent */
TClassDefExtend(wxMaximizeEvent,wxEvent)

/* wxMemoryDC */
TClassDefExtend(wxMemoryDC,wxDC)
TClass(wxMemoryDC) wxMemoryDC_Create(  );
TClass(wxMemoryDC) wxMemoryDC_CreateCompatible( TClass(wxDC) dc );
void       wxMemoryDC_Delete( TSelf(wxMemoryDC) _obj );
void       wxMemoryDC_SelectObject( TSelf(wxMemoryDC) _obj, TClass(wxBitmap) bitmap );

/* wxMemoryFSHandler */
TClassDefExtend(wxMemoryFSHandler,wxFileSystemHandler)

/* wxMemoryInputStream */
TClassDefExtend(wxMemoryInputStream,wxInputStream)

/* wxMemoryOutputStream */
TClassDefExtend(wxMemoryOutputStream,wxOutputStream)

/* wxMenu */
TClassDefExtend(wxMenu,wxEvtHandler)
void       wxMenu_Append( TSelf(wxMenu) _obj, int id, TString text, TString help, TBool isCheckable );
void       wxMenu_AppendItem( TSelf(wxMenu) _obj, TClass(wxMenuItem) _itm );
void       wxMenu_AppendSeparator( TSelf(wxMenu) _obj );
void       wxMenu_AppendSub( TSelf(wxMenu) _obj, int id, TString text, TClass(wxMenu) submenu, TString help );
void       wxMenu_Break( TSelf(wxMenu) _obj );
void       wxMenu_Check( TSelf(wxMenu) _obj, int id, TBool check );
TClass(wxMenu) wxMenu_Create( TString title, long style );
void       wxMenu_DeleteById( TSelf(wxMenu) _obj, int id );
void       wxMenu_DeleteByItem( TSelf(wxMenu) _obj, TClass(wxMenuItem) _itm );
void       wxMenu_DeletePointer( TSelf(wxMenu) _obj );
void       wxMenu_DestroyById( TSelf(wxMenu) _obj, int id );
void       wxMenu_DestroyByItem( TSelf(wxMenu) _obj, TClass(wxMenuItem) _itm );
void       wxMenu_Enable( TSelf(wxMenu) _obj, int id, TBool enable );
TClass(wxMenuItem)  wxMenu_FindItem( TSelf(wxMenu) _obj, int id, TClass(wxMenu)* menu );
int        wxMenu_FindItemByLabel( TSelf(wxMenu) _obj, TString itemString );
TClass(wxClientData) wxMenu_GetClientData( TSelf(wxMenu) _obj );
TStringLen wxMenu_GetHelpString( TSelf(wxMenu) _obj, int id, TStringOutVoid _buf );
TClass(wxWindow) wxMenu_GetInvokingWindow( TSelf(wxMenu) _obj );
TStringLen wxMenu_GetLabel( TSelf(wxMenu) _obj, int id, TStringOutVoid _buf );
size_t     wxMenu_GetMenuItemCount( TSelf(wxMenu) _obj );
int        wxMenu_GetMenuItems( TSelf(wxMenu) _obj, TClass(wxList) _lst );
TClass(wxMenu) wxMenu_GetParent( TSelf(wxMenu) _obj );
int        wxMenu_GetStyle( TSelf(wxMenu) _obj );
TStringLen wxMenu_GetTitle( TSelf(wxMenu) _obj, TStringOutVoid _buf );
void       wxMenu_Insert( TSelf(wxMenu) _obj, size_t pos, int id, TString text, TString help, TBool isCheckable );
void       wxMenu_InsertItem( TSelf(wxMenu) _obj, size_t pos, TClass(wxMenuItem) _itm );
void       wxMenu_InsertSub( TSelf(wxMenu) _obj, size_t pos, int id, TString text, TClass(wxMenu) submenu, TString help );
TBool      wxMenu_IsAttached( TSelf(wxMenu) _obj );
TBool      wxMenu_IsChecked( TSelf(wxMenu) _obj, int id );
TBool      wxMenu_IsEnabled( TSelf(wxMenu) _obj, int id );
void       wxMenu_Prepend( TSelf(wxMenu) _obj, int id, TString text, TString help, TBool isCheckable );
void       wxMenu_PrependItem( TSelf(wxMenu) _obj, TClass(wxMenuItem) _itm );
void       wxMenu_PrependSub( TSelf(wxMenu) _obj, int id, TString text, TClass(wxMenu) submenu, TString help );
void       wxMenu_RemoveById( TSelf(wxMenu) _obj, int id, TClass(wxMenuItem) _itm );
void       wxMenu_RemoveByItem( TSelf(wxMenu) _obj, void* item );
void       wxMenu_SetClientData( TSelf(wxMenu) _obj, TClass(wxClientData) clientData );
void       wxMenu_SetEventHandler( TSelf(wxMenu) _obj, TClass(wxEvtHandler) handler );
void       wxMenu_SetHelpString( TSelf(wxMenu) _obj, int id, TString helpString );
void       wxMenu_SetInvokingWindow( TSelf(wxMenu) _obj, TClass(wxWindow) win );
void       wxMenu_SetLabel( TSelf(wxMenu) _obj, int id, TString label );
void       wxMenu_SetParent( TSelf(wxMenu) _obj, TClass(wxWindow) parent );
void       wxMenu_SetTitle( TSelf(wxMenu) _obj, TString title );
void       wxMenu_UpdateUI( TSelf(wxMenu) _obj, void* source );

/* wxMenuBar */
TClassDefExtend(wxMenuBar,wxEvtHandler)
int        wxMenuBar_Append( TSelf(wxMenuBar) _obj, TClass(wxMenu) menu, TString title );
void       wxMenuBar_Check( TSelf(wxMenuBar) _obj, int id, TBool check );
TClass(wxMenuBar) wxMenuBar_Create( int _style );
void       wxMenuBar_DeletePointer( TSelf(wxMenuBar) _obj );
int        wxMenuBar_Enable( TSelf(wxMenuBar) _obj, TBool enable );
void       wxMenuBar_EnableItem( TSelf(wxMenuBar) _obj, int id, TBool enable );
void       wxMenuBar_EnableTop( TSelf(wxMenuBar) _obj, int pos, TBool enable );
void*      wxMenuBar_FindItem( TSelf(wxMenuBar) _obj, int id, TClass(wxMenu) menu );
int        wxMenuBar_FindMenu( TSelf(wxMenuBar) _obj, TString title );
int        wxMenuBar_FindMenuItem( TSelf(wxMenuBar) _obj, TString menuString, TString itemString );
TStringLen wxMenuBar_GetHelpString( TSelf(wxMenuBar) _obj, int id, TStringOutVoid _buf );
TStringLen wxMenuBar_GetLabel( TSelf(wxMenuBar) _obj, int id, TStringOutVoid _buf );
TStringLen wxMenuBar_GetLabelTop( TSelf(wxMenuBar) _obj, int pos, TStringOutVoid _buf );
TClass(wxMenu) wxMenuBar_GetMenu( TSelf(wxMenuBar) _obj, int pos );
int        wxMenuBar_GetMenuCount( TSelf(wxMenuBar) _obj );
int        wxMenuBar_Insert( TSelf(wxMenuBar) _obj, int pos, TClass(wxMenu) menu, TString title );
TBool      wxMenuBar_IsChecked( TSelf(wxMenuBar) _obj, int id );
TBool      wxMenuBar_IsEnabled( TSelf(wxMenuBar) _obj, int id );
void*      wxMenuBar_Remove( TSelf(wxMenuBar) _obj, int pos );
void*      wxMenuBar_Replace( TSelf(wxMenuBar) _obj, int pos, TClass(wxMenu) menu, TString title );
void       wxMenuBar_SetHelpString( TSelf(wxMenuBar) _obj, int id, TString helpString );
void       wxMenuBar_SetItemLabel( TSelf(wxMenuBar) _obj, int id, TString label );
void       wxMenuBar_SetLabel( TSelf(wxMenuBar) _obj, TString s );
void       wxMenuBar_SetLabelTop( TSelf(wxMenuBar) _obj, int pos, TString label );

/* wxMenuEvent */
TClassDefExtend(wxMenuEvent,wxEvent)
void       wxMenuEvent_CopyObject( TSelf(wxMenuEvent) _obj, void* obj );
int        wxMenuEvent_GetMenuId( TSelf(wxMenuEvent) _obj );

/* wxMenuItem */
TClassDefExtend(wxMenuItem,wxObject)
void       wxMenuItem_Check( TSelf(wxMenuItem) _obj, TBool check );
TClass(wxMenuItem) wxMenuItem_Create(  );
void       wxMenuItem_Delete( TSelf(wxMenuItem) _obj );
void       wxMenuItem_Enable( TSelf(wxMenuItem) _obj, TBool enable );
TStringLen wxMenuItem_GetHelp( TSelf(wxMenuItem) _obj, TStringOutVoid _buf );
int        wxMenuItem_GetId( TSelf(wxMenuItem) _obj );
TStringLen wxMenuItem_GetLabel( TSelf(wxMenuItem) _obj, TStringOutVoid _buf );
TStringLen wxMenuItem_GetLabelFromText( TStringVoid text, TStringOutVoid _buf );
TClass(wxMenu) wxMenuItem_GetMenu( TSelf(wxMenuItem) _obj );
void*      wxMenuItem_GetSubMenu( TSelf(wxMenuItem) _obj );
TStringLen wxMenuItem_GetText( TSelf(wxMenuItem) _obj, TStringOutVoid _buf );
TBool      wxMenuItem_IsCheckable( TSelf(wxMenuItem) _obj );
TBool      wxMenuItem_IsChecked( TSelf(wxMenuItem) _obj );
TBool      wxMenuItem_IsEnabled( TSelf(wxMenuItem) _obj );
TBool      wxMenuItem_IsSeparator( TSelf(wxMenuItem) _obj );
TBool      wxMenuItem_IsSubMenu( TSelf(wxMenuItem) _obj );
void       wxMenuItem_SetCheckable( TSelf(wxMenuItem) _obj, int checkable );
void       wxMenuItem_SetHelp( TSelf(wxMenuItem) _obj, TStringVoid str );
void       wxMenuItem_SetId( TSelf(wxMenuItem) _obj, int id );
void       wxMenuItem_SetSubMenu( TSelf(wxMenuItem) _obj, TClass(wxMenu) menu );
void       wxMenuItem_SetText( TSelf(wxMenuItem) _obj, TStringVoid str );

/* wxMessageDialog */
TClassDefExtend(wxMessageDialog,wxDialog)
TClass(wxMessageDialog) wxMessageDialog_Create( TClass(wxWindow) _prt, TStringVoid _msg, TStringVoid _cap, int _stl );
void       wxMessageDialog_Delete( TSelf(wxMessageDialog) _obj );
int        wxMessageDialog_ShowModal( TSelf(wxMessageDialog) _obj );

/* wxMetafile */
TClassDefExtend(wxMetafile,wxObject)
TClass(wxMetafile) wxMetafile_Create( TStringVoid _file );
void       wxMetafile_Delete( TSelf(wxMetafile) _obj );
TBool      wxMetafile_Ok( TSelf(wxMetafile) _obj );
TBool      wxMetafile_Play( TSelf(wxMetafile) _obj, TClass(wxDC) _dc );
TBool      wxMetafile_SetClipboard( TSelf(wxMetafile) _obj, TSize(width,height) );

/* wxMetafileDC */
TClassDefExtend(wxMetafileDC,wxDC)
void*      wxMetafileDC_Close( TSelf(wxMetafileDC) _obj );
TClass(wxMetafileDC) wxMetafileDC_Create( TStringVoid _file );
void       wxMetafileDC_Delete( TSelf(wxMetafileDC) _obj );

/* wxMimeTypesManager */
TClassDef(wxMimeTypesManager)
void       wxMimeTypesManager_AddFallbacks( TSelf(wxMimeTypesManager) _obj, void* _types );
TClass(wxMimeTypesManager) wxMimeTypesManager_Create(  );
int        wxMimeTypesManager_EnumAllFileTypes( TSelf(wxMimeTypesManager) _obj, TClass(wxList) _lst );
void*      wxMimeTypesManager_GetFileTypeFromExtension( TSelf(wxMimeTypesManager) _obj, void* _ext );
void*      wxMimeTypesManager_GetFileTypeFromMimeType( TSelf(wxMimeTypesManager) _obj, TStringVoid _name );
TBool      wxMimeTypesManager_IsOfType( TSelf(wxMimeTypesManager) _obj, void* _type, void* _wildcard );
int        wxMimeTypesManager_ReadMailcap( TSelf(wxMimeTypesManager) _obj, void* _file, int _fb );
int        wxMimeTypesManager_ReadMimeTypes( TSelf(wxMimeTypesManager) _obj, void* _file );

/* wxMiniFrame */
TClassDefExtend(wxMiniFrame,wxFrame)
TClass(wxMiniFrame) wxMiniFrame_Create( TClass(wxWindow) _prt, int _id, TStringVoid _txt, TRect(_lft,_top,_wdt,_hgt), int _stl );

/* wxModule */
TClassDefExtend(wxModule,wxObject)

/* wxMouseCaptureChangedEvent */
TClassDefExtend(wxMouseCaptureChangedEvent,wxEvent)

/* wxMouseEvent */
TClassDefExtend(wxMouseEvent,wxEvent)
TBool      wxMouseEvent_AltDown( TSelf(wxMouseEvent) _obj );
int        wxMouseEvent_Button( TSelf(wxMouseEvent) _obj, int but );
TBool      wxMouseEvent_ButtonDClick( TSelf(wxMouseEvent) _obj, int but );
TBool      wxMouseEvent_ButtonDown( TSelf(wxMouseEvent) _obj, int but );
TBool      wxMouseEvent_ButtonIsDown( TSelf(wxMouseEvent) _obj, int but );
TBool      wxMouseEvent_ButtonUp( TSelf(wxMouseEvent) _obj, int but );
TBool      wxMouseEvent_ControlDown( TSelf(wxMouseEvent) _obj );
void       wxMouseEvent_CopyObject( TSelf(wxMouseEvent) _obj, void* object_dest );
TBool      wxMouseEvent_Dragging( TSelf(wxMouseEvent) _obj );
TBool      wxMouseEvent_Entering( TSelf(wxMouseEvent) _obj );
void       wxMouseEvent_GetLogicalPosition( TSelf(wxMouseEvent) _obj, TClass(wxDC) dc, TPointOut(_x,_y) );
void       wxMouseEvent_GetPosition( TSelf(wxMouseEvent) _obj, TPointOut(_x,_y) );
int        wxMouseEvent_GetX( TSelf(wxMouseEvent) _obj );
int        wxMouseEvent_GetY( TSelf(wxMouseEvent) _obj );
TBool      wxMouseEvent_IsButton( TSelf(wxMouseEvent) _obj );
TBool      wxMouseEvent_Leaving( TSelf(wxMouseEvent) _obj );
TBool      wxMouseEvent_LeftDClick( TSelf(wxMouseEvent) _obj );
TBool      wxMouseEvent_LeftDown( TSelf(wxMouseEvent) _obj );
TBool      wxMouseEvent_LeftIsDown( TSelf(wxMouseEvent) _obj );
TBool      wxMouseEvent_LeftUp( TSelf(wxMouseEvent) _obj );
TBool      wxMouseEvent_MetaDown( TSelf(wxMouseEvent) _obj );
TBool      wxMouseEvent_MiddleDClick( TSelf(wxMouseEvent) _obj );
TBool      wxMouseEvent_MiddleDown( TSelf(wxMouseEvent) _obj );
TBool      wxMouseEvent_MiddleIsDown( TSelf(wxMouseEvent) _obj );
TBool      wxMouseEvent_MiddleUp( TSelf(wxMouseEvent) _obj );
TBool      wxMouseEvent_Moving( TSelf(wxMouseEvent) _obj );
TBool      wxMouseEvent_RightDClick( TSelf(wxMouseEvent) _obj );
TBool      wxMouseEvent_RightDown( TSelf(wxMouseEvent) _obj );
TBool      wxMouseEvent_RightIsDown( TSelf(wxMouseEvent) _obj );
TBool      wxMouseEvent_RightUp( TSelf(wxMouseEvent) _obj );
TBool      wxMouseEvent_ShiftDown( TSelf(wxMouseEvent) _obj );

/* wxMoveEvent */
TClassDefExtend(wxMoveEvent,wxEvent)
void       wxMoveEvent_CopyObject( TSelf(wxMoveEvent) _obj, void* obj );
void       wxMoveEvent_GetPosition( TSelf(wxMoveEvent) _obj, TPointOut(_x,_y) );

/* wxMultiCellCanvas */
TClassDefExtend(wxMultiCellCanvas,wxFlexGridSizer)
void       wxMultiCellCanvas_Add( TSelf(wxMultiCellCanvas) _obj, TClass(wxWindow) win, int row, int col );
void       wxMultiCellCanvas_CalculateConstraints( TSelf(wxMultiCellCanvas) _obj );
TClass(wxMultiCellCanvas) wxMultiCellCanvas_Create( TClass(wxWindow) parent, int numRows, int numCols );
int        wxMultiCellCanvas_MaxCols( TSelf(wxMultiCellCanvas) _obj );
int        wxMultiCellCanvas_MaxRows( TSelf(wxMultiCellCanvas) _obj );
void       wxMultiCellCanvas_SetMinCellSize( TSelf(wxMultiCellCanvas) _obj, TSize(w,h) );

/* wxMultiCellItemHandle */
TClassDefExtend(wxMultiCellItemHandle,wxObject)
TClass(wxMultiCellItemHandle) wxMultiCellItemHandle_Create( int row, int column, int height, int width, int sx, int sy, int style, int wx, int wy, int align );
void*      wxMultiCellItemHandle_CreateWithSize( TSelf(wxMultiCellItemHandle) _obj, int row, int column, int sx, int sy, int style, int wx, int wy, int align );
void*      wxMultiCellItemHandle_CreateWithStyle( TSelf(wxMultiCellItemHandle) _obj, int row, int column, int style, int wx, int wy, int align );
int        wxMultiCellItemHandle_GetAlignment( TSelf(wxMultiCellItemHandle) _obj );
int        wxMultiCellItemHandle_GetColumn( TSelf(wxMultiCellItemHandle) _obj );
int        wxMultiCellItemHandle_GetHeight( TSelf(wxMultiCellItemHandle) _obj );
void       wxMultiCellItemHandle_GetLocalSize( TSelf(wxMultiCellItemHandle) _obj, TSizeOutVoid(_w,_h) );
int        wxMultiCellItemHandle_GetRow( TSelf(wxMultiCellItemHandle) _obj );
int        wxMultiCellItemHandle_GetStyle( TSelf(wxMultiCellItemHandle) _obj );
void       wxMultiCellItemHandle_GetWeight( TSelf(wxMultiCellItemHandle) _obj, TSizeOutVoid(_w,_h) );
int        wxMultiCellItemHandle_GetWidth( TSelf(wxMultiCellItemHandle) _obj );

/* wxMultiCellSizer */
TClassDefExtend(wxMultiCellSizer,wxSizer)
void       wxMultiCellSizer_CalcMin( TSelf(wxMultiCellSizer) _obj, TSizeOutVoid(_w,_h) );
TClass(wxMultiCellSizer) wxMultiCellSizer_Create( int rows, int cols );
void       wxMultiCellSizer_Delete( TSelf(wxMultiCellSizer) _obj );
int        wxMultiCellSizer_EnableGridLines( TSelf(wxMultiCellSizer) _obj, TClass(wxWindow) win );
void       wxMultiCellSizer_RecalcSizes( TSelf(wxMultiCellSizer) _obj );
int        wxMultiCellSizer_SetColumnWidth( TSelf(wxMultiCellSizer) _obj, int column, int colSize, int expandable );
int        wxMultiCellSizer_SetDefaultCellSize( TSelf(wxMultiCellSizer) _obj, TSize(w,h) );
int        wxMultiCellSizer_SetGridPen( TSelf(wxMultiCellSizer) _obj, TClass(wxPen) pen );
int        wxMultiCellSizer_SetRowHeight( TSelf(wxMultiCellSizer) _obj, int row, int rowSize, int expandable );

/* wxMutex */
TClassDef(wxMutex)
TClass(wxMutex) wxMutex_Create(  );
void       wxMutex_Delete( TSelf(wxMutex) _obj );
TBool      wxMutex_IsLocked( TSelf(wxMutex) _obj );
int        wxMutex_Lock( TSelf(wxMutex) _obj );
int        wxMutex_TryLock( TSelf(wxMutex) _obj );
int        wxMutex_Unlock( TSelf(wxMutex) _obj );

/* wxMutexLocker */
TClassDef(wxMutexLocker)

/* wxNavigationKeyEvent */
TClassDefExtend(wxNavigationKeyEvent,wxEvent)
void*      wxNavigationKeyEvent_GetCurrentFocus( TSelf(wxNavigationKeyEvent) _obj );
int        wxNavigationKeyEvent_GetDirection( TSelf(wxNavigationKeyEvent) _obj );
TBool      wxNavigationKeyEvent_IsWindowChange( TSelf(wxNavigationKeyEvent) _obj );
void       wxNavigationKeyEvent_SetCurrentFocus( TSelf(wxNavigationKeyEvent) _obj, TClass(wxWindow) win );
void       wxNavigationKeyEvent_SetDirection( TSelf(wxNavigationKeyEvent) _obj, int bForward );
/* void       wxNavigationKeyEvent_SetPropagate( TSelf(wxNavigationKeyEvent) _obj, int bDoIt );*/
void       wxNavigationKeyEvent_SetWindowChange( TSelf(wxNavigationKeyEvent) _obj, int bIs );
int        wxNavigationKeyEvent_ShouldPropagate( TSelf(wxNavigationKeyEvent) _obj );

/* wxNewBitmapButton */
TClassDefExtend(wxNewBitmapButton,wxPanel)
TClass(wxNewBitmapButton) wxNewBitmapButton_Create( void* labelBitmap, void* labelText, int alignText, TBool isFlat, int firedEventType, int marginX, int marginY, int textToLabelGap, TBool isSticky );
TClass(wxNewBitmapButton) wxNewBitmapButton_CreateFromFile( TSelf(wxNewBitmapButton) bitmapFileName, int bitmapFileType, void* labelText, int alignText, TBool isFlat, int firedEventType, int marginX, int marginY, int textToLabelGap, TBool isSticky );
void       wxNewBitmapButton_Delete( TSelf(wxNewBitmapButton) _obj );
void       wxNewBitmapButton_DrawDecorations( TSelf(wxNewBitmapButton) _obj, TClass(wxDC) dc );
void       wxNewBitmapButton_DrawLabel( TSelf(wxNewBitmapButton) _obj, TClass(wxDC) dc );
int        wxNewBitmapButton_Enable( TSelf(wxNewBitmapButton) _obj, TBool enable );
void       wxNewBitmapButton_Realize( TSelf(wxNewBitmapButton) _obj, TClass(wxWindow) _prt, int _id, TRect(_x,_y,_w,_h) );
void       wxNewBitmapButton_RenderAllLabelImages( TSelf(wxNewBitmapButton) _obj );
void       wxNewBitmapButton_RenderLabelImage( TSelf(wxNewBitmapButton) _obj, void* destBmp, void* srcBmp, TBool isEnabled, TBool isPressed );
void       wxNewBitmapButton_RenderLabelImages( TSelf(wxNewBitmapButton) _obj );
void       wxNewBitmapButton_Reshape( TSelf(wxNewBitmapButton) _obj );
void       wxNewBitmapButton_SetAlignments( TSelf(wxNewBitmapButton) _obj, int alignText, int marginX, int marginY, int textToLabelGap );
void       wxNewBitmapButton_SetLabel( TSelf(wxNewBitmapButton) _obj, void* labelBitmap, void* labelText );

/* wxNodeBase */
TClassDef(wxNodeBase)

/* wxNotebook */
TClassDefExtend(wxNotebook,wxControl)
int        wxNotebook_AddPage( TSelf(wxNotebook) _obj, TClass(wxWindow) pPage, TStringVoid strText, TBoolInt bSelect, int imageId );
void       wxNotebook_AdvanceSelection( TSelf(wxNotebook) _obj, TBoolInt bForward );
TClass(wxNotebook) wxNotebook_Create( TClass(wxWindow) _prt, int _id, TRect(_lft,_top,_wdt,_hgt), int _stl );
int        wxNotebook_DeleteAllPages( TSelf(wxNotebook) _obj );
int        wxNotebook_DeletePage( TSelf(wxNotebook) _obj, int nPage );
TClass(wxImageList) wxNotebook_GetImageList( TSelf(wxNotebook) _obj );
TClass(wxWindow)    wxNotebook_GetPage( TSelf(wxNotebook) _obj, int nPage );
int        wxNotebook_GetPageCount( TSelf(wxNotebook) _obj );
int        wxNotebook_GetPageImage( TSelf(wxNotebook) _obj, int nPage );
TStringLen wxNotebook_GetPageText( TSelf(wxNotebook) _obj, int nPage, TStringOutVoid _buf );
int        wxNotebook_GetRowCount( TSelf(wxNotebook) _obj );
int        wxNotebook_GetSelection( TSelf(wxNotebook) _obj );
int        wxNotebook_InsertPage( TSelf(wxNotebook) _obj, int nPage, TClass(wxWindow) pPage, TStringVoid strText, TBoolInt bSelect, int imageId );
int        wxNotebook_RemovePage( TSelf(wxNotebook) _obj, int nPage );
void       wxNotebook_SetImageList( TSelf(wxNotebook) _obj, TClass(wxImageList) imageList );
void       wxNotebook_SetPadding( TSelf(wxNotebook) _obj, TSize(_w,_h) );
int        wxNotebook_SetPageImage( TSelf(wxNotebook) _obj, int nPage, int nImage );
void       wxNotebook_SetPageSize( TSelf(wxNotebook) _obj, TSize(_w,_h) );
int        wxNotebook_SetPageText( TSelf(wxNotebook) _obj, int nPage, TStringVoid strText );
int        wxNotebook_SetSelection( TSelf(wxNotebook) _obj, int nPage );

/* wxNotebookEvent */
TClassDefExtend(wxNotebookEvent,wxNotifyEvent)

/* wxNotebookSizer */
TClassDefExtend(wxNotebookSizer,wxSizer)
void       wxNotebookSizer_CalcMin( TSelf(wxNotebookSizer) _obj, TSizeOutVoid(_w,_h) );
TClass(wxNotebookSizer) wxNotebookSizer_Create( TClass(wxNotebook) nb );
TClass(wxNotebook) wxNotebookSizer_GetNotebook( TSelf(wxNotebookSizer) _obj );
void       wxNotebookSizer_RecalcSizes( TSelf(wxNotebookSizer) _obj );

/* wxNotifyEvent */
TClassDefExtend(wxNotifyEvent,wxCommandEvent)
void       wxNotifyEvent_Allow( TSelf(wxNotifyEvent) _obj );
void       wxNotifyEvent_CopyObject( TSelf(wxNotifyEvent) _obj, void* object_dest );
TBool      wxNotifyEvent_IsAllowed( TSelf(wxNotifyEvent) _obj );
void       wxNotifyEvent_Veto( TSelf(wxNotifyEvent) _obj );

/* wxObject */
TClassDef(wxObject)

/* wxObjectRefData */
TClassDef(wxObjectRefData)

/* wxOutputStream */
TClassDefExtend(wxOutputStream,wxStreamBase)
void       wxOutputStream_Delete( TSelf(wxOutputStream) _obj );
int        wxOutputStream_LastWrite( TSelf(wxOutputStream) _obj );
void       wxOutputStream_PutC( TSelf(wxOutputStream) _obj, TChar c );
int        wxOutputStream_Seek( TSelf(wxOutputStream) _obj, int pos, int mode );
void       wxOutputStream_Sync( TSelf(wxOutputStream) _obj );
int        wxOutputStream_Tell( TSelf(wxOutputStream) _obj );
void       wxOutputStream_Write( TSelf(wxOutputStream) _obj, void* buffer, int size );

/* wxPageSetupDialog */
TClassDefExtend(wxPageSetupDialog,wxDialog)
TClass(wxPageSetupDialog) wxPageSetupDialog_Create( TClass(wxWindow) parent, TClass(wxPageSetupDialogData) data );
void       wxPageSetupDialog_GetPageSetupData( TSelf(wxPageSetupDialog) _obj, TClassRef(wxPageSetupDialogData) _ref );

/* wxPageSetupDialogData */
TClassDefExtend(wxPageSetupDialogData,wxObject)
void       wxPageSetupDialogData_Assign( TSelf(wxPageSetupDialogData) _obj, TClassRef(wxPageSetupDialogData) data );
void       wxPageSetupDialogData_AssignData( TSelf(wxPageSetupDialogData) _obj, TClass(wxPrintData) printData );
void       wxPageSetupDialogData_CalculateIdFromPaperSize( TSelf(wxPageSetupDialogData) _obj );
void       wxPageSetupDialogData_CalculatePaperSizeFromId( TSelf(wxPageSetupDialogData) _obj );
TClass(wxPageSetupDialogData) wxPageSetupDialogData_Create(  );
TClass(wxPageSetupDialogData) wxPageSetupDialogData_CreateFromData( TClass(wxPrintData) printData );
void       wxPageSetupDialogData_Delete( TSelf(wxPageSetupDialogData) _obj );
void       wxPageSetupDialogData_EnableHelp( TSelf(wxPageSetupDialogData) _obj, TBool flag );
void       wxPageSetupDialogData_EnableMargins( TSelf(wxPageSetupDialogData) _obj, TBool flag );
void       wxPageSetupDialogData_EnableOrientation( TSelf(wxPageSetupDialogData) _obj, TBool flag );
void       wxPageSetupDialogData_EnablePaper( TSelf(wxPageSetupDialogData) _obj, TBool flag );
void       wxPageSetupDialogData_EnablePrinter( TSelf(wxPageSetupDialogData) _obj, TBool flag );
TBool      wxPageSetupDialogData_GetDefaultInfo( TSelf(wxPageSetupDialogData) _obj );
TBool      wxPageSetupDialogData_GetDefaultMinMargins( TSelf(wxPageSetupDialogData) _obj );
TBool      wxPageSetupDialogData_GetEnableHelp( TSelf(wxPageSetupDialogData) _obj );
TBool      wxPageSetupDialogData_GetEnableMargins( TSelf(wxPageSetupDialogData) _obj );
TBool      wxPageSetupDialogData_GetEnableOrientation( TSelf(wxPageSetupDialogData) _obj );
TBool      wxPageSetupDialogData_GetEnablePaper( TSelf(wxPageSetupDialogData) _obj );
TBool      wxPageSetupDialogData_GetEnablePrinter( TSelf(wxPageSetupDialogData) _obj );
void       wxPageSetupDialogData_GetMarginBottomRight( TSelf(wxPageSetupDialogData) _obj, TPointOutVoid(_x,_y) );
void       wxPageSetupDialogData_GetMarginTopLeft( TSelf(wxPageSetupDialogData) _obj, TPointOutVoid(_x,_y) );
void       wxPageSetupDialogData_GetMinMarginBottomRight( TSelf(wxPageSetupDialogData) _obj, TPointOutVoid(_x,_y) );
void       wxPageSetupDialogData_GetMinMarginTopLeft( TSelf(wxPageSetupDialogData) _obj, TPointOutVoid(_x,_y) );
int        wxPageSetupDialogData_GetPaperId( TSelf(wxPageSetupDialogData) _obj );
void       wxPageSetupDialogData_GetPaperSize( TSelf(wxPageSetupDialogData) _obj, TSizeOutVoid(_w,_h) );
void       wxPageSetupDialogData_GetPrintData( TSelf(wxPageSetupDialogData) _obj, TClassRef(wxPrintData) _ref );
void       wxPageSetupDialogData_SetDefaultInfo( TSelf(wxPageSetupDialogData) _obj, TBool flag );
void       wxPageSetupDialogData_SetDefaultMinMargins( TSelf(wxPageSetupDialogData) _obj, int flag );
void       wxPageSetupDialogData_SetMarginBottomRight( TSelf(wxPageSetupDialogData) _obj, TPoint(x,y) );
void       wxPageSetupDialogData_SetMarginTopLeft( TSelf(wxPageSetupDialogData) _obj, TPoint(x,y) );
void       wxPageSetupDialogData_SetMinMarginBottomRight( TSelf(wxPageSetupDialogData) _obj, TPoint(x,y) );
void       wxPageSetupDialogData_SetMinMarginTopLeft( TSelf(wxPageSetupDialogData) _obj, TPoint(x,y) );
void       wxPageSetupDialogData_SetPaperId( TSelf(wxPageSetupDialogData) _obj, void* id );
void       wxPageSetupDialogData_SetPaperSize( TSelf(wxPageSetupDialogData) _obj, TSize(w,h) );
void       wxPageSetupDialogData_SetPaperSizeId( TSelf(wxPageSetupDialogData) _obj, int id );
void       wxPageSetupDialogData_SetPrintData( TSelf(wxPageSetupDialogData) _obj, TClass(wxPrintData) printData );

/* wxPaintDC */
TClassDefExtend(wxPaintDC,wxWindowDC)
TClass(wxPaintDC) wxPaintDC_Create( TClass(wxWindow) win );
void       wxPaintDC_Delete( TSelf(wxPaintDC) _obj );

/* wxPaintEvent */
TClassDefExtend(wxPaintEvent,wxEvent)

/* wxPalette */
TClassDefExtend(wxPalette,wxGDIObject)
void       wxPalette_Assign( TSelf(wxPalette) _obj, TClass(wxPalette) palette );
TClass(wxPalette) wxPalette_CreateDefault(  );
TClass(wxPalette) wxPalette_CreateRGB( int n, void* red, void* green, void* blue );
void       wxPalette_Delete( TSelf(wxPalette) _obj );
int        wxPalette_GetPixel( TSelf(wxPalette) _obj, TColorRGB(red,green,blue) );
TBoolInt   wxPalette_GetRGB( TSelf(wxPalette) _obj, int pixel, void* red, void* green, void* blue );
TBool      wxPalette_IsEqual( TSelf(wxPalette) _obj, TClass(wxPalette) palette );
TBool      wxPalette_Ok( TSelf(wxPalette) _obj );

/* wxPaletteChangedEvent */
TClassDefExtend(wxPaletteChangedEvent,wxEvent)
void       wxPaletteChangedEvent_CopyObject( TSelf(wxPaletteChangedEvent) _obj, void* obj );
void*      wxPaletteChangedEvent_GetChangedWindow( TSelf(wxPaletteChangedEvent) _obj );
void       wxPaletteChangedEvent_SetChangedWindow( TSelf(wxPaletteChangedEvent) _obj, TClass(wxWindow) win );

/* wxPanel */
TClassDefExtend(wxPanel,wxWindow)
TClass(wxPanel)  wxPanel_Create( TClass(wxWindow) _prt, int _id, TRect(_lft,_top,_wdt,_hgt), int _stl );
TClass(wxButton) wxPanel_GetDefaultItem( TSelf(wxPanel) _obj );
void       wxPanel_InitDialog( TSelf(wxPanel) _obj );
void       wxPanel_SetDefaultItem( TSelf(wxPanel) _obj, TClass(wxButton) btn );

/* wxPathList */
TClassDefExtend(wxPathList,wxList)

/* wxPen */
TClassDefExtend(wxPen,wxGDIObject)
void       wxPen_Assign( TSelf(wxPen) _obj, TClass(wxPen) pen );
TClass(wxPen) wxPen_CreateDefault(  );
TClass(wxPen) wxPen_CreateFromBitmap( TClass(wxBitmap) stipple, int width );
TClass(wxPen) wxPen_CreateFromColour( TClass(wxColour) col, int width, int style );
TClass(wxPen) wxPen_CreateFromStock( int id );
void       wxPen_Delete( TSelf(wxPen) _obj );
int        wxPen_GetCap( TSelf(wxPen) _obj );
void       wxPen_GetColour( TSelf(wxPen) _obj, TClassRef(wxColour) _ref );
int        wxPen_GetDashes( TSelf(wxPen) _obj, void* ptr );
int        wxPen_GetJoin( TSelf(wxPen) _obj );
void       wxPen_GetStipple( TSelf(wxPen) _obj, TClassRef(wxBitmap) _ref );
int        wxPen_GetStyle( TSelf(wxPen) _obj );
int        wxPen_GetWidth( TSelf(wxPen) _obj );
TBool      wxPen_IsEqual( TSelf(wxPen) _obj, TClass(wxPen) pen );
TBool      wxPen_Ok( TSelf(wxPen) _obj );
void       wxPen_SetCap( TSelf(wxPen) _obj, int cap );
void       wxPen_SetColour( TSelf(wxPen) _obj, TClass(wxColour) col );
void       wxPen_SetColourSingle( TSelf(wxPen) _obj, TChar r, TChar g, TChar b );
void       wxPen_SetDashes( TSelf(wxPen) _obj, int nb_dashes, void* dash );
void       wxPen_SetJoin( TSelf(wxPen) _obj, int join );
void       wxPen_SetStipple( TSelf(wxPen) _obj, TClass(wxBitmap) stipple );
void       wxPen_SetStyle( TSelf(wxPen) _obj, int style );
void       wxPen_SetWidth( TSelf(wxPen) _obj, int width );

/* wxPenList */
TClassDefExtend(wxPenList,wxList)

/* wxPlotCurve */
TClassDefExtend(wxPlotCurve,wxObject)

/* wxPlotEvent */
TClassDefExtend(wxPlotEvent,wxNotifyEvent)
void*      wxPlotEvent_GetCurve( TSelf(wxPlotEvent) _obj );
int        wxPlotEvent_GetPosition( TSelf(wxPlotEvent) _obj );
double     wxPlotEvent_GetZoom( TSelf(wxPlotEvent) _obj );
void       wxPlotEvent_SetPosition( TSelf(wxPlotEvent) _obj, int pos );
void       wxPlotEvent_SetZoom( TSelf(wxPlotEvent) _obj, double zoom );

/* wxPlotOnOffCurve */
TClassDefExtend(wxPlotOnOffCurve,wxObject)
void       wxPlotOnOffCurve_Add( TSelf(wxPlotOnOffCurve) _obj, int on, int off, TClass(wxClientData) clientData );
TClass(wxPlotOnOffCurve) wxPlotOnOffCurve_Create( int offsetY );
void       wxPlotOnOffCurve_Delete( TSelf(wxPlotOnOffCurve) _obj );
void       wxPlotOnOffCurve_DrawOffLine( TSelf(wxPlotOnOffCurve) _obj, TClass(wxDC) dc, int y, int start, int end );
void       wxPlotOnOffCurve_DrawOnLine( TSelf(wxPlotOnOffCurve) _obj, TClass(wxDC) dc, int y, int start, int end, TClass(wxClientData) clientData );
void*      wxPlotOnOffCurve_GetAt( TSelf(wxPlotOnOffCurve) _obj, int index );
TClass(wxClientData) wxPlotOnOffCurve_GetClientData( TSelf(wxPlotOnOffCurve) _obj, int index );
int        wxPlotOnOffCurve_GetCount( TSelf(wxPlotOnOffCurve) _obj );
int        wxPlotOnOffCurve_GetEndX( TSelf(wxPlotOnOffCurve) _obj );
int        wxPlotOnOffCurve_GetOff( TSelf(wxPlotOnOffCurve) _obj, int index );
int        wxPlotOnOffCurve_GetOffsetY( TSelf(wxPlotOnOffCurve) _obj );
int        wxPlotOnOffCurve_GetOn( TSelf(wxPlotOnOffCurve) _obj, int index );
int        wxPlotOnOffCurve_GetStartX( TSelf(wxPlotOnOffCurve) _obj );
void       wxPlotOnOffCurve_SetOffsetY( TSelf(wxPlotOnOffCurve) _obj, int offsetY );

/* wxPlotWindow */
TClassDefExtend(wxPlotWindow,wxScrolledWindow)
void       wxPlotWindow_Add( TSelf(wxPlotWindow) _obj, TClass(wxPlotCurve) curve );
void       wxPlotWindow_AddOnOff( TSelf(wxPlotWindow) _obj, TClass(wxPlotCurve) curve );
TClass(wxPlotWindow) wxPlotWindow_Create( TClass(wxWindow) parent, int id, TRect(x,y,w,h), int flags );
void       wxPlotWindow_Delete( TSelf(wxPlotWindow) _obj, TClass(wxPlotCurve) curve );
void       wxPlotWindow_DeleteOnOff( TSelf(wxPlotWindow) _obj, TClass(wxPlotOnOffCurve) curve );
void       wxPlotWindow_Enlarge( TSelf(wxPlotWindow) _obj, TClass(wxPlotCurve) curve, double factor );
TClass(wxPlotCurve) wxPlotWindow_GetAt( TSelf(wxPlotWindow) _obj, int n );
int        wxPlotWindow_GetCount( TSelf(wxPlotWindow) _obj );
TClass(wxPlotCurve) wxPlotWindow_GetCurrent( TSelf(wxPlotWindow) _obj );
int        wxPlotWindow_GetEnlargeAroundWindowCentre( TSelf(wxPlotWindow) _obj );
TClass(wxPlotOnOffCurve)      wxPlotWindow_GetOnOffCurveAt( TSelf(wxPlotWindow) _obj, int n );
int        wxPlotWindow_GetOnOffCurveCount( TSelf(wxPlotWindow) _obj );
int        wxPlotWindow_GetScrollOnThumbRelease( TSelf(wxPlotWindow) _obj );
double     wxPlotWindow_GetUnitsPerValue( TSelf(wxPlotWindow) _obj );
double     wxPlotWindow_GetZoom( TSelf(wxPlotWindow) _obj );
void       wxPlotWindow_Move( TSelf(wxPlotWindow) _obj, TClass(wxPlotCurve) curve, int pixels_up );
void       wxPlotWindow_RedrawEverything( TSelf(wxPlotWindow) _obj );
void       wxPlotWindow_RedrawXAxis( TSelf(wxPlotWindow) _obj );
void       wxPlotWindow_RedrawYAxis( TSelf(wxPlotWindow) _obj );
void       wxPlotWindow_ResetScrollbar( TSelf(wxPlotWindow) _obj );
void       wxPlotWindow_SetCurrent( TSelf(wxPlotWindow) _obj, TClass(wxPlotCurve) current );
void       wxPlotWindow_SetEnlargeAroundWindowCentre( TSelf(wxPlotWindow) _obj, int enlargeAroundWindowCentre );
void       wxPlotWindow_SetScrollOnThumbRelease( TSelf(wxPlotWindow) _obj, int scrollOnThumbRelease );
void       wxPlotWindow_SetUnitsPerValue( TSelf(wxPlotWindow) _obj, double upv );
void       wxPlotWindow_SetZoom( TSelf(wxPlotWindow) _obj, double zoom );

/* wxPoint */
TClassDef(wxPoint)
TClass(wxPoint) wxPoint_Create( TPoint(xx,yy) );
void       wxPoint_Destroy( TSelf(wxPoint) _obj );
int        wxPoint_GetX( TSelf(wxPoint) _obj );
int        wxPoint_GetY( TSelf(wxPoint) _obj );
void       wxPoint_SetX( TSelf(wxPoint) _obj, int w );
void       wxPoint_SetY( TSelf(wxPoint) _obj, int h );

/* wxPopupTransientWindow */
TClassDefExtend(wxPopupTransientWindow,wxPopupWindow)

/* wxPopupWindow */
TClassDefExtend(wxPopupWindow,wxWindow)

/* wxPostScriptDC */
TClassDefExtend(wxPostScriptDC,wxDC)

/* wxPreviewCanvas */
TClassDefExtend(wxPreviewCanvas,wxScrolledWindow)
TClass(wxPreviewCanvas) wxPreviewCanvas_Create( TClass(wxPrintPreview) preview, TClass(wxWindow) parent, TRect(x,y,w,h), int style );

/* wxPreviewControlBar */
TClassDefExtend(wxPreviewControlBar,wxPanel)

/* wxPreviewFrame */
TClassDefExtend(wxPreviewFrame,wxFrame)

/* wxPrintData */
TClassDefExtend(wxPrintData,wxObject)
void       wxPrintData_Assign( TSelf(wxPrintData) _obj, TClass(wxPrintData) data );
TClass(wxPrintData) wxPrintData_Create(  );
void       wxPrintData_Delete( TSelf(wxPrintData) _obj );
TBool      wxPrintData_GetCollate( TSelf(wxPrintData) _obj );
TBool      wxPrintData_GetColour( TSelf(wxPrintData) _obj );
int        wxPrintData_GetDuplex( TSelf(wxPrintData) _obj );
TStringLen wxPrintData_GetFilename( TSelf(wxPrintData) _obj, TStringOutVoid _ref );
TStringLen wxPrintData_GetFontMetricPath( TSelf(wxPrintData) _obj, TStringOutVoid _ref );
int        wxPrintData_GetNoCopies( TSelf(wxPrintData) _obj );
int        wxPrintData_GetOrientation( TSelf(wxPrintData) _obj );
int        wxPrintData_GetPaperId( TSelf(wxPrintData) _obj );
void       wxPrintData_GetPaperSize( TSelf(wxPrintData) _obj, TSizeOutVoid(_w,_h) );
TStringLen wxPrintData_GetPreviewCommand( TSelf(wxPrintData) _obj, TStringOutVoid _ref );
int        wxPrintData_GetPrintMode( TSelf(wxPrintData) _obj );
TStringLen wxPrintData_GetPrinterCommand( TSelf(wxPrintData) _obj, TStringOutVoid  _ref );
TStringLen wxPrintData_GetPrinterName( TSelf(wxPrintData) _obj, TStringOutVoid _ref );
TStringLen wxPrintData_GetPrinterOptions( TSelf(wxPrintData) _obj, TStringOutVoid _ref );
double     wxPrintData_GetPrinterScaleX( TSelf(wxPrintData) _obj );
double     wxPrintData_GetPrinterScaleY( TSelf(wxPrintData) _obj );
int        wxPrintData_GetPrinterTranslateX( TSelf(wxPrintData) _obj );
int        wxPrintData_GetPrinterTranslateY( TSelf(wxPrintData) _obj );
int        wxPrintData_GetQuality( TSelf(wxPrintData) _obj );
void       wxPrintData_SetCollate( TSelf(wxPrintData) _obj, TBoolInt flag );
void       wxPrintData_SetColour( TSelf(wxPrintData) _obj, TBoolInt colour );
void       wxPrintData_SetDuplex( TSelf(wxPrintData) _obj, int duplex );
void       wxPrintData_SetFilename( TSelf(wxPrintData) _obj, TStringVoid filename );
void       wxPrintData_SetFontMetricPath( TSelf(wxPrintData) _obj, TStringVoid path );
void       wxPrintData_SetNoCopies( TSelf(wxPrintData) _obj, int v );
void       wxPrintData_SetOrientation( TSelf(wxPrintData) _obj, int orient );
void       wxPrintData_SetPaperId( TSelf(wxPrintData) _obj, int sizeId );
void       wxPrintData_SetPaperSize( TSelf(wxPrintData) _obj, TSize(w,h) );
void       wxPrintData_SetPreviewCommand( TSelf(wxPrintData) _obj, TClass(wxCommand) command );
void       wxPrintData_SetPrintMode( TSelf(wxPrintData) _obj, int printMode );
void       wxPrintData_SetPrinterCommand( TSelf(wxPrintData) _obj, TClass(wxCommand) command );
void       wxPrintData_SetPrinterName( TSelf(wxPrintData) _obj, TStringVoid name );
void       wxPrintData_SetPrinterOptions( TSelf(wxPrintData) _obj, TStringVoid options );
void       wxPrintData_SetPrinterScaleX( TSelf(wxPrintData) _obj, double x );
void       wxPrintData_SetPrinterScaleY( TSelf(wxPrintData) _obj, double y );
void       wxPrintData_SetPrinterScaling( TSelf(wxPrintData) _obj, double x, double y );
void       wxPrintData_SetPrinterTranslateX( TSelf(wxPrintData) _obj, int x );
void       wxPrintData_SetPrinterTranslateY( TSelf(wxPrintData) _obj, int y );
void       wxPrintData_SetPrinterTranslation( TSelf(wxPrintData) _obj, TPoint(x,y) );
void       wxPrintData_SetQuality( TSelf(wxPrintData) _obj, int quality );

/* wxPrintDialog */
TClassDefExtend(wxPrintDialog,wxDialog)
TClass(wxPrintDialog) wxPrintDialog_Create( TClass(wxWindow) parent, TClass(wxPrintDialogData) data );
TClass(wxDC)         wxPrintDialog_GetPrintDC( TSelf(wxPrintDialog) _obj );
void       wxPrintDialog_GetPrintData( TSelf(wxPrintDialog) _obj, TClassRef(wxPrintData) _ref );
TClass(wxPrintDialogData) wxPrintDialog_GetPrintDialogData( TSelf(wxPrintDialog) _obj );

/* wxPrintDialogData */
TClassDefExtend(wxPrintDialogData,wxObject)
void       wxPrintDialogData_Assign( TSelf(wxPrintDialogData) _obj, TClass(wxPrintDialogData) data );
void       wxPrintDialogData_AssignData( TSelf(wxPrintDialogData) _obj, TClass(wxPrintData) data );
TClass(wxPrintDialogData) wxPrintDialogData_CreateDefault(  );
TClass(wxPrintDialogData) wxPrintDialogData_CreateFromData( TClass(wxPrintData) printData );
void       wxPrintDialogData_Delete( TSelf(wxPrintDialogData) _obj );
void       wxPrintDialogData_EnableHelp( TSelf(wxPrintDialogData) _obj, TBoolInt flag );
void       wxPrintDialogData_EnablePageNumbers( TSelf(wxPrintDialogData) _obj, TBoolInt flag );
void       wxPrintDialogData_EnablePrintToFile( TSelf(wxPrintDialogData) _obj, TBoolInt flag );
void       wxPrintDialogData_EnableSelection( TSelf(wxPrintDialogData) _obj, TBoolInt flag );
int        wxPrintDialogData_GetAllPages( TSelf(wxPrintDialogData) _obj );
TBoolInt   wxPrintDialogData_GetCollate( TSelf(wxPrintDialogData) _obj );
TBoolInt   wxPrintDialogData_GetEnableHelp( TSelf(wxPrintDialogData) _obj );
TBoolInt   wxPrintDialogData_GetEnablePageNumbers( TSelf(wxPrintDialogData) _obj );
TBoolInt   wxPrintDialogData_GetEnablePrintToFile( TSelf(wxPrintDialogData) _obj );
TBoolInt   wxPrintDialogData_GetEnableSelection( TSelf(wxPrintDialogData) _obj );
int        wxPrintDialogData_GetFromPage( TSelf(wxPrintDialogData) _obj );
int        wxPrintDialogData_GetMaxPage( TSelf(wxPrintDialogData) _obj );
int        wxPrintDialogData_GetMinPage( TSelf(wxPrintDialogData) _obj );
int        wxPrintDialogData_GetNoCopies( TSelf(wxPrintDialogData) _obj );
void       wxPrintDialogData_GetPrintData( TSelf(wxPrintDialogData) _obj, TClassRef(wxPrintData) _ref );
TBoolInt   wxPrintDialogData_GetPrintToFile( TSelf(wxPrintDialogData) _obj );
TBoolInt   wxPrintDialogData_GetSelection( TSelf(wxPrintDialogData) _obj );
TBoolInt   wxPrintDialogData_GetSetupDialog( TSelf(wxPrintDialogData) _obj );
int        wxPrintDialogData_GetToPage( TSelf(wxPrintDialogData) _obj );
void       wxPrintDialogData_SetAllPages( TSelf(wxPrintDialogData) _obj, TBoolInt flag );
void       wxPrintDialogData_SetCollate( TSelf(wxPrintDialogData) _obj, TBoolInt flag );
void       wxPrintDialogData_SetFromPage( TSelf(wxPrintDialogData) _obj, int v );
void       wxPrintDialogData_SetMaxPage( TSelf(wxPrintDialogData) _obj, int v );
void       wxPrintDialogData_SetMinPage( TSelf(wxPrintDialogData) _obj, int v );
void       wxPrintDialogData_SetNoCopies( TSelf(wxPrintDialogData) _obj, int v );
void       wxPrintDialogData_SetPrintData( TSelf(wxPrintDialogData) _obj, TClass(wxPrintData) printData );
void       wxPrintDialogData_SetPrintToFile( TSelf(wxPrintDialogData) _obj, TBoolInt flag );
void       wxPrintDialogData_SetSelection( TSelf(wxPrintDialogData) _obj, TBoolInt flag );
void       wxPrintDialogData_SetSetupDialog( TSelf(wxPrintDialogData) _obj, TBoolInt flag );
void       wxPrintDialogData_SetToPage( TSelf(wxPrintDialogData) _obj, int v );

/* wxPrintPreview */
TClassDefExtend(wxPrintPreview,wxObject)
TClass(wxPrintPreview) wxPrintPreview_CreateFromData( TClass(wxPrintout) printout, TClass(wxPrintout) printoutForPrinting, TClass(wxPrintData) data );
TClass(wxPrintPreview) wxPrintPreview_CreateFromDialogData( TClass(wxPrintout) printout, TClass(wxPrintout) printoutForPrinting, TClass(wxPrintDialogData) data );
void       wxPrintPreview_Delete( TSelf(wxPrintPreview) _obj );
void       wxPrintPreview_DetermineScaling( TSelf(wxPrintPreview) _obj );
TBoolInt   wxPrintPreview_DrawBlankPage( TSelf(wxPrintPreview) _obj, TClass(wxPreviewCanvas) canvas, TClass(wxDC) dc );
TClass(wxPreviewCanvas)  wxPrintPreview_GetCanvas( TSelf(wxPrintPreview) _obj );
int        wxPrintPreview_GetCurrentPage( TSelf(wxPrintPreview) _obj );
TClass(wxFrame) wxPrintPreview_GetFrame( TSelf(wxPrintPreview) _obj );
int        wxPrintPreview_GetMaxPage( TSelf(wxPrintPreview) _obj );
int        wxPrintPreview_GetMinPage( TSelf(wxPrintPreview) _obj );
void       wxPrintPreview_GetPrintDialogData( TSelf(wxPrintPreview) _obj, TClassRef(wxPrintDialogData) _ref );
TClass(wxPrintout) wxPrintPreview_GetPrintout( TSelf(wxPrintPreview) _obj );
TClass(wxPrintout) wxPrintPreview_GetPrintoutForPrinting( TSelf(wxPrintPreview) _obj );
int        wxPrintPreview_GetZoom( TSelf(wxPrintPreview) _obj );
TBool      wxPrintPreview_Ok( TSelf(wxPrintPreview) _obj );
TBoolInt   wxPrintPreview_PaintPage( TSelf(wxPrintPreview) _obj, TClass(wxPrintPreview) canvas, TClass(wxDC) dc );
TBoolInt   wxPrintPreview_Print( TSelf(wxPrintPreview) _obj, TBoolInt interactive );
TBoolInt   wxPrintPreview_RenderPage( TSelf(wxPrintPreview) _obj, int pageNum );
void       wxPrintPreview_SetCanvas( TSelf(wxPrintPreview) _obj, TClass(wxPreviewCanvas) canvas );
TBoolInt   wxPrintPreview_SetCurrentPage( TSelf(wxPrintPreview) _obj, int pageNum );
void       wxPrintPreview_SetFrame( TSelf(wxPrintPreview) _obj, TClass(wxFrame) frame );
void       wxPrintPreview_SetOk( TSelf(wxPrintPreview) _obj, TBoolInt ok );
void       wxPrintPreview_SetPrintout( TSelf(wxPrintPreview) _obj, TClass(wxPrintout) printout );
void       wxPrintPreview_SetZoom( TSelf(wxPrintPreview) _obj, int percent );

/* wxPrinter */
TClassDefExtend(wxPrinter,wxObject)
TClass(wxPrinter) wxPrinter_Create( TClass(wxPrintDialogData) data );
TClass(wxWindow)  wxPrinter_CreateAbortWindow( TSelf(wxPrinter) _obj, TClass(wxWindow) parent, TClass(wxPrintout) printout );
void       wxPrinter_Delete( TSelf(wxPrinter) _obj );
TBoolInt   wxPrinter_GetAbort( TSelf(wxPrinter) _obj );
int        wxPrinter_GetLastError( TSelf(wxPrinter) _obj );
void       wxPrinter_GetPrintDialogData( TSelf(wxPrinter) _obj, TClassRef(wxPrintDialogData) _ref );
TBoolInt   wxPrinter_Print( TSelf(wxPrinter) _obj, TClass(wxWindow) parent, TClass(wxPrintout) printout, TBoolInt prompt );
TClass(wxDC)  wxPrinter_PrintDialog( TSelf(wxPrinter) _obj, TClass(wxWindow) parent );
void       wxPrinter_ReportError( TSelf(wxPrinter) _obj, TClass(wxWindow) parent, TClass(wxPrintout) printout, TStringVoid message );
TBoolInt   wxPrinter_Setup( TSelf(wxPrinter) _obj, TClass(wxWindow) parent );

/* wxPrinterDC */
TClassDefExtend(wxPrinterDC,wxDC)

/* wxPrintout */
TClassDefExtend(wxPrintout,wxObject)

/* wxPrivateDropTarget */
TClassDefExtend(wxPrivateDropTarget,wxDropTarget)

/* wxProcess */
TClassDefExtend(wxProcess,wxEvtHandler)
void       wxProcess_CloseOutput( TSelf(wxProcess) _obj );
TClass(wxProcess) wxProcess_CreateDefault( TClass(wxWindow) _prt, int _id );
TClass(wxProcess) wxProcess_CreateRedirect( TClass(wxWindow) _prt, TBool _rdr );
void       wxProcess_Delete( TSelf(wxProcess) _obj );
void       wxProcess_Detach( TSelf(wxProcess) _obj );
TClass(wxInputStream) wxProcess_GetErrorStream( TSelf(wxProcess) _obj );
TClass(wxInputStream) wxProcess_GetInputStream( TSelf(wxProcess) _obj );
TClass(wxOutputStream) wxProcess_GetOutputStream( TSelf(wxProcess) _obj );
TBool      wxProcess_IsRedirected( TSelf(wxProcess) _obj );
void       wxProcess_Redirect( TSelf(wxProcess) _obj );

/* wxProcessEvent */
TClassDefExtend(wxProcessEvent,wxEvent)
int        wxProcessEvent_GetExitCode( TSelf(wxProcessEvent) _obj );
int        wxProcessEvent_GetPid( TSelf(wxProcessEvent) _obj );

/* wxProgressDialog */
TClassDefExtend(wxProgressDialog,wxFrame)

/* wxProtocol */
TClassDefExtend(wxProtocol,wxSocketClient)

/* wxQuantize */
TClassDefExtend(wxQuantize,wxObject)

/* wxQueryCol */
TClassDefExtend(wxQueryCol,wxObject)

/* wxQueryField */
TClassDefExtend(wxQueryField,wxObject)

/* wxQueryLayoutInfoEvent */
TClassDefExtend(wxQueryLayoutInfoEvent,wxEvent)
TClass(wxQueryLayoutInfoEvent) wxQueryLayoutInfoEvent_Create( int id );
int        wxQueryLayoutInfoEvent_GetAlignment( TSelf(wxQueryLayoutInfoEvent) _obj );
int        wxQueryLayoutInfoEvent_GetFlags( TSelf(wxQueryLayoutInfoEvent) _obj );
int        wxQueryLayoutInfoEvent_GetOrientation( TSelf(wxQueryLayoutInfoEvent) _obj );
int        wxQueryLayoutInfoEvent_GetRequestedLength( TSelf(wxQueryLayoutInfoEvent) _obj );
void       wxQueryLayoutInfoEvent_GetSize( TSelf(wxQueryLayoutInfoEvent) _obj, TSizeOutVoid(_w,_h) );
void       wxQueryLayoutInfoEvent_SetAlignment( TSelf(wxQueryLayoutInfoEvent) _obj, int align );
void       wxQueryLayoutInfoEvent_SetFlags( TSelf(wxQueryLayoutInfoEvent) _obj, int flags );
void       wxQueryLayoutInfoEvent_SetOrientation( TSelf(wxQueryLayoutInfoEvent) _obj, int orient );
void       wxQueryLayoutInfoEvent_SetRequestedLength( TSelf(wxQueryLayoutInfoEvent) _obj, int length );
void       wxQueryLayoutInfoEvent_SetSize( TSelf(wxQueryLayoutInfoEvent) _obj, TSize(w,h) );

/* wxQueryNewPaletteEvent */
TClassDefExtend(wxQueryNewPaletteEvent,wxEvent)
void       wxQueryNewPaletteEvent_CopyObject( TSelf(wxQueryNewPaletteEvent) _obj, void* obj );
int        wxQueryNewPaletteEvent_GetPaletteRealized( TSelf(wxQueryNewPaletteEvent) _obj );
void       wxQueryNewPaletteEvent_SetPaletteRealized( TSelf(wxQueryNewPaletteEvent) _obj, int realized );

/* wxRadioBox */
TClassDefExtend(wxRadioBox,wxControl)
TClass(wxRadioBox) wxRadioBox_Create( TClass(wxWindow) _prt, int _id, TString _txt, TRect(_lft,_top,_wdt,_hgt), TArrayString(n, _str), int _dim, int _stl );
void       wxRadioBox_EnableItem( TSelf(wxRadioBox) _obj, int item, TBoolInt enable );
int        wxRadioBox_FindString( TSelf(wxRadioBox) _obj, TStringVoid s );
TStringLen wxRadioBox_GetItemLabel( TSelf(wxRadioBox) _obj, int item, TStringOutVoid _buf );
int        wxRadioBox_GetNumberOfRowsOrCols( TSelf(wxRadioBox) _obj );
int        wxRadioBox_GetSelection( TSelf(wxRadioBox) _obj );
TStringLen wxRadioBox_GetStringSelection( TSelf(wxRadioBox) _obj, TStringOutVoid _buf );
int        wxRadioBox_Number( TSelf(wxRadioBox) _obj );
void       wxRadioBox_SetItemBitmap( TSelf(wxRadioBox) _obj, int item, TClass(wxBitmap) bitmap );
void       wxRadioBox_SetItemLabel( TSelf(wxRadioBox) _obj, int item, TStringVoid label );
void       wxRadioBox_SetNumberOfRowsOrCols( TSelf(wxRadioBox) _obj, int n );
void       wxRadioBox_SetSelection( TSelf(wxRadioBox) _obj, int _n );
void       wxRadioBox_SetStringSelection( TSelf(wxRadioBox) _obj, TStringVoid s );
void       wxRadioBox_ShowItem( TSelf(wxRadioBox) _obj, int item, TBoolInt show );

/* wxRadioButton */
TClassDefExtend(wxRadioButton,wxControl)
TClass(wxRadioButton) wxRadioButton_Create( TClass(wxWindow) _prt, int _id, TString _txt, TRect(_lft,_top,_wdt,_hgt), int _stl );
int        wxRadioButton_GetValue( TSelf(wxRadioButton) _obj );
void       wxRadioButton_SetValue( TSelf(wxRadioButton) _obj, int value );

/* wxRealPoint */
TClassDef(wxRealPoint)

/* wxRecordSet */
TClassDefExtend(wxRecordSet,wxObject)

/* wxRect */
TClassDef(wxRect)

/* wxRegEx */
TClassDef(wxRegEx)

/* wxRegion */
TClassDefExtend(wxRegion,wxGDIObject)
void       wxRegion_Assign( TSelf(wxRegion) _obj, TClass(wxRegion) region );
void       wxRegion_Clear( TSelf(wxRegion) _obj );
TBool      wxRegion_ContainsPoint( TSelf(wxRegion) _obj, TPoint(x,y) );
TBool      wxRegion_ContainsRect( TSelf(wxRegion) _obj, TRect(x,y,width,height) );
TClass(wxRegion) wxRegion_CreateDefault(  );
TClass(wxRegion) wxRegion_CreateFromRect( TRect(x,y,w,h) );
void       wxRegion_Delete( TSelf(wxRegion) _obj );
int        wxRegion_Empty( TSelf(wxRegion) _obj );
void       wxRegion_GetBox( TSelf(wxRegion) _obj, TRectOutVoid(_x,_y,_w,_h) );
int        wxRegion_IntersectRect( TSelf(wxRegion) _obj, TRect(x,y,width,height) );
int        wxRegion_IntersectRegion( TSelf(wxRegion) _obj, TClass(wxRegion) region );
int        wxRegion_SubtractRect( TSelf(wxRegion) _obj, TRect(x,y,width,height) );
int        wxRegion_SubtractRegion( TSelf(wxRegion) _obj, TClass(wxRegion) region );
int        wxRegion_UnionRect( TSelf(wxRegion) _obj, TRect(x,y,width,height) );
int        wxRegion_UnionRegion( TSelf(wxRegion) _obj, TClass(wxRegion) region );
int        wxRegion_XorRect( TSelf(wxRegion) _obj, TRect(x,y,width,height) );
int        wxRegion_XorRegion( TSelf(wxRegion) _obj, TClass(wxRegion) region );

/* wxRegionIterator */
TClassDefExtend(wxRegionIterator,wxObject)
TClass(wxRegionIterator) wxRegionIterator_Create(  );
TClass(wxRegionIterator) wxRegionIterator_CreateFromRegion( TClass(wxRegion) region );
void       wxRegionIterator_Delete( TSelf(wxRegionIterator) _obj );
int        wxRegionIterator_GetHeight( TSelf(wxRegionIterator) _obj );
int        wxRegionIterator_GetWidth( TSelf(wxRegionIterator) _obj );
int        wxRegionIterator_GetX( TSelf(wxRegionIterator) _obj );
int        wxRegionIterator_GetY( TSelf(wxRegionIterator) _obj );
int        wxRegionIterator_HaveRects( TSelf(wxRegionIterator) _obj );
void       wxRegionIterator_Next( TSelf(wxRegionIterator) _obj );
void       wxRegionIterator_Reset( TSelf(wxRegionIterator) _obj );
void       wxRegionIterator_ResetToRegion( TSelf(wxRegionIterator) _obj, TClass(wxRegion) region );

/* wxRemotelyScrolledTreeCtrl */
TClassDefExtend(wxRemotelyScrolledTreeCtrl,wxTreeCtrl)
void       wxRemotelyScrolledTreeCtrl_AdjustRemoteScrollbars( TSelf(wxRemotelyScrolledTreeCtrl) _obj );
void       wxRemotelyScrolledTreeCtrl_CalcTreeSize( TSelf(wxRemotelyScrolledTreeCtrl) _obj, TRectOutVoid(_x,_y,_w,_h) );
void       wxRemotelyScrolledTreeCtrl_CalcTreeSizeItem( TSelf(wxRemotelyScrolledTreeCtrl) _obj, void* id, TRectOutVoid(_x,_y,_w,_h) );
TClass(wxRemotelyScrolledTreeCtrl) wxRemotelyScrolledTreeCtrl_Create( void* _obj, void* _cmp, TClass(wxWindow) parent, int id, TRect(x,y,w,h), int style );
void       wxRemotelyScrolledTreeCtrl_Delete( TSelf(wxRemotelyScrolledTreeCtrl) _obj );
void*      wxRemotelyScrolledTreeCtrl_GetCompanionWindow( TSelf(wxRemotelyScrolledTreeCtrl) _obj );
int        wxRemotelyScrolledTreeCtrl_GetScrollPos( TSelf(wxRemotelyScrolledTreeCtrl) _obj, int orient );
TClass(wxScrolledWindow) wxRemotelyScrolledTreeCtrl_GetScrolledWindow( TSelf(wxRemotelyScrolledTreeCtrl) _obj );
void       wxRemotelyScrolledTreeCtrl_GetViewStart( TSelf(wxRemotelyScrolledTreeCtrl) _obj, TPointOutVoid(_x,_y) );
void       wxRemotelyScrolledTreeCtrl_HideVScrollbar( TSelf(wxRemotelyScrolledTreeCtrl) _obj );
void       wxRemotelyScrolledTreeCtrl_PrepareDC( TSelf(wxRemotelyScrolledTreeCtrl) _obj, TClass(wxDC) dc );
void       wxRemotelyScrolledTreeCtrl_ScrollToLine( TSelf(wxRemotelyScrolledTreeCtrl) _obj, int posHoriz, int posVert );
void       wxRemotelyScrolledTreeCtrl_SetCompanionWindow( TSelf(wxRemotelyScrolledTreeCtrl) _obj, void* companion );
void       wxRemotelyScrolledTreeCtrl_SetScrollbars( TSelf(wxRemotelyScrolledTreeCtrl) _obj, int pixelsPerUnitX, int pixelsPerUnitY, int noUnitsX, int noUnitsY, int xPos, int yPos, int noRefresh );

/* wxSVGFileDC */
TClassDefExtend(wxSVGFileDC,wxDC)
void*      wxSVGFileDC_ComputeScaleAndOrigin( TSelf(wxSVGFileDC) obj );
TClass(wxSVGFileDC) wxSVGFileDC_Create( void* f );
void*      wxSVGFileDC_CreateWithSize( TSelf(wxSVGFileDC) f, int a_width, int a_height );
void*      wxSVGFileDC_CreateWithSizeAndResolution( TSelf(wxSVGFileDC) f, int a_width, int a_height, float a_dpi );
void*      wxSVGFileDC_Delete( TSelf(wxSVGFileDC) obj );

/* wxSashEvent */
TClassDefExtend(wxSashEvent,wxEvent)
TClass(wxSashEvent) wxSashEvent_Create( int id, int edge );
void       wxSashEvent_GetDragRect( TSelf(wxSashEvent) _obj, TRectOutVoid(_x,_y,_w,_h) );
int        wxSashEvent_GetDragStatus( TSelf(wxSashEvent) _obj );
int        wxSashEvent_GetEdge( TSelf(wxSashEvent) _obj );
void       wxSashEvent_SetDragRect( TSelf(wxSashEvent) _obj, TRect(x,y,w,h) );
void       wxSashEvent_SetDragStatus( TSelf(wxSashEvent) _obj, int status );
void       wxSashEvent_SetEdge( TSelf(wxSashEvent) _obj, int edge );

/* wxSashLayoutWindow */
TClassDefExtend(wxSashLayoutWindow,wxSashWindow)
TClass(wxSashLayoutWindow) wxSashLayoutWindow_Create( TClass(wxWindow) _par, int _id, TRect(_x,_y,_w,_h), int _stl );
int        wxSashLayoutWindow_GetAlignment( TSelf(wxSashLayoutWindow) _obj );
int        wxSashLayoutWindow_GetOrientation( TSelf(wxSashLayoutWindow) _obj );
void       wxSashLayoutWindow_SetAlignment( TSelf(wxSashLayoutWindow) _obj, int align );
void       wxSashLayoutWindow_SetDefaultSize( TSelf(wxSashLayoutWindow) _obj, TSize(w,h) );
void       wxSashLayoutWindow_SetOrientation( TSelf(wxSashLayoutWindow) _obj, int orient );

/* wxSashWindow */
TClassDefExtend(wxSashWindow,wxWindow)
TClass(wxSashWindow) wxSashWindow_Create( TClass(wxWindow) _par, int _id, TRect(_x,_y,_w,_h), int _stl );
int        wxSashWindow_GetDefaultBorderSize( TSelf(wxSashWindow) _obj );
int        wxSashWindow_GetEdgeMargin( TSelf(wxSashWindow) _obj, int edge );
int        wxSashWindow_GetExtraBorderSize( TSelf(wxSashWindow) _obj );
int        wxSashWindow_GetMaximumSizeX( TSelf(wxSashWindow) _obj );
int        wxSashWindow_GetMaximumSizeY( TSelf(wxSashWindow) _obj );
int        wxSashWindow_GetMinimumSizeX( TSelf(wxSashWindow) _obj );
int        wxSashWindow_GetMinimumSizeY( TSelf(wxSashWindow) _obj );
int        wxSashWindow_GetSashVisible( TSelf(wxSashWindow) _obj, int edge );
TBool      wxSashWindow_HasBorder( TSelf(wxSashWindow) _obj, int edge );
void       wxSashWindow_SetDefaultBorderSize( TSelf(wxSashWindow) _obj, int width );
void       wxSashWindow_SetExtraBorderSize( TSelf(wxSashWindow) _obj, int width );
void       wxSashWindow_SetMaximumSizeX( TSelf(wxSashWindow) _obj, int max );
void       wxSashWindow_SetMaximumSizeY( TSelf(wxSashWindow) _obj, int max );
void       wxSashWindow_SetMinimumSizeX( TSelf(wxSashWindow) _obj, int min );
void       wxSashWindow_SetMinimumSizeY( TSelf(wxSashWindow) _obj, int min );
void       wxSashWindow_SetSashBorder( TSelf(wxSashWindow) _obj, int edge, int border );
void       wxSashWindow_SetSashVisible( TSelf(wxSashWindow) _obj, int edge, int sash );

/* wxScintilla */
TClassDef(wxScintilla)
TClass(wxScintilla) wxScintilla_Create( void* obj, void* fnc, TClass(wxWindow) _prt, int _id, TRect(_lft,_top,_wdt,_hgt), int _stl );
int        wxScintilla_Exec( TSelf(wxScintilla) obj, int code, int param1, int param2 );

/* wxScopedArray */
TClassDef(wxScopedArray)

/* wxScopedPtr */
TClassDef(wxScopedPtr)

/* wxScreenDC */
TClassDefExtend(wxScreenDC,wxDC)
TClass(wxScreenDC) wxScreenDC_Create(  );
void       wxScreenDC_Delete( TSelf(wxScreenDC) _obj );
int        wxScreenDC_EndDrawingOnTop( TSelf(wxScreenDC) _obj );
int        wxScreenDC_StartDrawingOnTop( TSelf(wxScreenDC) _obj, int l, int t, TSize(w,h) );
int        wxScreenDC_StartDrawingOnTopOfWin( TSelf(wxScreenDC) _obj, TClass(wxWindow) win );

/* wxScrollBar */
TClassDefExtend(wxScrollBar,wxControl)
TClass(wxScrollBar) wxScrollBar_Create( TClass(wxWindow) _prt, int _id, TRect(_lft,_top,_wdt,_hgt), int _stl );
int        wxScrollBar_GetPageSize( TSelf(wxScrollBar) _obj );
int        wxScrollBar_GetRange( TSelf(wxScrollBar) _obj );
int        wxScrollBar_GetThumbPosition( TSelf(wxScrollBar) _obj );
int        wxScrollBar_GetThumbSize( TSelf(wxScrollBar) _obj );
void       wxScrollBar_SetScrollbar( TSelf(wxScrollBar) _obj, int position, int thumbSize, int range, int pageSize, TBool refresh );
void       wxScrollBar_SetThumbPosition( TSelf(wxScrollBar) _obj, int viewStart );

/* wxScrollEvent */
TClassDefExtend(wxScrollEvent,wxEvent)
int        wxScrollEvent_GetOrientation( TSelf(wxScrollEvent) _obj );
int        wxScrollEvent_GetPosition( TSelf(wxScrollEvent) _obj );

/* wxScrollWinEvent */
TClassDefExtend(wxScrollWinEvent,wxEvent)
int        wxScrollWinEvent_GetOrientation( TSelf(wxScrollWinEvent) _obj );
int        wxScrollWinEvent_GetPosition( TSelf(wxScrollWinEvent) _obj );
void       wxScrollWinEvent_SetOrientation( TSelf(wxScrollWinEvent) _obj, int orient );
void       wxScrollWinEvent_SetPosition( TSelf(wxScrollWinEvent) _obj, int pos );

/* wxScrolledWindow */
TClassDefExtend(wxScrolledWindow,wxPanel)
void       wxScrolledWindow_AdjustScrollbars( TSelf(wxScrolledWindow) _obj );
void       wxScrolledWindow_CalcScrolledPosition( TSelf(wxScrolledWindow) _obj, TPoint(x,y), TPointOutVoid(xx,yy) );
void       wxScrolledWindow_CalcUnscrolledPosition( TSelf(wxScrolledWindow) _obj, TPoint(x,y), TPointOutVoid(xx,yy) );
TClass(wxScrolledWindow) wxScrolledWindow_Create( TClass(wxWindow) _prt, int _id, TRect(_lft,_top,_wdt,_hgt), int _stl );
void       wxScrolledWindow_EnableScrolling( TSelf(wxScrolledWindow) _obj, TBool x_scrolling, TBool y_scrolling );
double     wxScrolledWindow_GetScaleX( TSelf(wxScrolledWindow) _obj );
double     wxScrolledWindow_GetScaleY( TSelf(wxScrolledWindow) _obj );
int        wxScrolledWindow_GetScrollPageSize( TSelf(wxScrolledWindow) _obj, int orient );
void       wxScrolledWindow_GetScrollPixelsPerUnit( TSelf(wxScrolledWindow) _obj, TPointOutVoid(_x,_y) );
TClass(wxWindow) wxScrolledWindow_GetTargetWindow( TSelf(wxScrolledWindow) _obj );
void       wxScrolledWindow_GetViewStart( TSelf(wxScrolledWindow) _obj, TPointOutVoid(_x,_y) );
void       wxScrolledWindow_GetVirtualSize( TSelf(wxScrolledWindow) _obj, TSizeOutVoid(_x,_y) );
void       wxScrolledWindow_OnDraw( TSelf(wxScrolledWindow) _obj, TClass(wxDC) dc );
void       wxScrolledWindow_PrepareDC( TSelf(wxScrolledWindow) _obj, TClass(wxDC) dc );
void       wxScrolledWindow_Scroll( TSelf(wxScrolledWindow) _obj, TPoint(x_pos,y_pos) );
void       wxScrolledWindow_SetScale( TSelf(wxScrolledWindow) _obj, double xs, double ys );
void       wxScrolledWindow_SetScrollPageSize( TSelf(wxScrolledWindow) _obj, int orient, int pageSize );
void       wxScrolledWindow_SetScrollbars( TSelf(wxScrolledWindow) _obj, int pixelsPerUnitX, int pixelsPerUnitY, int noUnitsX, int noUnitsY, int xPos, int yPos, TBoolInt noRefresh );
void       wxScrolledWindow_SetTargetWindow( TSelf(wxScrolledWindow) _obj, TClass(wxWindow) target );
void       wxScrolledWindow_ViewStart( TSelf(wxScrolledWindow) _obj, TPointOutVoid(_x,_y) );

/* wxSemaphore */
TClassDef(wxSemaphore)

/* wxServer */
TClassDefExtend(wxServer,wxServerBase)

/* wxServerBase */
TClassDefExtend(wxServerBase,wxObject)

/* wxSetCursorEvent */
TClassDefExtend(wxSetCursorEvent,wxEvent)
TClass(wxCursor) wxSetCursorEvent_GetCursor( TSelf(wxSetCursorEvent) _obj );
int        wxSetCursorEvent_GetX( TSelf(wxSetCursorEvent) _obj );
int        wxSetCursorEvent_GetY( TSelf(wxSetCursorEvent) _obj );
TBool      wxSetCursorEvent_HasCursor( TSelf(wxSetCursorEvent) _obj );
void       wxSetCursorEvent_SetCursor( TSelf(wxSetCursorEvent) _obj, TClass(wxCursor) cursor );

/* wxShowEvent */
TClassDefExtend(wxShowEvent,wxEvent)
void       wxShowEvent_CopyObject( TSelf(wxShowEvent) _obj, void* obj );
int        wxShowEvent_GetShow( TSelf(wxShowEvent) _obj );
void       wxShowEvent_SetShow( TSelf(wxShowEvent) _obj, int show );

/* wxSimpleHelpProvider */
TClassDefExtend(wxSimpleHelpProvider,wxHelpProvider)
TClass(wxSimpleHelpProvider) wxSimpleHelpProvider_Create(  );

/* wxSingleChoiceDialog */
TClassDefExtend(wxSingleChoiceDialog,wxDialog)

/* wxSingleInstanceChecker */
TClassDef(wxSingleInstanceChecker)
int        wxSingleInstanceChecker_Create( void* _obj, TStringVoid name, TStringVoid path );
TClass(wxSingleInstanceChecker) wxSingleInstanceChecker_CreateDefault(  );
void       wxSingleInstanceChecker_Delete( TSelf(wxSingleInstanceChecker) _obj );
TBool      wxSingleInstanceChecker_IsAnotherRunning( TSelf(wxSingleInstanceChecker) _obj );

/* wxSize */
TClassDef(wxSize)
TClass(wxSize) wxSize_Create( TSize(w,h) );
void       wxSize_Destroy( TSelf(wxSize) _obj );
int        wxSize_GetHeight( TSelf(wxSize) _obj );
int        wxSize_GetWidth( TSelf(wxSize) _obj );
void       wxSize_SetHeight( TSelf(wxSize) _obj, int h );
void       wxSize_SetWidth( TSelf(wxSize) _obj, int w );

/* wxSizeEvent */
TClassDefExtend(wxSizeEvent,wxEvent)
void       wxSizeEvent_CopyObject( TSelf(wxSizeEvent) _obj, void* obj );
void       wxSizeEvent_GetSize( TSelf(wxSizeEvent) _obj, TSizeOut(_w,_h) );

/* wxSizer */
TClassDefExtend(wxSizer,wxObject)
void       wxSizer_Add( TSelf(wxSizer) _obj, TSize(width,height), int option, int flag, int border, void* userData );
void       wxSizer_AddSizer( TSelf(wxSizer) _obj, TClass(wxSizer) sizer, int option, int flag, int border, void* userData );
void       wxSizer_AddWindow( TSelf(wxSizer) _obj, TClass(wxWindow) window, int option, int flag, int border, void* userData );
void       wxSizer_CalcMin( TSelf(wxSizer) _obj, TSizeOutVoid(_w,_h) );
void       wxSizer_Fit( TSelf(wxSizer) _obj, TClass(wxWindow) window );
int        wxSizer_GetChildren( TSelf(wxSizer) _obj, void* _res, int _cnt );
void       wxSizer_GetMinSize( TSelf(wxSizer) _obj, TSizeOutVoid(_w,_h) );
void       wxSizer_GetPosition( TSelf(wxSizer) _obj, TPointOutVoid(_x,_y) );
void       wxSizer_GetSize( TSelf(wxSizer) _obj, TSizeOutVoid(_w,_h) );
void       wxSizer_Insert( TSelf(wxSizer) _obj, int before, TSize(width,height), int option, int flag, int border, void* userData );
void       wxSizer_InsertSizer( TSelf(wxSizer) _obj, int before, TClass(wxSizer) sizer, int option, int flag, int border, void* userData );
void       wxSizer_InsertWindow( TSelf(wxSizer) _obj, int before, TClass(wxWindow) window, int option, int flag, int border, void* userData );
void       wxSizer_Layout( TSelf(wxSizer) _obj );
void       wxSizer_Prepend( TSelf(wxSizer) _obj, TSize(width,height), int option, int flag, int border, void* userData );
void       wxSizer_PrependSizer( TSelf(wxSizer) _obj, TClass(wxSizer) sizer, int option, int flag, int border, void* userData );
void       wxSizer_PrependWindow( TSelf(wxSizer) _obj, TClass(wxWindow) window, int option, int flag, int border, void* userData );
void       wxSizer_RecalcSizes( TSelf(wxSizer) _obj );
int        wxSizer_Remove( TSelf(wxSizer) _obj, int pos );
int        wxSizer_RemoveSizer( TSelf(wxSizer) _obj, TClass(wxSizer) sizer );
int        wxSizer_RemoveWindow( TSelf(wxSizer) _obj, TClass(wxWindow) window );
void       wxSizer_SetDimension( TSelf(wxSizer) _obj, TRect(x,y,width,height) );
void       wxSizer_SetItemMinSize( TSelf(wxSizer) _obj, int pos, TSize(width,height) );
void       wxSizer_SetItemMinSizeSizer( TSelf(wxSizer) _obj, TClass(wxSizer) sizer, TSize(width,height) );
void       wxSizer_SetItemMinSizeWindow( TSelf(wxSizer) _obj, TClass(wxWindow) window, TSize(width,height) );
void       wxSizer_SetMinSize( TSelf(wxSizer) _obj, TSize(width,height) );
void       wxSizer_SetSizeHints( TSelf(wxSizer) _obj, TClass(wxWindow) window );

/* wxSizerItem */
TClassDefExtend(wxSizerItem,wxObject)
void       wxSizerItem_CalcMin( TSelf(wxSizerItem) _obj, TSizeOutVoid(_w,_h) );
TClass(wxSizerItem) wxSizerItem_Create( TSize(width,height), int option, int flag, int border, void* userData );
void*      wxSizerItem_CreateInSizer( TClass(wxSizer) sizer, int option, int flag, int border, void* userData );
void*      wxSizerItem_CreateInWindow( TClass(wxWindow) window, int option, int flag, int border, void* userData );
int        wxSizerItem_GetBorder( TSelf(wxSizerItem) _obj );
int        wxSizerItem_GetFlag( TSelf(wxSizerItem) _obj );
void       wxSizerItem_GetMinSize( TSelf(wxSizerItem) _obj, TSizeOutVoid(_w,_h) );
int        wxSizerItem_GetOption( TSelf(wxSizerItem) _obj );
void       wxSizerItem_GetPosition( TSelf(wxSizerItem) _obj, TPointOutVoid(_x,_y) );
float      wxSizerItem_GetRatio( TSelf(wxSizerItem) _obj );
void       wxSizerItem_GetSize( TSelf(wxSizerItem) _obj, TSizeOutVoid(_w,_h) );
TClass(wxSizer) wxSizerItem_GetSizer( TSelf(wxSizerItem) _obj );
void*      wxSizerItem_GetUserData( TSelf(wxSizerItem) _obj );
TClass(wxWindow) wxSizerItem_GetWindow( TSelf(wxSizerItem) _obj );
TBool      wxSizerItem_IsSizer( TSelf(wxSizerItem) _obj );
TBool      wxSizerItem_IsSpacer( TSelf(wxSizerItem) _obj );
TBool      wxSizerItem_IsWindow( TSelf(wxSizerItem) _obj );
void       wxSizerItem_SetBorder( TSelf(wxSizerItem) _obj, int border );
void       wxSizerItem_SetDimension( TSelf(wxSizerItem) _obj, TRect(_x,_y,_w,_h) );
void       wxSizerItem_SetFlag( TSelf(wxSizerItem) _obj, int flag );
void       wxSizerItem_SetFloatRatio( TSelf(wxSizerItem) _obj, float ratio );
void       wxSizerItem_SetInitSize( TSelf(wxSizerItem) _obj, TPoint(x,y) );
void       wxSizerItem_SetOption( TSelf(wxSizerItem) _obj, int option );
void       wxSizerItem_SetRatio( TSelf(wxSizerItem) _obj, TSize(width,height) );
void       wxSizerItem_SetSizer( TSelf(wxSizerItem) _obj, TClass(wxSizer) sizer );
void       wxSizerItem_SetWindow( TSelf(wxSizerItem) _obj, TClass(wxWindow) window );

/* wxSlider */
TClassDefExtend(wxSlider,wxControl)
void       wxSlider_ClearSel( TSelf(wxSlider) _obj );
void       wxSlider_ClearTicks( TSelf(wxSlider) _obj );
TClass(wxSlider) wxSlider_Create( TClass(wxWindow) _prt, int _id, int _init, int _min, int _max, TRect(_lft,_top,_wdt,_hgt), long _stl );
int        wxSlider_GetLineSize( TSelf(wxSlider) _obj );
int        wxSlider_GetMax( TSelf(wxSlider) _obj );
int        wxSlider_GetMin( TSelf(wxSlider) _obj );
int        wxSlider_GetPageSize( TSelf(wxSlider) _obj );
int        wxSlider_GetSelEnd( TSelf(wxSlider) _obj );
int        wxSlider_GetSelStart( TSelf(wxSlider) _obj );
int        wxSlider_GetThumbLength( TSelf(wxSlider) _obj );
int        wxSlider_GetTickFreq( TSelf(wxSlider) _obj );
int        wxSlider_GetValue( TSelf(wxSlider) _obj );
void       wxSlider_SetLineSize( TSelf(wxSlider) _obj, int lineSize );
void       wxSlider_SetPageSize( TSelf(wxSlider) _obj, int pageSize );
void       wxSlider_SetRange( TSelf(wxSlider) _obj, int minValue, int maxValue );
void       wxSlider_SetSelection( TSelf(wxSlider) _obj, int minPos, int maxPos );
void       wxSlider_SetThumbLength( TSelf(wxSlider) _obj, int len );
void       wxSlider_SetTick( TSelf(wxSlider) _obj, int tickPos );
void       wxSlider_SetTickFreq( TSelf(wxSlider) _obj, int n, int pos );
void       wxSlider_SetValue( TSelf(wxSlider) _obj, int value );

/* wxSockAddress */
TClassDefExtend(wxSockAddress,wxObject)

/* wxSocketBase */
TClassDefExtend(wxSocketBase,wxObject)

/* wxSocketClient */
TClassDefExtend(wxSocketClient,wxSocketBase)

/* wxSocketEvent */
TClassDefExtend(wxSocketEvent,wxEvent)

/* wxSocketInputStream */
TClassDefExtend(wxSocketInputStream,wxInputStream)

/* wxSocketOutputStream */
TClassDefExtend(wxSocketOutputStream,wxOutputStream)

/* wxSocketServer */
TClassDefExtend(wxSocketServer,wxSocketBase)

/* wxSpinButton */
TClassDefExtend(wxSpinButton,wxControl)
TClass(wxSpinButton) wxSpinButton_Create( TClass(wxWindow) _prt, int _id, TRect(_lft,_top,_wdt,_hgt), long _stl );
int        wxSpinButton_GetMax( TSelf(wxSpinButton) _obj );
int        wxSpinButton_GetMin( TSelf(wxSpinButton) _obj );
int        wxSpinButton_GetValue( TSelf(wxSpinButton) _obj );
void       wxSpinButton_SetRange( TSelf(wxSpinButton) _obj, int minVal, int maxVal );
void       wxSpinButton_SetValue( TSelf(wxSpinButton) _obj, int val );

/* wxSpinCtrl */
TClassDefExtend(wxSpinCtrl,wxControl)
TClass(wxSpinCtrl) wxSpinCtrl_Create( TClass(wxWindow) _prt, int _id, TString _txt, TRect(_lft,_top,_wdt,_hgt), long _stl, int _min, int _max, int _init );
int        wxSpinCtrl_GetMax( TSelf(wxSpinCtrl) _obj );
int        wxSpinCtrl_GetMin( TSelf(wxSpinCtrl) _obj );
int        wxSpinCtrl_GetValue( TSelf(wxSpinCtrl) _obj );
void       wxSpinCtrl_SetRange( TSelf(wxSpinCtrl) _obj, int min_val, int max_val );
void       wxSpinCtrl_SetValue( TSelf(wxSpinCtrl) _obj, int val );

/* wxSpinEvent */
TClassDefExtend(wxSpinEvent,wxNotifyEvent)
int        wxSpinEvent_GetPosition( TSelf(wxSpinEvent) _obj );
void       wxSpinEvent_SetPosition( TSelf(wxSpinEvent) _obj, int pos );

/* wxSplashScreen */
TClassDefExtend(wxSplashScreen,wxFrame)

/* wxSplitterEvent */
TClassDefExtend(wxSplitterEvent,wxNotifyEvent)

/* wxSplitterScrolledWindow */
TClassDefExtend(wxSplitterScrolledWindow,wxScrolledWindow)
TClass(wxSplitterScrolledWindow) wxSplitterScrolledWindow_Create( TClass(wxWindow) parent, int id, TRect(x,y,w,h), int style );

/* wxSplitterWindow */
TClassDefExtend(wxSplitterWindow,wxWindow)
TClass(wxSplitterWindow) wxSplitterWindow_Create( TClass(wxWindow) _prt, int _id, TRect(_lft,_top,_wdt,_hgt), int _stl );
int        wxSplitterWindow_GetBorderSize( TSelf(wxSplitterWindow) _obj );
int        wxSplitterWindow_GetMinimumPaneSize( TSelf(wxSplitterWindow) _obj );
int        wxSplitterWindow_GetSashPosition( TSelf(wxSplitterWindow) _obj );
int        wxSplitterWindow_GetSashSize( TSelf(wxSplitterWindow) _obj );
int        wxSplitterWindow_GetSplitMode( TSelf(wxSplitterWindow) _obj );
TClass(wxWindow) wxSplitterWindow_GetWindow1( TSelf(wxSplitterWindow) _obj );
TClass(wxWindow) wxSplitterWindow_GetWindow2( TSelf(wxSplitterWindow) _obj );
void       wxSplitterWindow_Initialize( TSelf(wxSplitterWindow) _obj, TClass(wxWindow) window );
TBool      wxSplitterWindow_IsSplit( TSelf(wxSplitterWindow) _obj );
TBoolInt   wxSplitterWindow_ReplaceWindow( TSelf(wxSplitterWindow) _obj, TClass(wxWindow) winOld, TClass(wxWindow) winNew );
void       wxSplitterWindow_SetBorderSize( TSelf(wxSplitterWindow) _obj, int width );
void       wxSplitterWindow_SetMinimumPaneSize( TSelf(wxSplitterWindow) _obj, int min );
void       wxSplitterWindow_SetSashPosition( TSelf(wxSplitterWindow) _obj, int position, TBoolInt redraw );
void       wxSplitterWindow_SetSashSize( TSelf(wxSplitterWindow) _obj, int width );
void       wxSplitterWindow_SetSplitMode( TSelf(wxSplitterWindow) _obj, int mode );
TBool      wxSplitterWindow_SplitHorizontally( TSelf(wxSplitterWindow) _obj, TClass(wxWindow) window1, TClass(wxWindow) window2, int sashPosition );
TBool      wxSplitterWindow_SplitVertically( TSelf(wxSplitterWindow) _obj, TClass(wxWindow) window1, TClass(wxWindow) window2, int sashPosition );
TBool      wxSplitterWindow_Unsplit( TSelf(wxSplitterWindow) _obj, TClass(wxWindow) toRemove );

/* wxStaticBitmap */
TClassDefExtend(wxStaticBitmap,wxControl)
TClass(wxStaticBitmap) wxStaticBitmap_Create( TClass(wxWindow) _prt, int _id, TClass(wxBitmap) bitmap, TRect(_lft,_top,_wdt,_hgt), int _stl );
void       wxStaticBitmap_Delete( TSelf(wxStaticBitmap) _obj );
void       wxStaticBitmap_GetBitmap( TSelf(wxStaticBitmap) _obj, TClassRef(wxBitmap) _ref );
void       wxStaticBitmap_GetIcon( TSelf(wxStaticBitmap) _obj, TClassRef(wxIcon) _ref );
void       wxStaticBitmap_SetBitmap( TSelf(wxStaticBitmap) _obj, TClass(wxBitmap) bitmap );
void       wxStaticBitmap_SetIcon( TSelf(wxStaticBitmap) _obj, TClass(wxIcon) icon );

/* wxStaticBox */
TClassDefExtend(wxStaticBox,wxControl)
TClass(wxStaticBox) wxStaticBox_Create( TClass(wxWindow) _prt, int _id, TString _txt, TRect(_lft,_top,_wdt,_hgt), int _stl );

/* wxStaticBoxSizer */
TClassDefExtend(wxStaticBoxSizer,wxBoxSizer)
void       wxStaticBoxSizer_CalcMin( TSelf(wxStaticBoxSizer) _obj, TSizeOutVoid(_w,_h) );
TClass(wxStaticBoxSizer) wxStaticBoxSizer_Create( TClass(wxStaticBox) box, int orient );
TClass(wxStaticBox) wxStaticBoxSizer_GetStaticBox( TSelf(wxStaticBoxSizer) _obj );
void       wxStaticBoxSizer_RecalcSizes( TSelf(wxStaticBoxSizer) _obj );

/* wxStaticLine */
TClassDefExtend(wxStaticLine,wxControl)
TClass(wxStaticLine) wxStaticLine_Create( TClass(wxWindow) _prt, int _id, TRect(_lft,_top,_wdt,_hgt), int _stl );
int        wxStaticLine_GetDefaultSize( TSelf(wxStaticLine) _obj );
TBool      wxStaticLine_IsVertical( TSelf(wxStaticLine) _obj );

/* wxStaticText */
TClassDefExtend(wxStaticText,wxControl)
TClass(wxStaticText) wxStaticText_Create( TClass(wxWindow) _prt, int _id, TString _txt, TRect(_lft,_top,_wdt,_hgt), int _stl );

/* wxStatusBar */
TClassDefExtend(wxStatusBar,wxWindow)
TClass(wxStatusBar) wxStatusBar_Create( TClass(wxWindow) _prt, int _id, TRect(_lft,_top,_wdt,_hgt), int _stl );
int        wxStatusBar_GetBorderX( TSelf(wxStatusBar) _obj );
int        wxStatusBar_GetBorderY( TSelf(wxStatusBar) _obj );
int        wxStatusBar_GetFieldsCount( TSelf(wxStatusBar) _obj );
TStringLen wxStatusBar_GetStatusText( TSelf(wxStatusBar) _obj, int number, TStringOutVoid _buf );
void       wxStatusBar_SetFieldsCount( TSelf(wxStatusBar) _obj, int number, int* widths );
void       wxStatusBar_SetMinHeight( TSelf(wxStatusBar) _obj, int height );
void       wxStatusBar_SetStatusText( TSelf(wxStatusBar) _obj, TStringVoid text, int number );
void       wxStatusBar_SetStatusWidths( TSelf(wxStatusBar) _obj, int n, int* widths );

/* wxStopWatch */
TClassDef(wxStopWatch)
TClass(wxStopWatch) wxStopWatch_Create();
void      wxStopWatch_Delete(TSelf(wxStopWatch) _obj);
void      wxStopWatch_Start(TSelf(wxStopWatch) _obj, int msec);
void      wxStopWatch_Pause(TSelf(wxStopWatch) _obj);
void      wxStopWatch_Resume(TSelf(wxStopWatch) _obj);
int       wxStopWatch_Time(TSelf(wxStopWatch) _obj);


/* wxStreamBase */
TClassDef(wxStreamBase)
int        wxStreamBase_GetLastError( TSelf(wxStreamBase) _obj );
int        wxStreamBase_GetSize( TSelf(wxStreamBase) _obj );
TBool      wxStreamBase_IsOk( TSelf(wxStreamBase) _obj );

/* wxStreamBuffer */
TClassDef(wxStreamBuffer)

/* wxStreamToTextRedirector */
TClassDef(wxStreamToTextRedirector)

/* wxString */
TClassDef(wxString)

/* wxStringBuffer */
TClassDef(wxStringBuffer)

/* wxStringClientData */
TClassDefExtend(wxStringClientData,wxClientData)

/* wxStringList */
TClassDefExtend(wxStringList,wxList)

/* wxStringTokenizer */
TClassDefExtend(wxStringTokenizer,wxObject)

/* wxSysColourChangedEvent */
TClassDefExtend(wxSysColourChangedEvent,wxEvent)

/* wxSystemOptions */
TClassDefExtend(wxSystemOptions,wxObject)

/* wxSystemSettings */
TClassDefExtend(wxSystemSettings,wxObject)
void       wxSystemSettings_GetSystemColour( int index, TClassRef(wxColour) _ref );
void       wxSystemSettings_GetSystemFont( int index, TClassRef(wxFont) _ref );
int        wxSystemSettings_GetSystemMetric( int index );

/* wxTabCtrl */
TClassDefExtend(wxTabCtrl,wxControl)

/* wxTabEvent */
TClassDefExtend(wxTabEvent,wxCommandEvent)

/* wxTablesInUse */
TClassDefExtend(wxTablesInUse,wxObject)

/* wxTaskBarIcon */
TClassDefExtend(wxTaskBarIcon,wxEvtHandler)

/* wxTempFile */
TClassDef(wxTempFile)

/* wxTextAttr */
TClassDef(wxTextAttr)

/* wxTextCtrl */
TClassDefExtend(wxTextCtrl,wxControl)
void       wxTextCtrl_AppendText( TSelf(wxTextCtrl) _obj, TString text );
TBool      wxTextCtrl_CanCopy( TSelf(wxTextCtrl) _obj );
TBool      wxTextCtrl_CanCut( TSelf(wxTextCtrl) _obj );
TBool      wxTextCtrl_CanPaste( TSelf(wxTextCtrl) _obj );
TBool      wxTextCtrl_CanRedo( TSelf(wxTextCtrl) _obj );
TBool      wxTextCtrl_CanUndo( TSelf(wxTextCtrl) _obj );
void       wxTextCtrl_Clear( TSelf(wxTextCtrl) _obj );
void       wxTextCtrl_Copy( TSelf(wxTextCtrl) _obj );
TClass(wxTextCtrl) wxTextCtrl_Create( TClass(wxWindow) _prt, int _id, TString _txt, TRect(_lft,_top,_wdt,_hgt), long _stl );
void       wxTextCtrl_Cut( TSelf(wxTextCtrl) _obj );
void       wxTextCtrl_DiscardEdits( TSelf(wxTextCtrl) _obj );
long       wxTextCtrl_GetInsertionPoint( TSelf(wxTextCtrl) _obj );
long       wxTextCtrl_GetLastPosition( TSelf(wxTextCtrl) _obj );
int        wxTextCtrl_GetLineLength( TSelf(wxTextCtrl) _obj, long lineNo );
TStringLen wxTextCtrl_GetLineText( TSelf(wxTextCtrl) _obj, long lineNo, TStringOutVoid _buf );
int        wxTextCtrl_GetNumberOfLines( TSelf(wxTextCtrl) _obj );
void       wxTextCtrl_GetSelection( TSelf(wxTextCtrl) _obj, void* from, void* to );
TStringLen wxTextCtrl_GetValue( TSelf(wxTextCtrl) _obj, TStringOutVoid _buf );
TBool      wxTextCtrl_IsEditable( TSelf(wxTextCtrl) _obj );
TBool      wxTextCtrl_IsModified( TSelf(wxTextCtrl) _obj );
int        wxTextCtrl_LoadFile( TSelf(wxTextCtrl) _obj, TString file );
void       wxTextCtrl_Paste( TSelf(wxTextCtrl) _obj );
int        wxTextCtrl_PositionToXY( TSelf(wxTextCtrl) _obj, long pos, long* x, long* y );
void       wxTextCtrl_Redo( TSelf(wxTextCtrl) _obj );
void       wxTextCtrl_Remove( TSelf(wxTextCtrl) _obj, long from, long to );
void       wxTextCtrl_Replace( TSelf(wxTextCtrl) _obj, long from, long to, TString value );
int        wxTextCtrl_SaveFile( TSelf(wxTextCtrl) _obj, TString file );
void       wxTextCtrl_SetEditable( TSelf(wxTextCtrl) _obj, TBool editable );
void       wxTextCtrl_SetInsertionPoint( TSelf(wxTextCtrl) _obj, long pos );
void       wxTextCtrl_SetInsertionPointEnd( TSelf(wxTextCtrl) _obj );
void       wxTextCtrl_SetSelection( TSelf(wxTextCtrl) _obj, long from, long to );
void       wxTextCtrl_SetValue( TSelf(wxTextCtrl) _obj, TString value );
void       wxTextCtrl_ShowPosition( TSelf(wxTextCtrl) _obj, long pos );
void       wxTextCtrl_Undo( TSelf(wxTextCtrl) _obj );
void       wxTextCtrl_WriteText( TSelf(wxTextCtrl) _obj, TString text );
long       wxTextCtrl_XYToPosition( TSelf(wxTextCtrl) _obj, TPointLong(x,y) );

/* wxTextDataObject */
TClassDefExtend(wxTextDataObject,wxDataObjectSimple)
TClass(TextDataObject) TextDataObject_Create( TStringVoid _txt );
void       TextDataObject_Delete( TSelf(TextDataObject) _obj );

/* wxTextDropTarget */
TClassDefExtend(wxTextDropTarget,wxDropTarget)

/* wxTextEntryDialog */
TClassDefExtend(wxTextEntryDialog,wxDialog)

/* wxTextFile */
TClassDef(wxTextFile)

/* wxTextInputStream */
TClassDef(wxTextInputStream)

/* wxTextOutputStream */
TClassDef(wxTextOutputStream)

/* wxTextValidator */
TClassDefExtend(wxTextValidator,wxValidator)
TClass(wxTextValidator) wxTextValidator_Create( int style, void* val );
int        wxTextValidator_GetExcludeList( TSelf(wxTextValidator) _obj, void* _ref );
int        wxTextValidator_GetIncludeList( TSelf(wxTextValidator) _obj, void* _ref );
int        wxTextValidator_GetStyle( TSelf(wxTextValidator) _obj );
void       wxTextValidator_OnChar( TSelf(wxTextValidator) _obj, TClass(wxEvent) event );
void       wxTextValidator_SetExcludeList( TSelf(wxTextValidator) _obj, TClass(wxList) list, int count );
void       wxTextValidator_SetIncludeList( TSelf(wxTextValidator) _obj, TClass(wxList) list, int count );
void       wxTextValidator_SetStyle( TSelf(wxTextValidator) _obj, int style );

/* wxThinSplitterWindow */
TClassDefExtend(wxThinSplitterWindow,wxSplitterWindow)
TClass(wxThinSplitterWindow) wxThinSplitterWindow_Create( TClass(wxWindow) parent, int id, TRect(x,y,w,h), int style );
void       wxThinSplitterWindow_DrawSash( TSelf(wxThinSplitterWindow) _obj, TClass(wxDC) dc );
int        wxThinSplitterWindow_SashHitTest( TSelf(wxThinSplitterWindow) _obj, TPoint(x,y), int tolerance );
void       wxThinSplitterWindow_SizeWindows( TSelf(wxThinSplitterWindow) _obj );

/* wxThread */
TClassDef(wxThread)

/* wxTime */
TClassDefExtend(wxTime,wxObject)

/* wxTimeSpan */
TClassDef(wxTimeSpan)

/* wxTimer */
TClassDefExtend(wxTimer,wxObject)
TClass(wxTimer) wxTimer_Create( TClass(wxWindow) _prt, int _id );
void       wxTimer_Delete( TSelf(wxTimer) _obj );
int        wxTimer_GetInterval( TSelf(wxTimer) _obj );
TBool      wxTimer_IsOneShot( TSelf(wxTimer) _obj );
TBool      wxTimer_IsRuning( TSelf(wxTimer) _obj );
TBool      wxTimer_Start( TSelf(wxTimer) _obj, int _int, TBool _one );
void       wxTimer_Stop( TSelf(wxTimer) _obj );

/* wxTimerBase */
TClassDefExtend(wxTimerBase,wxObject)

/* wxTimerEvent */
TClassDefExtend(wxTimerEvent,wxEvent)
int        wxTimerEvent_GetInterval( TSelf(wxTimerEvent) _obj );

/* wxTimerEx */
TClassDefExtend(wxTimerEx,wxTimer)

/* wxTimerRunner */
TClassDef(wxTimerRunner)

/* wxTipProvider */
TClassDef(wxTipProvider)

/* wxTipWindow */
TClassDefExtend(wxTipWindow,wxPopupTransientWindow)
void       wxTipWindow_Close( TSelf(wxTipWindow) _obj );
TClass(wxTipWindow) wxTipWindow_Create( TClass(wxWindow) parent, TStringVoid text, int maxLength );
void       wxTipWindow_SetBoundingRect( TSelf(wxTipWindow) _obj, TRect(x,y,w,h) );
void       wxTipWindow_SetTipWindowPtr( TSelf(wxTipWindow) _obj, void* windowPtr );

/* wxToggleButton */
TClassDefExtend(wxToggleButton,wxControl)
TClass(wxToggleButton) wxToggleButton_Create( TClass(wxWindow) parent, int id, void* label, TRect(x,y,w,h), int style );
int        wxToggleButton_Enable( TSelf(wxToggleButton) _obj, TBool enable );
int        wxToggleButton_GetValue( TSelf(wxToggleButton) _obj );
void       wxToggleButton_SetLabel( TSelf(wxToggleButton) _obj, void* label );
void       wxToggleButton_SetValue( TSelf(wxToggleButton) _obj, int state );

/* wxToolBar */
TClassDefExtend(wxToolBar,wxToolBarBase)
TBoolInt   wxToolBar_AddControl( TSelf(wxToolBar) _obj, TClass(wxControl) ctrl );
void       wxToolBar_AddSeparator( TSelf(wxToolBar) _obj );
void       wxToolBar_AddTool( TSelf(wxToolBar) _obj, int id, TClass(wxBitmap) bmp, TStringVoid shelp, TStringVoid lhelp );
void       wxToolBar_AddToolEx( TSelf(wxToolBar) _obj, int id, TClass(wxBitmap) bmp1, TClass(wxBitmap) bmp2, TBoolInt isToggle, TPoint(x,y), TClass(wxObject) data, TStringVoid shelp, TStringVoid lhelp );
TClass(wxToolBar) wxToolBar_Create( TClass(wxWindow) _prt, int _id, TRect(_lft,_top,_wdt,_hgt), int _stl );
void       wxToolBar_Delete( TSelf(wxToolBar) _obj );
TBoolInt   wxToolBar_DeleteTool( TSelf(wxToolBar) _obj, int id );
TBoolInt   wxToolBar_DeleteToolByPos( TSelf(wxToolBar) _obj, int pos );
void       wxToolBar_EnableTool( TSelf(wxToolBar) _obj, int id, TBool enable );
void       wxToolBar_GetMargins( TSelf(wxToolBar) _obj, TPointOutVoid(x,y) );
void       wxToolBar_GetToolBitmapSize( TSelf(wxToolBar) _obj, TSizeOutVoid(_x,_y) );
TClass(wxObject) wxToolBar_GetToolClientData( TSelf(wxToolBar) _obj, int id );
TBool      wxToolBar_GetToolEnabled( TSelf(wxToolBar) _obj, int id );
TStringLen wxToolBar_GetToolLongHelp( TSelf(wxToolBar) _obj, int id, TStringOutVoid _buf );
int        wxToolBar_GetToolPacking( TSelf(wxToolBar) _obj );
TStringLen wxToolBar_GetToolShortHelp( TSelf(wxToolBar) _obj, int id, TStringOutVoid _buf );
void       wxToolBar_GetToolSize( TSelf(wxToolBar) _obj, TPointOutVoid(_x,_y) );
TBoolInt   wxToolBar_GetToolState( TSelf(wxToolBar) _obj, int id );
void       wxToolBar_InsertControl( TSelf(wxToolBar) _obj, int pos, TClass(wxControl) ctrl );
void       wxToolBar_InsertSeparator( TSelf(wxToolBar) _obj, int pos );
void       wxToolBar_InsertTool( TSelf(wxToolBar) _obj, int pos, int id, TClass(wxBitmap) bmp1, TClass(wxBitmap) bmp2, TBoolInt isToggle, TClass(wxObject) data, TStringVoid shelp, TStringVoid lhelp );
TBoolInt   wxToolBar_Realize( TSelf(wxToolBar) _obj );
void       wxToolBar_RemoveTool( TSelf(wxToolBar) _obj, int id );
void       wxToolBar_SetMargins( TSelf(wxToolBar) _obj, TPoint(x,y) );
void       wxToolBar_SetToolBitmapSize( TSelf(wxToolBar) _obj, TSize(x,y) );
void       wxToolBar_SetToolClientData( TSelf(wxToolBar) _obj, int id, TClass(wxObject) data );
void       wxToolBar_SetToolLongHelp( TSelf(wxToolBar) _obj, int id, TStringVoid str );
void       wxToolBar_SetToolPacking( TSelf(wxToolBar) _obj, int packing );
void       wxToolBar_SetToolSeparation( TSelf(wxToolBar) _obj, int separation );
void       wxToolBar_SetToolShortHelp( TSelf(wxToolBar) _obj, int id, TStringVoid str );
void       wxToolBar_ToggleTool( TSelf(wxToolBar) _obj, int id, TBoolInt toggle );

/* wxToolBarBase */
TClassDefExtend(wxToolBarBase,wxControl)

/* wxToolLayoutItem */
TClassDefExtend(wxToolLayoutItem,wxObject)
TBool      wxToolLayoutItem_IsSeparator( TSelf(wxToolLayoutItem) _obj );
void       wxToolLayoutItem_Rect( TSelf(wxToolLayoutItem) _obj, TRectOutVoid(_x,_y,_w,_h) );

/* wxToolTip */
TClassDefExtend(wxToolTip,wxObject)

/* wxToolWindow */
TClassDefExtend(wxToolWindow,wxFrame)
void       wxToolWindow_AddMiniButton( TSelf(wxToolWindow) _obj, void* _btn );
TClass(wxToolWindow) wxToolWindow_Create( void* _obj, void* _btn, void* _ttl );
TClass(wxClient) wxToolWindow_GetClient( TSelf(wxToolWindow) _obj );
void       wxToolWindow_SetClient( TSelf(wxToolWindow) _obj, TClass(wxWindow) _wnd );
void       wxToolWindow_SetTitleFont( TSelf(wxToolWindow) _obj, void* _fnt );

/* wxTreeCompanionWindow */
TClassDefExtend(wxTreeCompanionWindow,wxWindow)
TClass(wxTreeCompanionWindow) wxTreeCompanionWindow_Create( TClass(wxWindow) parent, int id, TRect(x,y,w,h), int style );
void       wxTreeCompanionWindow_DrawItem( TSelf(wxTreeCompanionWindow) _obj, TClass(wxDC) dc, void* id, TRect(x,y,w,h));
TClass(wxTreeCtrl) wxTreeCompanionWindow_GetTreeCtrl( TSelf(wxTreeCompanionWindow) _obj );
void       wxTreeCompanionWindow_SetTreeCtrl( TSelf(wxTreeCompanionWindow) _obj, TClass(wxTreeCtrl) treeCtrl );

/* wxTreeCtrl */
TClassDefExtend(wxTreeCtrl,wxControl)
void       wxTreeCtrl_AddRoot( TSelf(wxTreeCtrl) _obj, TStringVoid text, int image, int selectedImage, TClass(wxTreeItemData) data, TClassRef(wxTreeItemId) _item );
void       wxTreeCtrl_AppendItem( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) parent, TStringVoid text, int image, int selectedImage, TClass(wxTreeItemData)  data, TClassRef(wxTreeItemId) _item );
void       wxTreeCtrl_Collapse( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item );
void       wxTreeCtrl_CollapseAndReset( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item );
TClass(wxTreeCtrl) wxTreeCtrl_Create( void* _obj, void* _cmp, TClass(wxWindow) _prt, int _id, TRect(_lft,_top,_wdt,_hgt), int _stl );
void       wxTreeCtrl_Delete( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item );
void       wxTreeCtrl_DeleteAllItems( TSelf(wxTreeCtrl) _obj );
void       wxTreeCtrl_DeleteChildren( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item );
void       wxTreeCtrl_EditLabel( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item );
void       wxTreeCtrl_EndEditLabel( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item, TBoolInt discardChanges );
void       wxTreeCtrl_EnsureVisible( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item );
void       wxTreeCtrl_Expand( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item );
int        wxTreeCtrl_GetBoundingRect( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item, TBoolInt textOnly, TRectOutVoid(x,y,w,h) );
int        wxTreeCtrl_GetChildrenCount( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item, TBoolInt recursively );
int        wxTreeCtrl_GetCount( TSelf(wxTreeCtrl) _obj );
TClass(wxTextCtrl) wxTreeCtrl_GetEditControl( TSelf(wxTreeCtrl) _obj );
void       wxTreeCtrl_GetFirstChild( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item, int* cookie, TClassRef(wxTreeItemId) _item );
void       wxTreeCtrl_GetFirstVisibleItem( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item, TClassRef(wxTreeItemId) _item );
TClass(wxImageList) wxTreeCtrl_GetImageList( TSelf(wxTreeCtrl) _obj );
int        wxTreeCtrl_GetIndent( TSelf(wxTreeCtrl) _obj );
void*      wxTreeCtrl_GetItemData( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item );
int        wxTreeCtrl_GetItemImage( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item, int which );
TStringLen wxTreeCtrl_GetItemText( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item, TStringOutVoid _buf );
void       wxTreeCtrl_GetLastChild( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item, TClassRef(wxTreeItemId) _item );
void       wxTreeCtrl_GetNextChild( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item, int* cookie, TClassRef(wxTreeItemId) _item );
void       wxTreeCtrl_GetNextSibling( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item, TClassRef(wxTreeItemId) _item );
void       wxTreeCtrl_GetNextVisible( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item, TClassRef(wxTreeItemId) _item );
void       wxTreeCtrl_GetParent( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item, TClassRef(wxTreeItemId) _item );
void       wxTreeCtrl_GetPrevSibling( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item, TClassRef(wxTreeItemId) _item );
void       wxTreeCtrl_GetPrevVisible( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item, TClassRef(wxTreeItemId) _item );
void       wxTreeCtrl_GetRootItem( TSelf(wxTreeCtrl) _obj, TClassRef(wxTreeItemId) _item );
void       wxTreeCtrl_GetSelection( TSelf(wxTreeCtrl) _obj, TClassRef(wxTreeItemId) _item );
TArrayLen  wxTreeCtrl_GetSelections( TSelf(wxTreeCtrl) _obj, TArrayIntOutVoid selections );
int        wxTreeCtrl_GetSpacing( TSelf(wxTreeCtrl) _obj );
TClass(wxImageList)  wxTreeCtrl_GetStateImageList( TSelf(wxTreeCtrl) _obj );
void       wxTreeCtrl_HitTest( TSelf(wxTreeCtrl) _obj, TPoint(_x,_y), int* flags, TClassRef(wxTreeItemId) _item );
void       wxTreeCtrl_InsertItem( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) parent, TClass(wxTreeItemId) idPrevious, TStringVoid text, int image, int selectedImage, void* data, TClassRef(wxTreeItemId) _item );
void       wxTreeCtrl_InsertItemByIndex( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) parent, int index, TStringVoid text, int image, int selectedImage, void* data, TClassRef(wxTreeItemId) _item );
TBool      wxTreeCtrl_IsBold( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item );
TBool      wxTreeCtrl_IsExpanded( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item );
TBool      wxTreeCtrl_IsSelected( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item );
TBool      wxTreeCtrl_IsVisible( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item );
int        wxTreeCtrl_ItemHasChildren( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item );
int        wxTreeCtrl_OnCompareItems( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item1, TClass(wxTreeItemId) item2 );
void       wxTreeCtrl_PrependItem( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) parent, TStringVoid text, int image, int selectedImage, void* data, TClassRef(wxTreeItemId) _item );
void       wxTreeCtrl_ScrollTo( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item );
void       wxTreeCtrl_SelectItem( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item );
void       wxTreeCtrl_SetImageList( TSelf(wxTreeCtrl) _obj, TClass(wxImageList) imageList );
void       wxTreeCtrl_SetIndent( TSelf(wxTreeCtrl) _obj, int indent );
void       wxTreeCtrl_SetItemBackgroundColour( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item, TClass(wxColour) col );
void       wxTreeCtrl_SetItemBold( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item, TBoolInt bold );
void       wxTreeCtrl_SetItemData( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item, void* data );
void       wxTreeCtrl_SetItemDropHighlight( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item, TBoolInt highlight );
void       wxTreeCtrl_SetItemFont( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item, TClass(wxFont) font );
void       wxTreeCtrl_SetItemHasChildren( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item, TBoolInt hasChildren );
void       wxTreeCtrl_SetItemImage( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item, int image, int which );
void       wxTreeCtrl_SetItemText( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item, TStringVoid text );
void       wxTreeCtrl_SetItemTextColour( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item, TClass(wxColour) col );
void       wxTreeCtrl_SetSpacing( TSelf(wxTreeCtrl) _obj, int spacing );
void       wxTreeCtrl_SetStateImageList( TSelf(wxTreeCtrl) _obj, TClass(wxImageList) imageList );
void       wxTreeCtrl_SortChildren( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item );
void       wxTreeCtrl_Toggle( TSelf(wxTreeCtrl) _obj, TClass(wxTreeItemId) item );
void       wxTreeCtrl_Unselect( TSelf(wxTreeCtrl) _obj );
void       wxTreeCtrl_UnselectAll( TSelf(wxTreeCtrl) _obj );

/* wxTreeEvent */
TClassDefExtend(wxTreeEvent,wxNotifyEvent)
int        wxTreeEvent_GetCode( TSelf(wxTreeEvent) _obj );
void       wxTreeEvent_GetItem( TSelf(wxTreeEvent) _obj, TClassRef(wxTreeItemId) _ref );
TStringLen wxTreeEvent_GetLabel( TSelf(wxTreeEvent) _obj, TStringOutVoid _buf );
void       wxTreeEvent_GetOldItem( TSelf(wxTreeEvent) _obj, TClassRef(wxTreeItemId) _ref );
void       wxTreeEvent_GetPoint( TSelf(wxTreeEvent) _obj, TPointOutVoid(_x,_y) );

/* wxTreeItemData */
TClassDefExtend(wxTreeItemData,wxClientData)

/* wxTreeItemId */
TClassDef(wxTreeItemId)
TClass(wxTreeItemId) wxTreeItemId_Create(  );
void       wxTreeItemId_Delete( TSelf(wxTreeItemId) _obj );
TBool      wxTreeItemId_IsOk( TSelf(wxTreeItemId) _obj );

/* wxTreeLayout */
TClassDefExtend(wxTreeLayout,wxObject)

/* wxTreeLayoutStored */
TClassDefExtend(wxTreeLayoutStored,wxTreeLayout)

/* wxURL */
TClassDefExtend(wxURL,wxObject)

/* wxUpdateUIEvent */
TClassDefExtend(wxUpdateUIEvent,wxEvent)
void       wxUpdateUIEvent_Check( TSelf(wxUpdateUIEvent) _obj, TBool check );
void       wxUpdateUIEvent_CopyObject( TSelf(wxUpdateUIEvent) _obj, void* obj );
void       wxUpdateUIEvent_Enable( TSelf(wxUpdateUIEvent) _obj, TBool enable );
TBool      wxUpdateUIEvent_GetChecked( TSelf(wxUpdateUIEvent) _obj );
TBool      wxUpdateUIEvent_GetEnabled( TSelf(wxUpdateUIEvent) _obj );
int        wxUpdateUIEvent_GetSetChecked( TSelf(wxUpdateUIEvent) _obj );
int        wxUpdateUIEvent_GetSetEnabled( TSelf(wxUpdateUIEvent) _obj );
int        wxUpdateUIEvent_GetSetText( TSelf(wxUpdateUIEvent) _obj );
TStringLen wxUpdateUIEvent_GetText( TSelf(wxUpdateUIEvent) _obj, TStringOutVoid _buf );
void       wxUpdateUIEvent_SetText( TSelf(wxUpdateUIEvent) _obj, TString text );

/* wxValidator */
TClassDefExtend(wxValidator,wxEvtHandler)
TClass(wxValidator) wxValidator_Create(  );
void       wxValidator_Delete( TSelf(wxValidator) _obj );
TClass(wxWindow) wxValidator_GetWindow( TSelf(wxValidator) _obj );
TBool      wxValidator_IsSilent(  );
void       wxValidator_SetBellOnError( TBool doIt );
void       wxValidator_SetWindow( TSelf(wxValidator) _obj, TClass(wxWindow) win );
int        wxValidator_TransferFromWindow( TSelf(wxValidator) _obj );
int        wxValidator_TransferToWindow( TSelf(wxValidator) _obj );
TBool      wxValidator_Validate( TSelf(wxValidator) _obj, TClass(wxWindow) parent );

/* wxVariant */
TClassDefExtend(wxVariant,wxObject)

/* wxVariantData */
TClassDefExtend(wxVariantData,wxObject)

/* wxView */
TClassDefExtend(wxView,wxEvtHandler)

/* wxWave */
TClassDefExtend(wxWave,wxEvtHandler)

/* wxWindow */
TClassDefExtend(wxWindow,wxEvtHandler)
void       wxWindow_AddChild( TSelf(wxWindow) _obj, TClass(wxWindow) child );
void       wxWindow_AddConstraintReference( TSelf(wxWindow) _obj, TClass(wxWindow) otherWin );
void       wxWindow_CaptureMouse( TSelf(wxWindow) _obj );
void       wxWindow_Center( TSelf(wxWindow) _obj, int direction );
void       wxWindow_CenterOnParent( TSelf(wxWindow) _obj, int dir );
void       wxWindow_Clear( TSelf(wxWindow) _obj );
TBool      wxWindow_Close( TSelf(wxWindow) _obj, TBool _force );
void       wxWindow_ConvertDialogToPixels( TSelf(wxWindow) _obj, TPointOut(_x,_y) );
void       wxWindow_ConvertPixelsToDialog( TSelf(wxWindow) _obj, TPointOut(_x,_y) );
TClass(wxWindow) wxWindow_Create( TClass(wxWindow) _prt, int _id, TRect(_x,_y,_w,_h), int _stl );
void       wxWindow_DeleteRelatedConstraints( TSelf(wxWindow) _obj );
TBool      wxWindow_Destroy( TSelf(wxWindow) _obj );
TBool      wxWindow_DestroyChildren( TSelf(wxWindow) _obj );
TBool      wxWindow_Disable( TSelf(wxWindow) _obj );
int        wxWindow_DoPhase( TSelf(wxWindow) _obj, int phase );
TBoolInt   wxWindow_Enable( TSelf(wxWindow) _obj );
TClass(wxWindow) wxWindow_FindFocus( TSelf(wxWindow) _obj );
TClass(wxWindow) wxWindow_FindWindow( TSelf(wxWindow) _obj, TString name );
void       wxWindow_Fit( TSelf(wxWindow) _obj );
void       wxWindow_Freeze( TSelf(wxWindow) _obj );
void       wxWindow_GetAdjustedBestSize( TSelf(wxWindow) _obj, TSizeOutVoid(_w,_h) );
int        wxWindow_GetAutoLayout( TSelf(wxWindow) _obj );
void       wxWindow_GetBackgroundColour( TSelf(wxWindow) _obj, TClassRef(wxColour) _ref );
void       wxWindow_GetBestSize( TSelf(wxWindow) _obj, TSizeOutVoid(_w,_h) );
TClass(wxCaret) wxWindow_GetCaret( TSelf(wxWindow) _obj );
int        wxWindow_GetCharHeight( TSelf(wxWindow) _obj );
int        wxWindow_GetCharWidth( TSelf(wxWindow) _obj );
int        wxWindow_GetChildren( TSelf(wxWindow) _obj, void* _res, int _cnt );
TClass(wxClientData) wxWindow_GetClientData( TSelf(wxWindow) _obj );
void       wxWindow_GetClientSize( TSelf(wxWindow) _obj, TSizeOutVoid(_w,_h) );
void       wxWindow_GetClientSizeConstraint( TSelf(wxWindow) _obj, TSizeOut(_w,_h) );
TClass(wxLayoutConstraints) wxWindow_GetConstraints( TSelf(wxWindow) _obj );
void*      wxWindow_GetConstraintsInvolvedIn( TSelf(wxWindow) _obj );
TClass(wxCursor) wxWindow_GetCursor( TSelf(wxWindow) _obj );
TClass(wxDropTarget) wxWindow_GetDropTarget( TSelf(wxWindow) _obj );
TClass(wxEvtHandler) wxWindow_GetEventHandler( TSelf(wxWindow) _obj );
void       wxWindow_GetFont( TSelf(wxWindow) _obj, TClassRef(wxFont) _ref );
void       wxWindow_GetForegroundColour( TSelf(wxWindow) _obj, TClassRef(wxColour) _ref );
void*      wxWindow_GetHandle( TSelf(wxWindow) _obj );
int        wxWindow_GetId( TSelf(wxWindow) _obj );
TStringLen wxWindow_GetLabel( TSelf(wxWindow) _obj, TStringOutVoid _buf );
int        wxWindow_GetLabelEmpty( TSelf(wxWindow) _obj );
int        wxWindow_GetMaxHeight( TSelf(wxWindow) _obj );
int        wxWindow_GetMaxWidth( TSelf(wxWindow) _obj );
int        wxWindow_GetMinHeight( TSelf(wxWindow) _obj );
int        wxWindow_GetMinWidth( TSelf(wxWindow) _obj );
TStringLen wxWindow_GetName( TSelf(wxWindow) _obj, TStringOutVoid _buf );
TClass(wxWindow) wxWindow_GetParent( TSelf(wxWindow) _obj );
void       wxWindow_GetPosition( TSelf(wxWindow) _obj, TPointOutVoid(_x,_y) );
void       wxWindow_GetPositionConstraint( TSelf(wxWindow) _obj, TPointOut(_x,_y) );
void       wxWindow_GetRect( TSelf(wxWindow) _obj, TRectOutVoid(_x,_y,_w,_h) );
int        wxWindow_GetScrollPos( TSelf(wxWindow) _obj, int orient );
int        wxWindow_GetScrollRange( TSelf(wxWindow) _obj, int orient );
int        wxWindow_GetScrollThumb( TSelf(wxWindow) _obj, int orient );
void       wxWindow_GetSize( TSelf(wxWindow) _obj, TSizeOutVoid(_w,_h) );
void       wxWindow_GetSizeConstraint( TSelf(wxWindow) _obj, TSizeOut(_w,_h) );
TClass(wxSizer) wxWindow_GetSizer( TSelf(wxWindow) _obj );
void       wxWindow_GetTextExtent( TSelf(wxWindow) _obj, TString string, int* x, int* y, int* descent, int* externalLeading, TClass(wxFont) theFont );
TStringLen wxWindow_GetToolTip( TSelf(wxWindow) _obj, TStringOutVoid _buf );
TClass(wxRegion) wxWindow_GetUpdateRegion( TSelf(wxWindow) _obj );
TClass(wxValidator) wxWindow_GetValidator( TSelf(wxWindow) _obj );
int        wxWindow_GetWindowStyleFlag( TSelf(wxWindow) _obj );
TBool      wxWindow_HasFlag( TSelf(wxWindow) _obj, int flag );
TBool      wxWindow_Hide( TSelf(wxWindow) _obj );
void       wxWindow_InitDialog( TSelf(wxWindow) _obj );
TBool      wxWindow_IsBeingDeleted( TSelf(wxWindow) _obj );
TBool      wxWindow_IsEnabled( TSelf(wxWindow) _obj );
TBool      wxWindow_IsExposed( TSelf(wxWindow) _obj, TRect(x,y,w,h) );
TBool      wxWindow_IsShown( TSelf(wxWindow) _obj );
TBool      wxWindow_IsTopLevel( TSelf(wxWindow) _obj );
int        wxWindow_Layout( TSelf(wxWindow) _obj );
int        wxWindow_LayoutPhase1( TSelf(wxWindow) _obj, int* noChanges );
int        wxWindow_LayoutPhase2( TSelf(wxWindow) _obj, int* noChanges );
void       wxWindow_Lower( TSelf(wxWindow) _obj );
void       wxWindow_MakeModal( TSelf(wxWindow) _obj, TBool modal );
void       wxWindow_Move( TSelf(wxWindow) _obj, TPoint(x,y) );
void       wxWindow_MoveConstraint( TSelf(wxWindow) _obj, TPoint(x,y) );
void*      wxWindow_PopEventHandler( TSelf(wxWindow) _obj, TBool deleteHandler );
int        wxWindow_PopupMenu( TSelf(wxWindow) _obj, TClass(wxMenu) menu, TPoint(x,y) );
void       wxWindow_PrepareDC( TSelf(wxWindow) _obj, TClass(wxDC) dc );
void       wxWindow_PushEventHandler( TSelf(wxWindow) _obj, TClass(wxEvtHandler) handler );
void       wxWindow_Raise( TSelf(wxWindow) _obj );
void       wxWindow_Refresh( TSelf(wxWindow) _obj, TBool eraseBackground );
void       wxWindow_RefreshRect( TSelf(wxWindow) _obj, TBool eraseBackground, TRect(x,y,w,h) );
void       wxWindow_ReleaseMouse( TSelf(wxWindow) _obj );
void       wxWindow_RemoveChild( TSelf(wxWindow) _obj, TClass(wxWindow) child );
void       wxWindow_RemoveConstraintReference( TSelf(wxWindow) _obj, TClass(wxWindow) otherWin );
int        wxWindow_Reparent( TSelf(wxWindow) _obj, TClass(wxWindow) _par );
void       wxWindow_ResetConstraints( TSelf(wxWindow) _obj );
void       wxWindow_ScreenToClient( TSelf(wxWindow) _obj, int* x, int* y );
void       wxWindow_ScrollWindow( TSelf(wxWindow) _obj, TVector(dx,dy) );
void       wxWindow_ScrollWindowRect( TSelf(wxWindow) _obj, TVector(dx,dy), TRect(x,y,w,h) );
void       wxWindow_SetAcceleratorTable( TSelf(wxWindow) _obj, TClass(wxAcceleratorTable) accel );
void       wxWindow_SetAutoLayout( TSelf(wxWindow) _obj, TBool autoLayout );
int        wxWindow_SetBackgroundColour( TSelf(wxWindow) _obj, TClass(wxColour) colour );
void       wxWindow_SetCaret( TSelf(wxWindow) _obj, TClass(wxCaret) caret );
void       wxWindow_SetClientData( TSelf(wxWindow) _obj, TClass(wxClientData) data );
void       wxWindow_SetClientObject( TSelf(wxWindow) _obj, TClass(wxClientData) data );
void       wxWindow_SetClientSize( TSelf(wxWindow) _obj, TSize(width,height) );
void       wxWindow_SetConstraintSizes( TSelf(wxWindow) _obj, int recurse );
void       wxWindow_SetConstraints( TSelf(wxWindow) _obj, TClass(wxLayoutConstraints) constraints );
int        wxWindow_SetCursor( TSelf(wxWindow) _obj, TClass(wxCursor) cursor );
void       wxWindow_SetDropTarget( TSelf(wxWindow) _obj, TClass(wxDropTarget) dropTarget );
void       wxWindow_SetExtraStyle( TSelf(wxWindow) _obj, long exStyle );
void       wxWindow_SetFocus( TSelf(wxWindow) _obj );
int        wxWindow_SetFont( TSelf(wxWindow) _obj, TClass(wxFont) font );
int        wxWindow_SetForegroundColour( TSelf(wxWindow) _obj, TClass(wxColour) colour );
void       wxWindow_SetId( TSelf(wxWindow) _obj, int _id );
void       wxWindow_SetLabel( TSelf(wxWindow) _obj, TString _title );
void       wxWindow_SetName( TSelf(wxWindow) _obj, TString _name );
void       wxWindow_SetScrollPos( TSelf(wxWindow) _obj, int orient, int pos, TBool refresh );
void       wxWindow_SetScrollbar( TSelf(wxWindow) _obj, int orient, int pos, int thumbVisible, int range, TBool refresh );
void       wxWindow_SetSize( TSelf(wxWindow) _obj, TRect(x,y,width,height), int sizeFlags );
void       wxWindow_SetSizeConstraint( TSelf(wxWindow) _obj, TRect(x,y,w,h) );
void       wxWindow_SetSizeHints( TSelf(wxWindow) _obj, int minW, int minH, int maxW, int maxH, int incW, int incH );
void       wxWindow_SetSizer( TSelf(wxWindow) _obj, TClass(wxSizer) sizer );
void       wxWindow_SetToolTip( TSelf(wxWindow) _obj, TString tip );
void       wxWindow_SetValidator( TSelf(wxWindow) _obj, TClass(wxValidator) validator );
void       wxWindow_SetWindowStyleFlag( TSelf(wxWindow) _obj, long style );
TBool      wxWindow_Show( TSelf(wxWindow) _obj );
void       wxWindow_Thaw( TSelf(wxWindow) _obj );
TBoolInt   wxWindow_TransferDataFromWindow( TSelf(wxWindow) _obj );
TBoolInt   wxWindow_TransferDataToWindow( TSelf(wxWindow) _obj );
void       wxWindow_UnsetConstraints( TSelf(wxWindow) _obj, void* c );
void       wxWindow_UpdateWindowUI( TSelf(wxWindow) _obj );
TBool      wxWindow_Validate( TSelf(wxWindow) _obj );
void       wxWindow_WarpPointer( TSelf(wxWindow) _obj, TPoint(x,y) );

/* wxWindowCreateEvent */
TClassDefExtend(wxWindowCreateEvent,wxCommandEvent)
TClass(wxWindow) wxWindowCreateEvent_GetWindow( TSelf(wxWindowCreateEvent) _obj );

/* wxWindowDC */
TClassDefExtend(wxWindowDC,wxDC)
TClass(wxWindowDC) wxWindowDC_Create( TClass(wxWindow) win );
void       wxWindowDC_Delete( TSelf(wxWindowDC) _obj );

/* wxWindowDestroyEvent */
TClassDefExtend(wxWindowDestroyEvent,wxCommandEvent)
TClass(wxWindow) wxWindowDestroyEvent_GetWindow( TSelf(wxWindowDestroyEvent) _obj );

/* wxWindowDisabler */
TClassDef(wxWindowDisabler)

/* wxWizard */
TClassDefExtend(wxWizard,wxDialog)
void       wxWizard_Chain( TClass(wxWizardPageSimple) f, TClass(wxWizardPageSimple) s );
TClass(wxWizard) wxWizard_Create( TClass(wxWindow) _prt, int _id, TStringVoid _txt, TClass(wxBitmap) _bmp, TRect(_lft,_top,_wdt,_hgt) );
TClass(wxWizardPage) wxWizard_GetCurrentPage( TSelf(wxWizard) _obj );
void       wxWizard_GetPageSize( TSelf(wxWizard) _obj, TSizeOutVoid(_w,_h) );
int        wxWizard_RunWizard( TSelf(wxWizard) _obj, TClass(wxWizardPage) firstPage );
void       wxWizard_SetPageSize( TSelf(wxWizard) _obj, TSize(w,h) );

/* wxWizardEvent */
TClassDefExtend(wxWizardEvent,wxNotifyEvent)
int        wxWizardEvent_GetDirection( TSelf(wxWizardEvent) _obj );

/* wxWizardPage */
TClassDefExtend(wxWizardPage,wxPanel)

/* wxWizardPageSimple */
TClassDefExtend(wxWizardPageSimple,wxWizardPage)
TClass(wxWizardPageSimple) wxWizardPageSimple_Create( TClass(wxWizard) _prt );
void       wxWizardPageSimple_GetBitmap( TSelf(wxWizardPageSimple) _obj, TClassRef(wxBitmap) _ref );
TClass(wxWizardPageSimple) wxWizardPageSimple_GetNext( TSelf(wxWizardPageSimple) _obj );
TClass(wxWizardPageSimple) wxWizardPageSimple_GetPrev( TSelf(wxWizardPageSimple) _obj );
void       wxWizardPageSimple_SetNext( TSelf(wxWizardPageSimple) _obj, TClass(wxWizardPageSimple) next );
void       wxWizardPageSimple_SetPrev( TSelf(wxWizardPageSimple) _obj, TClass(wxWizardPageSimple) prev );

/* wxXmlResource */
TClassDefExtend(wxXmlResource,wxObject)
void       wxXmlResource_AddHandler( TSelf(wxXmlResource) _obj, TClass(wxEvtHandler) handler );
void       wxXmlResource_AddSubclassFactory( TSelf(wxXmlResource) _obj, void* factory );
int        wxXmlResource_AttachUnknownControl( TSelf(wxXmlResource) _obj, TStringVoid name, TClass(wxControl) control, TClass(wxWindow) parent );
void       wxXmlResource_ClearHandlers( TSelf(wxXmlResource) _obj );
int        wxXmlResource_CompareVersion( TSelf(wxXmlResource) _obj, int major, int minor, int release, int revision );
TClass(wxXmlResource) wxXmlResource_Create( void* _obj, int flags );
TClass(wxXmlResource) wxXmlResource_CreateFromFile( TSelf(wxXmlResource) _obj, void* filemask, int flags );
void       wxXmlResource_Delete( TSelf(wxXmlResource) _obj );
void*      wxXmlResource_Get(  );
int        wxXmlResource_GetFlags( TSelf(wxXmlResource) _obj );
long       wxXmlResource_GetVersion( TSelf(wxXmlResource) _obj );
int        wxXmlResource_GetXRCID( TSelf(wxXmlResource) str_id );
void       wxXmlResource_InitAllHandlers( TSelf(wxXmlResource) _obj );
int        wxXmlResource_InitializeObject( TSelf(wxXmlResource) _obj, void* _inst, TClass(wxWindow) parent, TStringVoid name, void* classname );
void       wxXmlResource_InsertHandler( TSelf(wxXmlResource) _obj, TClass(wxEvtHandler) handler );
int        wxXmlResource_Load( TSelf(wxXmlResource) _obj, void* filemask );
void       wxXmlResource_LoadBitmap( TSelf(wxXmlResource) _obj, TStringVoid name, TClassRef(wxBitmap) _ref );
void*      wxXmlResource_LoadDialog( TSelf(wxXmlResource) _obj, TClass(wxWindow) parent, TStringVoid name );
void*      wxXmlResource_LoadFrame( TSelf(wxXmlResource) _obj, TClass(wxWindow) parent, TStringVoid name );
void       wxXmlResource_LoadIcon( TSelf(wxXmlResource) _obj, TStringVoid name, TClassRef(wxIcon) _ref );
void*      wxXmlResource_LoadMenu( TSelf(wxXmlResource) _obj, TStringVoid name );
void*      wxXmlResource_LoadMenuBar( TSelf(wxXmlResource) _obj, TClass(wxWindow) parent, TStringVoid name );
void*      wxXmlResource_LoadObject( TSelf(wxXmlResource) _obj, TClass(wxWindow) parent, TStringVoid name, void* classname );
void*      wxXmlResource_LoadPanel( TSelf(wxXmlResource) _obj, TClass(wxWindow) parent, TStringVoid name );
void*      wxXmlResource_LoadToolBar( TSelf(wxXmlResource) _obj, TClass(wxWindow) parent, TStringVoid name );
void*      wxXmlResource_Set( TSelf(wxXmlResource) res );
void       wxXmlResource_SetFlags( TSelf(wxXmlResource) _obj, int flags );

/* wxXmlResourceHandler */
TClassDefExtend(wxXmlResourceHandler,wxObject)

/* wxZipInputStream */
TClassDefExtend(wxZipInputStream,wxInputStream)

/* wxZlibInputStream */
TClassDefExtend(wxZlibInputStream,wxFilterInputStream)

/* wxZlibOutputStream */
TClassDefExtend(wxZlibOutputStream,wxFilterOutputStream)


#endif /* WXC_GLUE_H */

