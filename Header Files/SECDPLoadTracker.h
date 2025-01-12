//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, SECMetrics;

@interface SECDPLoadTracker : NSObject {
    BOOL _useBuiltin;
    BOOL _uploaded;
    long long _version;
    NSString *_loadType;
    SECMetrics *_metrics;
    NSString *_engineType;
    NSMutableArray *_errMsgs;
}

@property (retain, nonatomic) NSMutableArray *errMsgs;
@property (nonatomic) BOOL uploaded;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *loadType;
@property (retain, nonatomic) SECMetrics *metrics;
@property (copy, nonatomic) NSString *engineType;
@property (nonatomic) BOOL useBuiltin;

+ (unsigned long long)sampleRate;

- (BOOL)useBuiltin;
- (void)setUseBuiltin:(BOOL)arg0;
- (void)logError:(id)arg0 withProvider:(id)arg1;
- (void)setLoadType:(id)arg0;
- (id)errMsgs;
- (void)setErrMsgs:(id)arg0;
- (id)engineType;
- (void)setVersion:(long long)arg0;
- (id)metrics;
- (void)setMetrics:(id)arg0;
- (void).cxx_destruct;
- (long long)version;
- (void)dealloc;
- (BOOL)uploaded;
- (void)setEngineType:(id)arg0;
- (void)setUploaded:(BOOL)arg0;
- (id)loadType;
- (void)upload;

@end
