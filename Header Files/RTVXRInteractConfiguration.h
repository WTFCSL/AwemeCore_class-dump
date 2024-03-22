//
//     Generated by private class-dump
//

@class NSString, NSData, NSDictionary;

@interface RTVXRInteractConfiguration : NSObject {
    BOOL _sendVideoFrameToGameEngine;
    BOOL _sendAudioFrameToGameEngine;
    BOOL _enableMixedLivePush;
    BOOL _enableExternAudio;
    BOOL _retainLastVideoFrame;
    BOOL _autoStopVideoCaptureSwitch;
    BOOL _enableSpeakerAudioVolumeReport;
    BOOL _preDisableLocalAudio;
    BOOL _enableCellularWhileWifiForAudio;
    NSString *_appChannelType;
    NSString *_appID;
    NSData *_appKey;
    NSString *_projectKey;
    NSString *_channelName;
    NSString *_channelKey;
    NSString *_streamURL;
    NSDictionary *_rtcInfo;
    NSDictionary *_pipeline;
    NSString *_deviceID;
    NSDictionary *_rtcExtInfo;
    NSString *_roomID;
    NSString *_businessID;
    NSString *_abTestConfig;
    struct CGSize { double width; double height; } _rtcResolution;
    struct CGSize { double width; double height; } _captureOutputSize;
}

@property (copy, nonatomic) NSString *appChannelType;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSData *appKey;
@property (copy, nonatomic) NSString *projectKey;
@property (copy, nonatomic) NSString *channelName;
@property (copy, nonatomic) NSString *channelKey;
@property (nonatomic) struct CGSize { double width; double height; } rtcResolution;
@property (copy, nonatomic) NSString *streamURL;
@property (copy, nonatomic) NSDictionary *rtcInfo;
@property (copy, nonatomic) NSDictionary *pipeline;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSDictionary *rtcExtInfo;
@property (copy, nonatomic) NSString *roomID;
@property (nonatomic) BOOL sendVideoFrameToGameEngine;
@property (nonatomic) BOOL sendAudioFrameToGameEngine;
@property (nonatomic) BOOL enableMixedLivePush;
@property (nonatomic) BOOL enableExternAudio;
@property BOOL retainLastVideoFrame;
@property (nonatomic) BOOL autoStopVideoCaptureSwitch;
@property (nonatomic) struct CGSize { double width; double height; } captureOutputSize;
@property (nonatomic) BOOL enableSpeakerAudioVolumeReport;
@property (nonatomic) BOOL preDisableLocalAudio;
@property (copy, nonatomic) NSString *businessID;
@property (copy, nonatomic) NSString *abTestConfig;
@property (nonatomic) BOOL enableCellularWhileWifiForAudio;

- (void)setProjectKey:(id)arg0;
- (void)setAppKey:(id)arg0;
- (id)appKey;
- (id)rtcInfo;
- (void)setRtcInfo:(id)arg0;
- (struct CGSize { double x0; double x1; })captureOutputSize;
- (void)setCaptureOutputSize:(struct CGSize { double x0; double x1; })arg0;
- (id)abTestConfig;
- (id)rtcExtInfo;
- (BOOL)enableCellularWhileWifiForAudio;
- (void)setRtcExtInfo:(id)arg0;
- (void)setEnableMixedLivePush:(BOOL)arg0;
- (void)setEnableExternAudio:(BOOL)arg0;
- (void)setRetainLastVideoFrame:(BOOL)arg0;
- (void)setPreDisableLocalAudio:(BOOL)arg0;
- (void)setAbTestConfig:(id)arg0;
- (void)setEnableCellularWhileWifiForAudio:(BOOL)arg0;
- (id)appChannelType;
- (void)setAppChannelType:(id)arg0;
- (id)projectKey;
- (id)channelKey;
- (void)setChannelKey:(id)arg0;
- (struct CGSize { double x0; double x1; })rtcResolution;
- (void)setRtcResolution:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)sendVideoFrameToGameEngine;
- (void)setSendVideoFrameToGameEngine:(BOOL)arg0;
- (BOOL)sendAudioFrameToGameEngine;
- (void)setSendAudioFrameToGameEngine:(BOOL)arg0;
- (BOOL)enableMixedLivePush;
- (BOOL)enableExternAudio;
- (BOOL)retainLastVideoFrame;
- (BOOL)autoStopVideoCaptureSwitch;
- (void)setAutoStopVideoCaptureSwitch:(BOOL)arg0;
- (BOOL)enableSpeakerAudioVolumeReport;
- (void)setEnableSpeakerAudioVolumeReport:(BOOL)arg0;
- (BOOL)preDisableLocalAudio;
- (id)pipeline;
- (void)setAppID:(id)arg0;
- (void)setDeviceID:(id)arg0;
- (void).cxx_destruct;
- (id)deviceID;
- (id)channelName;
- (id)appID;
- (id)businessID;
- (void)setBusinessID:(id)arg0;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)streamURL;
- (void)setPipeline:(id)arg0;
- (void)setChannelName:(id)arg0;
- (void)setStreamURL:(id)arg0;

@end