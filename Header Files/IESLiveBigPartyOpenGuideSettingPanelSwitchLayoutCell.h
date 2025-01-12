//
//     Generated by private class-dump
//

@class UIButton, IESLiveInteractionLayout, UIView;

@interface IESLiveBigPartyOpenGuideSettingPanelSwitchLayoutCell : IESLiveBigPartyOpenGuideSettingPanelCell {
    BOOL _isDynamicLayout;
    UIButton *_equalButton;
    UIButton *_floatButton;
    UIView *_buttonsContainer;
    IESLiveInteractionLayout *_currentLayout;
}

@property (retain, nonatomic) UIButton *equalButton;
@property (retain, nonatomic) UIButton *floatButton;
@property (retain, nonatomic) UIView *buttonsContainer;
@property (nonatomic) BOOL isDynamicLayout;
@property (retain, nonatomic) IESLiveInteractionLayout *currentLayout;

- (void)setButtonsContainer:(id)arg0;
- (id)buttonsContainer;
- (BOOL)isDynamicLayout;
- (void)setIsDynamicLayout:(BOOL)arg0;
- (void)onOffSwitchTouchButtonDidClick;
- (id)floatButton;
- (id)equalButton;
- (void)equalButtonDidClick;
- (void)floatButtonDidClick;
- (void)setEqualButton:(id)arg0;
- (void)setFloatButton:(id)arg0;
- (id)currentLayout;
- (void).cxx_destruct;
- (void)setCurrentLayout:(id)arg0;
- (void)updateWithConfig:(id)arg0;
- (void)setupUI;

@end
