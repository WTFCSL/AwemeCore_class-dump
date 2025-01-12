//
//     Generated by private class-dump
//

@class HTSEventContext, NSDictionary, NSString;
@protocol IESLiveMonitor;

@interface IESScreenshotTimelineImpl : NSObject <IESScreenshotTimeline> {
    double _createRoomTime;
    double _userStartTime;
    double _extLaunchTime;
    double _pageWillShowTime;
    double _readyPushTime;
    double _pushingTime;
    long long _reconnectTimes;
    BOOL audioIsRunning;
    BOOL isHeadsetConnecting;
    HTSEventContext *eventContext;
    NSDictionary *extErrorInfo;
    NSDictionary *streamVideoFrameInfo;
    id<IESLiveMonitor> _monitor;
    long long _errorState;
}

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (nonatomic) long long errorState;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (copy, nonatomic) NSDictionary *extErrorInfo;
@property (copy, nonatomic) NSDictionary *streamVideoFrameInfo;
@property BOOL audioIsRunning;
@property BOOL isHeadsetConnecting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appWillTerminate;
- (void)setEventContext:(id)arg0;
- (BOOL)isHeadsetConnecting;
- (void)setIsHeadsetConnecting:(BOOL)arg0;
- (void)extensionAbnormalExit;
- (void)micAudioChanged:(id)arg0 running:(BOOL)arg1;
- (void)micAudioAbnormal;
- (void)createRoom;
- (void)startAudioRecord;
- (void)stopAudioRecord;
- (void)livePageWillShow;
- (void)extensionLog:(id)arg0;
- (void)reportCaptureInfo:(id)arg0;
- (void)liveCoreWillConnect;
- (void)startPushing;
- (void)reportSessionLogWithState:(long long)arg0 extra:(id)arg1;
- (void)receiveStreamUpdateEncodeBitrate:(long long)arg0;
- (void)setExtErrorInfo:(id)arg0;
- (void)setStreamVideoFrameInfo:(id)arg0;
- (void)cancelInGuide;
- (void)screenShotGuideDidShow;
- (void)extensionAHeadOfLaunch;
- (void)enterRoomSuccess;
- (void)monitorScreenshotWith:(id)arg0 code:(long long)arg1;
- (BOOL)audioIsRunning;
- (id)extErrorInfo;
- (id)streamVideoFrameInfo;
- (id)sessionLogDescriptionWithState:(long long)arg0;
- (void)setAudioIsRunning:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)monitor;
- (void)close;
- (void)setMonitor:(id)arg0;
- (id)eventContext;
- (void)reset;
- (long long)errorState;
- (void)setErrorState:(long long)arg0;

@end
