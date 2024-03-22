//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, AWEFeedPlayableRewardBeforeModel;

@interface AWEFeedPlayableMaskBubbleView : UIImageView {
    UIView *_iconPlaceholder;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    UILabel *_unitLabel;
    AWEFeedPlayableRewardBeforeModel *_rewardBeforeModel;
}

@property (retain, nonatomic) UIView *iconPlaceholder;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UILabel *unitLabel;
@property (retain, nonatomic) AWEFeedPlayableRewardBeforeModel *rewardBeforeModel;

- (void)configWithModel:(id)arg0;
- (void)constraintSubviews;
- (void)setRewardBeforeModel:(id)arg0;
- (id)rewardBeforeModel;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (id)valueLabel;
- (void)setValueLabel:(id)arg0;
- (id)unitLabel;
- (void)setUnitLabel:(id)arg0;
- (id)iconPlaceholder;
- (void)setIconPlaceholder:(id)arg0;

@end
