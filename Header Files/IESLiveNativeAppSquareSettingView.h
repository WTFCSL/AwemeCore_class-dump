//
//     Generated by private class-dump
//

@class MASConstraint, NSString, UISwitch, UILabel, UIView, UIButton;

@interface IESLiveNativeAppSquareSettingView : UIView {
    BOOL _isAnimating;
    BOOL _memoryAbilityStatus;
    BOOL _openCardAbilityStatus;
    MASConstraint *_hidingConstraint;
    MASConstraint *_showingConstraint;
    id /* block */ _closeHandler;
    NSString *_appendDescString;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIView *_memoryContentView;
    UISwitch *_memoryAbilitySwitchView;
    UILabel *_memoryAbilityLabel;
    UISwitch *_openCardAbilitySwitchView;
    UILabel *_openCardAbilityLabel;
    UILabel *_settingsSeparatorLine;
    UIButton *_closeButton;
    UISwitch *_tradeDataSwitch;
}

@property (nonatomic) BOOL memoryAbilityStatus;
@property (nonatomic) BOOL openCardAbilityStatus;
@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *memoryContentView;
@property (retain, nonatomic) UISwitch *memoryAbilitySwitchView;
@property (retain, nonatomic) UILabel *memoryAbilityLabel;
@property (retain, nonatomic) UISwitch *openCardAbilitySwitchView;
@property (retain, nonatomic) UILabel *openCardAbilityLabel;
@property (retain, nonatomic) UILabel *settingsSeparatorLine;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UISwitch *tradeDataSwitch;
@property (weak, nonatomic) MASConstraint *hidingConstraint;
@property (weak, nonatomic) MASConstraint *showingConstraint;
@property (nonatomic) BOOL isAnimating;
@property (copy, nonatomic) id /* block */ closeHandler;
@property (copy, nonatomic) NSString *appendDescString;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)setCloseHandler:(id /* block */)arg0;
- (id /* block */)closeHandler;
- (void)closeButtonDidClick:(id)arg0;
- (id)tradeDataSwitch;
- (id)memoryAbilityLabel;
- (id)openCardAbilityLabel;
- (void)setMemoryAbilityLabel:(id)arg0;
- (void)setOpenCardAbilityLabel:(id)arg0;
- (void)setTradeDataSwitch:(id)arg0;
- (void)p_updateConstraintByAppendDescString;
- (id)memoryContentView;
- (id)appendDescString;
- (id)memoryAbilitySwitchView;
- (id)settingsSeparatorLine;
- (id)openCardAbilitySwitchView;
- (void)setupTradeDataSwitchView;
- (void)trackOpenCardAbilitySwitchWithSource:(id)arg0;
- (void)memoryAbilitySwitchValueChanged:(id)arg0;
- (BOOL)memoryAbilityStatus;
- (void)openCardAbilitySwitchValueChanged:(id)arg0;
- (BOOL)openCardAbilityStatus;
- (void)tradeDataSwitchValueChanged:(id)arg0;
- (void)setAppendDescString:(id)arg0;
- (void)updateMemoryAbilityStatus:(BOOL)arg0;
- (void)updateOpenCardAbilityStatus:(BOOL)arg0;
- (void)updateTransactionAbilityStatus:(BOOL)arg0;
- (id)hidingConstraint;
- (void)setHidingConstraint:(id)arg0;
- (id)showingConstraint;
- (void)setShowingConstraint:(id)arg0;
- (void)setMemoryAbilityStatus:(BOOL)arg0;
- (void)setOpenCardAbilityStatus:(BOOL)arg0;
- (void)setMemoryContentView:(id)arg0;
- (void)setMemoryAbilitySwitchView:(id)arg0;
- (void)setOpenCardAbilitySwitchView:(id)arg0;
- (void)setSettingsSeparatorLine:(id)arg0;
- (BOOL)isAnimating;
- (id)init;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (void)setIsAnimating:(BOOL)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)setUpUI;

@end