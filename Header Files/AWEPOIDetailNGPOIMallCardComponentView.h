//
//     Generated by private class-dump
//

@class AWEDitoPOIMallRankLabel, UIView, AWEPOISecKillView, AWEPOIDetailNGPOIMallCardComponentViewModel, UIImageView, AWEGradientView, YYLabel, UILabel;

@interface AWEPOIDetailNGPOIMallCardComponentView : DitoComponentView {
    BOOL _isCreateView;
    AWEPOIDetailNGPOIMallCardComponentViewModel *_viewModel;
    AWEGradientView *_photoMask;
    UIView *_poiInfoContainer;
    UIImageView *_coverImageView;
    UILabel *_titleLabel;
    YYLabel *_poiStatusLabel;
    UILabel *_subtitleLabel;
    UILabel *_floorLabel;
    UIView *_hightLightContainer;
    AWEDitoPOIMallRankLabel *_rankLabel;
    UIImageView *_rankImageView;
    YYLabel *_recommendLabel;
    UIView *_evaluationContainer;
    UIImageView *_evaluationImage;
    UILabel *_evaluationLabel;
    UILabel *_evaluationTailLabel;
    UIView *_spuContainer;
    UIImageView *_spuHeadImageView;
    UILabel *_spuNameLabel;
    UILabel *_spuPriceLabel;
    UILabel *_spuOriginPriceLabel;
    YYLabel *_spuDiscountLabel;
    AWEPOISecKillView *_secKillView;
    UIView *_seperatorLineView;
    double _createDuration;
    double _bindDuration;
}

@property (weak, nonatomic) AWEPOIDetailNGPOIMallCardComponentViewModel *viewModel;
@property (retain, nonatomic) AWEGradientView *photoMask;
@property (retain, nonatomic) UIView *poiInfoContainer;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYLabel *poiStatusLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *floorLabel;
@property (retain, nonatomic) UIView *hightLightContainer;
@property (retain, nonatomic) AWEDitoPOIMallRankLabel *rankLabel;
@property (retain, nonatomic) UIImageView *rankImageView;
@property (retain, nonatomic) YYLabel *recommendLabel;
@property (retain, nonatomic) UIView *evaluationContainer;
@property (retain, nonatomic) UIImageView *evaluationImage;
@property (retain, nonatomic) UILabel *evaluationLabel;
@property (retain, nonatomic) UILabel *evaluationTailLabel;
@property (retain, nonatomic) UIView *spuContainer;
@property (retain, nonatomic) UIImageView *spuHeadImageView;
@property (retain, nonatomic) UILabel *spuNameLabel;
@property (retain, nonatomic) UILabel *spuPriceLabel;
@property (retain, nonatomic) UILabel *spuOriginPriceLabel;
@property (retain, nonatomic) YYLabel *spuDiscountLabel;
@property (retain, nonatomic) AWEPOISecKillView *secKillView;
@property (retain, nonatomic) UIView *seperatorLineView;
@property (nonatomic) double createDuration;
@property (nonatomic) double bindDuration;
@property (nonatomic) BOOL isCreateView;

- (id)evaluationLabel;
- (void)setEvaluationLabel:(id)arg0;
- (void)setRecommendLabel:(id)arg0;
- (id)recommendLabel;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)updateViewModel:(id)arg0;
- (void)setRankImageView:(id)arg0;
- (id)rankImageView;
- (void)trackPerformance;
- (void)coverTapped:(id)arg0;
- (id)spuNameLabel;
- (id)spuHeadImageView;
- (id)spuPriceLabel;
- (id)spuContainer;
- (void)setSpuContainer:(id)arg0;
- (void)setSpuHeadImageView:(id)arg0;
- (void)setSpuNameLabel:(id)arg0;
- (void)setSpuPriceLabel:(id)arg0;
- (void)openPOIDetail;
- (id)photoMask;
- (void)setPhotoMask:(id)arg0;
- (id)poiStatusLabel;
- (id)poiInfoContainer;
- (id)floorLabel;
- (id)hightLightContainer;
- (BOOL)shouldShowRecommend;
- (id)evaluationContainer;
- (id)evaluationImage;
- (id)evaluationTailLabel;
- (id)spuOriginPriceLabel;
- (id)spuDiscountLabel;
- (id)seperatorLineView;
- (id)secKillView;
- (void)setupSecKillView:(id)arg0;
- (void)setBindDuration:(double)arg0;
- (void)setIsCreateView:(BOOL)arg0;
- (void)setCreateDuration:(double)arg0;
- (void)setSecKillView:(id)arg0;
- (double)bindDuration;
- (BOOL)isCreateView;
- (double)createDuration;
- (void)setPoiInfoContainer:(id)arg0;
- (void)setPoiStatusLabel:(id)arg0;
- (void)setFloorLabel:(id)arg0;
- (void)setHightLightContainer:(id)arg0;
- (void)setEvaluationContainer:(id)arg0;
- (void)setEvaluationImage:(id)arg0;
- (void)setEvaluationTailLabel:(id)arg0;
- (void)setSpuOriginPriceLabel:(id)arg0;
- (void)setSpuDiscountLabel:(id)arg0;
- (void)setSeperatorLineView:(id)arg0;
- (void)setSubtitleLabel:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)rankLabel;
- (void)setRankLabel:(id)arg0;

@end
