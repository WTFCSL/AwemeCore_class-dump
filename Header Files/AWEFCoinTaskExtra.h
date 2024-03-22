//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFCoinTaskExtra : MTLModel <MTLJSONSerializing> {
    BOOL _needRetry;
    BOOL _coinStop;
    long long _now;
    NSString *_logid;
}

@property (nonatomic) BOOL needRetry;
@property (nonatomic) BOOL coinStop;
@property (nonatomic) long long now;
@property (copy, nonatomic) NSString *logid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)logid;
- (void)setLogid:(id)arg0;
- (BOOL)needRetry;
- (void)setNeedRetry:(BOOL)arg0;
- (BOOL)coinStop;
- (void)setCoinStop:(BOOL)arg0;
- (long long)now;
- (void).cxx_destruct;
- (void)setNow:(long long)arg0;

@end
