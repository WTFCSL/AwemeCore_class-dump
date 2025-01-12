//
//     Generated by private class-dump
//

@class NSString, NSArray, UIImage, CAShapeLayer, BDImageView, BDASplashImageInfoModel, UIBezierPath, BDASplashInteractiveViewModel, UILabel, BDASplashBannerView;

@interface BDASplashInteractiveView : BDASplashComplianceBaseView <BDASplashEggsDelegate> {
    BOOL _isGestureEffective;
    float _scaling;
    BDASplashInteractiveViewModel *_viewModel;
    CAShapeLayer *_interactiveLayer;
    UIBezierPath *_currentPath;
    BDImageView *_guideImageView;
    UILabel *_guideLabel;
    BDASplashBannerView *_bannerView;
    long long _eggsType;
    NSArray *_keyPointArray;
    unsigned long long _keyPointIndex;
    long long _styleEdition;
    double _pointOffset;
    double _slideDistance;
    double _slideAngle;
    BDASplashImageInfoModel *_guideImageInfoModel;
    UIImage *_filterImage;
    struct CGPoint { double x; double y; } _keyVector;
    struct CGSize { double width; double height; } _guideImageSize;
    struct CGPoint { double x; double y; } _guideImagePoint;
}

@property (retain, nonatomic) BDASplashInteractiveViewModel *viewModel;
@property (retain, nonatomic) CAShapeLayer *interactiveLayer;
@property (retain, nonatomic) UIBezierPath *currentPath;
@property (retain, nonatomic) BDImageView *guideImageView;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) BDASplashBannerView *bannerView;
@property (nonatomic) long long eggsType;
@property (copy, nonatomic) NSArray *keyPointArray;
@property (nonatomic) struct CGPoint { double x; double y; } keyVector;
@property (nonatomic) unsigned long long keyPointIndex;
@property (nonatomic) long long styleEdition;
@property (nonatomic) double pointOffset;
@property (nonatomic) double slideDistance;
@property (nonatomic) double slideAngle;
@property (nonatomic) float scaling;
@property (retain, nonatomic) BDASplashImageInfoModel *guideImageInfoModel;
@property (nonatomic) struct CGSize { double width; double height; } guideImageSize;
@property (nonatomic) struct CGPoint { double x; double y; } guideImagePoint;
@property (nonatomic) BOOL isGestureEffective;
@property (retain, nonatomic) UIImage *filterImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addGesture;
- (id)guideImageView;
- (void)setGuideImageView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewHolder:(id)arg1 viewModel:(id)arg2;
- (id)guideLabel;
- (void)setGuideLabel:(id)arg0;
- (void)splashTrackEventWithLabel:(id)arg0 extra:(id)arg1 adExtra:(id)arg2;
- (void)updateSubviewLayout;
- (void)addCustomView;
- (void)setStyleEdition:(long long)arg0;
- (long long)styleEdition;
- (double)slideDistance;
- (BOOL)whetherPostponeSplashView;
- (void)applyGreyThemeWithImage:(id)arg0;
- (void)eggsViewDidAppearWithParams:(id)arg0;
- (void)eggsViewDidDisappearWithParams:(id)arg0;
- (void)eggsViewBreakWithParams:(id)arg0;
- (long long)eggsType;
- (void)setEggsType:(long long)arg0;
- (void)setSlideDistance:(double)arg0;
- (struct CGPoint { double x0; double x1; })makePointWithResource:(id)arg0;
- (void)setGuideImagePoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setSlideAngle:(double)arg0;
- (void)setPointOffset:(double)arg0;
- (void)locateGuideImage;
- (struct CGSize { double x0; double x1; })guideImageSize;
- (struct CGPoint { double x0; double x1; })locateGuidePoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setKeyPointArray:(id)arg0;
- (id)keyPointArray;
- (void)setKeyVector:(struct CGPoint { double x0; double x1; })arg0;
- (void)setFilterImage:(id)arg0;
- (BOOL)isRequirementWithStartPoint:(struct CGPoint { double x0; double x1; })arg0 endPoint:(struct CGPoint { double x0; double x1; })arg1 distance:(double)arg2;
- (id)slideAdExtraData;
- (void)splashClickWithPoint:(struct CGPoint { double x0; double x1; })arg0 isValid:(BOOL)arg1 extra:(id)arg2 adExtra:(id)arg3;
- (double)slideAngle;
- (void)splashLoadEggsView;
- (unsigned long long)keyPointIndex;
- (double)pointOffset;
- (BOOL)isRequirementWithKeyPoint:(struct CGPoint { double x0; double x1; })arg0 startPoint:(struct CGPoint { double x0; double x1; })arg1 endPoint:(struct CGPoint { double x0; double x1; })arg2 distance:(double)arg3;
- (BOOL)isSameDirectionWithKeyPoint:(struct CGPoint { double x0; double x1; })arg0 startPoint:(struct CGPoint { double x0; double x1; })arg1 endPoint:(struct CGPoint { double x0; double x1; })arg2;
- (void)setKeyPointIndex:(unsigned long long)arg0;
- (id)interactiveLayer;
- (id)filterImage;
- (struct CGPoint { double x0; double x1; })guideImagePoint;
- (void)onPanGesture:(id)arg0;
- (void)onDrawingPanGesture:(id)arg0;
- (void)onLoosePanGesture:(id)arg0;
- (void)onStrictPanGesture:(id)arg0;
- (void)setGuideImageSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setInteractiveLayer:(id)arg0;
- (id)guideImageInfoModel;
- (void)setGuideImageInfoModel:(id)arg0;
- (BOOL)isGestureEffective;
- (void)setIsGestureEffective:(BOOL)arg0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })keyVector;
- (void)stop;
- (void)show;
- (void)setViewModel:(id)arg0;
- (void)setScaling:(float)arg0;
- (id)viewModel;
- (void)updateConfig;
- (float)scaling;
- (id)currentPath;
- (void)setCurrentPath:(id)arg0;
- (id)bannerView;
- (void)setBannerView:(id)arg0;

@end
