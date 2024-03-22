//
//     Generated by private class-dump
//

@class IESLiveLinkLiveRtc, NSString, IESLiveLinkRTCInteractTranscodeAVParams;
@protocol ILiveTranscoderEventDelegate, ILiveTranscoderAVDataSink;

@interface IESLiveLinkLiveTranscoderParam : NSObject {
    BOOL _byteAudioModeEnable;
    IESLiveLinkRTCInteractTranscodeAVParams *_avParam;
    IESLiveLinkLiveRtc *_rtcEngineKit;
    long long _interactMixType;
    NSString *_publishUrl;
    NSString *_userId;
    NSString *_roomId;
    NSString *_taskId;
    id<ILiveTranscoderEventDelegate> _eventDelegate;
    id<ILiveTranscoderAVDataSink> _AVDataSink;
}

@property (retain, nonatomic) IESLiveLinkRTCInteractTranscodeAVParams *avParam;
@property (weak, nonatomic) IESLiveLinkLiveRtc *rtcEngineKit;
@property (nonatomic) long long interactMixType;
@property (copy, nonatomic) NSString *publishUrl;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *taskId;
@property (weak, nonatomic) id<ILiveTranscoderEventDelegate> eventDelegate;
@property (weak, nonatomic) id<ILiveTranscoderAVDataSink> AVDataSink;
@property (nonatomic) BOOL byteAudioModeEnable;

- (id)roomId;
- (void)setRoomId:(id)arg0;
- (id)publishUrl;
- (void)setPublishUrl:(id)arg0;
- (void)setInteractMixType:(long long)arg0;
- (id)rtcEngineKit;
- (id)AVDataSink;
- (id)avParam;
- (long long)interactMixType;
- (void)setAvParam:(id)arg0;
- (void)setRtcEngineKit:(id)arg0;
- (void)setAVDataSink:(id)arg0;
- (BOOL)byteAudioModeEnable;
- (void)setByteAudioModeEnable:(BOOL)arg0;
- (void).cxx_destruct;
- (id)eventDelegate;
- (id)userId;
- (id)taskId;
- (void)setUserId:(id)arg0;
- (void)setTaskId:(id)arg0;
- (void)setEventDelegate:(id)arg0;

@end