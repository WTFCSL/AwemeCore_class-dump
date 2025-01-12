//
//     Generated by private class-dump
//

@protocol AWEBottomContainerTrackLynxTapDelegate, AWEBottomContainerViewLifeCycleDelegate;

@protocol AWEDiscoverDBottomBarViewProtocol <NSObject>

@property (nonatomic, weak) id<AWEBottomContainerViewLifeCycleDelegate> lifeCycleDelegate;
@property (nonatomic, weak) id<AWEBottomContainerTrackLynxTapDelegate> trackLynxTapDelegate;

- (id)lifeCycleDelegate;
- (void)setLifeCycleDelegate:(id)arg0;
- (id)trackLynxTapDelegate;
- (void)setTrackLynxTapDelegate:(id)arg0;
- (void)updateRawData:(id)arg0 extraParams:(id)arg1 inController:(id)arg2;
- (void)updateRawData:(id)arg0 extraParams:(id)arg1 inController:(id)arg2;
- (void)sendGlobalEvent:(id)arg0 withParams:(id)arg1;
- (void)trackShowEvent;

@optional

- (void)trackClickEvent:(id)arg0 otherParams:(id)arg1;
- (void)updateEnterModelWithAwemeModel:(id)arg0;
- (void)updateEnterModelWithAwemeModel:(id)arg0;

@end
