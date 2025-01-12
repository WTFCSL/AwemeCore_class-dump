//
//     Generated by private class-dump
//

@interface LynxLogObserver : NSObject {
    BOOL _shouldFormatMessage;
    id /* block */ _logFunction;
    long long _minLogLevel;
    long long _acceptSource;
    long long _acceptRuntimeId;
}

@property (copy, nonatomic) id /* block */ logFunction;
@property (nonatomic) long long minLogLevel;
@property (nonatomic) BOOL shouldFormatMessage;
@property (nonatomic) long long acceptSource;
@property (nonatomic) long long acceptRuntimeId;

- (id)initWithLogFunction:(id /* block */)arg0 minLogLevel:(long long)arg1;
- (void)setAcceptSource:(long long)arg0;
- (void)setLogFunction:(id /* block */)arg0;
- (void)setMinLogLevel:(long long)arg0;
- (void)setAcceptRuntimeId:(long long)arg0;
- (void)setShouldFormatMessage:(BOOL)arg0;
- (id /* block */)logFunction;
- (long long)minLogLevel;
- (BOOL)shouldFormatMessage;
- (long long)acceptSource;
- (long long)acceptRuntimeId;
- (void).cxx_destruct;

@end
