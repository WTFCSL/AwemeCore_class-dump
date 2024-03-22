//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEProfileGuidePopoverAlertDelegate;

@interface AWEProfileGuidePopoverBaseAlert : NSObject <AWEProfileGuidePopoverAlertProtocol> {
    id<AWEProfileGuidePopoverAlertDelegate> _delegate;
    id /* block */ _onClose;
    unsigned long long _launchStamp;
}

@property (copy, nonatomic) id /* block */ onClose;
@property (nonatomic) unsigned long long launchStamp;
@property (weak, nonatomic) id<AWEProfileGuidePopoverAlertDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)showWithCloseCallback:(id /* block */)arg0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (unsigned long long)launchStamp;
- (void)setLaunchStamp:(unsigned long long)arg0;
- (void)invokeOnClose:(BOOL)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg0;

@end