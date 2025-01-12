//
//     Generated by private class-dump
//

@class UIView, DVEVideoPanelTracker, CADisplayLink, NSString, DVEMainTrackLongPressGestureHandler, NSMutableDictionary, DVEVideoTrackViewModel, DVESegmentClipView, DVEVideoAttacher, DVEVideoTrackPreviewPanState, DVEVideoThumbnailManager;
@protocol DVECoreVideoProtocol, DVEVideoTrackPreviewTransitionDelegate, DVEVideoTrackPreviewDelegate, DVELoadingViewProtocol;

@interface DVEVideoTrackPreviewView : UIView <DVECoordinateTransfomer, DVESegmentClipViewDelegate, DVECoreActionDelegate, DVEVideoThumbnailLoaderDataSource, UIGestureRecognizerDelegate> {
    BOOL _longPressStatus;
    id<DVEVideoTrackPreviewDelegate> _delegate;
    id<DVEVideoTrackPreviewTransitionDelegate> _transitionDelegate;
    DVESegmentClipView *_segmentClipView;
    DVESegmentClipView *_segmentSelectView;
    NSMutableDictionary *_subVideoLineSegmentsPool;
    NSMutableDictionary *_subPhotoLineSegmentsPool;
    NSMutableDictionary *_subVideoDropSegmentsPool;
    NSMutableDictionary *_textSegmentsPool;
    DVEVideoAttacher *_attacher;
    UIView *_backgroundView;
    DVEVideoTrackViewModel *_viewModel;
    DVEVideoThumbnailManager *_thumbnailManager;
    NSMutableDictionary *_segmentViewPool;
    DVEVideoPanelTracker *_tracker;
    DVEMainTrackLongPressGestureHandler *_longPressHandler;
    double _leftOverlapTransitionWidth;
    double _rightOverlapTransitionWidth;
    DVEVideoTrackPreviewPanState *_panState;
    CADisplayLink *_panDisplayLink;
    NSMutableDictionary *_subtitleSegmentsPool;
    NSMutableDictionary *_lyricsSegmentsPool;
    NSMutableDictionary *_stickerSegmentsPool;
    NSMutableDictionary *_musicSegmentsPool;
    NSMutableDictionary *_recordSegmentsPool;
    NSMutableDictionary *_transitionItemPool;
    NSMutableDictionary *_extractSegmentsPool;
    NSMutableDictionary *_textToAudioSegmentsPool;
    NSMutableDictionary *_textTemplateSegmentsPool;
    id<DVECoreVideoProtocol> _videoEditor;
    id<DVELoadingViewProtocol> _loadingView;
}

