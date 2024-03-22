//
//     Generated by private class-dump
//

@class UICollectionViewCell, IESECCommentEvaluatorViewConfig, UILabel, UIView, UIButton;
@protocol IESECCommentEvaluatorDelegate;

@interface IESECCommentEvaluatorView : UIView {
    id<IESECCommentEvaluatorDelegate> _delegate;
    IESECCommentEvaluatorViewConfig *_config;
    UICollectionViewCell *_cell;
    UIView *_containerView;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UILabel *_titleLabel;
    UILabel *_descLabel;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (weak, nonatomic) id<IESECCommentEvaluatorDelegate> delegate;
@property (retain, nonatomic) IESECCommentEvaluatorViewConfig *config;
@property (weak, nonatomic) UICollectionViewCell *cell;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)tapCancelButton;
- (void)tapEntranceButton;
- (BOOL)isGoldCardEvaluatorView;
- (void)setLeftButton:(id)arg0;
- (id)leftButton;
- (id)rightButton;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)setRightButton:(id)arg0;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (id)containerView;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)cell;
- (void)setCell:(id)arg0;
- (void)setupUI;

@end