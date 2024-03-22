//
//     Generated by private class-dump
//

@class UIView, NSArray, UIImageView, UIButton, AWEUserNameLabel, MASConstraint, AWEUIListCellActionButton, UILabel, UIColor;

@interface AWEUserCenterListTableViewCell : UITableViewCell {
    BOOL _shouldShowPlayIcon;
    BOOL _shouldShowBottomLineView;
    BOOL _isWhiteBG;
    long long _cellType;
    UIImageView *_iconImageView;
    AWEUserNameLabel *_userNameLabel;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UILabel *_infoLabel;
    UILabel *_centerLabel;
    UILabel *_additionalLabel;
    AWEUIListCellActionButton *_actionButton;
    UILabel *_rightDescLabel;
    UIImageView *_rightIconImageView;
    UILabel *_roundDotLabel;
    id /* block */ _rightButtonClickedBlock;
    id /* block */ _leftButtonClickedBlock;
    NSArray *_actionButtonTitles;
    unsigned long long _cornerType;
    UIButton *_acceptBtn;
    UIButton *_cancelBtn;
    UIImageView *_playIconImageView;
    UIImageView *_verificationIcon;
    UIView *_bottomLineView;
    UIColor *_contentViewColor;
    MASConstraint *_topConstraint;
    MASConstraint *_centerYConstraint;
}

@property (retain, nonatomic) UIButton *acceptBtn;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UIImageView *verificationIcon;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UIColor *contentViewColor;
@property (retain, nonatomic) MASConstraint *topConstraint;
@property (retain, nonatomic) MASConstraint *centerYConstraint;
@property (nonatomic) BOOL isWhiteBG;
@property (nonatomic) long long cellType;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) AWEUserNameLabel *userNameLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UILabel *centerLabel;
@property (retain, nonatomic) UILabel *additionalLabel;
@property (retain, nonatomic) AWEUIListCellActionButton *actionButton;
@property (retain, nonatomic) UILabel *rightDescLabel;
@property (retain, nonatomic) UIImageView *rightIconImageView;
@property (retain, nonatomic) UILabel *roundDotLabel;
@property (copy, nonatomic) id /* block */ rightButtonClickedBlock;
@property (copy, nonatomic) id /* block */ leftButtonClickedBlock;
@property (retain, nonatomic) NSArray *actionButtonTitles;
@property (nonatomic) BOOL shouldShowPlayIcon;
@property (nonatomic) unsigned long long cornerType;
@property (nonatomic) BOOL shouldShowBottomLineView;

+ (double)cellIconImageWidthForCellType:(long long)arg0;
+ (id)identifierForCellType:(long long)arg0;
+ (double)cellHeightForCellType:(long long)arg0;
+ (id)identifier;
+ (id)convertToString:(long long)arg0;

- (void)setTitleAttributedText:(id)arg0;
- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)actionBtnClicked;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg0;
- (id)userNameLabel;
- (void)setUserNameLabel:(id)arg0;
- (id)rightIconImageView;
- (void)setRightIconImageView:(id)arg0;
- (id)rightDescLabel;
- (void)setRightDescLabel:(id)arg0;
- (id /* block */)rightButtonClickedBlock;
- (void)setRightButtonClickedBlock:(id /* block */)arg0;
- (id)initWithCellType:(long long)arg0 cellStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)playIconImageView;
- (id)verificationIcon;
- (void)configContentViewWithCellType:(long long)arg0;
- (BOOL)isWhiteBG;
- (id)acceptBtn;
- (id)roundDotLabel;
- (id)additionalLabel;
- (id /* block */)leftButtonClickedBlock;
- (void)configRightText:(id)arg0 rightImage:(id)arg1;
- (void)configCancelButtonImage:(id)arg0 acceptButtonImage:(id)arg1;
- (id)attentionColorModel;
- (void)leftButtonClicked;
- (void)addVerificationIconWithName:(id)arg0 shouldChangeLabel:(BOOL)arg1;
- (id)initWithCellType:(long long)arg0 cellStyle:(long long)arg1 reuseIdentifier:(id)arg2 isWhiteBG:(BOOL)arg3;
- (void)configDotNumber:(id)arg0;
- (void)configRightText:(id)arg0;
- (void)configRightImage:(id)arg0;
- (void)configWithRightButtonImage:(id)arg0;
- (void)updateTitleAndDescConstraints;
- (void)updateThreeLineCellConstraints;
- (void)configVerificationImage:(id)arg0 position:(long long)arg1;
- (void)setActionButtonTitles:(id)arg0;
- (void)setActionButtonTitles:(id)arg0 withExtraWidth:(double)arg1;
- (void)setShouldShowPlayIcon:(BOOL)arg0;
- (void)addVerificationIcon:(BOOL)arg0;
- (void)setAdditionalLabel:(id)arg0;
- (void)setRoundDotLabel:(id)arg0;
- (void)setLeftButtonClickedBlock:(id /* block */)arg0;
- (id)actionButtonTitles;
- (void)setAcceptBtn:(id)arg0;
- (void)setPlayIconImageView:(id)arg0;
- (void)setVerificationIcon:(id)arg0;
- (void)setIsWhiteBG:(BOOL)arg0;
- (void)setShouldShowBottomLineView:(BOOL)arg0;
- (void)configContentViewColor:(id)arg0;
- (id)contentViewColor;
- (void)setContentViewColor:(id)arg0;
- (BOOL)shouldShowBottomLineView;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (id)topConstraint;
- (void)setTitleText:(id)arg0;
- (void)setTopConstraint:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setCellType:(long long)arg0;
- (id)centerYConstraint;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (long long)cellType;
- (void)setCenterYConstraint:(id)arg0;
- (void)setIconImageView:(id)arg0;
- (id)actionButton;
- (void)setActionButton:(id)arg0;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg0;
- (id)infoLabel;
- (void)setInfoLabel:(id)arg0;
- (id)centerLabel;
- (void)setCenterLabel:(id)arg0;
- (unsigned long long)cornerType;
- (void)setCornerType:(unsigned long long)arg0;
- (BOOL)shouldShowPlayIcon;

@end