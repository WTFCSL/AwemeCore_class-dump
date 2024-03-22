//
//     Generated by private class-dump
//

@class YYLabel, NSString, AWEShareDoubleAvatarView, UIImageView, UILabel, BDImageView;

@interface AWEShareIMRecommendRelationGroupCell : UICollectionViewCell <AWEShareCell> {
    BOOL scalesImageWhenHighlighted;
    UIImageView *imageView;
    UILabel *titleLabel;
    UIImageView *smallImageView;
    UIImageView *selectImageView;
    UIImageView *selectContainer;
    YYLabel *descLabel;
    BDImageView *bottomCenterImageView;
    AWEShareDoubleAvatarView *_avatarView;
    UIImageView *_activeDot;
    UIImageView *_activeDotContainer;
    unsigned long long _uiStyle;
}

@property (retain, nonatomic) AWEShareDoubleAvatarView *avatarView;
@property (retain, nonatomic) UIImageView *activeDot;
@property (retain, nonatomic) UIImageView *activeDotContainer;
@property (nonatomic) unsigned long long uiStyle;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *smallImageView;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UIImageView *selectContainer;
@property (retain, nonatomic) BDImageView *bottomCenterImageView;
@property (retain, nonatomic) YYLabel *descLabel;
@property (nonatomic) BOOL scalesImageWhenHighlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)setSelectImageView:(id)arg0;
- (id)selectImageView;
- (id)smallImageView;
- (void)setSmallImageView:(id)arg0;
- (id)selectContainer;
- (void)setSelectContainer:(id)arg0;
- (id)bottomCenterImageView;
- (void)setBottomCenterImageView:(id)arg0;
- (BOOL)scalesImageWhenHighlighted;
- (void)setScalesImageWhenHighlighted:(BOOL)arg0;
- (void)setActiveDot:(id)arg0;
- (id)activeDot;
- (void)setActiveDotContainer:(id)arg0;
- (id)activeDotContainer;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)setUiStyle:(unsigned long long)arg0;
- (unsigned long long)uiStyle;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (void)updateWithViewModel:(id)arg0;

@end
