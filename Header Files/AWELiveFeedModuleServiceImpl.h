//
//     Generated by private class-dump
//

@class NSString;

@interface AWELiveFeedModuleServiceImpl : NSObject <IESLiveAWEFeedModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canLandingTabLiveItem:(id)arg0;
- (void)switchTabLiveItem:(id)arg0;
- (BOOL)liveRoomCanLandingXTabLiveItem;
- (void)liveRoomSwitchXTabLiveItem:(id)arg0;
- (BOOL)liveClosePageCanLandingXTabLiveItem;
- (void)liveClosePageSwitchXTabLiveItem:(id)arg0;
- (BOOL)liveClosePageCanLandingTabLiveItem;
- (void)liveClosePageSwitchTabLiveItem:(id)arg0 enterMethod:(id)arg1;
- (void)liveInnerFeed:(id)arg0 willPopToVC:(id)arg1;

@end
