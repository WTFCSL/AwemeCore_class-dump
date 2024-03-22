//
//     Generated by private class-dump
//

@class NSString, UIImageView, AWESettingItemModel, UILabel, UIView;

@interface AWEUserCenterWhoCanMessageMeJumpCollectionViewCell : UICollectionViewCell <AWEUserCenterWhoCanMessageMeCollectionReusableViewProtocol> {
    BOOL _useCardUIStyle;
    unsigned long long _cornerType;
    AWESettingItemModel *_model;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_arrowIconImageView;
    UIView *_bottomLineView;
}

@property (retain, nonatomic) AWESettingItemModel *model;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *arrowIconImageView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (nonatomic) unsigned long long cornerType;
@property (nonatomic) BOOL useCardUIStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithViewModel:(id)arg0;
- (BOOL)useCardUIStyle;
- (void)setupCorners;
- (void)setUseCardUIStyle:(BOOL)arg0;
- (void)p_addSubviews;
- (id)arrowIconImageView;
- (void)setArrowIconImageView:(id)arg0;
- (void)highlightWithAnimation;
- (void)p_addPositionConstraints;
- (void)configTextAndSizeWithViewModel:(id)arg0;
- (void)highlightWithAnimationWithDuration:(double)arg0 dismissDelay:(double)arg1;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (id)detailLabel;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg0;
- (void)setDetailLabel:(id)arg0;
- (unsigned long long)cornerType;
- (void)setCornerType:(unsigned long long)arg0;

@end
