//
//     Generated by private class-dump
//

@class NSString;

@interface TMStrategyProvider : NSObject <BDStrategyProvider> {
    NSString *_lastActiveSignature;
}

@property (copy, nonatomic) NSString *lastActiveSignature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)signatureFromStrategies:(id)arg0;
- (void)setLastActiveSignature:(id)arg0;
- (id)lastActiveSignature;
- (void)handleConfigUpdate;
- (id)init;
- (void).cxx_destruct;
- (id)displayName;
- (void)dealloc;
- (long long)priority;
- (id)strategies;

@end
