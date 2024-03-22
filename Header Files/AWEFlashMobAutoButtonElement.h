//
//     Generated by private class-dump
//

@class NSString, AWEFlashMobButtonViewModel, UIView, UIButton;

@interface AWEFlashMobAutoButtonElement : AWEPlayInteractionBaseActionButtonElement {
    BOOL _clicked;
    BOOL _shouldDelayShowButton;
    BOOL _needReverse;
    UIButton *_joinButton;
    UIView *_bgView;
    long long _avoidPriority;
    AWEFlashMobButtonViewModel *_btnViewModel;
    NSString *_title;
}

@property (retain, nonatomic) UIButton *joinButton;
@property (retain, nonatomic) UIView *bgView;
@property (nonatomic) BOOL clicked;
@property (nonatomic) BOOL shouldDelayShowButton;
@property (nonatomic) long long avoidPriority;
@property (retain, nonatomic) AWEFlashMobButtonViewModel *btnViewModel;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL needReverse;

- (void)initializeElement;
- (BOOL)needReverse;
- (void)setNeedReverse:(BOOL)arg0;
- (void)setClicked:(BOOL)arg0;
- (BOOL)clicked;
- (id)activateInfoWithData:(id)arg0;
- (id)quickFlashModelFromSchema:(id)arg0;
- (void)layoutElementView;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewWillDisappear;
- (void)setAvoidPriority:(long long)arg0;
- (long long)avoidPriority;
- (id)btnViewModel;
- (void)setShouldDelayShowButton:(BOOL)arg0;
- (BOOL)shouldDelayShowButton;
- (void)configBtnViewModel;
- (void)showJoinQuickFlashButtonRecommend;
- (void)onRecommendAwemeDiggNotification:(id)arg0;
- (BOOL)shouldShowQuickFlashButtonRecommend;
- (void)routeShootPage:(id)arg0;
- (void)setBtnViewModel:(id)arg0;
- (id)parameterForSchema;
- (void).cxx_destruct;
- (id)title;
- (void)layoutSubviews;
- (void)reset;
- (void)viewDidLoad;
- (void)setTitle:(id)arg0;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (id)joinButton;
- (void)setJoinButton:(id)arg0;

@end