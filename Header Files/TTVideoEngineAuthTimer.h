//
//     Generated by private class-dump
//

@class NSMutableDictionary, TTVideoEngineSTSAuth, TTVideoEngineTimeCalibration, NSRunLoop;
@protocol TTVideoEngineAuthTimerProtocol;

@interface TTVideoEngineAuthTimer : NSObject {
    TTVideoEngineTimeCalibration *_timeCalibration;
    TTVideoEngineSTSAuth *_stsAuth;
    NSRunLoop *_currentRunLoop;
    NSMutableDictionary *_stsAuthDic;
    NSMutableDictionary *_stsTimerDic;
    id<TTVideoEngineAuthTimerProtocol> _delegate;
    long long _continuousExpCount;
}

@property (retain, nonatomic) TTVideoEngineTimeCalibration *timeCalibration;
@property (retain, nonatomic) TTVideoEngineSTSAuth *stsAuth;
@property (retain, nonatomic) NSRunLoop *currentRunLoop;
@property (retain, nonatomic) NSMutableDictionary *stsAuthDic;
@property (retain, nonatomic) NSMutableDictionary *stsTimerDic;
@property (weak, nonatomic) id<TTVideoEngineAuthTimerProtocol> delegate;
@property (nonatomic) long long continuousExpCount;

+ (long long)getSeconds:(id)arg0 Pattern:(id)arg1;
+ (id)sharedInstance;

- (void)setCurrentRunLoop:(id)arg0;
- (void)postUpdate:(id)arg0 timeToUpdate:(long long)arg1;
- (id)stsTimerDic;
- (void)notifyUpdate:(id)arg0;
- (void)setAuth:(id)arg0 projectTag:(id)arg1 stopUpdate:(BOOL)arg2;
- (id)getAuth:(id)arg0;
- (void)setAuthTimerListener:(id)arg0;
- (id)stsAuth;
- (void)setStsAuth:(id)arg0;
- (id)stsAuthDic;
- (void)setStsAuthDic:(id)arg0;
- (void)setStsTimerDic:(id)arg0;
- (long long)continuousExpCount;
- (void)setContinuousExpCount:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setTag:(id)arg0;
- (id)delegate;
- (void)cancel;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)currentRunLoop;
- (id)timeCalibration;
- (void)setTimeCalibration:(id)arg0;

@end