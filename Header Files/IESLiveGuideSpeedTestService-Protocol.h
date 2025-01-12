//
//     Generated by private class-dump
//

@class NSString;

@protocol IESLiveGuideSpeedTestService <NSObject>

@property (nonatomic) long long resolutionSource;
@property (retain, nonatomic) NSString *startLiveResolutionKey;

- (void)showClarityView;
- (id)recommendResolutionForLiveType:(unsigned long long)arg0;
- (id)speedTestRecommendLevel:(unsigned long long)arg0;
- (long long)speedTestRecommendForStartLiveResult:(unsigned long long)arg0;
- (id)startLiveResolutionKey;
- (void)setStartLiveResolutionKey:(id)arg0;
- (void)stopTest;
- (void)startTest;
- (void)setResolutionSource:(long long)arg0;
- (long long)resolutionSource;

@end
