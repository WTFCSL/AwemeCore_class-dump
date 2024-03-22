//
//     Generated by private class-dump
//

@class NSString, NSDictionary, UIView, BDASplashComplianceFactory, NSObject;
@protocol BDASplashComplianceViewHolder;

@interface AWECommerceSplashMultiStyleView : AWECommerceSplashStyleBaseView <BDASplashComplianceBaseDelegate, BDASplashComplianceViewHolderDelegate> {
    BDASplashComplianceFactory *_factory;
    NSObject<BDASplashComplianceViewHolder> *_viewHolder;
    UIView *_ttStyleView;
    double _roundAreaDuration;
    NSDictionary *_trackExtraDic;
    NSDictionary *_trackAdExtraDic;
}

@property (retain, nonatomic) BDASplashComplianceFactory *factory;
@property (retain, nonatomic) NSObject<BDASplashComplianceViewHolder> *viewHolder;
@property (retain, nonatomic) UIView *ttStyleView;
@property (nonatomic) double roundAreaDuration;
@property (copy, nonatomic) NSDictionary *trackExtraDic;
@property (copy, nonatomic) NSDictionary *trackAdExtraDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewHolder;
- (void)setViewHolder:(id)arg0;
- (void)configWithModel:(id)arg0;
- (BOOL)hasDowngraded;
- (void)splashValidClickWithPoint:(struct CGPoint { double x0; double x1; })arg0 extra:(id)arg1 adExtra:(id)arg2;
- (void)splashJumpWithParams:(id)arg0 animationType:(long long)arg1;
- (void)splashInvalidClickWithPoint:(struct CGPoint { double x0; double x1; })arg0 extra:(id)arg1 adExtra:(id)arg2;
- (void)splashTrackEventWithLabel:(id)arg0 extra:(id)arg1 adExtra:(id)arg2;
- (void)splashTrackNoAdEvent:(id)arg0 params:(id)arg1;
- (void)addCustomView;
- (id)splashImageDataForKey:(id)arg0;
- (void)splashTrackALogWithInfo:(id)arg0;
- (id)createCubicBezierAnimationWith:(id)arg0 duration:(double)arg1 timingFunction:(id)arg2;
- (id)generateSplashStyleConfigWithModel:(id)arg0;
- (void)setTtStyleView:(id)arg0;
- (id)ttStyleView;
- (void)setRoundAreaDuration:(double)arg0;
- (void)startButtonFinishAnimation;
- (void)startRoundAreaStyleTransitionAnimation;
- (void)startGoodsCardTransitionAnimation;
- (void)startNormalSlideButtonTransitionAnimation;
- (void)hideWithAnimation;
- (id)createRoundAreaViewAnimationWithKeyPath:(id)arg0 duration:(double)arg1;
- (BOOL)startGoodsAnimation:(int)arg0 withFrames:(id)arg1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 splashControls:(id)arg3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getGoodsCardFrameWithKey:(id)arg0 framesDic:(id)arg1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2;
- (void)goodsCardAnimation:(id)arg0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)setTrackExtraDic:(id)arg0;
- (void)setTrackAdExtraDic:(id)arg0;
- (id)trackExtraDic;
- (id)trackAdExtraDic;
- (void)triggerSplashActionWithTiming:(unsigned long long)arg0;
- (BOOL)canUseSplashAutoMultiStyle;
- (double)roundAreaDuration;
- (void).cxx_destruct;
- (id)factory;
- (void)setFactory:(id)arg0;
- (void)reset;

@end
