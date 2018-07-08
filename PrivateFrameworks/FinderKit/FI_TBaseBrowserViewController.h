//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TViewController.h>

#import "NSDraggingSource.h"
#import "NSSharingServiceDelegate.h"
#import "NSSharingServicePickerDelegate.h"
#import "NSTouchBarDelegate.h"
#import "TBrowserViewDelegate.h"
#import "TDropOperationDelegateProtocol.h"
#import "TFloatingInputWindowDelegateProtocol.h"
#import "TMarkTornDown.h"
#import "TNodeTaskDelegateProtocol.h"
#import "TQLPreviewWindowControllerProtocol.h"
#import "TTypeSelectDelegate.h"

@class FI_TNodeViewSettings, NSString, NSView;

__attribute__((visibility("hidden")))
@interface FI_TBaseBrowserViewController : FI_TViewController <NSDraggingSource, NSSharingServiceDelegate, NSSharingServicePickerDelegate, TBrowserViewDelegate, TDropOperationDelegateProtocol, TNodeTaskDelegateProtocol, TQLPreviewWindowControllerProtocol, TTypeSelectDelegate, TMarkTornDown, NSTouchBarDelegate, TFloatingInputWindowDelegateProtocol>
{
    struct TNSRef<FI_TNodeViewSettings, void> _viewSettings;
    double _iconSize;
    double _textSize;
    _Bool _showIconPreview;
    _Bool _isEditingTags;
    _Bool _isTornDown;
    _Bool _darkBackground;
    _Bool _allowsDraggingFilesIn;
    struct TRef<__CFMachPort *, TRetainReleasePolicy<CFMachPortRef>> _modifierFlagsEventMonitor;
    struct TRef<__CFRunLoopSource *, TRetainReleasePolicy<CFRunLoopSourceRef>> _modifierFlagsEventSource;
    struct TFENode _nodeToDoubleClick;
    struct TFENodeVector fOrderedSelection;
    struct TNSRef<NSSharingServicePicker, void> _toolbarSharingServicePicker;
    struct TNSRef<NSView, void> _anchoringViewForSharingService;
    struct TNotificationCenterObserver _browserViewWillMoveToWindowObserver;
    struct TNotificationCenterObserver _browserViewDidMoveToWindowObserver;
    struct TKeyValueObserver _browserViewEffectiveAppearanceObserver;
    struct TNotificationCenterObserver _browserViewBackingPropertiesObserver;
    struct TNotificationCenterObserver _browserWindowDidBecomeMainObserver;
    struct TNotificationCenterObserver _browserWindowDidResignMainObserver;
    struct TNotificationCenterObserver _browserWindowDidBecomeKeyObserver;
    struct TNotificationCenterObserver _browserWindowDidResignKeyObserver;
    struct TNotificationCenterObserver _tagsPopoverDidCloseObserver;
}

