//
//     Generated by private class-dump
//

@class UIView, AFDRichAwemeFullPageContext, AWEAwemeModel, UILongPressGestureRecognizer, UIPinchGestureRecognizer, UIColor, NSString, AFDAspectRatioLimit, UIViewController, AFDFullPageLongPressManager, NSNumber, AWEUserActionSheetView;
@protocol AFDSlidesViewProtocol, AFDRichContentContainerViewControllerProtocol, AFDStoryProgressContainerViewProtocol, AFDFullPageSliderContainerDelegate;

@interface AFDFullPageSliderContainer : UIView <UIGestureRecognizerDelegate, AFDRichContentContainerDelegate, AWEStoryProgressContainerViewDelegate, AFDRichContentProgressControllerDelegate, AFDCustomProgressDelegate, AFDSlidesViewActionDelegate> {
    BOOL _useMultiContentContainer;
    BOOL _notFadeOut;
    BOOL _showEdgeLine;
    BOOL _changeFullPageFeedProgressPosition;
    UIView<AFDSlidesViewProtocol> *_imageSliderView;
    id<AFDFullPageSliderContainerDelegate> _delegate;
    UIViewController<AFDRichContentContainerViewControllerProtocol> *_richContentContainer;
    long long _progressViewType;
    unsigned long long _sliderAlbumContentMode;
    NSNumber *_albumInsScale;
    AFDAspectRatioLimit *_customAspectRatioLimit;
    UIColor *_sliderBackgroundColor;
    id /* block */ _longPressGestureBlock;
    id /* block */ _longPressPanelDismissBlock;
    UIView *_containerView;
    UIView<AFDStoryProgressContainerViewProtocol> *_progressView;
    UIView *_richContainerProgressView;
    UIPinchGestureRecognizer *_pinchGes;
    UILongPressGestureRecognizer *_longPressGes;
    AWEUserActionSheetView *_actionSheet;
    AWEAwemeModel *_model;
    AFDRichAwemeFullPageContext *_context;
    double _cellHeight;
    AFDFullPageLongPressManager *_longPressManager;
    UIView *_topEdgeLine;
    UIView *_bottomEdgeLine;
    struct CGPoint { double x; double y; } _lastContentOffset;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView<AFDStoryProgressContainerViewProtocol> *progressView;
@property (retain, nonatomic) UIView *richContainerProgressView;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGes;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGes;
@property (retain, nonatomic) AWEUserActionSheetView *actionSheet;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AFDRichAwemeFullPageContext *context;
@property (nonatomic) double cellHeight;
@property (retain, nonatomic) AFDFullPageLongPressManager *longPressManager;
@property (nonatomic) struct CGPoint { double x; double y; } lastContentOffset;
@property (retain, nonatomic) UIView *topEdgeLine;
@property (retain, nonatomic) UIView *bottomEdgeLine;
@property (retain, nonatomic) UIView<AFDSlidesViewProtocol> *imageSliderView;
@property (weak, nonatomic) id<AFDFullPageSliderContainerDelegate> delegate;
@property (retain, nonatomic) UIViewController<AFDRichContentContainerViewControllerProtocol> *richContentContainer;
@property (nonatomic) long long progressViewType;
@property (nonatomic) BOOL useMultiContentContainer;
@property (nonatomic) unsigned long long sliderAlbumContentMode;
@property (copy, nonatomic) NSNumber *albumInsScale;
@property (retain, nonatomic) AFDAspectRatioLimit *customAspectRatioLimit;
@property (retain, nonatomic) UIColor *sliderBackgroundColor;
@property (nonatomic) BOOL notFadeOut;
@property (copy, nonatomic) id /* block */ longPressGestureBlock;
@property (copy, nonatomic) id /* block */ longPressPanelDismissBlock;
@property (nonatomic) BOOL showEdgeLine;
@property (nonatomic) BOOL changeFullPageFeedProgressPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCurrentAwemeModel:(id)arg0;
- (void)richContainerDidCreateProgressView:(id)arg0;
- (void)didUpdatePaginatedProgressWithIndex:(long long)arg0 totalCount:(long long)arg1;
- (id)progressConfig;
- (BOOL)useMultiContentContainer;
- (void)setUseMultiContentContainer:(BOOL)arg0;
- (BOOL)notFadeOut;
- (void)setNotFadeOut:(BOOL)arg0;
- (void)didChangeAlbumIndex:(long long)arg0 slideMethod:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)containerDidScroll:(id)arg0;
- (void)containerWillBeginDragging:(id)arg0;
- (void)containerWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(struct CGPoint { double x0; double x1; })arg2;
- (void)containerDidEndDragging:(id)arg0;
- (BOOL)shouldResponseToPinchGesture:(id)arg0;
- (id)richContentContainer;
- (id)customAspectRatioLimit;
- (id)bringInnerAlbumView;
- (void)sendBackInnerAlbumView;
- (void)scrollToIndex:(long long)arg0;
- (void)swipeToLastStory;
- (void)swipeToNextStory;
- (id)accessibilityLabels;
- (void)sliderWillBeingDragging;
- (void)sliderDidEndDragging;
- (void)sliderDidEndScrolling;
- (void)progressDidUpdateWithIndex:(long long)arg0 progress:(double)arg1 duration:(double)arg2 animated:(BOOL)arg3;
- (void)awe_themeDidChange:(long long)arg0;
- (void)setRichContentContainer:(id)arg0;
- (id)albumContext;
- (void)shouldUpdatePaginatedProgressWithDuration:(double)arg0 totalCount:(long long)arg1 currentIndex:(long long)arg2 currentProcess:(double)arg3 needAnimation:(BOOL)arg4;
- (id)imageSliderView;
- (void)setImageSliderView:(id)arg0;
- (void)updateWithImageSliderView:(id)arg0;
- (BOOL)shouldResponseToGesture;
- (BOOL)shouldRespondTapGestures:(id)arg0;
- (void)hideProgressView;
- (void)showProgressViewAnimated:(BOOL)arg0;
- (void)showProgressView;
- (BOOL)shouldDisableTransitionPanGestureRecognizer:(id)arg0;
- (void)setProgressViewType:(long long)arg0;
- (void)setShowEdgeLine:(BOOL)arg0;
- (void)setChangeFullPageFeedProgressPosition:(BOOL)arg0;
- (void)setSliderAlbumContentMode:(unsigned long long)arg0;
- (void)setAlbumInsScale:(id)arg0;
- (void)setCustomAspectRatioLimit:(id)arg0;
- (void)updateDataWithModel:(id)arg0 context:(id)arg1;
- (long long)progressViewType;
- (void)setLongPressGestureBlock:(id /* block */)arg0;
- (void)setLongPressPanelDismissBlock:(id /* block */)arg0;
- (void)setSliderBackgroundColor:(id)arg0;
- (id)longPressGes;
- (void)setLongPressGes:(id)arg0;
- (id)titleForActionSheet;
- (id)buttonTexts;
- (void)didClickedButton:(id)arg0;
- (id)sliderBackgroundColor;
- (double)containerViewBottomOffset;
- (BOOL)useRichContainerProgressView;
- (unsigned long long)useDotIndicatiorStyle;
- (void)setPinchGes:(id)arg0;
- (id)pinchGes;
- (void)setupRichContentContainer;
- (id)progressViewInUse;
- (id)richContainerProgressView;
- (void)setRichContainerProgressView:(id)arg0;
- (void)setupRichProgressViewUIWith:(id)arg0;
- (void)downloadImage;
- (void)updateProgressDuringTransition;
- (id)albumInsScale;
- (BOOL)showEdgeLine;
- (id)topEdgeLine;
- (id)bottomEdgeLine;
- (BOOL)isDotStyle;
- (unsigned long long)sliderAlbumContentMode;
- (id)longPressManager;
- (BOOL)changeFullPageFeedProgressPosition;
- (void)updateWithImageSliderView:(id)arg0 animated:(BOOL)arg1;
- (id /* block */)longPressGestureBlock;
- (id /* block */)longPressPanelDismissBlock;
- (void)setLongPressManager:(id)arg0;
- (void)setTopEdgeLine:(id)arg0;
- (void)setBottomEdgeLine:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (long long)currentIndex;
- (void)setContext:(id)arg0;
- (id)model;
- (void)setContainerView:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isInteracting;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (id)containerView;
- (id)context;
- (void)setDelegate:(id)arg0;
- (struct CGPoint { double x0; double x1; })lastContentOffset;
- (void)setLastContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)handleLongPressGesture:(id)arg0;
- (void)setupUI;
- (double)cellHeight;
- (void)setCellHeight:(double)arg0;
- (id)currentCell;
- (void)handlePinchGesture:(id)arg0;
- (void)setActionSheet:(id)arg0;
- (id)actionSheet;

@end
