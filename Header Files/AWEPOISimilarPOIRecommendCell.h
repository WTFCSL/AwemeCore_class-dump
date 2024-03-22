//
//     Generated by private class-dump
//

@class AWEModernPOIDetailCollectButton, UIImageView, UILabel, AWEPOIDetailResponse, YYLabel;

@interface AWEPOISimilarPOIRecommendCell : UICollectionViewCell {
    BOOL _hasDoneInitialization;
    double _contentPadding;
    UIImageView *_poiHeaderImage;
    UILabel *_titleLabel;
    UILabel *_typeLabel;
    UILabel *_collectCountLabel;
    YYLabel *_rankLabel;
    AWEModernPOIDetailCollectButton *_collectButton;
    id /* block */ _contentTapBlock;
    id /* block */ _btnTapBlock;
    AWEPOIDetailResponse *_poiDetail;
}

@property (nonatomic) BOOL hasDoneInitialization;
@property (weak, nonatomic) AWEPOIDetailResponse *poiDetail;
@property (nonatomic) double contentPadding;
@property (retain, nonatomic) UIImageView *poiHeaderImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *typeLabel;
@property (retain, nonatomic) UILabel *collectCountLabel;
@property (retain, nonatomic) YYLabel *rankLabel;
@property (retain, nonatomic) AWEModernPOIDetailCollectButton *collectButton;
@property (copy, nonatomic) id /* block */ contentTapBlock;
@property (copy, nonatomic) id /* block */ btnTapBlock;

- (id)collectButton;
- (void)setCollectButton:(id)arg0;
- (id)poiDetail;
- (void)setPoiDetail:(id)arg0;
- (void)updateCollectStatus:(BOOL)arg0;
- (void)handleCollect;
- (void)setContentTapBlock:(id /* block */)arg0;
- (id /* block */)contentTapBlock;
- (void)configWithModel:(id)arg0 scene:(unsigned long long)arg1 poiDetail:(id)arg2 contentTapBlock:(id /* block */)arg3 btnTapBlock:(id /* block */)arg4;
- (BOOL)hasDoneInitialization;
- (id)poiHeaderImage;
- (id)collectCountLabel;
- (void)setHasDoneInitialization:(BOOL)arg0;
- (void)setupViewIfNeed;
- (void)setBtnTapBlock:(id /* block */)arg0;
- (void)p_createCollectButton;
- (id /* block */)btnTapBlock;
- (void)setPoiHeaderImage:(id)arg0;
- (void)setCollectCountLabel:(id)arg0;
- (void).cxx_destruct;
- (double)contentPadding;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setContentPadding:(double)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)typeLabel;
- (void)setTypeLabel:(id)arg0;
- (id)rankLabel;
- (void)setRankLabel:(id)arg0;
- (void)tapAction;

@end
