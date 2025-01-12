//
//     Generated by private class-dump
//

@class AWERVDetailPageContext;

@interface AWERVContainerTracker : NSObject {
    BOOL _hasTrackedPageShow;
    AWERVDetailPageContext *_context;
}

@property (weak, nonatomic) AWERVDetailPageContext *context;
@property (nonatomic) BOOL hasTrackedPageShow;

+ (id)trackParamsForMVChannelWithModel:(id)arg0 logExtraDict:(id)arg1;

- (void)trackSearchButtonShow;
- (void)trackEnterUserProfileWithEnterMethod:(id)arg0;
- (void)trackPageShowIfNeeded;
- (void)trackClickLandscapeModeEntrance:(BOOL)arg0;
- (void)trackStayTime:(double)arg0 logExtraDict:(id)arg1;
- (void)trackForFullScreenEntranceClick;
- (void)trackForQuitRelatedVideoWithType:(id)arg0;
- (void)trackSearchButtonClick;
- (void)trackVideoScroll:(BOOL)arg0;
- (void)trackDataForEnterPrivateChatWithPeerUserID:(id)arg0;
- (void)trackDataForEnterGroupChatWithCID:(id)arg0;
- (BOOL)hasTrackedPageShow;
- (void)setHasTrackedPageShow:(BOOL)arg0;
- (void)trackShowFullScreenEntrance;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end
