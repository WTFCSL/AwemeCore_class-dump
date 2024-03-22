//
//     Generated by private class-dump
//

@class UIView, NSString, RACDisposable, NSArray, IESLivePlayerScaleConfig, CABasicAnimation, IESLivePresentNavController, NSData, UIColor;
@protocol IESLivePopupView;

@interface IESLivePopupItem : IESLiveDynamicModel <IESLiveMixedPopupItem> {
    BOOL _enablePlayerScale;
    BOOL _enableContentInset;
    BOOL _enableCloseTapWhenKeyboardShow;
    BOOL _hideWhenPanedown;
    BOOL _needAccessModal;
    long long _viewType;
    UIView *_view;
    UIView *_backgroundContainer;
    double _portraitHeight;
    IESLivePlayerScaleConfig *_scaleConfig;
    IESLivePopupItem *_presentingItem;
    NSString *_panelScene;
    id /* block */ _panMoveSlaveBlock;
    id /* block */ _onShowStart;
    id /* block */ _shouldHide;
    id /* block */ _offsetChangedWhenKeyboardShowBlock;
    id /* block */ _offsetWhenKeyboardShowBlock;
    id /* block */ _tapBackgroundInterceptor;
    RACDisposable *_disposable;
}

@property (retain, nonatomic) IESLivePresentNavController *nav;
@property (nonatomic) long long animType;
@property (nonatomic) BOOL enablePanGesture;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ playerScaleShouldStart;
@property (copy, nonatomic) id /* block */ playerScaleShouldEnd;
@property (retain, nonatomic) RACDisposable *disposable;
@property (retain, nonatomic) UIView *view;
@property (weak, nonatomic) UIView *backgroundContainer;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSArray *disableAutoBackgroundColorTypes;
@property (retain, nonatomic) UIColor *containerColor;
@property (nonatomic) double portraitHeight;
@property (nonatomic) BOOL enableDynamicHeight;
@property (nonatomic) BOOL forceLandscapeBottom;
@property (nonatomic) BOOL enableIPadMode;
@property (nonatomic) BOOL enablePlayerScale;
@property (retain, nonatomic) IESLivePlayerScaleConfig *scaleConfig;
@property (retain, nonatomic) UIView<IESLivePopupView> *popupView;
@property (weak, nonatomic) IESLivePopupItem *presentingItem;
@property (nonatomic) BOOL enableContentInset;
@property (retain, nonatomic) NSString *panelScene;
@property (copy, nonatomic) id /* block */ panMoveSlaveBlock;
@property (copy, nonatomic) id /* block */ onShowStart;
@property (copy, nonatomic) id /* block */ onShowCompletion;
@property (copy, nonatomic) id /* block */ shouldHide;
@property (copy, nonatomic) id /* block */ onHideStart;
@property (copy, nonatomic) id /* block */ onHideCompletion;
@property (nonatomic) double offsetWhenKeyboardShow;
@property (nonatomic) BOOL enableCloseTapWhenKeyboardShow;
@property (copy, nonatomic) id /* block */ offsetChangedWhenKeyboardShowBlock;
@property (copy, nonatomic) id /* block */ offsetWhenKeyboardShowBlock;
@property (retain, nonatomic) CABasicAnimation *customAnimation;
@property (retain, nonatomic) CABasicAnimation *customAnimationHide;
@property (retain, nonatomic) NSData *hideAnimImageData;
@property (nonatomic) struct CGSize { double x0; double x1; } hideAnimImageSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } hideAnimFrame;
@property (nonatomic) BOOL hideWhenTapBackgroundView;
@property (nonatomic) BOOL hideWhenPanedown;
@property (copy, nonatomic) id /* block */ tapBackgroundInterceptor;
@property (nonatomic) BOOL enableCornerRadii;
@property (nonatomic) double cornerRadii;
@property (nonatomic) unsigned long long rectCorner;
@property (nonatomic) BOOL subViewsMayPassThroughCornerRadii;
@property (nonatomic) BOOL enableCornerRadiiLandScape;
@property (nonatomic) double cornerRadiiLandScape;
@property (nonatomic) unsigned long long rectCornerLandScape;
@property (nonatomic) BOOL subViewsMayPassThroughCornerRadiiLandScape;
@property (nonatomic) double leftRightInsets;
@property (nonatomic) double upBottomInsetsLandScape;
@property (nonatomic) double rightOffsetLandScape;
@property (nonatomic) double widthLandScape;
@property (nonatomic) BOOL needAccessModal;
@property (nonatomic) long long itemType;
@property (nonatomic) long long viewType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)popupItemWithView:(id)arg0 itemType:(long long)arg1 viewType:(long long)arg2 animType:(long long)arg3 backgroudContainer:(id)arg4 showCallback:(id /* block */)arg5 hideCallback:(id /* block */)arg6;

- (void)didSetAttachingDIContext;
- (void)setPresentingItem:(id)arg0;
- (id)presentingItem;
- (long long)animType;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)setAnimType:(long long)arg0;
- (void)setNav:(id)arg0;
- (void)setPortraitHeight:(double)arg0;
- (void)setHideWhenPanedown:(BOOL)arg0;
- (BOOL)enablePlayerScale;
- (BOOL)enablePanGesture;
- (void)setEnablePanGesture:(BOOL)arg0;
- (double)portraitHeight;
- (struct CGSize { double x0; double x1; })containerViewSize;
- (void)setEnablePlayerScale:(BOOL)arg0;
- (void)setTapBackgroundInterceptor:(id /* block */)arg0;
- (void)setOffsetWhenKeyboardShowBlock:(id /* block */)arg0;
- (id /* block */)panMoveSlaveBlock;
- (void)setPanMoveSlaveBlock:(id /* block */)arg0;
- (void)setOnShowStart:(id /* block */)arg0;
- (void)setNeedAccessModal:(BOOL)arg0;
- (void)setPanelScene:(id)arg0;
- (void)setPlayerScaleShouldStart:(id /* block */)arg0;
- (void)setPlayerScaleShouldEnd:(id /* block */)arg0;
- (void)setEnableCloseTapWhenKeyboardShow:(BOOL)arg0;
- (id /* block */)tapBackgroundInterceptor;
- (void)checkBackgroundContainer:(id)arg0;
- (id /* block */)playerScaleShouldStart;
- (id /* block */)playerScaleShouldEnd;
- (void)disposableIfNeeded;
- (BOOL)hideWhenPanedown;
- (BOOL)enableContentInset;
- (void)setEnableContentInset:(BOOL)arg0;
- (id)panelScene;
- (id /* block */)onShowStart;
- (BOOL)enableCloseTapWhenKeyboardShow;
- (id /* block */)offsetChangedWhenKeyboardShowBlock;
- (void)setOffsetChangedWhenKeyboardShowBlock:(id /* block */)arg0;
- (id /* block */)offsetWhenKeyboardShowBlock;
- (BOOL)needAccessModal;
- (id)init;
- (void).cxx_destruct;
- (void)setView:(id)arg0;
- (id)title;
- (long long)viewType;
- (void)setBackgroundContainer:(id)arg0;
- (void)dealloc;
- (id)view;
- (id)backgroundContainer;
- (void)setTitle:(id)arg0;
- (id /* block */)shouldHide;
- (void)setShouldHide:(id /* block */)arg0;
- (id)scaleConfig;
- (void)setScaleConfig:(id)arg0;
- (void)setViewType:(long long)arg0;
- (id)nav;
- (void)clean;

@end
