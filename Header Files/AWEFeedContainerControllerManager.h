//
//     Generated by private class-dump
//

@class NSArray, AWEFeedContainerViewController, NSString;

@interface AWEFeedContainerControllerManager : AWEShellControllerManager <AWEContentContainerProtocol> {
    AWEFeedContainerViewController *_feedContainer;
    NSArray *_controllerNames;
}

@property (weak, nonatomic) AWEFeedContainerViewController *feedContainer;
@property (copy, nonatomic) NSArray *controllerNames;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)classNameArray;
- (void)setFeedContainer:(id)arg0;
- (void)setControllerNames:(id)arg0;
- (id)controllerNames;
- (id)feedContainer;
- (id)initWithFeedContainer:(id)arg0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;

@end
