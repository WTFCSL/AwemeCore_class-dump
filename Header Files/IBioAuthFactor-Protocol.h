//
//     Generated by private class-dump
//

@class NSString;

@protocol IBioAuthFactor <NSObject>

+ (id)getMetaInfo;

@property (readonly, copy, nonatomic) NSString *factorName;

- (id)getTasks;
- (id)getGlobalConfig;
- (void)finalizeResponse:(id)arg0;
- (id)factorName;
- (id)initWithRequest:(id)arg0;

@optional

- (void)onEngineWillRestart:(id)arg0;

@end
