//
//     Generated by private class-dump
//

@interface AWEIMSwiftImpl.MemoryWarningMonitor : HTSService <AWEIMMemoryWarningMonitorProtocol> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ totalMemoryBytes;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ configurationNode;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ isValid;
    void /* unknown type, empty encoding */ currentLevel;
    void /* unknown type, empty encoding */ lastLevel;
    void /* unknown type, empty encoding */ timer;
}

@property (nonatomic) void /* unknown type, empty encoding */ isValid;
@property (nonatomic) void /* unknown type, empty encoding */ currentLevel;

+ (id)systemSourceValue;
+ (id)sourceKey;

- (void)didReceiveMemoryWarningNotification;
- (void)onServiceInit;
- (id)init;
- (void)setIsValid:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (void)invalidate;
- (unsigned long long)currentLevel;
- (void)setCurrentLevel:(unsigned long long)arg0;
- (void)start;
- (void)dealloc;

@end