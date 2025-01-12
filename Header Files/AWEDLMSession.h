//
//     Generated by private class-dump
//

@class NSObject, NSString, AWEDeepLinkMonitor, NSError, NSMutableArray, AWEDLMSessionExtInfo;
@protocol OS_dispatch_source;

@interface AWEDLMSession : NSObject {
    BOOL _isForeground;
    BOOL _isFinished;
    NSString *_sessionID;
    AWEDLMSessionExtInfo *_extInfo;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    AWEDeepLinkMonitor *_parent;
    NSString *_session;
    NSString *_launchMode;
    NSString *_openURL;
    double _timeStamp;
    double _costTime;
    NSMutableArray *_stagesStack;
    NSError *_error;
}

@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *openURL;
@property (nonatomic) double timeStamp;
@property (nonatomic) double costTime;
@property (nonatomic) BOOL isForeground;
@property (retain, nonatomic) NSMutableArray *stagesStack;
@property (retain, nonatomic) AWEDLMSessionExtInfo *extInfo;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isFinished;
@property (copy, nonatomic) NSString *session;
@property (copy, nonatomic) NSString *launchMode;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;
@property (readonly, copy, nonatomic) NSString *errorStageName;
@property (weak, nonatomic) AWEDeepLinkMonitor *parent;

- (void)setOpenURL:(id)arg0;
- (void)setExtInfo:(id)arg0;
- (id)extInfo;
- (id)stagesStack;
- (id)addStage:(id)arg0 timeStamp:(double)arg1 pageName:(id)arg2;
- (id)reportWithError:(id)arg0;
- (id)buildParams;
- (BOOL)isFromOutsideRoute;
- (BOOL)needReportInternalRoute;
- (id)buildURLParams:(id)arg0;
- (id)mapLaunchMode:(unsigned long long)arg0;
- (id)mapFromScene:(unsigned long long)arg0;
- (void)setCostTime:(double)arg0;
- (double)costTime;
- (id)initWithSessionID:(id)arg0 openURL:(id)arg1;
- (id)errorStageName;
- (void)removeUnAllowedParams;
- (void)setStagesStack:(id)arg0;
- (void)reportCpsTrackIfNeed;
- (id)mapToScene:(unsigned long long)arg0;
- (id)buildOpenPlatformParams:(id)arg0;
- (BOOL)isFinished;
- (void)setParent:(id)arg0;
- (void).cxx_destruct;
- (void)setSessionID:(id)arg0;
- (void)setSession:(id)arg0;
- (id)sessionID;
- (id)session;
- (id)parent;
- (BOOL)isForeground;
- (double)timeStamp;
- (void)report;
- (void)saveToDisk;
- (void)setIsForeground:(BOOL)arg0;
- (id)initWithCoder:(id)arg0;
- (void)discard;
- (void)finish:(id)arg0;
- (void)setError:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (void)setLaunchMode:(id)arg0;
- (id)launchMode;
- (id)error;
- (void)setTimeStamp:(double)arg0;
- (void)setIsFinished:(BOOL)arg0;
- (id)openURL;
- (id)timeoutTimer;
- (void)setTimeoutTimer:(id)arg0;
- (id)addStage:(id)arg0;
- (id)modify:(id /* block */)arg0;
- (void)clean;

@end
