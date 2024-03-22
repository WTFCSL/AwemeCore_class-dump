//
//     Generated by private class-dump
//

@class NSLock, NSMutableDictionary;
@protocol BDUGLuckyDogNetworkCycleIntercepterProtocol;

@interface BDUGLuckyDogNetworkManager : NSObject {
    BOOL _isBoeEnable;
    BOOL _shouldBlockSummitRequest;
    NSMutableDictionary *_coolingRequests;
    NSLock *_coolingRequestsLock;
}

@property (weak, nonatomic) id<BDUGLuckyDogNetworkCycleIntercepterProtocol> cycleIntercepterDelegate;
@property (retain, nonatomic) NSMutableDictionary *coolingRequests;
@property (retain, nonatomic) NSLock *coolingRequestsLock;
@property (nonatomic) BOOL isBoeEnable;
@property (nonatomic) BOOL shouldBlockSummitRequest;

+ (id)netWorkString;
+ (id)sharedInstance;

- (id)defaultDomain;
- (void)requestForJSONWithPath:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 retryTimes:(long long)arg4 headerField:(id)arg5 callback:(id /* block */)arg6;
- (void)requestPlainForJSONWithPath:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 callback:(id /* block */)arg5;
- (void)requestForJSONWithPath:(id)arg0 params:(id)arg1 method:(id)arg2 headerField:(id)arg3 callback:(id /* block */)arg4;
- (BOOL)isBoeEnable;
- (id)cycleIntercepterDelegate;
- (void)setIsCoolingDown:(BOOL)arg0;
- (void)setCycleIntercepterDelegate:(id)arg0;
- (void)__requestWithPath:(id)arg0 errorBlock:(id /* block */)arg1 continueBlock:(id /* block */)arg2;
- (id)coolingRequestsLock;
- (id)coolingRequests;
- (void)trackRequestFrequencyIfNeeded:(id)arg0;
- (void)requestPlainForJSONWithPath:(id)arg0 params:(id)arg1 method:(id)arg2 headerField:(id)arg3 callback:(id /* block */)arg4;
- (void)setIsBoeEnable:(BOOL)arg0;
- (id)buildRequestURLWithPath:(id)arg0;
- (BOOL)shouldBlockSummitRequest;
- (void)setShouldBlockSummitRequest:(BOOL)arg0;
- (void)setCoolingRequests:(id)arg0;
- (void)setCoolingRequestsLock:(id)arg0;
- (id)cache;
- (id)init;
- (void).cxx_destruct;
- (long long)trackCount;
- (BOOL)_enableCooling;
- (BOOL)isCoolingDown;

@end
