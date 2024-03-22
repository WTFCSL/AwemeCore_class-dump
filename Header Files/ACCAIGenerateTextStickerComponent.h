//
//     Generated by private class-dump
//

@class UIButton, UIImageView, UIView;
@protocol ACCRecorderViewContainer, ACCCameraService, ACCAIGenerateTextStickerDelegate, ACCRecordHintService;

@interface ACCAIGenerateTextStickerComponent : ACCFeatureComponent {
    BOOL _AIGenerateEnable;
    BOOL _didShowGuide;
    UIButton *_AIButton;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCCameraService> _cameraService;
    id<ACCRecordHintService> _hintService;
    id<ACCAIGenerateTextStickerDelegate> _textStickerDelegate;
    UIView *_titleView;
    UIImageView *_badgeView;
}

@property (nonatomic) BOOL AIGenerateEnable;
@property (nonatomic) BOOL didShowGuide;
@property (retain, nonatomic) UIButton *AIButton;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordHintService> hintService;
@property (retain, nonatomic) id<ACCAIGenerateTextStickerDelegate> textStickerDelegate;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UIImageView *badgeView;

- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (void)loadComponentView;
- (void)addApplicationActiveNotification;
- (void)removeApplicationActiveNotification;
- (id)imModel;
- (void)trackClickAction:(BOOL)arg0;
- (void)switchToDefaultStatus;
- (void)configAIGenerateBarItem;
- (BOOL)AIFeatureEnabled;
- (BOOL)didShowGuide;
- (void)setDidShowGuide:(BOOL)arg0;
- (void)showBarItemGuideIfNeeded;
- (BOOL)AIGenerateEnable;
- (void)showHintView:(BOOL)arg0;
- (id)AIButton;
- (BOOL)shouldDisplayNewGuide;
- (id)createBarItemTitleView;
- (void)setAIGenerateEnable:(BOOL)arg0;
- (id)hasShownGuideTextCountKey;
- (id)lastSwitchStatusKey;
- (void)updateButtonAccessibilityLabel;
- (id)textStickerDelegate;
- (BOOL)defaultAIEnable;
- (id)hintService;
- (void)didClickAIBtn:(id)arg0;
- (void)setAIButton:(id)arg0;
- (void)setHintService:(id)arg0;
- (void)setTextStickerDelegate:(id)arg0;
- (void).cxx_destruct;
- (void)setBadgeView:(id)arg0;
- (void)setTitleView:(id)arg0;
- (void)applicationDidBecomeActive:(id)arg0;
- (id)badgeView;
- (id)titleView;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end