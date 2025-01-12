//
//     Generated by private class-dump
//

@class NSString;

@interface VeLivePlayerLogConfig : NSObject {
    BOOL _enableConsole;
    BOOL _enableLogFile;
    int _enableThreadLoop;
    NSString *_deviceID;
    NSString *_logPath;
    unsigned long long _maxLogSizeM;
    unsigned long long _singleLogSizeM;
    unsigned long long _logExpireTimeS;
    unsigned long long _logLevel;
    NSString *_queryUrl;
    unsigned long long _intervalMs;
}

@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *logPath;
@property (nonatomic) unsigned long long maxLogSizeM;
@property (nonatomic) unsigned long long singleLogSizeM;
@property (nonatomic) unsigned long long logExpireTimeS;
@property (nonatomic) BOOL enableConsole;
@property (nonatomic) BOOL enableLogFile;
@property (nonatomic) unsigned long long logLevel;
@property (copy, nonatomic) NSString *queryUrl;
@property (nonatomic) unsigned long long intervalMs;
@property (nonatomic) int enableThreadLoop;

- (void)setMaxLogSizeM:(unsigned long long)arg0;
- (void)setSingleLogSizeM:(unsigned long long)arg0;
- (void)setLogExpireTimeS:(unsigned long long)arg0;
- (void)setEnableConsole:(BOOL)arg0;
- (void)setEnableLogFile:(BOOL)arg0;
- (unsigned long long)maxLogSizeM;
- (unsigned long long)singleLogSizeM;
- (unsigned long long)logExpireTimeS;
- (BOOL)enableConsole;
- (BOOL)enableLogFile;
- (id)queryUrl;
- (void)setQueryUrl:(id)arg0;
- (int)enableThreadLoop;
- (void)setEnableThreadLoop:(int)arg0;
- (id)logPath;
- (void)setLogLevel:(unsigned long long)arg0;
- (id)init;
- (void)setDeviceID:(id)arg0;
- (void).cxx_destruct;
- (id)deviceID;
- (void)setLogPath:(id)arg0;
- (id)description;
- (unsigned long long)logLevel;
- (unsigned long long)intervalMs;
- (void)setIntervalMs:(unsigned long long)arg0;

@end
