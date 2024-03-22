//
//     Generated by private class-dump
//

@class UIImageView, AWEAddWidgetGuideModel;

@interface AWEAddWidgetGuideCell : UICollectionViewCell {
    UIImageView *_guideImageView;
    UIImageView *_contentImageView;
    AWEAddWidgetGuideModel *_model;
}

@property (retain, nonatomic) UIImageView *guideImageView;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) AWEAddWidgetGuideModel *model;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadBizUIAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)guideImageView;
- (void)setGuideImageView:(id)arg0;
- (struct CGSize { double x0; double x1; })guideImageSize;
- (id)aAWEPadBizUIAdapter;
- (double)contentImageTopMargin;
- (struct CGSize { double x0; double x1; })contentImageSize;
- (BOOL)isIphoneLandscape;
- (void)doAnimation:(double)arg0 show:(BOOL)arg1;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareForReuse;
- (void)setupSubviews;
- (id)contentImageView;
- (void)setContentImageView:(id)arg0;

@end