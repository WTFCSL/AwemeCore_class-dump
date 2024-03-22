//
//     Generated by private class-dump
//

@class UIStackView, UIView, NSArray, NSString, AFDButton, UITextField, NSLayoutConstraint, UILabel;

@interface AFDTextInputAlertController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, AFDSelectionContainerViewDelegate> {
    NSArray *_actions;
    UIView *_contentView;
    UIStackView *_stackView;
    UIView *_topAnchorView;
    UILabel *_titleLabel;
    UITextField *_textField;
    AFDButton *_clearButton;
    UIStackView *_buttonsStackView;
    UIView *_backgroundMaskView;
    UIView *_buttonsHorizontalLine;
    NSArray *_actionButtons;
    NSLayoutConstraint *_centerYConstraint;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *backgroundMaskView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *topAnchorView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) AFDButton *clearButton;
@property (retain, nonatomic) UIStackView *buttonsStackView;
@property (retain, nonatomic) UIView *buttonsHorizontalLine;
@property (copy, nonatomic) NSArray *actionButtons;
@property (retain, nonatomic) NSLayoutConstraint *centerYConstraint;
@property (copy, nonatomic) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alertControllerWithTitle:(id)arg0 actions:(id)arg1;

- (void)p_clickButton:(id)arg0;
- (void)p_clearText;
- (void)setTopAnchorView:(id)arg0;
- (id)topAnchorView;
- (void)selectionContainer:(id)arg0 didBeginSelectingView:(id)arg1;
- (void)selectionContainer:(id)arg0 didChangeSelectingView:(id)arg1 lastSelectedView:(id)arg2;
- (void)selectionContainer:(id)arg0 didEndSelectingView:(id)arg1;
- (void)selectionContainer:(id)arg0 didCancelSelectingView:(id)arg1;
- (id)buttonsHorizontalLine;
- (void)p_setupActions;
- (id)p_createButtonForAction:(id)arg0;
- (void)p_updateRightViewMode:(id)arg0;
- (void)p_keyboardWillChangeFrame:(id)arg0;
- (void)setButtonsHorizontalLine:(id)arg0;
- (double)transitionDuration:(id)arg0;
- (void)animateTransition:(id)arg0;
- (void)setTextField:(id)arg0;
- (id)init;
- (id)textField;
- (id)actionButtons;
- (void).cxx_destruct;
- (id)actions;
- (id)titleLabel;
- (id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2;
- (id)contentView;
- (void)setActions:(id)arg0;
- (id)stackView;
- (id)centerYConstraint;
- (void)setStackView:(id)arg0;
- (id)animationControllerForDismissedController:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (id)clearButton;
- (void)setActionButtons:(id)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setCenterYConstraint:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)backgroundMaskView;
- (void)setBackgroundMaskView:(id)arg0;
- (id)buttonsStackView;
- (void)setButtonsStackView:(id)arg0;
- (void)setClearButton:(id)arg0;

@end