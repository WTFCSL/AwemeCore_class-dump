//
//     Generated by private class-dump
//

@class UIView, UIImageView, BDSCBackgroundView, UILabel, BDSCSearchDeviceListNoXsgCellModel, BDByteScreenRecommendTagContainer;

@interface BDSCSearchDeviceListNoXsgCell : BDSCSearchDeviceListBaseCell {
    BDSCSearchDeviceListNoXsgCellModel *_model;
    BDSCBackgroundView *_backView;
    UILabel *_recommendLabel;
    UIImageView *_recommendImageView;
    BDByteScreenRecommendTagContainer *_tagContainer;
    UIView *_containerView;
}

@property (retain, nonatomic) BDSCSearchDeviceListNoXsgCellModel *model;
@property (retain, nonatomic) BDSCBackgroundView *backView;
@property (retain, nonatomic) UILabel *recommendLabel;
@property (retain, nonatomic) UIImageView *recommendImageView;
@property (retain, nonatomic) BDByteScreenRecommendTagContainer *tagContainer;
@property (retain, nonatomic) UIView *containerView;

- (void)configWithCellModel:(id)arg0;
- (void)buildViews;
- (void)setRecommendLabel:(id)arg0;
- (id)recommendLabel;
- (id)recommendImageView;
- (void)setRecommendImageView:(id)arg0;
- (id)tagContainer;
- (void)setTagContainer:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setBackView:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)model;
- (void)setContainerView:(id)arg0;
- (id)backView;
- (id)containerView;
- (void)buildConstraints;

@end
