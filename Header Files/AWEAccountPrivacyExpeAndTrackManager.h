//
//     Generated by private class-dump
//

@interface AWEAccountPrivacyExpeAndTrackManager : NSObject {
    BOOL _isEnable;
}

@property (nonatomic) BOOL isEnable;

+ (Class)aAWEAccountPrivacyTrackManagerAdapterClass;
+ (id)sharedInstance;

- (void)setIsEnable:(BOOL)arg0;
- (BOOL)isEnable;
- (void)trackBasicModeActionWithType:(unsigned long long)arg0;
- (BOOL)isChangePrivacyMode;
- (void)checkIfInDOUYIN;
- (id)aAWEAccountPrivacyTrackManagerAdapter;
- (id)privacyVids;
- (id)init;

@end