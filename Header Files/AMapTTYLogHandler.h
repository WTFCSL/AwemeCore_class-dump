//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface AMapTTYLogHandler : AMapLogHandler {
    char *_app;
    unsigned long long _appLen;
    char *_pid;
    unsigned long long _pidLen;
    BOOL _automaticallyAppendNewlineForCustomFormatters;
    NSMutableArray *_enableComponents;
    NSString *_appName;
    NSString *_processID;
}

@property (retain, nonatomic) NSMutableArray *enableComponents;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *processID;
@property (nonatomic) BOOL automaticallyAppendNewlineForCustomFormatters;

+ (id)sharedInstance;

- (id)initWithSingleton;
- (id)enableComponents;
- (void)setComponentConsoleEnable:(id)arg0 enable:(BOOL)arg1;
- (id)loggerName;
- (void)setEnableComponents:(id)arg0;
- (BOOL)automaticallyAppendNewlineForCustomFormatters;
- (void)setAutomaticallyAppendNewlineForCustomFormatters:(BOOL)arg0;
- (void)setAppName:(id)arg0;
- (id)componentName;
- (id)appName;
- (void)logMessage:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)processID;
- (void)setProcessID:(id)arg0;

@end
