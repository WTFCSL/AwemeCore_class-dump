//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, UIButton;

@protocol AWEShareTokenNoteCardView <AWECrotocol>

@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *noteLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UILabel *sharerLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIButton *dismissButton;
@property (copy, nonatomic) id /* block */ turnToVideoBlock;
@property (copy, nonatomic) id /* block */ turnToSharerBlock;
@property (copy, nonatomic) id /* block */ tapDismissButtonBlock;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)playIconImageView;
- (void)setPlayIconImageView:(id)arg0;
- (id /* block */)tapDismissButtonBlock;
- (void)setTapDismissButtonBlock:(id /* block */)arg0;
- (id)initWithTurnToVideoBlock:(id /* block */)arg0 turnToSharerBlock:(id /* block */)arg1;
- (void)configWithCover:(id)arg0 title:(id)arg1 actionTitle:(id)arg2 sharerName:(id)arg3 message:(id)arg4 isWebViewShare:(BOOL)arg5;
- (void)showLiveTagLabel:(BOOL)arg0;
- (id)noteLabel;
- (void)setNoteLabel:(id)arg0;
- (id)sharerLabel;
- (void)setSharerLabel:(id)arg0;
- (id /* block */)turnToVideoBlock;
- (void)setTurnToVideoBlock:(id /* block */)arg0;
- (id /* block */)turnToSharerBlock;
- (void)setTurnToSharerBlock:(id /* block */)arg0;
- (id)baseView;
- (id)titleLabel;
- (void)setBaseView:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)dismissButton;
- (void)setDismissButton:(id)arg0;
- (id)actionButton;
- (void)setActionButton:(id)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end
