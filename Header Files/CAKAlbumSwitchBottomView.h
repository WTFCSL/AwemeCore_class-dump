//
//     Generated by private class-dump
//

@class NSString, UILabel, UIView, UIButton;

@interface CAKAlbumSwitchBottomView : UIView <CAKAlbumBottomViewProtocol> {
    BOOL _doAnimation;
    UILabel *_titleLabel;
    UIButton *_nextButton;
    long long _themeType;
    UIView *_seperatorLineView;
    UIButton *_switchButton;
    id /* block */ _switchBlock;
}

@property (retain, nonatomic) UIView *seperatorLineView;
@property (retain, nonatomic) UIButton *switchButton;
@property (copy, nonatomic) id /* block */ switchBlock;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *nextButton;
@property (nonatomic) long long themeType;
@property (nonatomic) BOOL doAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)doAnimation;
- (void)setDoAnimation:(BOOL)arg0;
- (void)updateStateWith:(BOOL)arg0;
- (id /* block */)switchBlock;
- (void)setSwitchBlock:(id /* block */)arg0;
- (void)onSwitch;
- (void)setSwitchButton:(id)arg0;
- (id)seperatorLineView;
- (void)setSeperatorLineView:(id)arg0;
- (id)initWithSwitchBlock:(id /* block */)arg0 multiSelect:(BOOL)arg1 themeType:(long long)arg2;
- (void).cxx_destruct;
- (id)titleLabel;
- (long long)themeType;
- (void)setTitleLabel:(id)arg0;
- (id)nextButton;
- (void)setNextButton:(id)arg0;
- (id)switchButton;
- (void)setThemeType:(long long)arg0;

@end