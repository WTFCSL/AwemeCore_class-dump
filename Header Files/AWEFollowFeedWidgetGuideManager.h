//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEFollowFeedAlertShowDelegate;

@interface AWEFollowFeedWidgetGuideManager : NSObject <AWEFollowFeedAlertProtocol> {
    id<AWEFollowFeedAlertShowDelegate> _delegate;
}

@property (weak, nonatomic) id<AWEFollowFeedAlertShowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)showWithCloseCallback:(id /* block */)arg0;
- (BOOL)canShow;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