+ (void)addTagsItemsToFileMenu:(id)arg1;
+ (struct TTypeSelectController *)typeSelectControllerWithDelegate:(id)arg1;
@property(readonly, nonatomic, getter=isDarkBackground) _Bool darkBackground; // @synthesize darkBackground=_darkBackground;
@property struct TFENode nodeToDoubleClick; // @synthesize nodeToDoubleClick=_nodeToDoubleClick;
@property(readonly, getter=isTornDown) _Bool tornDown; // @synthesize tornDown=_isTornDown;
@property(readonly, nonatomic) _Bool isEditingTags; // @synthesize isEditingTags=_isEditingTags;
@property(nonatomic) _Bool showIconPreview; // @synthesize showIconPreview=_showIconPreview;
@property(nonatomic) double textSize; // @synthesize textSize=_textSize;
@property(nonatomic) double iconSize; // @synthesize iconSize=_iconSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cmdRename:(id)arg1;
- (_Bool)validateRename:(id)arg1;
- (void)cmdRemoveLabel7:(id)arg1;
- (void)cmdRemoveLabel6:(id)arg1;
- (void)cmdRemoveLabel5:(id)arg1;
- (void)cmdRemoveLabel4:(id)arg1;
- (void)cmdRemoveLabel3:(id)arg1;
- (void)cmdRemoveLabel2:(id)arg1;
- (void)cmdRemoveLabel1:(id)arg1;
- (void)commonRemoveLabel:(long long)arg1;
- (void)cmdSetTagColor:(id)arg1;
- (void)cmdSetLabel7:(id)arg1;
- (void)cmdSetLabel6:(id)arg1;
- (void)cmdSetLabel5:(id)arg1;
- (void)cmdSetLabel4:(id)arg1;
- (void)cmdSetLabel3:(id)arg1;
- (void)cmdSetLabel2:(id)arg1;
- (void)cmdSetLabel1:(id)arg1;
- (void)commonSetLabel:(long long)arg1;
- (void)cmdSetLabel0:(id)arg1;
- (void)cmdSetLabel:(id)arg1;
- (_Bool)validateSetLabel:(id)arg1;
- (void)cmdArrange:(id)arg1;
- (_Bool)validateArrange:(id)arg1;
- (void)cmdSortBy:(id)arg1;
- (_Bool)validateSortBy:(id)arg1;
- (void)cmdQuickLook:(id)arg1;
- (_Bool)validateQuickLook:(id)arg1;
- (_Bool)validateQuickLookWithNodes:(const struct TFENodeVector *)arg1;
- (void)cmdOpenParent:(id)arg1;
- (_Bool)validateOpenParent:(id)arg1;
- (_Bool)validateOpenParentCommon:(id)arg1;
- (void)cmdOpen:(id)arg1;
- (_Bool)validateOpen:(id)arg1;
- (_Bool)commonValidateOpen:(id)arg1;
- (_Bool)handleValidateOpen:(const struct TFENodeVector *)arg1;
- (void)showingTagsPopover:(id)arg1;
- (void)handleCmdEditTags:(id)arg1;
- (struct TFENode)wellPositionedNodeFromNodes:(const struct TFENodeVector *)arg1;
- (_Bool)handleValidateEditTags:(id)arg1;
- (void)cmdToggleFavoriteTag:(id)arg1;
- (_Bool)validateToggleFavoriteTag:(id)arg1;
- (void)cmdRemoveAllTags:(id)arg1;
- (_Bool)validateRemoveAllTags:(id)arg1;
- (void)cmdRemoveTag:(id)arg1;
- (_Bool)validateRemoveTag:(id)arg1;
- (void)handleMoveToTrashCommand:(const struct TFENodeVector *)arg1 immediately:(_Bool)arg2;
- (void)handleMoveToTrashOrPutBackCommand:(const struct TFENodeVector *)arg1;
- (void)cmdEvictNow:(id)arg1;
- (_Bool)validateEvictNow:(id)arg1;
- (void)cmdDownloadNow:(id)arg1;
- (_Bool)validateDownloadNow:(id)arg1;
- (void)cmdMoveToTrashFromToolbar:(id)arg1;
- (_Bool)validateMoveToTrashFromToolbar:(id)arg1;
- (void)cmdMoveToTrash:(id)arg1;
- (_Bool)validateMoveToTrash:(id)arg1;
- (void)cmdDeleteImmediately:(id)arg1;
- (_Bool)validateDeleteImmediately:(id)arg1;
- (void)cmdDuplicate:(id)arg1;
- (_Bool)validateDuplicate:(id)arg1;
- (void)handleDuplicateCommand:(const struct TFENodeVector *)arg1 exactly:(_Bool)arg2;
- (_Bool)validateDeselectAll:(id)arg1;
- (void)cmdDeselectAll:(id)arg1;
- (_Bool)validateSelectAll:(id)arg1;
- (void)selectAll:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (struct TriStateBool)includeTargetForCommandSelector:(SEL)arg1;
- (_Bool)canHaveRedundantReplicaNodes;
- (_Bool)groupingByTag;
- (void)attemptToSelectPendingNodes;
- (struct TFENodeVector)pendingNodesToSelectUpTo:(unsigned long long)arg1;
- (struct TFENodeVector)commandTarget:(SEL)arg1;
- (struct TFENodeVector)commandTarget:(SEL)arg1 upTo:(unsigned long long)arg2;
- (struct TFENodeVector)commandValidationTarget:(SEL)arg1 isPartial:(_Bool *)arg2;
- (struct TFENodeVector)commandValidationTarget:(SEL)arg1;
- (unsigned long long)getCommandTarget:(SEL)arg1 outNodes:(struct TFENodeVector *)arg2 upTo:(unsigned long long)arg3;
- (unsigned long long)getCommandTarget:(SEL)arg1 outNodes:(struct TFENodeVector *)arg2;
- (id)popoverAnchorViewForNode:(const struct TFENode *)arg1;
- (struct CGRect)globalZoomRectForNode:(const struct TFENode *)arg1;
- (struct CGRect)zoomRectForNode:(const struct TFENode *)arg1;
- (struct CGRect)globalIconFrameForNode:(const struct TFENode *)arg1;
- (struct CGRect)iconFrameForNode:(const struct TFENode *)arg1;
- (struct CGRect)globalFrameForNode:(const struct TFENode *)arg1;
- (struct CGRect)frameForNode:(const struct TFENode *)arg1;
- (id)anchoringViewForSharingService:(id)arg1 showRelativeToRect:(struct CGRect *)arg2 preferredEdge:(unsigned long long *)arg3;
- (void)sharingServicePicker:(id)arg1 didChooseSharingService:(id)arg2;
- (void)sharingService:(id)arg1 willShareItems:(id)arg2;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (void)handlePreflightServicewithItems:(id)arg1 service:(id)arg2;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (void)cmdShareFromToolbarItem:(id)arg1;
@property(retain, nonatomic) NSView *anchoringViewForSharingService;
- (void)shareWithSharingService:(id)arg1;
- (_Bool)validateShare:(id)arg1;
- (void)cmdShare:(id)arg1;
- (_Bool)writeSelectionToPasteboard:(id)arg1 types:(id)arg2;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (_Bool)getSelectionForServices:(struct TFENodeVector *)arg1;
- (struct CGRect)dragFlockingFrameForDraggingItem:(id)arg1 dropTargetView:(id)arg2 mouseLocationInView:(const struct CGPoint *)arg3;
- (struct CGRect)dragFlockingFrameForNode:(const struct TFENode *)arg1 dropTargetView:(id)arg2;
- (struct CGSize)dragFlockingFrameSizeForDropTargetView:(id)arg1;
- (id)dragFlockingImageComponentsForNode:(const struct TFENode *)arg1 dropTargetView:(id)arg2;
- (unsigned long long)dragOperationWhenMovingInsideTargetAndCheckingModifiers;
- (struct TFENode)nodeForDraggingItem:(id)arg1;
- (_Bool)checkForTEFFilesInContainer:(const struct TFENode *)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1 dropTargetView:(id)arg2;
- (_Bool)waitingForThumbnailForNode:(const struct TFENode *)arg1;
- (_Bool)performDragOperation:(id)arg1 dropTargetView:(id)arg2;
- (void)draggingEnded:(id)arg1 dropTargetView:(id)arg2;
- (void)draggingExited:(id)arg1 dropTargetView:(id)arg2;
- (unsigned long long)draggingEntered:(id)arg1 dropTargetView:(id)arg2;
- (void)setAllowsDraggingFilesIn:(_Bool)arg1;
- (_Bool)allowsDraggingFilesIn;
- (void)tearDownModifierFlagsMonitor;
- (void)configureModifierFlagsEventMonitor;
- (void)configureDraggedTypes;
- (id)draggedTypesForDropTargetView:(id)arg1;
- (BOOL)ignoreModifierKeysForDraggingSession:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (id)beginDraggingNodes:(const struct TFENodeVector *)arg1 mouseDownEvent:(id)arg2;
- (_Bool)isActiveQLWindowController;
- (void)resignActiveQLWindowController;
- (void)becomeActiveQLWindowController;
- (void)updatePreviewPanel;
- (void)closePreviewPanel;
- (void)openPreviewPanelInFullScreen:(_Bool)arg1;
- (void)togglePreviewPanelWithFullScreen:(_Bool)arg1;
- (void)openQuickLookNode:(const struct TFENode *)arg1;
- (id)quickLookSharedPreviewView;
- (id)zoomImageForNode:(const struct TFENode *)arg1 contentRect:(struct CGRect *)arg2;
- (_Bool)quickLookHandleEvent:(id)arg1;
- (_Bool)filterQuickLookNodes:(const struct TFENodeVector *)arg1 originalNodes:(struct TFENodeVector *)arg2 nodesToPreview:(struct TFENodeVector *)arg3 allowFolders:(_Bool)arg4;
- (void)getQuickLookNodes:(struct TFENodeVector *)arg1;
- (_Bool)handleQuickLookWithEvent:(id)arg1;
- (_Bool)handleKeyDown:(id)arg1 currentKey:(unsigned short)arg2;
- (void)getDropTargetNode:(struct TFENode *)arg1 fromDraggingInfo:(id)arg2 inDropTargetView:(id)arg3;
- (void)typeSelectNode:(const struct TFENode *)arg1;
- (unsigned long long)typeSelectGetSelectedNodes:(struct TFENodeVector *)arg1;
- (struct TFENode)nextNodeInViewAfter:(const struct TFENodeVector *)arg1;
- (struct TFENodeVector)typeSelectCandidateNodes;
- (_Bool)shouldTypeSelectForEvent:(id)arg1 withCurrentSearchString:(id)arg2;
- (_Bool)handleUnicodeTextInput:(id)arg1 atTime:(double)arg2;
- (_Bool)isTypeSelectInProgressWithTime:(double)arg1;
- (void)clearTypeSelectBuffer;
- (_Bool)typeSelectEvent:(const struct TString *)arg1 atTime:(double)arg2;
- (void)selectContextMenuTargetNodesForCommand:(SEL)arg1;
- (void)revealNodes:(const struct TFENodeVector *)arg1 select:(_Bool)arg2;
- (void)deselectAllNodes;
- (void)selectAllNodes;
- (void)selectNodesForTask:(const struct TFENodeVector *)arg1 startEditing:(_Bool)arg2;
- (void)selectNodesNowOrLater:(const struct TFENodeVector *)arg1;
- (unsigned long long)getSelectedNodesForQuickLook:(struct TFENodeVector *)arg1 includeTarget:(_Bool)arg2 upTo:(unsigned long long)arg3;
- (unsigned long long)getSelectedNodesForQuickLook:(struct TFENodeVector *)arg1 includeTarget:(_Bool)arg2;
- (unsigned long long)getTargetSelection:(struct TFENodeVector *)arg1 includeTarget:(_Bool)arg2 upTo:(unsigned long long)arg3;
- (unsigned long long)getTargetSelection:(struct TFENodeVector *)arg1 includeTarget:(_Bool)arg2;
- (unsigned long long)getSelectedNodesInFocus:(struct TFENodeVector *)arg1 upTo:(unsigned long long)arg2;
- (unsigned long long)getSelectedNodesInFocus:(struct TFENodeVector *)arg1;
- (unsigned long long)selectedNodesCountInFocus;
- (void)setSelectedNodes:(const struct TFENodeVector *)arg1 byExtendingSelection:(_Bool)arg2;
- (unsigned long long)getSelectedNodesFromView:(struct TFENodeVector *)arg1 upTo:(unsigned long long)arg2;
- (unsigned long long)getSelectedNodes:(struct TFENodeVector *)arg1 upTo:(unsigned long long)arg2;
- (void)updateOrderedSelection;
- (unsigned long long)getSelectedNodes:(struct TFENodeVector *)arg1;
@property(readonly, nonatomic) unsigned long long selectedNodesCount; // @dynamic selectedNodesCount;
- (void)selectionChanged;
- (void)finishedShrinkToFitTextAboutToOpen:(_Bool)arg1 forNode:(const struct TFENode *)arg2;
- (void)updateSTFEditorLocation;
- (void)titleOfNode:(const struct TFENode *)arg1 didChangeTo:(id)arg2 renameOp:(id)arg3;
- (void)stopEditing:(_Bool)arg1;
- (_Bool)startEditingWithNode:(const struct TFENode *)arg1 renameOp:(id)arg2;
- (_Bool)startEditingNodeNowOrLater:(const struct TFENode *)arg1 renameOp:(id)arg2;
- (void)prepareSnapToGridForNode:(const struct TFENode *)arg1;
- (_Bool)useSpecialInFlightAnimation;
- (void)offsetSpatialData:(struct IconSpatialData *)arg1;
- (void)addOffsetSpatialDataFromNodes:(const struct TFENodeVector *)arg1 toPropertyList:(vector_d50fdf79 *)arg2;
- (void)addSpatialDataForLocationInView:(const struct CGPoint *)arg1 toPropertyList:(struct TFENodePropertyList *)arg2;
- (struct TFENode)nodeAtPoint:(const struct CGPoint *)arg1 includeTarget:(_Bool)arg2;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidResignMain:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)browserViewDidMoveToWindow;
- (void)browserViewWillMoveToWindow:(id)arg1;
- (void)checkDarkBackground;
- (void)browserViewEffectiveAppearanceChanged;
- (void)browserViewBackingPropertiesChanged;
@property(readonly, nonatomic) double scaleFactor;
@property(retain) FI_TNodeViewSettings *viewSettings; // @dynamic viewSettings;
- (void)flushNodeEventsWithCompletion:(const function_b1fce659 *)arg1;
- (void)cancelDelayedNodeEventHandling;
- (void)delayNodeEventHandling:(double)arg1;
- (void)flushNodeEvents;
- (void)openSelectedNodes:(const struct TFENodeVector *)arg1 modifiers:(unsigned long long)arg2 allowTabs:(_Bool)arg3;
- (void)openSelectionWithModifiers:(unsigned long long)arg1 allowTabs:(_Bool)arg2;
- (void)openSelection;
- (void)reloadIconsInView;
- (struct TFENode)parentNodeToOpen:(const struct TFENode *)arg1;
- (unsigned long long)itemCount;
- (struct TString)searchString;
- (_Bool)isLTRLocalization;
- (_Bool)inBrowseMode;
- (_Bool)isBackupBrowser;
- (_Bool)isTimeMachineBrowser;
- (_Bool)isDesktopBrowser;
- (_Bool)targetIsSearch;
- (_Bool)focusedOnSearchResults;
- (const struct TFENodeVector *)resolvedTargetPath;
- (struct TFENode)focusNode;
- (const struct TFENode *)target;
- (id)scrollView;
- (id)browserView;
- (void)aboutToTearDown;
- (void)viewLoaded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

