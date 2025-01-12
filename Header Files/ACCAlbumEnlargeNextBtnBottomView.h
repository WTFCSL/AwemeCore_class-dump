//
//     Generated by private class-dump
//

@class NSString, UILabel, UIView, UIButton;

@interface ACCAlbumEnlargeNextBtnBottomView : UIView <ACCSelectedAssetsBottomViewProtocol> {
    BOOL _doAnimation;
    BOOL _isModeWithoutMultipleSelectionSwitch;
    BOOL _useDarkMode;
    UILabel *_titleLabel;
    UIButton *_nextButton;
    UIView *_seperatorLineView;
    UIButton *_switchButton;
    id /* block */ _switchBlock;
}

@property (retain, nonatomic) UIView *seperatorLineView;
@property (retain, nonatomic) UIButton *switchButton;
@property (copy, nonatomic) id /* block */ switchBlock;
@property (nonatomic) BOOL isModeWithoutMultipleSelectionSwitch;
@property (nonatomic) BOOL useDarkMode;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL doAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)doAnimation;
- (void)setDoAnimation:(BOOL)arg0;
- (void)updateStateWith:(BOOL)arg0;
- (void)configMultiSelectBlock:(id /* block */)arg0;
- (id /* block */)switchBlock;
- (void)setSwitchBlock:(id /* block */)arg0;
- (void)onSwitch;
- (void)setSwitchButton:(id)arg0;
- (void)setUseDarkMode:(BOOL)arg0;
- (BOOL)useDarkMode;
- (id)seperatorLineView;
- (void)setSeperatorLineView:(id)arg0;
- (void)makeConstraint;
- (id)initWithMode:(BOOL)arg0 withDarkMode:(BOOL)arg1;
- (BOOL)isModeWithoutMultipleSelectionSwitch;
- (void)setIsModeWithoutMultipleSelectionSwitch:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)nextButton;
- (void)setNextButton:(id)arg0;
- (id)switchButton;

@end
