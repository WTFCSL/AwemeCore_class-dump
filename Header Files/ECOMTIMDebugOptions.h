//
//     Generated by private class-dump
//

@interface ECOMTIMDebugOptions : MTLModel {
    BOOL _skipWebSocketSend;
    BOOL _pullerTimer;
}

@property (nonatomic) BOOL skipWebSocketSend;
@property (nonatomic) BOOL pullerTimer;

+ (id)sharedInstance;

- (BOOL)skipWebSocketSend;
- (void)setSkipWebSocketSend:(BOOL)arg0;
- (BOOL)pullerTimer;
- (void)setPullerTimer:(BOOL)arg0;

@end