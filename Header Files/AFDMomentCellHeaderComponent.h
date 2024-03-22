//
//     Generated by private class-dump
//

@class UIStackView, UIImageView, AFDMomentCellHeaderViewModel, UILabel, UIView, UIButton;
@protocol AWEIMConsecutiveChatStateViewProtocol;

@interface AFDMomentCellHeaderComponent : AFDMomentCellBaseComponent {
    AFDMomentCellHeaderViewModel *_viewModel;
    UIImageView *_avatarView;
    UILabel *_titleLabel;
    UIView<AWEIMConsecutiveChatStateViewProtocol> *_consecutiveChatStateView;
    UILabel *_detailLabel;
    UIStackView *_topContainerView;
    UIStackView *_authorView;
    UIButton *_moreBtn;
    UIView *_containerView;
    UIStackView *_nameStackerView;
}

@property (retain, nonatomic) AFDMomentCellHeaderViewModel *viewModel;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView<AWEIMConsecutiveChatStateViewProtocol> *consecutiveChatStateView;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIStackView *topContainerView;
@property (retain, nonatomic) UIStackView *authorView;
@property (retain, nonatomic) UIButton *moreBtn;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIStackView *nameStackerView;

- (id)consecutiveChatStateView;
- (void)setMoreBtn:(id)arg0;
- (id)moreBtn;
- (id)authorView;
- (void)setAuthorView:(id)arg0;
- (id)topContainerView;
- (void)setTopContainerView:(id)arg0;
- (id)nameStackerView;
- (void)updateAuthorViewWithShadow;
- (void)updateAuthorView;
- (BOOL)isShowingConsecutiveState;
- (void)setNameStackerView:(id)arg0;
- (void)setConsecutiveChatStateView:(id)arg0;
- (void)configWithModel:(id)arg0;
- (void)bindViewModel;
- (void)componentDidLoad;
- (void)loadComponent;
- (void)consecutiveChatDaysInfoDidUpdate;
- (void)showConsecutiveChatStateTipsIfNeeded;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)containerView;
- (id)viewModel;
- (void)prepareForReuse;
- (void)play;
- (void)setTitleLabel:(id)arg0;
- (id)view;
- (void)setupUI;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg0;

@end
