//
//     Generated by private class-dump
//

@class AWEUGPendantActivityModel, UIView;
@protocol AWEUGPendantUIProtocol;

@protocol AWEUGPendantActivityControllerProtocol <NSObject>

@property (readonly, nonatomic) UIView<AWEUGPendantUIProtocol> *pendantView;
@property (readonly, nonatomic) AWEUGPendantActivityModel *activityModel;

- (id)pendantView;
- (id)activityModel;
- (void)setupWithConfigModel:(id)arg0 resourceDelegate:(id)arg1;
- (void)updataActivityMessageWith:(id)arg0;

@optional

- (BOOL)hasTaskInProcess;
- (id)getFeedPendantLinkMonitorParams;
- (void)updateCapsuleWithText:(id)arg0 activityTaskType:(long long)arg1 andTimestamp:(double)arg2;
- (void)updateBaseView:(id)arg0;
- (void)updateSidebarEntranceIfNeed;
- (void)willBeCleared;
- (unsigned long long)getCurrentCapsuleStatus;
- (unsigned long long)getCurrentActivityType;
- (BOOL)hasTask;

@end