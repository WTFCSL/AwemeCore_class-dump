//
//     Generated by private class-dump
//

@class AWEPOISkeletonView, NSArray, NSDictionary, AWEPOISkeletonConfigModel;
@protocol AWEPOISkeletonViewDelegate;

@interface AWEPOISkeletonViewModel : NSObject {
    BOOL _didTrackAppear;
    BOOL _didTrackDisappear;
    double _cardHeight;
    double _cardWidth;
    double _screenHeight;
    double _screenWidth;
    double _globalItemCornerRadius;
    NSArray *_globalItemColors;
    long long _globalGradientDirection;
    NSDictionary *_trackParams;
    AWEPOISkeletonView *_view;
    id<AWEPOISkeletonViewDelegate> _delegate;
    AWEPOISkeletonConfigModel *_config;
    double _parseStartTime;
    double _parseDuration;
    double _appearStartTime;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cacheFrame;
}

@property (retain, nonatomic) AWEPOISkeletonConfigModel *config;
@property (nonatomic) double parseStartTime;
@property (nonatomic) double parseDuration;
@property (nonatomic) double appearStartTime;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cacheFrame;
@property (nonatomic) BOOL didTrackAppear;
@property (nonatomic) BOOL didTrackDisappear;
@property (nonatomic) double cardHeight;
@property (nonatomic) double cardWidth;
@property (nonatomic) double screenHeight;
@property (nonatomic) double screenWidth;
@property (nonatomic) double globalItemCornerRadius;
@property (retain, nonatomic) NSArray *globalItemColors;
@property (nonatomic) long long globalGradientDirection;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (weak, nonatomic) AWEPOISkeletonView *view;
@property (weak, nonatomic) id<AWEPOISkeletonViewDelegate> delegate;

- (void)trackEvent:(id)arg0 params:(id)arg1;
- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (void)setParseStartTime:(double)arg0;
- (double)parseStartTime;
- (double)cardHeight;
- (void)setCardHeight:(double)arg0;
- (id)generateConfigModelWithRawData:(id)arg0;
- (void)updateExpressionResult;
- (void)didSetupSkeletonViewWithConfig:(id)arg0;
- (void)skeletonViewDidShow;
- (void)skeletonViewDidDisappear;
- (void)setParseDuration:(double)arg0;
- (void)didReceiveSkeletonRawData:(id)arg0;
- (BOOL)didTrackAppear;
- (void)setDidTrackAppear:(BOOL)arg0;
- (void)setAppearStartTime:(double)arg0;
- (double)parseDuration;
- (BOOL)didTrackDisappear;
- (void)setDidTrackDisappear:(BOOL)arg0;
- (double)appearStartTime;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cacheFrame;
- (void)setCacheFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)calculateItemFrame:(id)arg0;
- (void)calculateItemRepeat:(id)arg0;
- (id)generateRepeatItemsWithModel:(id)arg0;
- (id)calculateExpressionResult:(id)arg0;
- (void)setupGlobalConfigStyle:(id)arg0 withRawData:(id)arg1;
- (void)setupGlobalConfigItems:(id)arg0 withRawData:(id)arg1;
- (void)setupGlobalConfigPosition:(id)arg0 withRawData:(id)arg1;
- (void)didEndParseDataWithConfig:(id)arg0;
- (void)setGlobalItemCornerRadius:(double)arg0;
- (id)resolveString:(id)arg0 isColor:(BOOL)arg1;
- (void)setGlobalItemColors:(id)arg0;
- (void)setGlobalGradientDirection:(long long)arg0;
- (void)didReceiveErrorWithDescription:(id)arg0 isFatal:(BOOL)arg1;
- (id)generateItemModelWithRawData:(id)arg0;
- (void)setupItemModelStyle:(id)arg0 withRawData:(id)arg1;
- (void)setupItemModelRepeat:(id)arg0 withRawData:(id)arg1;
- (id)expressionWithData:(id)arg0 isColor:(BOOL)arg1;
- (double)globalItemCornerRadius;
- (id)globalItemColors;
- (long long)globalGradientDirection;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (double)screenWidth;
- (id)config;
- (void)setScreenWidth:(double)arg0;
- (void)setScreenHeight:(double)arg0;
- (void)setView:(id)arg0;
- (id)delegate;
- (double)screenHeight;
- (void)setDelegate:(id)arg0;
- (id)view;
- (double)cardWidth;
- (void)setCardWidth:(double)arg0;

@end
