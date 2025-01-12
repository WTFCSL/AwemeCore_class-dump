//
//     Generated by private class-dump
//

@class UILabel, AWEHomePageRemoteCommonRadioBoxDataModel, NSArray, UIView, NSString, UIVisualEffectView, DUXRadioboxGroup, DUXDivider;

@interface AWEHomePageRemoteRadioBox : UIView <AWEHomePageRemoteViewProtocol> {
    id /* block */ _radioBoxSelectedDidChange;
    id /* block */ _radioBoxSelectedWillChange;
    NSArray *_radioButtons;
    DUXRadioboxGroup *_radioboxGroup;
    AWEHomePageRemoteCommonRadioBoxDataModel *_radioBoxDataModel;
    long long _themeType;
    UILabel *_titleLabel;
    DUXDivider *_divider;
    UIView *_contentView;
    UIView *_topView;
    UIVisualEffectView *_blurView;
}

@property (retain, nonatomic) NSArray *radioButtons;
@property (retain, nonatomic) DUXRadioboxGroup *radioboxGroup;
@property (retain, nonatomic) AWEHomePageRemoteCommonRadioBoxDataModel *radioBoxDataModel;
@property (nonatomic) long long themeType;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXDivider *divider;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (copy, nonatomic) id /* block */ radioBoxSelectedDidChange;
@property (copy, nonatomic) id /* block */ radioBoxSelectedWillChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentViewBackgroundColor;
- (BOOL)isUILighten;
- (void)updateWithItemDataModel:(id)arg0 context:(id)arg1;
- (double)homePageRemoteViewHeight;
- (void)homePageThemeDidChange:(long long)arg0;
- (void)reloadWhenPanelShowWithItemDataModel:(id)arg0;
- (void)setRadioBoxSelectedWillChange:(id /* block */)arg0;
- (void)setRadioBoxSelectedDidChange:(id /* block */)arg0;
- (id)radioButtons;
- (id)radioboxGroup;
- (void)setRadioBoxDataModel:(id)arg0;
- (void)p_updateUIWithDataModel:(id)arg0;
- (id)createButtonsWithCount:(long long)arg0 style:(long long)arg1;
- (void)setRadioButtons:(id)arg0;
- (id)radioBoxDataModel;
- (id /* block */)radioBoxSelectedWillChange;
- (id /* block */)radioBoxSelectedDidChange;
- (void)setRadioboxGroup:(id)arg0;
- (void)setBlurView:(id)arg0;
- (void).cxx_destruct;
- (id)blurView;
- (id)titleLabel;
- (id)contentView;
- (long long)themeType;
- (void)setTitleLabel:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)topView;
- (void)setTopView:(id)arg0;
- (id)divider;
- (void)setDivider:(id)arg0;
- (void)setThemeType:(long long)arg0;
- (id)titleLabelTextColor;

@end
