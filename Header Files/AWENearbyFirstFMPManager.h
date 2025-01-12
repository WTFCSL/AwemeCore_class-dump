//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWENearbyFirstFMPManager : AWENearbyFMPBaseManager <AWENearbyFMPInjectProtocol> {
    BOOL _isFirstFMP;
    BOOL _diamondFMPSdkSuccess;
    BOOL _diamondGeckoExist;
    long long _areaType;
    NSString *_diamondFMPSdkResult;
    NSDictionary *_feedParams;
}

@property (nonatomic) BOOL isFirstFMP;
@property (nonatomic) long long areaType;
@property (nonatomic) BOOL diamondFMPSdkSuccess;
@property (copy, nonatomic) NSString *diamondFMPSdkResult;
@property (copy, nonatomic) NSDictionary *feedParams;
@property (nonatomic) BOOL diamondGeckoExist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)diamondGeckoExist;
- (void)setDiamondFMPSdkResult:(id)arg0;
- (id)diamondFMPSdkResult;
- (void)feedRequestFail;
- (void)feedRequestEmpty;
- (void)diamondRequestFail;
- (void)diamondRequestEmpty;
- (void)diamondDidShowParams:(id)arg0 renderTime:(double)arg1 error:(id)arg2;
- (void)setDiamondFMPSdkSuccess:(BOOL)arg0;
- (BOOL)diamondFMPSdkSuccess;
- (void)setDiamondGeckoExist:(BOOL)arg0;
- (void)willShowSkyLightGeckoExist:(BOOL)arg0;
- (id)injectCustomParams;
- (id)injectEventName;
- (void)feedDidShowParams:(id)arg0;
- (void)setIsFirstFMP:(BOOL)arg0;
- (BOOL)isFirstFMP;
- (void)setFeedParams:(id)arg0;
- (id)feedParams;
- (id)init;
- (void).cxx_destruct;
- (long long)areaType;
- (void)setAreaType:(long long)arg0;

@end
