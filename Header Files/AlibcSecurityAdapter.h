//
//     Generated by private class-dump
//

@protocol IOpenOpenSDKComponent;

@interface AlibcSecurityAdapter : NSObject {
    id<IOpenOpenSDKComponent> _component;
}

@property (retain, nonatomic) id<IOpenOpenSDKComponent> component;

- (id)sGuardImageName;
- (id)getAppKey;
- (id)getJumpEnv:(id)arg0 authCode:(id)arg1 bizString:(id)arg2 config:(id)arg3 extend:(id)arg4 error:(id *)arg5;
- (void)asyncInit:(id /* block */)arg0;
- (BOOL)setRS:(BOOL)arg0;
- (void).cxx_destruct;
- (id)component;
- (void)setComponent:(id)arg0;

@end
