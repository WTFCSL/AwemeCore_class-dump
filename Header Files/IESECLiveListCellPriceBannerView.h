//
//     Generated by private class-dump
//

@class NSString, UIImageView, NSDictionary, UIView, IESECLigoContext, IESECLiveGoodsListLowPriceInfoModel;

@interface IESECLiveListCellPriceBannerView : UIView <IESECLiveConfigViewDelegate> {
    IESECLiveGoodsListLowPriceInfoModel *_bannerModel;
    UIImageView *_bgImageView;
    UIView *_leftView;
    UIView *_rightView;
    UIView *_backupView;
    IESECLigoContext *_ligoContext;
    NSDictionary *_basicTrackParams;
    NSDictionary *_targetParams;
}

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIView *leftView;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) UIView *backupView;
@property (retain, nonatomic) IESECLigoContext *ligoContext;
@property (retain, nonatomic) NSDictionary *basicTrackParams;
@property (retain, nonatomic) NSDictionary *targetParams;
@property (retain, nonatomic) IESECLiveGoodsListLowPriceInfoModel *bannerModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)bannerHeight;

- (id)bannerModel;
- (void)setBannerModel:(id)arg0;
- (id)basicTrackParams;
- (void)setLigoContext:(id)arg0;
- (id)ligoContext;
- (id)initWithLigoContext:(id)arg0;
- (id)backupView;
- (id)p_textFont;
- (void)setBackupView:(id)arg0;
- (void)p_clickMoreArea;
- (void)p_clickBanner:(id)arg0;
- (id)p_curBtmModel;
- (void)trackWithEvent:(id)arg0 additionParams:(id)arg1 btmModel:(id)arg2;
- (void)setBasicTrackParams:(id)arg0;
- (void)setTargetParams:(id)arg0;
- (id)targetParams;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)leftView;
- (void)setLeftView:(id)arg0;
- (id)rightView;
- (void)setRightView:(id)arg0;
- (void)updateModel:(id)arg0;
- (void)setBgImageView:(id)arg0;
- (id)bgImageView;

@end
