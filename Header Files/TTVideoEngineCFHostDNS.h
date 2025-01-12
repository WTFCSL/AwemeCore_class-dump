//
//     Generated by private class-dump
//

@class NSString, NSError;

@interface TTVideoEngineCFHostDNS : TTVideoEngineDNSBase {
    BOOL _isCancelled;
    BOOL _isUserCancel;
    BOOL _isSuccess;
    double _timeout;
    NSString *_ipAddress;
    unsigned long long _maxCount;
    NSError *_error;
}

@property (nonatomic) double timeout;
@property (copy, nonatomic) NSString *ipAddress;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) BOOL isUserCancel;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) unsigned long long maxCount;
@property (retain, nonatomic) NSError *error;

- (void)notifyError:(id)arg0;
- (void)parseDNS;
- (id)parseResult:(id)arg0;
- (void)notifySuccess:(id)arg0;
- (BOOL)isUserCancel;
- (void)setIsUserCancel:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)isSuccess;
- (void)setMaxCount:(unsigned long long)arg0;
- (double)timeout;
- (void)cancel;
- (void)setError:(id)arg0;
- (void)start;
- (void)dealloc;
- (BOOL)isCancelled;
- (id)initWithHostname:(id)arg0;
- (id)error;
- (unsigned long long)maxCount;
- (void)setIsCancelled:(BOOL)arg0;
- (void)setTimeout:(double)arg0;
- (id)ipAddress;
- (void)setIsSuccess:(BOOL)arg0;
- (void)setIpAddress:(id)arg0;

@end
