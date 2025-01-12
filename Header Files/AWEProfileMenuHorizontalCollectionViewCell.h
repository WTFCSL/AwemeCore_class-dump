//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface AWEProfileMenuHorizontalCollectionViewCell : UICollectionViewCell {
    unsigned long long _type;
    unsigned long long _modelShapeType;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UIView *_bgView;
}

@property (nonatomic) unsigned long long modelShapeType;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *bgView;
@property (readonly, nonatomic) unsigned long long type;

- (void)configWithModel:(id)arg0;
- (void)__setupUI;
- (void)setModelShapeType:(unsigned long long)arg0;
- (unsigned long long)modelShapeType;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (unsigned long long)type;
- (void)setHighlighted:(BOOL)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)bgView;
- (void)setBgView:(id)arg0;

@end
