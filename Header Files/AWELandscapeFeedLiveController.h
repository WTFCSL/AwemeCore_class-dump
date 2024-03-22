//
//     Generated by private class-dump
//

@class NSString;

@interface AWELandscapeFeedLiveController : AWELandscapeFeedBaseController <AWELandscapeFeedLiveControllerProtocol, AWEAwemeLiveCollectionViewCellDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordLandscapeData;
- (void)setupLiveModelFilter;
- (void)trackExitLiveRoom:(id)arg0 byAuto:(BOOL)arg1;
- (void)updatePortraitDataWithAwemeModel:(id)arg0;
- (void)exitLandscapeFeed;
- (void)liveRoomShouldSrollEnable:(BOOL)arg0;
- (void)exitLiveRoomWithAwemeModel:(id)arg0 byAuto:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)viewDidLoad;

@end
