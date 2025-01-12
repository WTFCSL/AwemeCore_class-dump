//
//     Generated by private class-dump
//

@class NSString, NSTimer, BDUGLocationInfo, CLLocationManager, NSMutableArray, NSLock;
@protocol BDUGCertProtocol;

@interface BDLTask : NSObject <CLLocationManagerDelegate> {
    BOOL _isCallbacked;
    NSString *_requestID;
    long long _desiredAccuracy;
    CLLocationManager *_locationManager;
    id<BDUGCertProtocol> _cert;
    double _timeout;
    NSTimer *_timeoutTimer;
    double _startLocationTime;
    long long _status;
    id /* block */ _timeoutCallback;
    id /* block */ _completion;
    BDUGLocationInfo *_locationResult;
    NSMutableArray *_completionList;
    NSMutableArray *_timeoutCompletionList;
    NSLock *_callbackTagLock;
}

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) id<BDUGCertProtocol> cert;
@property (nonatomic) long long desiredAccuracy;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSTimer *timeoutTimer;
@property (nonatomic) double startLocationTime;
@property (nonatomic) long long status;
@property (copy, nonatomic) id /* block */ timeoutCallback;
@property (copy, nonatomic) id /* block */ completion;
@property (retain) BDUGLocationInfo *locationResult;
@property (nonatomic) BOOL isCallbacked;
@property (retain, nonatomic) NSMutableArray *completionList;
@property (retain, nonatomic) NSMutableArray *timeoutCompletionList;
@property (retain, nonatomic) NSLock *callbackTagLock;
@property (readonly, copy, nonatomic) NSString *requestID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setStartLocationTime:(double)arg0;
- (void)consume:(id)arg0 error:(id)arg1;
- (id)callbackTagLock;
- (void)setIsCallbacked:(BOOL)arg0;
- (id)timeoutCompletionList;
- (void)setTimeoutCompletionList:(id)arg0;
- (BOOL)isCallbacked;
- (id)locationResult;
- (double)startLocationTime;
- (void)setLocationResult:(id)arg0;
- (void)setCallbackTagLock:(id)arg0;
- (id)initWithDesiredAccuracy:(long long)arg0 cert:(id)arg1 timeout:(double)arg2 timeoutCallback:(id /* block */)arg3 completion:(id /* block */)arg4;
- (BOOL)bindCompletion:(id /* block */)arg0 timeoutCompletion:(id /* block */)arg1;
- (id)completionList;
- (void)setDesiredAccuracy:(long long)arg0;
- (id)requestID;
- (long long)desiredAccuracy;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (long long)status;
- (void)locationManager:(id)arg0 didFailWithError:(id)arg1;
- (void)finish;
- (id /* block */)timeoutCallback;
- (void)requestLocation;
- (void)setTimeoutCallback:(id /* block */)arg0;
- (void)setStatus:(long long)arg0;
- (void)setLocationManager:(id)arg0;
- (void)setCompletionList:(id)arg0;
- (double)timeout;
- (void)cancel;
- (void)dealloc;
- (id)locationManager;
- (void)locationManager:(id)arg0 didUpdateLocations:(id)arg1;
- (void)setTimeout:(double)arg0;
- (void)_timeoutTimerFired;
- (id)timeoutTimer;
- (void)setTimeoutTimer:(id)arg0;
- (id)cert;
- (void)setCert:(id)arg0;

@end
