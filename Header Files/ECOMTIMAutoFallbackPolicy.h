//
//     Generated by private class-dump
//

@class NSError, NSMutableArray, NSString;
@protocol ECOMTIMAutoFallbackRequestProtocol;

@interface ECOMTIMAutoFallbackPolicy : NSObject <ECOMTIMAutoFallbackPolicyProtocol> {
    int _lastErrorType;
    unsigned long long _httpMaxTry;
    unsigned long long _webSocketMaxTry;
    unsigned long long _httpCurrentTry;
    unsigned long long _webSocketCurrentTry;
    double _retryDelay;
    double _retryDelayMultiplier;
    double _currentRetryDelay;
    id<ECOMTIMAutoFallbackRequestProtocol> _request;
    NSError *_error;
    unsigned long long _webSocketTimeout;
    NSMutableArray *_rtmMAry;
}

@property (nonatomic) unsigned long long httpMaxTry;
@property (nonatomic) unsigned long long webSocketMaxTry;
@property (nonatomic) unsigned long long httpCurrentTry;
@property (nonatomic) unsigned long long webSocketCurrentTry;
@property (nonatomic) double retryDelay;
@property (nonatomic) double retryDelayMultiplier;
@property (nonatomic) double currentRetryDelay;
@property (nonatomic) int lastErrorType;
@property (retain, nonatomic) id<ECOMTIMAutoFallbackRequestProtocol> request;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long webSocketTimeout;
@property (retain, nonatomic) NSMutableArray *rtmMAry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setWebSocketTimeout:(unsigned long long)arg0;
- (void)setHttpMaxTry:(unsigned long long)arg0;
- (void)setWebSocketMaxTry:(unsigned long long)arg0;
- (unsigned long long)httpMaxTry;
- (unsigned long long)webSocketMaxTry;
- (unsigned long long)webSocketTimeout;
- (void)setRetryDelayMultiplier:(double)arg0;
- (void)setCurrentRetryDelay:(double)arg0;
- (void)setRtmMAry:(id)arg0;
- (unsigned long long)webSocketCurrentTry;
- (unsigned long long)httpCurrentTry;
- (id)rtmMAry;
- (void)statisticWithResponse:(id)arg0 start:(double)arg1 end:(double)arg2;
- (void)wsFailedWithError:(id)arg0;
- (void)httpFailedWithError:(id)arg0;
- (BOOL)shouldContinueWithError:(id)arg0;
- (int)lastErrorType;
- (void)resetDelay;
- (double)retryDelayMultiplier;
- (void)setLastErrorType:(int)arg0;
- (void)setHttpCurrentTry:(unsigned long long)arg0;
- (void)setWebSocketCurrentTry:(unsigned long long)arg0;
- (double)getCurrentTimeInterval;
- (double)retryDelay;
- (id)init;
- (void)setRetryDelay:(double)arg0;
- (void)_start:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setRequest:(id)arg0;
- (double)currentRetryDelay;
- (id)request;
- (void)setError:(id)arg0;
- (void)start;
- (id)error;

@end
