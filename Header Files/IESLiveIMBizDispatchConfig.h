//
//     Generated by private class-dump
//

@class NSString, NSSet;

@interface IESLiveIMBizDispatchConfig : NSObject {
    BOOL _needCache;
    BOOL _enableMessageReplay;
    BOOL _enableWRDS;
    NSString *_bizIdentity;
    id /* block */ _messageCacheType;
    id /* block */ _delayTypeDispatchTime;
    double _dispatchInterval;
    long long _dispatchCount;
    NSSet *_needReplayMessagesSet;
    Class _dataSyncClass;
    id /* block */ _dataSyncModelCreateBlock;
}

@property (copy, nonatomic) NSString *bizIdentity;
@property (nonatomic) BOOL needCache;
@property (copy, nonatomic) id /* block */ messageCacheType;
@property (copy, nonatomic) id /* block */ delayTypeDispatchTime;
@property (nonatomic) double dispatchInterval;
@property (nonatomic) long long dispatchCount;
@property (nonatomic) BOOL enableMessageReplay;
@property (retain, nonatomic) NSSet *needReplayMessagesSet;
@property (nonatomic) BOOL enableWRDS;
@property (retain, nonatomic) Class dataSyncClass;
@property (copy, nonatomic) id /* block */ dataSyncModelCreateBlock;

- (BOOL)needCache;
- (void)setNeedCache:(BOOL)arg0;
- (long long)dispatchCount;
- (void)setDispatchCount:(long long)arg0;
- (void)setBizIdentity:(id)arg0;
- (id)bizIdentity;
- (void)setDispatchInterval:(double)arg0;
- (BOOL)enableWRDS;
- (id /* block */)dataSyncModelCreateBlock;
- (void)setDataSyncModelCreateBlock:(id /* block */)arg0;
- (void)setEnableWRDS:(BOOL)arg0;
- (BOOL)enableMessageReplay;
- (void)setEnableMessageReplay:(BOOL)arg0;
- (id /* block */)messageCacheType;
- (void)setMessageCacheType:(id /* block */)arg0;
- (id /* block */)delayTypeDispatchTime;
- (void)setDelayTypeDispatchTime:(id /* block */)arg0;
- (double)dispatchInterval;
- (id)needReplayMessagesSet;
- (void)setNeedReplayMessagesSet:(id)arg0;
- (Class)dataSyncClass;
- (void)setDataSyncClass:(Class)arg0;
- (void).cxx_destruct;

@end