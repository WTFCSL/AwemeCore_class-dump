//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveAudienceInteractiveRootPanelTrackModel : NSObject {
    BOOL _hasInviteUserButtonShowTracked;
    BOOL _hasTrackAutoLinkShow;
    long long _applyPanelRefreshTag;
    NSString *_lastTrackShowPage;
}

@property (nonatomic) BOOL hasInviteUserButtonShowTracked;
@property (nonatomic) BOOL hasTrackAutoLinkShow;
@property (nonatomic) long long applyPanelRefreshTag;
@property (copy, nonatomic) NSString *lastTrackShowPage;

- (void)setApplyPanelRefreshTag:(long long)arg0;
- (BOOL)hasInviteUserButtonShowTracked;
- (void)setHasInviteUserButtonShowTracked:(BOOL)arg0;
- (BOOL)hasTrackAutoLinkShow;
- (void)setHasTrackAutoLinkShow:(BOOL)arg0;
- (long long)applyPanelRefreshTag;
- (id)lastTrackShowPage;
- (void)setLastTrackShowPage:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
