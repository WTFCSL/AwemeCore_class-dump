//
//     Generated by private class-dump
//

@interface BDPPluginPublicUser : BDPBridgeInstancePlugin {
    BOOL _isLoginFinish;
}

@property (nonatomic) BOOL isLoginFinish;

+ (unsigned long long)pluginMode;

- (BOOL)isLoginFinish;
- (void)setIsLoginFinish:(BOOL)arg0;
- (void)loginWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)getUserInfoWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (id)init;

@end
