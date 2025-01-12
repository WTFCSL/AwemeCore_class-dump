//
//     Generated by private class-dump
//

@class NSString, UIImageView, AWESettingItemModel, UILabel, UIView, AWEBinding;

@interface AWEUserCenterWhoCanMessageMeSelectCollectionViewCell : UICollectionViewCell <AWEUserCenterWhoCanMessageMeCollectionReusableViewProtocol> {
    BOOL _useCardUIStyle;
    unsigned long long _cornerType;
    AWESettingItemModel *_model;
    UILabel *_titleLabel;
    UIImageView *_selectIconImageView;
    UIView *_bottomLineView;
    AWEBinding *_selectBinding;
    AWEBinding *_enableBinding;
}

@property (retain, nonatomic) AWESettingItemModel *model;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectIconImageView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) AWEBinding *selectBinding;
@property (retain, nonatomic) AWEBinding *enableBinding;
@property (nonatomic) unsigned long long cornerType;
@property (nonatomic) BOOL useCardUIStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithViewModel:(id)arg0;
- (void)setEnableBinding:(id)arg0;
- (id)enableBinding;
- (BOOL)useCardUIStyle;
- (void)setupCorners;
- (void)setUseCardUIStyle:(BOOL)arg0;
- (void)p_addSubviews;
- (void)highlightWithAnimation;
- (id)selectBinding;
- (void)setSelectBinding:(id)arg0;
- (void)p_addPositionConstraints;
- (void)highlightWithAnimationWithDuration:(double)arg0 dismissDelay:(double)arg1;
- (id)selectIconImageView;
- (void)p_changeSelectWithModel:(id)arg0;
- (void)setSelectIconImageView:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setHighlighted:(BOOL)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg0;
- (unsigned long long)cornerType;
- (void)setCornerType:(unsigned long long)arg0;

@end
