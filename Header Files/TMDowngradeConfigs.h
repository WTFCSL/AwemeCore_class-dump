//
//     Generated by private class-dump
//

@interface TMDowngradeConfigs : NSObject {
    BOOL _enable;
    unsigned long long _downgradeDelayFlushTime;
    unsigned long long _sensitiveDataServerLimitTime;
}

@property (nonatomic) BOOL enable;
@property (nonatomic) unsigned long long downgradeDelayFlushTime;
@property (nonatomic) unsigned long long sensitiveDataServerLimitTime;

- (void)setDowngradeDelayFlushTime:(unsigned long long)arg0;
- (void)setSensitiveDataServerLimitTime:(unsigned long long)arg0;
- (unsigned long long)downgradeDelayFlushTime;
- (unsigned long long)sensitiveDataServerLimitTime;
- (BOOL)enable;
- (id)initWithConfig:(id)arg0;
- (void)setEnable:(BOOL)arg0;

@end
