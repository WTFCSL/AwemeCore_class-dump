//
//     Generated by private class-dump
//

@class UITapGestureRecognizer, NSString, UIImageView, BDARVADModel, UILabel, UIView, UIButton;
@protocol BDARVVideoBannerDelegate;

@interface BDARVVideoBanner : UIView {
    id<BDARVVideoBannerDelegate> _delegate;
    BDARVADModel *_adModel;
    UIImageView *_avatar;
    UILabel *_titleLabel;
    UILabel *_desLabel;
    UIButton *_actionButton;
    UILabel *_titleLabelMask;
    UILabel *_desLabelMask;
    UIButton *_actionButtonMask;
    UITapGestureRecognizer *_tapGesture;
    NSString *_adTag;
    UIView *_lineView;
}

@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *desLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UILabel *titleLabelMask;
@property (retain, nonatomic) UILabel *desLabelMask;
@property (retain, nonatomic) UIButton *actionButtonMask;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) NSString *adTag;
@property (retain, nonatomic) UIView *lineView;
@property (weak, nonatomic) id<BDARVVideoBannerDelegate> delegate;
@property (retain, nonatomic) BDARVADModel *adModel;

- (id)adModel;
- (void)setAdModel:(id)arg0;
- (void)showMask;
- (void)actionBtnClick:(id)arg0;
- (id)titleLabelMask;
- (id)desLabel;
- (id)desLabelMask;
- (id)actionButtonMask;
- (void)setDesLabel:(id)arg0;
- (void)layoutBannerSubviews;
- (void)setupMask;
- (void)setIconImageNamed:(id)arg0;
- (void)setTitleLabelMask:(id)arg0;
- (void)setDesLabelMask:(id)arg0;
- (void)setActionButtonMask:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)tapGesture;
- (id)delegate;
- (id)adTag;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (id)avatar;
- (void)setAvatar:(id)arg0;
- (id)actionButton;
- (void)setActionButton:(id)arg0;
- (void)setupSubviews;
- (void)setTapGesture:(id)arg0;
- (void)refreshButton;
- (void)setAdTag:(id)arg0;
- (void)tapAction:(id)arg0;

@end
