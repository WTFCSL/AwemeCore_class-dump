//
//     Generated by private class-dump
//

@class NSDictionary, PIAContainerRegisterEnv, NSString;

@interface PIANSRConfiguration : NSObject {
    PIAContainerRegisterEnv *_env;
    NSDictionary *_context;
    id /* block */ _completion;
    NSDictionary *_globalProps;
    NSString *_customUserAgent;
    NSString *_containerNamespace;
    long long _maxExecuteTime;
}

@property (retain, nonatomic) PIAContainerRegisterEnv *env;
@property (retain, nonatomic) NSDictionary *context;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSDictionary *globalProps;
@property (retain, nonatomic) NSString *customUserAgent;
@property (copy, nonatomic) NSString *containerNamespace;
@property (nonatomic) long long maxExecuteTime;

- (id)env;
- (void)setGlobalProps:(id)arg0;
- (id)globalProps;
- (void)setEnv:(id)arg0;
- (id)containerNamespace;
- (long long)maxExecuteTime;
- (void)setContainerNamespace:(id)arg0;
- (void)setMaxExecuteTime:(long long)arg0;
- (void)setCustomUserAgent:(id)arg0;
- (id)customUserAgent;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (void)setContext:(id)arg0;
- (id)context;

@end
