//
//     Generated by private class-dump
//

@class IESLiveLinkLiveVideoParam;

@interface IESLiveLinkLiveDualStreamParam : NSObject {
    long long _remoteDefaultStreamType;
    long long _isAutoSwitch;
    long long _autoSwitchUserNumber;
    IESLiveLinkLiveVideoParam *_hdVideoParam;
    long long _hdSubIndex;
    IESLiveLinkLiveVideoParam *_sdVideoParam;
    long long _sdSubIndex;
}

@property (nonatomic) long long remoteDefaultStreamType;
@property (nonatomic) long long isAutoSwitch;
@property (nonatomic) long long autoSwitchUserNumber;
@property (retain, nonatomic) IESLiveLinkLiveVideoParam *hdVideoParam;
@property (nonatomic) long long hdSubIndex;
@property (retain, nonatomic) IESLiveLinkLiveVideoParam *sdVideoParam;
@property (nonatomic) long long sdSubIndex;

- (long long)remoteDefaultStreamType;
- (void)setRemoteDefaultStreamType:(long long)arg0;
- (long long)isAutoSwitch;
- (void)setIsAutoSwitch:(long long)arg0;
- (long long)autoSwitchUserNumber;
- (void)setAutoSwitchUserNumber:(long long)arg0;
- (id)hdVideoParam;
- (void)setHdVideoParam:(id)arg0;
- (long long)hdSubIndex;
- (void)setHdSubIndex:(long long)arg0;
- (id)sdVideoParam;
- (void)setSdVideoParam:(id)arg0;
- (long long)sdSubIndex;
- (void)setSdSubIndex:(long long)arg0;
- (id)init;
- (void).cxx_destruct;

@end