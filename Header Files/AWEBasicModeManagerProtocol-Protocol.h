//
//     Generated by private class-dump
//

@protocol AWEBasicModeManagerProtocol <NSObject>

@property (nonatomic) BOOL basicModeStatus;

- (BOOL)basicModeStatus;
- (BOOL)shouldHaveBasicModeEnterance;
- (void)uploadBasicModeStatus:(BOOL)arg0;
- (void)setBasicModeStatus:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setBasicModeStatus:(BOOL)arg0;
- (void)trackBasicModeActionWithType:(unsigned long long)arg0;

@end
