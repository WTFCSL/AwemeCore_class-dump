//
//     Generated by private class-dump
//

@protocol IESLaunchProtectConfigurationProtocol <NSObject>

- (void)reportEvent:(unsigned long long)arg0 params:(id)arg1;
- (void)safemodeDidFinishLaunching;
- (void)protectFirstTry;
- (id)deepCleanConfig;
- (BOOL)isEnabled;

@optional

- (void)onAppStart;
- (id)safemodeUIConfig;
- (void)onMain;
- (void)onDidFinishLaunching;

@end
