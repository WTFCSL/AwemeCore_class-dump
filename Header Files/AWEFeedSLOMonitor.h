//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSDictionary;

@interface AWEFeedSLOMonitor : NSObject <AWEFeedSLOMonitorProtocol> {
    NSString *_event;
    long long _sendLimit;
    NSDictionary *_extra;
    long long _sendCount;
    NSMutableDictionary *_timestampMap;
}

@property (nonatomic) long long sendCount;
@property (retain, nonatomic) NSMutableDictionary *timestampMap;
@property (copy, nonatomic) NSString *event;
@property (nonatomic) long long sendLimit;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)monitorWithEvent:(id)arg0;

- (void)setExtra:(id)arg0;
- (id)timestampMap;
- (void)setTimestampMap:(id)arg0;
- (void)sendWithModel:(id)arg0;
- (void)p_sendWithModel:(id)arg0;
- (void)p_sendEvent:(id)arg0 status:(long long)arg1 params:(id)arg2;
- (void)p_setTimestamp:(id)arg0 forKey:(id)arg1;
- (id)p_timestampForKey:(id)arg0;
- (void)addTimestampForKey:(id)arg0;
- (void)addTimestamp:(id)arg0 forKey:(id)arg1;
- (void)send;
- (void)setEvent:(id)arg0;
- (id)event;
- (void).cxx_destruct;
- (id)initWithEvent:(id)arg0;
- (id)extra;
- (id)timestampForKey:(id)arg0;
- (long long)sendCount;
- (void)setSendCount:(long long)arg0;
- (long long)sendLimit;
- (void)setSendLimit:(long long)arg0;

@end