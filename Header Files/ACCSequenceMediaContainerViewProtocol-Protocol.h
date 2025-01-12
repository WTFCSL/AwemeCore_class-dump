//
//     Generated by private class-dump
//

@class ACCSequenceEditPreviewWrapperView, ACCEditorOneClickFilmingButtonView, UIView;
@protocol ACCSequenceEditIndicatorViewProtocol;

@protocol ACCSequenceMediaContainerViewProtocol <NSObject>

@property (readonly, nonatomic) UIView *realMediaContainer;
@property (readonly, nonatomic) BOOL dragScrolling;
@property (readonly, nonatomic) ACCSequenceEditPreviewWrapperView *bottomPreview;
@property (readonly, nonatomic) UIView<ACCSequenceEditIndicatorViewProtocol> *indicatorView;
@property (retain, nonatomic) ACCEditorOneClickFilmingButtonView *oneClickFilmView;
@property (readonly, nonatomic) BOOL isAutoTransfering;
@property (readonly, nonatomic) BOOL previewMode;
@property (readonly, nonatomic) BOOL isEditPreviewMode;
@property (nonatomic) BOOL disableScrollAnimation;
@property (nonatomic) double scale;
@property (nonatomic) BOOL isManualScrollAnimation;
@property (nonatomic) double animationDuration;
@property (nonatomic) BOOL isMusicBeatsOn;

- (id)previewAtIndex:(long long)arg0;
- (void)configPreviewMode:(BOOL)arg0 forEditPage:(BOOL)arg1;
- (void)setDisableScrollAnimation:(BOOL)arg0;
- (BOOL)isMusicBeatsOn;
- (void)indicatorReloadPageStyle;
- (void)configBottomViewShow:(BOOL)arg0;
- (void)configIndicatorViewShow:(BOOL)arg0;
- (void)updateAllViewsWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)realMediaContainer;
- (void)transferToIndex:(long long)arg0 animated:(BOOL)arg1;
- (id)bottomPreview;
- (void)forceConfigIndicatorAlpha:(double)arg0;
- (void)indicatorReloadProgressBarStyle;
- (void)setIsManualScrollAnimation:(BOOL)arg0;
- (void)setOneClickFilmView:(id)arg0;
- (BOOL)isAutoTransfering;
- (id)mediaScrollView;
- (void)updateBottomGestureEnable:(BOOL)arg0;
- (void)firstRenderComplete;
- (BOOL)isUserInteractionAvailable;
- (void)willTransferToIndex:(unsigned long long)arg0 isAuto:(BOOL)arg1;
- (void)didTransferToIndex:(unsigned long long)arg0 isAuto:(BOOL)arg1;
- (void)getMediaContainerInfo:(id)arg0;
- (void)indicatorReloadDataAtIndex:(long long)arg0;
- (void)indicatorUpdateIndex:(long long)arg0;
- (long long)indicatorGetIndex;
- (void)configIndicatorAlpha:(double)arg0;
- (void)configOneClickFilmAlpha:(double)arg0;
- (void)updateBottomPauseState:(BOOL)arg0;
- (BOOL)dragScrolling;
- (id)oneClickFilmView;
- (BOOL)isEditPreviewMode;
- (BOOL)disableScrollAnimation;
- (BOOL)isManualScrollAnimation;
- (void)setIsMusicBeatsOn:(BOOL)arg0;
- (double)animationDuration;
- (double)scale;
- (void)setAnimationDuration:(double)arg0;
- (id)indicatorView;
- (void)setScale:(double)arg0;
- (id)initWithWorkspace:(id)arg0;
- (BOOL)previewMode;
- (void)scrollToIndex:(long long)arg0 animated:(BOOL)arg1;

@end
