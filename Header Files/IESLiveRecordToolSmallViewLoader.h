//
//     Generated by private class-dump
//

@class IESLiveRightBottomMutuallyExclusiveItem, NSString, IESLiveRecordToolPlaceHolderView, IESLiveRecordToolSmallView, IESLiveRecordToolSmallViewModel;

@interface IESLiveRecordToolSmallViewLoader : NSObject <IESLivePublicScreenLayoutSubscriber, IESLiveRecordToolLayoutService> {
    BOOL _isClear;
    BOOL _isShowed;
    BOOL _recordToolItemShowed;
    IESLiveRecordToolSmallView *_recordToolView;
    id /* block */ _onRecordViewClicked;
    id /* block */ _onRecordViewTracker;
    IESLiveRecordToolSmallViewModel *_viewModel;
    double _userEnterViewHeight;
    double _dragRectTop;
    double _dragRectLeft;
    double _dragRectRight;
    double _reactBTop;
    double _reactBBottom;
    IESLiveRecordToolPlaceHolderView *_placeholderView;
    IESLiveRightBottomMutuallyExclusiveItem *_recordToolItem;
    struct IESLiveRecordToolNDC { NSString *rectType; double x; double y; } _currentNDC;
}

@property (nonatomic) BOOL isClear;
@property (nonatomic) BOOL isShowed;
@property (retain, nonatomic) IESLiveRecordToolSmallViewModel *viewModel;
@property (nonatomic) double userEnterViewHeight;
@property (nonatomic) double dragRectTop;
@property (nonatomic) double dragRectLeft;
@property (nonatomic) double dragRectRight;
@property (nonatomic) double reactBTop;
@property (nonatomic) double reactBBottom;
@property (nonatomic) struct IESLiveRecordToolNDC { NSString *rectType; double x; double y; } currentNDC;
@property (retain, nonatomic) IESLiveRecordToolPlaceHolderView *placeholderView;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *recordToolItem;
@property (nonatomic) BOOL recordToolItemShowed;
@property (retain, nonatomic) IESLiveRecordToolSmallView *recordToolView;
@property (copy, nonatomic) id /* block */ onRecordViewClicked;
@property (copy, nonatomic) id /* block */ onRecordViewTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)arg0;
- (void)setIsShowed:(BOOL)arg0;
- (BOOL)isShowed;
- (void)dragViewMoved:(id)arg0;
- (void)addObserve;
- (void)handleClearNotification:(id)arg0;
- (void)viewDidTap:(id)arg0;
- (void)publicScreenLayoutChanged:(id)arg0 forType:(unsigned long long)arg1;
- (double)userEnterViewHeight;
- (id)recordToolView;
- (void)setRecordToolView:(id)arg0;
- (BOOL)isRunningWithAppId:(id)arg0;
- (void)unloadRecordToolSmallView;
- (void)loadRecordToolSmallViewWithViewModel:(id)arg0;
- (void)showToolSmallView;
- (void)setOnRecordViewClicked:(id /* block */)arg0;
- (void)setOnRecordViewTracker:(id /* block */)arg0;
- (void)handleSEIModel:(struct IESLiveRecordToolNDC { id x0; double x1; double x2; })arg0;
- (void)loadWithViewModel:(id)arg0;
- (void)hideRightHolderView;
- (void)setCurrentNDC:(struct IESLiveRecordToolNDC { id x0; double x1; double x2; })arg0;
- (struct IESLiveRecordToolNDC { id x0; double x1; double x2; })currentNDC;
- (void)updatePositionWithNDC:(struct IESLiveRecordToolNDC { id x0; double x1; double x2; })arg0 showAnimation:(BOOL)arg1;
- (id /* block */)onRecordViewTracker;
- (BOOL)isEqualNDC:(struct IESLiveRecordToolNDC { id x0; double x1; double x2; })arg0 ndcB:(struct IESLiveRecordToolNDC { id x0; double x1; double x2; })arg1;
- (struct CGPoint { double x0; double x1; })transformNDCToRealCoordinates:(struct IESLiveRecordToolNDC { id x0; double x1; double x2; })arg0;
- (void)handleRightBottomAfterPositionChanged:(struct IESLiveRecordToolNDC { id x0; double x1; double x2; })arg0;
- (double)reactBTop;
- (void)setReactBTop:(double)arg0;
- (void)setReactBBottom:(double)arg0;
- (void)handleDragArea:(struct CGPoint { double x0; double x1; })arg0;
- (void)handleGestureRecognizerStateEnded;
- (id /* block */)onRecordViewClicked;
- (id)getTrackLocation:(struct IESLiveRecordToolNDC { id x0; double x1; double x2; })arg0;
- (struct IESLiveRecordToolDragRect { double x0; double x1; double x2; double x3; })getDragEnableRectB;
- (struct IESLiveRecordToolDragRect { double x0; double x1; double x2; double x3; })getDragEnableRectA;
- (struct IESLiveRecordToolNDC { id x0; double x1; double x2; })transformRealCoordinatesToNDC:(double)arg0 pointY:(double)arg1;
- (void)sendSEI;
- (BOOL)recordToolItemShowed;
- (void)addRightHolderView;
- (void)setRecordToolItem:(id)arg0;
- (id)recordToolItem;
- (void)setRecordToolItemShowed:(BOOL)arg0;
- (double)dragRectTop;
- (double)dragRectLeft;
- (double)dragRectRight;
- (double)reactBBottom;
- (void)setUserEnterViewHeight:(double)arg0;
- (void)setDragRectTop:(double)arg0;
- (void)setDragRectLeft:(double)arg0;
- (void)setDragRectRight:(double)arg0;
- (id)placeholderView;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setPlaceholderView:(id)arg0;
- (void)dealloc;
- (BOOL)isClear;
- (void)setIsClear:(BOOL)arg0;

@end