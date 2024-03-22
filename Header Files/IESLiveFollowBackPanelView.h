//
//     Generated by private class-dump
//

@class UIButton, IESLiveActionSheetPresentViewController, UIImageView, IESLiveFollowBackPanelViewModel, UIView, UILabel;
@protocol IESLiveFollowBackPanelViewDelegate;

@interface IESLiveFollowBackPanelView : UIView {
    IESLiveFollowBackPanelViewModel *_viewModel;
    id<IESLiveFollowBackPanelViewDelegate> _delegate;
    UIView *_backgroundView;
    UIImageView *_avatarImageView;
    UILabel *_titleLabel;
    UILabel *_nameLabel;
    UILabel *_actionLabel;
    UIButton *_actionButton;
    IESLiveActionSheetPresentViewController *_actionPresentor;
}

@property (retain, nonatomic) IESLiveFollowBackPanelViewModel *viewModel;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *actionLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (weak, nonatomic) IESLiveActionSheetPresentViewController *actionPresentor;
@property (weak, nonatomic) id<IESLiveFollowBackPanelViewDelegate> delegate;

- (void)bindViewModel:(id)arg0;
- (void)setupAutoLayout;
- (id)actionPresentor;
- (void)setActionPresentor:(id)arg0;
- (void)showWithPanelViewModel:(id)arg0;
- (void)layoutViewTopCornerRadius:(id)arg0 cornerRadius:(double)arg1;
- (void)presentOnTopViewController;
- (void)actionButtonAction:(id)arg0 event:(id)arg1;
- (void)dismiss;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)nameLabel;
- (id)viewModel;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (void)setupView;
- (void)setNameLabel:(id)arg0;
- (id)actionButton;
- (void)setActionButton:(id)arg0;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (id)actionLabel;
- (void)setActionLabel:(id)arg0;

@end