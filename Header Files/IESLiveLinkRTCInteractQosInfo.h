//
//     Generated by private class-dump
//

@class NSString, IESLiveLinkRTCInteractCommunicationQosInfo;

@interface IESLiveLinkRTCInteractQosInfo : NSObject {
    BOOL _first_joined;
    BOOL _reconneting;
    BOOL _firstPushedVideoFrame;
    BOOL _firstPushedAudioFrame;
    BOOL _needUpdateWH;
    BOOL _isAppActive;
    long long _videoInputFrames;
    long long _reportInitInputFrames;
    long long _sendAudioBitrate;
    long long _receiveAudioBitrate;
    long long _sendVideoBitrate;
    long long _receiveVideoBitrate;
    long long _sendLocalVideoFps;
    NSString *_remoteLinkID;
    long long _srcWidth;
    long long _srcHeight;
    NSString *_srcFormat;
    long long _rtc_tx_quality;
    NSString *_mix_type;
    IESLiveLinkRTCInteractCommunicationQosInfo *_communicationQosInfo;
    double _remoteUserJoinTime;
    double _joinChannelTime;
    double _reconnetingTime;
}

@property (nonatomic) double joinChannelTime;
@property (nonatomic) double reconnetingTime;
@property (nonatomic) long long videoInputFrames;
@property long long reportInitInputFrames;
@property (nonatomic) long long sendAudioBitrate;
@property (nonatomic) long long receiveAudioBitrate;
@property (nonatomic) long long sendVideoBitrate;
@property (nonatomic) long long receiveVideoBitrate;
@property (nonatomic) long long sendLocalVideoFps;
@property (copy, nonatomic) NSString *remoteLinkID;
@property (nonatomic) BOOL first_joined;
@property (nonatomic) BOOL reconneting;
@property (nonatomic) BOOL firstPushedVideoFrame;
@property (nonatomic) BOOL firstPushedAudioFrame;
@property (nonatomic) long long srcWidth;
@property (nonatomic) long long srcHeight;
@property (copy, nonatomic) NSString *srcFormat;
@property (nonatomic) BOOL needUpdateWH;
@property (nonatomic) long long rtc_tx_quality;
@property (copy, nonatomic) NSString *mix_type;
@property BOOL isAppActive;
@property (retain, nonatomic) IESLiveLinkRTCInteractCommunicationQosInfo *communicationQosInfo;
@property (nonatomic) double remoteUserJoinTime;

- (void)setJoinChannelTime:(double)arg0;
- (double)joinChannelTime;
- (void)startJoinChannel;
- (id)communicationQosInfo;
- (long long)videoInputFrames;
- (void)setVideoInputFrames:(long long)arg0;
- (BOOL)needUpdateWH;
- (void)setSrcWidth:(long long)arg0;
- (void)setSrcHeight:(long long)arg0;
- (void)setSrcFormat:(id)arg0;
- (void)setNeedUpdateWH:(BOOL)arg0;
- (BOOL)firstPushedVideoFrame;
- (void)setFirstPushedVideoFrame:(BOOL)arg0;
- (BOOL)firstPushedAudioFrame;
- (void)setFirstPushedAudioFrame:(BOOL)arg0;
- (long long)reportInitInputFrames;
- (void)setReportInitInputFrames:(long long)arg0;
- (long long)srcWidth;
- (long long)srcHeight;
- (id)srcFormat;
- (id)getRtcStatsDict;
- (void)clearRtcStats;
- (BOOL)reconneting;
- (void)setReconneting:(BOOL)arg0;
- (long long)delaySinceReconnect;
- (void)startReconneting;
- (void)setFirst_joined:(BOOL)arg0;
- (BOOL)first_joined;
- (void)startRemoteUserJoin;
- (void)setSendLocalVideoFps:(long long)arg0;
- (void)setSendAudioBitrate:(long long)arg0;
- (void)setSendVideoBitrate:(long long)arg0;
- (void)setRtc_tx_quality:(long long)arg0;
- (void)setReceiveVideoBitrate:(long long)arg0;
- (void)setReceiveAudioBitrate:(long long)arg0;
- (void)initStatData;
- (void)setCommunicationQosInfo:(id)arg0;
- (void)setMix_type:(id)arg0;
- (void)setRemoteUserJoinTime:(double)arg0;
- (void)setReconnetingTime:(double)arg0;
- (double)reconnetingTime;
- (long long)sendAudioBitrate;
- (long long)receiveAudioBitrate;
- (long long)sendVideoBitrate;
- (long long)receiveVideoBitrate;
- (long long)sendLocalVideoFps;
- (id)mix_type;
- (long long)rtc_tx_quality;
- (void)setRemoteLinkID:(id)arg0;
- (id)remoteLinkID;
- (double)remoteUserJoinTime;
- (id)init;
- (void).cxx_destruct;
- (long long)elapsed;
- (void)setIsAppActive:(BOOL)arg0;
- (BOOL)isAppActive;

@end
