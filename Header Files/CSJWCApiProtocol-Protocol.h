//
//     Generated by private class-dump
//

@protocol CSJWCApiProtocol <NSObject>

+ (id)getApiVersion;
+ (BOOL)registerApp:(id)arg0 universalLink:(id)arg1;
+ (void)sendReq:(id)arg0 completion:(id /* block */)arg1;
+ (void)startLogByLevel:(long long)arg0 logBlock:(id /* block */)arg1;
+ (id)object;

@optional

- (void)setMiniProgramType:(unsigned long long)arg0;
- (unsigned long long)miniProgramType;
- (void)setPath:(id)arg0;
- (id)userName;
- (id)path;
- (void)setUserName:(id)arg0;

@end
