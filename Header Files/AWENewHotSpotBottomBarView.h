//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEBottomContainerTrackLynxTapDelegate, AWEBottomContainerViewLifeCycleDelegate;

@interface AWENewHotSpotBottomBarView : AWEBottomContainerBaseView <AWEDiscoverDBottomBarViewProtocol>

@property (weak, nonatomic) id<AWEBottomContainerViewLifeCycleDelegate> lifeCycleDelegate;
@property (weak, nonatomic) id<AWEBottomContainerTrackLynxTapDelegate> trackLynxTapDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateRawData:(id)arg0 extraParams:(id)arg1 inController:(id)arg2;
- (void)trackShowEvent;
- (void)trackClickEvent:(id)arg0 otherParams:(id)arg1;
- (id)generateContext;
- (id)customerComponentKeyClassPairToRegister;
- (id)globalPropsForInitialize;
- (id)templateURL;

@end