//
//     Generated by private class-dump
//

@class NSString;

@interface AWEBasicModeManager : NSObject <AWEUserMessage, AWEBasicModeManagerProtocol> {
    BOOL _basicModeStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL basicModeStatus;

+ (id)sharedManager;

- (void)didFinishLogin;
- (void)showToast:(id)arg0;
- (BOOL)basicModeStatus;
- (void)setEventEnable:(BOOL)arg0;
- (BOOL)shouldHaveBasicModeEnterance;
- (void)uploadBasicModeStatus:(BOOL)arg0;
- (void)trackEventBasicModeStatus;
- (void)setBasicModeStatus:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setBasicModeStatus:(BOOL)arg0;
- (void)trackBasicModeActionWithType:(unsigned long long)arg0;
- (id)init;
- (void)dealloc;

@end
