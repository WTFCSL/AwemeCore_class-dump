//
//     Generated by private class-dump
//

@class UIView, NSString, AFDVisitorListViewModel, AFDVisitorTextSettingsModel, UIImageView, AFDModalViewHelper, UIButton, UILabel, AWEProfileToggleView;

@interface AFDVisitorAuthorizationViewController : UIViewController <AWEPanelTransitionWithBackground> {
    id /* block */ _reloadBlock;
    AFDVisitorListViewModel *_viewModel;
    NSString *_previousEnterFrom;
    UIButton *_closeButton;
    UIImageView *_iconImageView;
    UIImageView *_minusIconView;
    UILabel *_titleLabel;
    UILabel *_introLabel;
    UIView *_lineView;
    AWEProfileToggleView *_toggleView;
    AFDModalViewHelper *_helper;
    AFDVisitorTextSettingsModel *_textSettingsModel;
}

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *minusIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *introLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWEProfileToggleView *toggleView;
@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (retain, nonatomic) AFDVisitorTextSettingsModel *textSettingsModel;
@property (copy, nonatomic) id /* block */ reloadBlock;
@property (weak, nonatomic) AFDVisitorListViewModel *viewModel;
@property (retain, nonatomic) NSString *previousEnterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)arg0;
- (void)p_setupUI;
- (double)p_contentHeight;
- (id)initWithTextSettingsModel:(id)arg0;
- (void)updateAuthorazitionState:(BOOL)arg0 animated:(BOOL)arg1;
- (id)minusIconView;
- (void)refreshVisitorListAuthorizationState;
- (id)previousEnterFrom;
- (void)setPreviousEnterFrom:(id)arg0;
- (void)setMinusIconView:(id)arg0;
- (id)textSettingsModel;
- (void)setTextSettingsModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setHelper:(id)arg0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (id)titleLabel;
- (id)helper;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)closeButtonTapped:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)setReloadBlock:(id /* block */)arg0;
- (id /* block */)reloadBlock;
- (id)toggleView;
- (void)setToggleView:(id)arg0;
- (id)introLabel;
- (void)setIntroLabel:(id)arg0;

@end
