//
//     Generated by private class-dump
//

@protocol AWEIMMemoryWarningMonitorProtocol <HTSService>

+ (id)systemSourceValue;
+ (id)sourceKey;

@property (nonatomic, readonly) unsigned long long currentLevel;
@property (nonatomic, readonly) BOOL isValid;

- (BOOL)isValid;
- (void)invalidate;
- (unsigned long long)currentLevel;
- (void)start;

@end
