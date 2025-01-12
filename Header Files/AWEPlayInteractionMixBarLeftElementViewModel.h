//
//     Generated by private class-dump
//

@class NSString, AWEMixSelectSupportManager, UIViewController;
@protocol AWEPlayInteractionMixBarLeftElementViewModelDelegate;

@interface AWEPlayInteractionMixBarLeftElementViewModel : AWEPlayInteractionBaseElementViewModel <AWEMixBarInPlaceTransitionFromContentProvider> {
    UIViewController *_viewController;
    id<AWEPlayInteractionMixBarLeftElementViewModelDelegate> _mixBarDelegate;
    AWEMixSelectSupportManager *_mixSelectManager;
}

@property (retain, nonatomic) AWEMixSelectSupportManager *mixSelectManager;
@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) id<AWEPlayInteractionMixBarLeftElementViewModelDelegate> mixBarDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)trackMediumPlayListParams;
- (void)trackVideoBottomBarClick:(id)arg0 referString:(id)arg1;
- (void)loadNextEpisodeWithCompletion:(id /* block */)arg0;
- (void)trackCompilationNextVideoShow;
- (void)trackCompilationNextVideoClickWithClickMoment:(double)arg0;
- (BOOL)mixPlayEndTipSceneCheck;
- (id)mixSelectManager;
- (void)noticeTappedWithNextModel:(id)arg0 isTappedBar:(BOOL)arg1;
- (void)trackMixBarShow;
- (void)setMixBarDelegate:(id)arg0;
- (id)mixBarDelegate;
- (id)trackParamsOnDisplay;
- (void)recordForSpeedInheritedIfNeedsWithSpeed:(id)arg0;
- (void)trackMixBarClick;
- (id)originTapDict;
- (void)showPanelWithParams:(id)arg0;
- (void)enterMixInnerTransitionWithParams:(id)arg0 model:(id)arg1;
- (void)enterMixInnerNormalWithParams:(id)arg0;
- (void)enterMixDetail;
- (void)setMixSelectManager:(id)arg0;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;

@end
