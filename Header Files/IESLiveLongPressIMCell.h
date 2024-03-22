//
//     Generated by private class-dump
//

@class IESLiveLongPressFuncModel, UIImageView, CAShapeLayer, UILabel, UIView, UIButton;

@interface IESLiveLongPressIMCell : UICollectionViewCell {
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_tipLabel;
    UIView *_lineView;
    UIButton *_imSendButton;
    UIImageView *_sendView;
    CAShapeLayer *_maskLayer;
    UIView *_bgView;
    UIView *_containerView;
    UIView *_onlineDotView;
    IESLiveLongPressFuncModel *_model;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIButton *imSendButton;
@property (retain, nonatomic) UIImageView *sendView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *onlineDotView;
@property (retain, nonatomic) IESLiveLongPressFuncModel *model;

- (void)actionButtonClicked;
- (void)updateOnlineStatus:(BOOL)arg0;
- (id)sendView;
- (void)setSendView:(id)arg0;
- (id)onlineDotView;
- (void)setOnlineDotView:(id)arg0;
- (void)setImSendButton:(id)arg0;
- (id)imSendButton;
- (void)updateCellCorner:(BOOL)arg0 cornerPosition:(unsigned long long)arg1 topPadding:(double)arg2 bottomPadding:(double)arg3 showLine:(BOOL)arg4;
- (void)updateRecommendTitle:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)iconView;
- (id)model;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)prepareForReuse;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (id)maskLayer;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)setupUI;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (void)setMaskLayer:(id)arg0;
- (void)updateWithModel:(id)arg0;

@end