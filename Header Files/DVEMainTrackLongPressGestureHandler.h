//
//     Generated by private class-dump
//

@class UIView, NSString, CADisplayLink, NSArray, DVEVideoTrackPreviewView, DVEVideoSegmentView, NSDictionary, DVEMainTrackLongPressContentView, DVELongPressCursorView;
@protocol DVERootViewControllerProtocol, DVECoreVideoProtocol;

@interface DVEMainTrackLongPressGestureHandler : NSObject <UIGestureRecognizerDelegate> {
    DVEVideoTrackPreviewView *_videoTrackPreviewView;
    double _longPressRightEdgeThreshold;
    double _longPressLeftEdgeThreshold;
    unsigned long long _moveDirection;
    long long _longPressIndex;
    long long _currentInsertIndex;
    CADisplayLink *_longPressDisplayLink;
    NSString *_longPressSlotID;
    DVEMainTrackLongPressContentView *_bgContentView;
    UIView *_movingView;
    DVELongPressCursorView *_cursorView;
    DVEVideoSegmentView *_targetSegmentView;
    NSDictionary *_itemInfoViews;
    NSArray *_mainCacheSlots;
    id<DVECoreVideoProtocol> _videoEditor;
    id<DVERootViewControllerProtocol> _rootViewService;
}

@property (nonatomic) double longPressRightEdgeThreshold;
@property (nonatomic) double longPressLeftEdgeThreshold;
@property (nonatomic) unsigned long long moveDirection;
@property (nonatomic) long long longPressIndex;
@property (nonatomic) long long currentInsertIndex;
@property (retain, nonatomic) CADisplayLink *longPressDisplayLink;
@property (retain, nonatomic) NSString *longPressSlotID;
@property (retain, nonatomic) DVEMainTrackLongPressContentView *bgContentView;
@property (retain, nonatomic) UIView *movingView;
@property (retain, nonatomic) DVELongPressCursorView *cursorView;
@property (retain, nonatomic) DVEVideoSegmentView *targetSegmentView;
@property (copy, nonatomic) NSDictionary *itemInfoViews;
@property (copy, nonatomic) NSArray *mainCacheSlots;
@property (weak, nonatomic) id<DVECoreVideoProtocol> videoEditor;
@property (weak, nonatomic) id<DVERootViewControllerProtocol> rootViewService;
@property (weak, nonatomic) DVEVideoTrackPreviewView *videoTrackPreviewView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)videoTrackPreviewView;
- (void)longPressWillStart:(id)arg0 onView:(id)arg1 withSlot:(id)arg2;
- (void)longPressDidChange:(id)arg0 onView:(id)arg1 withSlot:(id)arg2;
- (void)longPressWillEnd:(id)arg0 onView:(id)arg1 withSlot:(id)arg2;
- (void)setCurrentInsertIndex:(long long)arg0;
- (void)showBgContentView;
- (void)showCursorView;
- (void)createMovingViewForSegmentView:(id)arg0;
- (void)syncLongPressUIWithHappend:(BOOL)arg0 onSlot:(id)arg1;
- (void)setMainCacheSlots:(id)arg0;
- (id)mainCacheSlots;
- (void)setLongPressIndex:(long long)arg0;
- (void)setItemInfoViews:(id)arg0;
- (void)updateMovingContentForSegmentView:(id)arg0;
- (void)showMovingViewIfNeed;
- (id)movingView;
- (long long)currentInsertIndex;
- (id)cursorView;
- (void)longPressDetectEdge:(id)arg0 onView:(id)arg1 increment:(double)arg2;
- (void)setTargetSegmentView:(id)arg0;
- (void)invalidateLongPressCADisplayLink;
- (void)removeAllLongPressEditView;
- (long long)longPressIndex;
- (double)longPressRightEdgeThreshold;
- (void)setMoveDirection:(unsigned long long)arg0;
- (void)setupLongPressCADisplayLink;
- (void)pauseLongPressCADisplayLink;
- (double)longPressLeftEdgeThreshold;
- (void)setLongPressSlotID:(id)arg0;
- (id)longPressDisplayLink;
- (void)handleLongPressEdgeIntersection;
- (void)setLongPressDisplayLink:(id)arg0;
- (unsigned long long)moveDirection;
- (id)itemInfoViews;
- (void)removeItemInfoViews;
- (void)removeMovingView;
- (void)removeBgContentView;
- (void)removeCursorView;
- (void)setLongPressRightEdgeThreshold:(double)arg0;
- (void)setLongPressLeftEdgeThreshold:(double)arg0;
- (id)longPressSlotID;
- (id)bgContentView;
- (void)setBgContentView:(id)arg0;
- (void)setMovingView:(id)arg0;
- (void)setCursorView:(id)arg0;
- (id)targetSegmentView;
- (id)rootViewService;
- (void)setRootViewService:(id)arg0;
- (id)videoEditor;
- (void)setVideoEditor:(id)arg0;
- (void)setVideoTrackPreviewView:(id)arg0;
- (void)addLongPressGestureTo:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)longPressAction:(id)arg0;
- (id)viewModel;

@end
