//
//     Generated by private class-dump
//

@class UIView, ACCAdvanceEditMainTrackDataSource, ACCAdvanceEditSegmentClipView, NLEModel_OC, NSString, NLETrackSlot_OC, ACCAdvanceEditMainTrackFrameView, UILabel, ACCAdvanceEditVideoCursorView;
@protocol ACCTrimCropSequencePieceServiceProtocol, IESServiceProvider, ACCTCETrimAdjustEditServiceProtocol, ACCTrimCropPieceProtocol;

@interface ACCAdvanceEditVideoClipRangeViewController : UIViewController <UICollectionViewDelegate, ACCAdvanceEditMainTrackFrameUICustomizationDelegate, DVEVideoThumbnailLoaderDataSource, ACCEditPreviewMessageProtocol> {
    BOOL _isIPad;
    BOOL _isScrolling;
    id<IESServiceProvider> _serviceProvider;
    id<ACCTrimCropSequencePieceServiceProtocol> _sequencePieceService;
    id<ACCTCETrimAdjustEditServiceProtocol> _adjustEditService;
    ACCAdvanceEditMainTrackDataSource *_mainTrackDataSource;
    ACCAdvanceEditMainTrackFrameView *_mainFrameView;
    ACCAdvanceEditSegmentClipView *_clipRangeBorderView;
    ACCAdvanceEditVideoCursorView *_cursorView;
    UIView *_leftMaskView;
    UIView *_rightMaskView;
    UILabel *_cancelButton;
    UILabel *_saveButton;
    UILabel *_titleLabel;
    UILabel *_selectHintLabel;
    NLETrackSlot_OC *_curEditingSlot;
    NLEModel_OC *_cachedModel;
    id<ACCTrimCropPieceProtocol> _pieceService;
    double _curPlayerTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _sourceDuration;
}

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCTrimCropSequencePieceServiceProtocol> sequencePieceService;
@property (weak, nonatomic) id<ACCTCETrimAdjustEditServiceProtocol> adjustEditService;
@property (retain, nonatomic) ACCAdvanceEditMainTrackDataSource *mainTrackDataSource;
@property (retain, nonatomic) ACCAdvanceEditMainTrackFrameView *mainFrameView;
@property (retain, nonatomic) ACCAdvanceEditSegmentClipView *clipRangeBorderView;
@property (retain, nonatomic) ACCAdvanceEditVideoCursorView *cursorView;
@property (retain, nonatomic) UIView *leftMaskView;
@property (retain, nonatomic) UIView *rightMaskView;
@property (retain, nonatomic) UILabel *cancelButton;
@property (retain, nonatomic) UILabel *saveButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *selectHintLabel;
@property (weak, nonatomic) NLETrackSlot_OC *curEditingSlot;
@property (retain, nonatomic) NLEModel_OC *cachedModel;
@property (weak, nonatomic) id<ACCTrimCropPieceProtocol> pieceService;
@property (nonatomic) BOOL isIPad;
@property (nonatomic) double curPlayerTime;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } sourceDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (id)selectHintLabel;
- (void)setSelectHintLabel:(id)arg0;
- (id)cursorView;
- (void)setCursorView:(id)arg0;
- (double)timeScaleForSlot:(id)arg0;
- (id)assetForSlot:(id)arg0;
- (id)absolutePathForResourceNode:(id)arg0;
- (id)myFirstAccessibilityElement;
- (void)panGestureRecognizer:(id)arg0;
- (void)setSourceDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })sourceDuration;
- (id)leftMaskView;
- (void)setLeftMaskView:(id)arg0;
- (id)rightMaskView;
- (void)setRightMaskView:(id)arg0;
- (void)playerCurrentPlayTimeChanged:(double)arg0;
- (id)sequencePieceService;
- (void)setSequencePieceService:(id)arg0;
- (void)customizeFrameCell:(id)arg0 atIndexPath:(id)arg1;
- (void)setCurEditingSlot:(id)arg0;
- (id)curEditingSlot;
- (void)setIsIPad:(BOOL)arg0;
- (id)mainFrameView;
- (double)expandEdgeSpace;
- (id)adjustEditService;
- (id)mainTrackDataSource;
- (double)extendEachFrameWidth;
- (BOOL)checkCursorReachEdge:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setCurPlayerTime:(double)arg0;
- (double)curPlayerTime;
- (id)videoSlots;
- (void)setAdjustEditService:(id)arg0;
- (void)setMainFrameView:(id)arg0;
- (void)setMainTrackDataSource:(id)arg0;
- (id)pieceService;
- (void)reloadNLEModel;
- (id)clipRangeBorderView;
- (double)clipRangeBorderViewWidth;
- (double)slotFrameWidth;
- (void)resetCurrentTimeRange;
- (struct CGSize { double x0; double x1; })frameCellSize;
- (double)frameEdgeInset;
- (void)cancelLabelClick:(id)arg0;
- (void)saveLabelClick:(id)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getCurrentClipStartTime;
- (void)setClipRangeBorderView:(id)arg0;
- (void)setPieceService:(id)arg0;
- (void)setIsScrolling:(BOOL)arg0;
- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)setCancelButton:(id)arg0;
- (void)dismiss;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (void).cxx_destruct;
- (id)cancelButton;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (long long)frameCount;
- (BOOL)isScrolling;
- (void)setServiceProvider:(id)arg0;
- (id)titleLabel;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (BOOL)isIPad;
- (id)initWithServiceProvider:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)serviceProvider;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)stopScrolling;
- (double)cellWidth;
- (void)setupUI;
- (id)saveButton;
- (void)setSaveButton:(id)arg0;
- (id)cachedModel;
- (void)setCachedModel:(id)arg0;
- (void)initData;

@end
