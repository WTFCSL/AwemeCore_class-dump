//
//     Generated by private class-dump
//

@class NSString, UIImageView, IESLiveImageView, UILabel;

@interface AWELivePreStreamLiveDistributeBigCell : UICollectionViewCell <IGListBindable> {
    UILabel *_titleLabel;
    UILabel *_heatCountLabel;
    UIImageView *_coverImageView;
    IESLiveImageView *_iconImageView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *heatCountLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) IESLiveImageView *iconImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)bindViewModel:(id)arg0;
- (void)p_initUI;
- (id)heatCountLabel;
- (void)setHeatCountLabel:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;

@end