@property (retain, nonatomic) DVEMainTrackLongPressGestureHandler *longPressHandler;
@property (nonatomic) double leftOverlapTransitionWidth;
@property (nonatomic) double rightOverlapTransitionWidth;
@property (retain, nonatomic) DVEVideoTrackPreviewPanState *panState;
@property (retain, nonatomic) CADisplayLink *panDisplayLink;
@property (retain, nonatomic) NSMutableDictionary *subtitleSegmentsPool;
@property (retain, nonatomic) NSMutableDictionary *lyricsSegmentsPool;
@property (retain, nonatomic) NSMutableDictionary *stickerSegmentsPool;
@property (retain, nonatomic) NSMutableDictionary *musicSegmentsPool;
@property (retain, nonatomic) NSMutableDictionary *recordSegmentsPool;
@property (retain, nonatomic) NSMutableDictionary *transitionItemPool;
@property (retain, nonatomic) NSMutableDictionary *extractSegmentsPool;
@property (retain, nonatomic) NSMutableDictionary *textToAudioSegmentsPool;
@property (retain, nonatomic) NSMutableDictionary *textTemplateSegmentsPool;
@property (weak, nonatomic) id<DVECoreVideoProtocol> videoEditor;
@property (weak, nonatomic) id<DVELoadingViewProtocol> loadingView;
@property (weak, nonatomic) id<DVEVideoTrackPreviewDelegate> delegate;
@property (weak, nonatomic) id<DVEVideoTrackPreviewTransitionDelegate> transitionDelegate;
@property (retain, nonatomic) DVESegmentClipView *segmentClipView;
@property (retain, nonatomic) DVESegmentClipView *segmentSelectView;
@property (retain, nonatomic) NSMutableDictionary *subVideoLineSegmentsPool;
@property (retain, nonatomic) NSMutableDictionary *subPhotoLineSegmentsPool;
@property (retain, nonatomic) NSMutableDictionary *subVideoDropSegmentsPool;
@property (retain, nonatomic) NSMutableDictionary *textSegmentsPool;
@property (retain, nonatomic) DVEVideoAttacher *attacher;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) DVEVideoTrackViewModel *viewModel;
@property (retain, nonatomic) DVEVideoThumbnailManager *thumbnailManager;
@property (retain, nonatomic) NSMutableDictionary *segmentViewPool;
@property (nonatomic) BOOL longPressStatus;
@property (retain, nonatomic) DVEVideoPanelTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupGesture;
- (void)nleEditorDidChange;
- (id)videoEditor;
- (void)setVideoEditor:(id)arg0;
- (id)segmentClipView;
- (void)executeAnimation;
- (id)cacheKeyForSlot:(id)arg0;
- (id)segmentViewPool;
- (void)setupSegmentWithAdded:(id)arg0 removed:(id)arg1;
- (void)updateTransitionItems;
- (id)transitionItemPool;
- (void)transitionItemDidSelect:(id)arg0;
- (void)clipTrackForTransition;
- (void)layoutTransitionButtons;
- (void)updateStackViewLayout;
- (void)syncSelectedUI;
- (id)selectedSegmentView:(id)arg0;
- (void)clipWithSegmentView:(id)arg0 animated:(BOOL)arg1;
- (void)resetTransitionItemsSelected;
- (void)handleSegmentView:(id)arg0;
- (void)orderSegmentViewsAtFront:(id)arg0;
- (void)startUpdateCurrentVideoFrameWithSlot:(id)arg0;
- (void)panWillBegan:(id)arg0 slot:(id)arg1 position:(unsigned long long)arg2;
- (void)updattingCurrentVideoFrameWithSegmentView:(id)arg0 slot:(id)arg1 panState:(id)arg2;
- (void)panDidChange:(id)arg0 segmentView:(id)arg1 slot:(id)arg2 slots:(id)arg3 currentIndex:(long long)arg4;
- (void)panWillEnd:(id)arg0 slot:(id)arg1;
- (void)setAttacher:(id)arg0;
- (void)setRightOverlapTransitionWidth:(double)arg0;
- (void)setLeftOverlapTransitionWidth:(double)arg0;
- (void)pausePanCADisplayLink;
- (double)moveSpeed:(double)arg0;
- (void)setupPanCADisplayLink;
- (id)attacher;
- (double)rightOverlapTransitionWidth;
- (double)leftOverlapTransitionWidth;
- (double)detectWithWidth:(double)arg0 maxLimitation:(double)arg1 minLimitation:(double)arg2;
- (void)triggerFeedback;
- (void)updateWithSegmentView:(id)arg0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 currentIndex:(long long)arg2 position:(unsigned long long)arg3;
- (void)handleRight:(id)arg0 withSegmentView:(id)arg1 slot:(id)arg2 velocity:(double)arg3 currentIndex:(long long)arg4;
- (void)handleLeft:(id)arg0 withSegmentView:(id)arg1 slot:(id)arg2 velocity:(double)arg3 currentIndex:(long long)arg4;
- (void)invalidatePanCADisplayLink;
- (id)panDisplayLink;
- (void)handlePanEdgeIntersection;
- (void)setPanDisplayLink:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })segmentClipViewFrameWithSlot:(id)arg0 segmentViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)dismissLineBoxWithAnimated:(BOOL)arg0;
- (void)normalizeWithSegmentView:(id)arg0 animated:(BOOL)arg1;
- (void)dismissClipBoxWithAnimated:(BOOL)arg0;
- (void)displayLineBoxInSegmentView:(id)arg0 animated:(BOOL)arg1;
- (void)displayClipBoxInSegmentView:(id)arg0 animated:(BOOL)arg1;
- (void)p_updateTagViews;
- (id)clipInfoForSlot:(id)arg0;
- (void)setSegmentClipView:(id)arg0;
- (id)segmentSelectView;
- (void)setSegmentSelectView:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })segmentLineBoxFrameWithSlot:(id)arg0 segmentViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })segmentViewFrameWithTransition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 slot:(id)arg1;
- (BOOL)p_isMainVideoSelectedState;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectRelativeToTimeline:(id)arg0;
- (void)segmentClipView:(id)arg0 gesture:(id)arg1 position:(unsigned long long)arg2;
- (double)timeScaleForSlot:(id)arg0;
- (id)assetForSlot:(id)arg0;
- (id)absolutePathForResourceNode:(id)arg0;
- (void)resetSegmentsCliptype;
- (void)hiddenTransitionItems:(BOOL)arg0;
- (void)reloadVideoTrackWithForce:(BOOL)arg0;
- (id)subVideoLineSegmentsPool;
- (void)setSubVideoLineSegmentsPool:(id)arg0;
- (id)subPhotoLineSegmentsPool;
- (void)setSubPhotoLineSegmentsPool:(id)arg0;
- (id)subVideoDropSegmentsPool;
- (void)setSubVideoDropSegmentsPool:(id)arg0;
- (id)textSegmentsPool;
- (void)setTextSegmentsPool:(id)arg0;
- (void)setSegmentViewPool:(id)arg0;
- (BOOL)longPressStatus;
- (void)setLongPressStatus:(BOOL)arg0;
- (void)setPanState:(id)arg0;
- (id)subtitleSegmentsPool;
- (void)setSubtitleSegmentsPool:(id)arg0;
- (id)lyricsSegmentsPool;
- (void)setLyricsSegmentsPool:(id)arg0;
- (id)stickerSegmentsPool;
- (void)setStickerSegmentsPool:(id)arg0;
- (id)musicSegmentsPool;
- (void)setMusicSegmentsPool:(id)arg0;
- (id)recordSegmentsPool;
- (void)setRecordSegmentsPool:(id)arg0;
- (void)setTransitionItemPool:(id)arg0;
- (id)extractSegmentsPool;
- (void)setExtractSegmentsPool:(id)arg0;
- (id)textToAudioSegmentsPool;
- (void)setTextToAudioSegmentsPool:(id)arg0;
- (id)textTemplateSegmentsPool;
- (void)setTextTemplateSegmentsPool:(id)arg0;
- (id)initWithContext:(id)arg0;
- (id)tracker;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setTracker:(id)arg0;
- (void)updateLayout;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (void)refreshUI;
- (id)longPressHandler;
- (void)setDelegate:(id)arg0;
- (void)handleTapAction:(id)arg0;
- (id)thumbnailManager;
- (BOOL)isAccessibilityElement;
- (void)addObserver;
- (void)setBackgroundView:(id)arg0;
- (void)setLongPressHandler:(id)arg0;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg0;
- (void)setupUI;
- (void)setThumbnailManager:(id)arg0;
- (void)buildView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)panState;
- (void)setupBackgroundView;

@end
