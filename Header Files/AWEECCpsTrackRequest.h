//
//     Generated by private class-dump
//

@class NSString, AWEECCpsTrackerConfigManager, NSMutableArray, NSNumber;

@interface AWEECCpsTrackRequest : NSObject {
    NSNumber *_requestTs;
    long long _retryCount;
    NSMutableArray *_lackedParams;
    NSMutableArray *_lackedParamsInUrl;
    NSMutableArray *_invalidParams;
}

@property (readonly, copy, nonatomic) NSString *url;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, copy, nonatomic) AWEECCpsTrackerConfigManager *config;
@property (nonatomic) long long retryCount;
@property (retain, nonatomic) NSMutableArray *lackedParams;
@property (retain, nonatomic) NSMutableArray *lackedParamsInUrl;
@property (retain, nonatomic) NSMutableArray *invalidParams;
@property (retain, nonatomic) NSNumber *requestTs;

- (BOOL)validateParams:(id)arg0;
- (void)setRequestTs:(id)arg0;
- (void)requestWithUrl:(id)arg0 fromSource:(unsigned long long)arg1 useNewWay:(BOOL)arg2;
- (void)requestWithParams:(id)arg0 fromSource:(unsigned long long)arg1;
- (id)paramsFromUrl:(id)arg0;
- (void)logInvalidEventWithSource:(unsigned long long)arg0 url:(id)arg1 params:(id)arg2;
- (id)addCommonParams:(id)arg0 source:(unsigned long long)arg1;
- (void)p_requestWithParams:(id)arg0;
- (void)requestWithUrl:(id)arg0;
- (void)requestWithParams:(id)arg0 complete:(id /* block */)arg1;
- (id)requestTs;
- (void)requestWithParams:(id)arg0 retry:(long long)arg1 complete:(id /* block */)arg2;
- (id)createAWERequestWithParams:(id)arg0 complete:(id /* block */)arg1;
- (void)requestWithParams:(id)arg0 retry:(long long)arg1 creator:(id /* block */)arg2 complete:(id /* block */)arg3;
- (void)logRetryEventWithError:(id)arg0;
- (id)lackedParams;
- (id)lackedParamsInUrl;
- (id)invalidParams;
- (void)setLackedParams:(id)arg0;
- (void)setLackedParamsInUrl:(id)arg0;
- (void)setInvalidParams:(id)arg0;
- (void).cxx_destruct;
- (void)setRetryCount:(long long)arg0;
- (id)config;
- (long long)retryCount;
- (id)path;
- (id)host;
- (id)url;

@end
