//
//     Generated by private class-dump
//

@class IESLiveMultiRtcInfo, NSDictionary, NSArray, IESLiveMultiLiveCoreInfo, IESLiveMCUContent;

@interface IESLiveInteractiveMediaExtInfoManager : NSObject {
    NSDictionary *_rtcExtInfo;
    IESLiveMultiRtcInfo *_multiRtcInfo;
    NSDictionary *_multiRtcInfoDictionary;
    NSArray *_rtcSortedKeys;
    NSDictionary *_liveCoreExtInfo;
    IESLiveMultiLiveCoreInfo *_multiLiveCoreInfo;
    NSDictionary *_multiliveCoreInfoDictionary;
    NSArray *_liveCoreSortedKeys;
    IESLiveMCUContent *_mcuContent;
}

@property (copy, nonatomic) NSDictionary *rtcExtInfo;
@property (retain, nonatomic) IESLiveMultiRtcInfo *multiRtcInfo;
@property (copy, nonatomic) NSDictionary *multiRtcInfoDictionary;
@property (copy, nonatomic) NSArray *rtcSortedKeys;
@property (copy, nonatomic) NSDictionary *liveCoreExtInfo;
@property (retain, nonatomic) IESLiveMultiLiveCoreInfo *multiLiveCoreInfo;
@property (copy, nonatomic) NSDictionary *multiliveCoreInfoDictionary;
@property (copy, nonatomic) NSArray *liveCoreSortedKeys;
@property (retain, nonatomic) IESLiveMCUContent *mcuContent;

- (id)rtcExtInfo;
- (void)setRtcExtInfo:(id)arg0;
- (id)liveCoreExtInfo;
- (id)multiRtcInfo;
- (id)multiLiveCoreInfo;
- (id)mcuContent;
- (void)setMultiRtcInfo:(id)arg0;
- (void)setMultiLiveCoreInfo:(id)arg0;
- (void)setLiveCoreExtInfo:(id)arg0;
- (void)updateWithLiveCoreExtInfo:(id)arg0 rtcExtInfo:(id)arg1;
- (void)setMcuContent:(id)arg0;
- (void)updateWithLiveCoreExtInfo:(id)arg0 multiLiveCoreInfo:(id)arg1 rtcExtInfo:(id)arg2 multiRtcInfo:(id)arg3 mcuContent:(id)arg4;
- (id)livecoreExtInfoWithGuestCount:(long long)arg0 isAnchor:(BOOL)arg1;
- (id)liveCoreExtInfoWithPostion:(id)arg0;
- (id)multiliveCoreInfoDictionary;
- (id)rtcSortedKeys;
- (id)keyWithGuestCount:(long long)arg0 isAnchor:(BOOL)arg1 ofSortedKeys:(id)arg2;
- (id)multiRtcInfoDictionary;
- (id)liveCoreSortedKeys;
- (void)setMultiRtcInfoDictionary:(id)arg0;
- (void)setRtcSortedKeys:(id)arg0;
- (void)setMultiliveCoreInfoDictionary:(id)arg0;
- (void)setLiveCoreSortedKeys:(id)arg0;
- (void)holdMultiRtcInfo:(id)arg0 multiLiveCoreInfo:(id)arg1;
- (void)updateWithLiveCoreSettings:(id)arg0;
- (void)updateWithStartContext:(id)arg0;
- (void)updateWithSwitchContext:(id)arg0;
- (void)updateWithSwitchSceneMessage:(id)arg0;
- (void)updateWithUILayoutChangedMessage:(id)arg0;
- (void)updateWithInviteMessage:(id)arg0;
- (void)updateWithReplyContext:(id)arg0;
- (void)updateWithPermitMessage:(id)arg0;
- (id)livecoreExtInfoWithParams:(id)arg0;
- (id)rtcExtInfoWithGuestCount:(long long)arg0 isAnchor:(BOOL)arg1;
- (void).cxx_destruct;

@end
