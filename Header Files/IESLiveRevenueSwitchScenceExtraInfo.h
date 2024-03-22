//
//     Generated by private class-dump
//

@class NSString, IESLiveMultiChannelInfo, IESLiveIntercomCommentConfig;
@protocol IESLiveInteractUserModel;

@interface IESLiveRevenueSwitchScenceExtraInfo : NSObject {
    BOOL _isChorusMute;
    BOOL _isMultiInvite;
    BOOL _needShowLastResult;
    NSString *_connectionType;
    long long _fromStatus;
    id<IESLiveInteractUserModel> _silenceVolumeUser;
    unsigned long long _inviteeListType;
    long long _actionFromSource;
    double _connectionStartTime;
    IESLiveMultiChannelInfo *_multiChannelInfo;
    IESLiveIntercomCommentConfig *_intercomCommentConfig;
    unsigned long long _rtcStatus;
    NSString *_requestID;
}

@property (copy, nonatomic) NSString *connectionType;
@property (nonatomic) long long fromStatus;
@property (nonatomic) BOOL isChorusMute;
@property (retain, nonatomic) id<IESLiveInteractUserModel> silenceVolumeUser;
@property (nonatomic) unsigned long long inviteeListType;
@property (nonatomic) long long actionFromSource;
@property (nonatomic) double connectionStartTime;
@property (retain, nonatomic) IESLiveMultiChannelInfo *multiChannelInfo;
@property (retain, nonatomic) IESLiveIntercomCommentConfig *intercomCommentConfig;
@property (nonatomic) unsigned long long rtcStatus;
@property (nonatomic) BOOL isMultiInvite;
@property (nonatomic) BOOL needShowLastResult;
@property (copy, nonatomic) NSString *requestID;

- (unsigned long long)rtcStatus;
- (void)setRtcStatus:(unsigned long long)arg0;
- (void)setInviteeListType:(unsigned long long)arg0;
- (unsigned long long)inviteeListType;
- (id)multiChannelInfo;
- (void)setActionFromSource:(long long)arg0;
- (void)setIsChorusMute:(BOOL)arg0;
- (long long)actionFromSource;
- (void)setMultiChannelInfo:(id)arg0;
- (void)setIntercomCommentConfig:(id)arg0;
- (BOOL)isMultiInvite;
- (void)setIsMultiInvite:(BOOL)arg0;
- (BOOL)isChorusMute;
- (id)intercomCommentConfig;
- (BOOL)needShowLastResult;
- (void)setNeedShowLastResult:(BOOL)arg0;
- (id)silenceVolumeUser;
- (void)setSilenceVolumeUser:(id)arg0;
- (id)connectionType;
- (double)connectionStartTime;
- (void)setRequestID:(id)arg0;
- (id)requestID;
- (void).cxx_destruct;
- (void)setConnectionStartTime:(double)arg0;
- (void)setConnectionType:(id)arg0;
- (long long)fromStatus;
- (void)setFromStatus:(long long)arg0;

@end