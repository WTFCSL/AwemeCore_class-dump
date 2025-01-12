//
//     Generated by private class-dump
//

@class UIImageView, NSDictionary, UILabel, UIView, IESECBuyNowSkeletonModel;
@protocol IESECBuyNowStateProtocol;

@interface IESECBuyNowStateView : UIView {
    id<IESECBuyNowStateProtocol> _clickDelegate;
    UIView *_bgView;
    UIImageView *_mainImageView;
    UIImageView *_footImageView;
    UIView *_containView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_actionLabel;
    UIImageView *_closeView;
    NSDictionary *_defaultConfig;
    unsigned long long _actionType;
    IESECBuyNowSkeletonModel *_skeletonModel;
}

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *mainImageView;
@property (retain, nonatomic) UIImageView *footImageView;
@property (retain, nonatomic) UIView *containView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *actionLabel;
@property (retain, nonatomic) UIImageView *closeView;
@property (retain, nonatomic) NSDictionary *defaultConfig;
@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) IESECBuyNowSkeletonModel *skeletonModel;
@property (weak, nonatomic) id<IESECBuyNowStateProtocol> clickDelegate;

- (id)clickDelegate;
- (void)setClickDelegate:(id)arg0;
- (id)closeView;
- (void)setCloseView:(id)arg0;
- (id)mainImageView;
- (void)setMainImageView:(id)arg0;
- (id)skeletonModel;
- (void)setSkeletonModel:(id)arg0;
- (id)footImageView;
- (id)containView;
- (void)actionLabelClick;
- (void)closeViewClick;
- (void)updateWithConfig:(id)arg0 needClose:(BOOL)arg1;
- (void)setFootImageView:(id)arg0;
- (void)setContainView:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void)setActionType:(unsigned long long)arg0;
- (unsigned long long)actionType;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (void)setImageView:(id)arg0;
- (id)defaultConfig;
- (void)setTitleLabel:(id)arg0;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)setupUI;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)actionLabel;
- (void)setActionLabel:(id)arg0;
- (void)setDefaultConfig:(id)arg0;

@end
