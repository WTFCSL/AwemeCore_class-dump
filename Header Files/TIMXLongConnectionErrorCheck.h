//
//     Generated by private class-dump
//

@class NSString, TIMXSDKInstance;

@interface TIMXLongConnectionErrorCheck : NSObject <TIMXLongConnectionServerErrorCheckProtocol, TIMXInstanceScopeAlwaysNewDIComponent> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    BOOL _enable;
    BOOL _isError;
    TIMXSDKInstance *_r;
    long long _errorTimes;
    long long _errorTimesMax;
    double _errorInterval;
    double _errorTimeStamp;
}

@property (nonatomic) BOOL enable;
@property (nonatomic) long long errorTimes;
@property (nonatomic) long long errorTimesMax;
@property (nonatomic) double errorInterval;
@property (nonatomic) double errorTimeStamp;
@property (nonatomic) BOOL isError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)errorTimes;
- (void)setErrorTimes:(long long)arg0;
- (void)longConnectionDidTimeout:(id)arg0;
- (void)longConnectionDidReceiveMessage;
- (long long)errorTimesMax;
- (void)setErrorTimeStamp:(double)arg0;
- (void)validLongConnection;
- (void)invalidLongConnectionWithError:(id)arg0;
- (double)errorTimeStamp;
- (double)errorInterval;
- (void)setErrorTimesMax:(long long)arg0;
- (void)setErrorInterval:(double)arg0;
- (BOOL)enable;
- (void).cxx_destruct;
- (BOOL)open;
- (BOOL)serverError;
- (void)setEnable:(BOOL)arg0;
- (void)dealloc;
- (void)setIsError:(BOOL)arg0;
- (BOOL)isError;
- (id)initWithRootObject:(id)arg0;

@end
