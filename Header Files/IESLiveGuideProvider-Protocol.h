//
//     Generated by private class-dump
//

@class IESLiveGuideModel, CreateInfoResponse_CreateInfo;

@protocol IESLiveGuideProvider <NSObject>

@property (readonly, nonatomic) IESLiveGuideModel *guideModel;
@property (readonly, nonatomic) CreateInfoResponse_CreateInfo *openLiveModel;

- (id)guideModel;
- (void)changeLiveType:(unsigned long long)arg0;
- (void)closeGuideViewController;
- (void)buildCameraAfterPassCameraAuth;
- (void)updateOpenLiveModel:(id)arg0;
- (void)trackEnterpriseTakePageShowIfNeeded;
- (void)openLiveWithRoomModel:(id)arg0 isResumed:(BOOL)arg1;
- (id)beforeLiveTrackContent;
- (BOOL)isVCInLiveTab;
- (void)preCreateAnchorViewController;
- (id)openLiveModel;

@end