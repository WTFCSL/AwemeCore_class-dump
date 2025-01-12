//
//     Generated by private class-dump
//

@class NSString, AWETransitionContext, AWEFeedContainerViewController, UIViewController;

@interface AWEIMLeftToRightGuideViewController : NSObject <AWEIMLeftToRightGuideViewProtocol> {
    AWEFeedContainerViewController *feedContainerViewController;
    long long state;
    AWETransitionContext *context;
    UIViewController *parentVC;
}

@property (weak, nonatomic) AWEFeedContainerViewController *feedContainerViewController;
@property (weak, nonatomic) UIViewController *parentVC;
@property (weak, nonatomic) AWETransitionContext *context;
@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)feedContainerViewController;
- (void)concernHandleRightPanTransition:(long long)arg0 context:(id)arg1 parentViewController:(id)arg2;
- (void)setFeedContainerViewController:(id)arg0;
- (void).cxx_destruct;
- (long long)state;
- (void)setContext:(id)arg0;
- (void)setState:(long long)arg0;
- (id)context;
- (id)parentVC;
- (void)setParentVC:(id)arg0;

@end
