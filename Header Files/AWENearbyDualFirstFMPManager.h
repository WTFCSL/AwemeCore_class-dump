//
//     Generated by private class-dump
//

@class NSString;

@interface AWENearbyDualFirstFMPManager : AWENearbyFMPBaseManager <AWENearbyFMPInjectProtocol> {
    BOOL _isFirstArea;
    BOOL _isFeedShow;
    long long _areaType;
    NSString *_diamondFMPSdkResult;
}

@property (nonatomic) BOOL isFirstArea;
@property (nonatomic) long long areaType;
@property (nonatomic) BOOL isFeedShow;
@property (copy, nonatomic) NSString *diamondFMPSdkResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanceWithPageType:(long long)arg0;

- (void)setDiamondFMPSdkResult:(id)arg0;
- (id)diamondFMPSdkResult;
- (void)feedRequestFail;
- (void)feedRequestEmpty;
- (void)diamondRequestFail;
- (void)diamondRequestEmpty;
- (void)diamondDidShowParams:(id)arg0 renderTime:(double)arg1 error:(id)arg2;
- (void)setIsFeedShow:(BOOL)arg0;
- (id)injectCustomParams;
- (BOOL)isFeedShow;
- (id)injectEventName;
- (void)feedStartSetCover;
- (void)setIsFirstArea:(BOOL)arg0;
- (BOOL)isFirstArea;
- (void)feedDidShowParams:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)areaType;
- (void)setAreaType:(long long)arg0;

@end