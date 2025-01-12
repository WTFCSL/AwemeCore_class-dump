//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFeedPlayControlModuleService : HTSService <AWEFeedPlayControlModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createFastSpeedView;
- (Class)longPressFastSpeedHelperClass;
- (Class)pureModePageTrackHelperClass;
- (id)getAFDPinchZoomEventTracker;
- (id)getAFDAudioManager;
- (id)cancelAwemeMuteView;
- (id)getSharedAFDSpeedManager;
- (id)createSpeedManager;
- (id)createRoundSpeedButtonWithViewWidth:(double)arg0 textFont:(id)arg1;
- (Class)speedManagerClass;

@end
