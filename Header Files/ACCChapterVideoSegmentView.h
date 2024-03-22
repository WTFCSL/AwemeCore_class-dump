//
//     Generated by private class-dump
//

@class UIView, RACDisposable, NSString, DVEVideoThumbnailView, DVEVideoTrackViewModel, CAShapeLayer, DVEVideoSegmentClipInfo, MASConstraint, NLETrackSlot_OC, DVEVideoThumbnailManager;
@protocol ACCChapterCoordinateTransfomer;

@interface ACCChapterVideoSegmentView : UIView <DVEVideoThumbnailLayoutDelegate, DVEVideoThumbnailViewDataSource, DVEVideoThumbnailViewDelegate, DVECoreActionDelegate> {
    BOOL _shadeEnable;
    NLETrackSlot_OC *_slot;
    id<ACCChapterCoordinateTransfomer> _coordinateTransfomer;
    UIView *_contentVisibleView;
    DVEVideoThumbnailView *_thumbnailView;
    DVEVideoTrackViewModel *_viewModel;
    DVEVideoSegmentClipInfo *_segmentClipTypeInfo;
    double _thumbnailWidth;
    DVEVideoThumbnailManager *_thumbnailManager;
    double _contentInsetsRight;
    MASConstraint *_contentVisibleViewRightConstraint;
    MASConstraint *_contentLeftInsetConstraint;
    double _thumbnailHeight;
    double _animationDuration;
    CAShapeLayer *_maskLayer;
    RACDisposable *_draftEvent;
    struct CGPoint { double x; double y; } _contentOffset;
}

@property (retain, nonatomic) DVEVideoThumbnailManager *thumbnailManager;
@property (nonatomic) double contentInsetsRight;
@property (retain, nonatomic) MASConstraint *contentVisibleViewRightConstraint;
@property (retain, nonatomic) MASConstraint *contentLeftInsetConstraint;
@property (nonatomic) double thumbnailHeight;
@property (nonatomic) double animationDuration;
@property (nonatomic) BOOL shadeEnable;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) RACDisposable *draftEvent;
@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (weak, nonatomic) id<ACCChapterCoordinateTransfomer> coordinateTransfomer;
@property (retain, nonatomic) UIView *contentVisibleView;
@property (retain, nonatomic) DVEVideoThumbnailView *thumbnailView;
@property (retain, nonatomic) DVEVideoTrackViewModel *viewModel;
@property (retain, nonatomic) DVEVideoSegmentClipInfo *segmentClipTypeInfo;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (nonatomic) double thumbnailWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionClipHeadOffset;
- (id)contentVisibleView;
- (double)contentInsetsRight;
- (void)setContentVisibleViewRightConstraint:(id)arg0;
- (void)setContentLeftInsetConstraint:(id)arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })indexesForDisplayedItems:(id)arg0;
- (void)reloadAnimationDuration;
- (void)addDraftEvent;
- (void)removeDraftEvent;
- (id)contentLeftInsetConstraint;
- (id)contentVisibleViewRightConstraint;
- (void)setSegmentClipTypeInfo:(id)arg0;
- (void)setContentInsetsRight:(double)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })intersectionRectWithScreen;
- (id)coordinateTransfomer;
- (BOOL)shadeEnable;
- (id)draftEvent;
- (void)setShadeEnable:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoThumbnailView:(id)arg0 layout:(id)arg1 rectForItemAtIndex:(long long)arg2;
- (id)videoThumbnailView:(id)arg0 cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems:(id)arg0;
- (void)videoThumbnailView:(id)arg0 didEndDisplayingCell:(id)arg1 atIndex:(long long)arg2;
- (void)fetchVisibleThumbnailImage:(id /* block */)arg0;
- (void)reloadShadeEnable;
- (void)setCoordinateTransfomer:(id)arg0;
- (void)setContentVisibleView:(id)arg0;
- (void)setDraftEvent:(id)arg0;
- (id)initWithSlot:(id)arg0 thumbnailManager:(id)arg1 viewModel:(id)arg2 transformer:(id)arg3;
- (void)updateContentInsetsRight:(double)arg0;
- (void)updateContentWidth:(double)arg0;
- (double)transitionClipTailOffset;
- (id)segmentClipTypeInfo;
- (void)clipForTransition:(id)arg0;
- (void)reloadDataWithForce:(BOOL)arg0;
- (id)slot;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (void).cxx_destruct;
- (double)animationDuration;
- (void)setViewModel:(id)arg0;
- (void)setAnimationDuration:(double)arg0;
- (double)thumbnailWidth;
- (void)setSlot:(id)arg0;
- (id)viewModel;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (void)dealloc;
- (id)thumbnailManager;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)maskLayer;
- (void)setupUI;
- (void)setMaskLayer:(id)arg0;
- (void)setThumbnailManager:(id)arg0;
- (id)thumbnailView;
- (void)setThumbnailHeight:(double)arg0;
- (void)setThumbnailWidth:(double)arg0;
- (double)thumbnailHeight;
- (void)setThumbnailView:(id)arg0;
- (void)addObservers;

@end