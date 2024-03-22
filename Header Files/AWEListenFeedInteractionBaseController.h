//
//     Generated by private class-dump
//

@class NSString, UIViewController, AWEListenFeedInteractionContext;
@protocol AWEListenFeedInteractionContainerProtocol, AWEListenFeedInteractionViewControllerProtocol;

@interface AWEListenFeedInteractionBaseController : NSObject <AWEListenFeedInteractionDispatcherProtocol> {
    UIViewController<AWEListenFeedInteractionContainerProtocol, AWEListenFeedInteractionViewControllerProtocol> *_container;
    AWEListenFeedInteractionContext *_interactionContext;
}

@property (weak, nonatomic) UIViewController<AWEListenFeedInteractionContainerProtocol, AWEListenFeedInteractionViewControllerProtocol> *container;
@property (retain, nonatomic) AWEListenFeedInteractionContext *interactionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (id)container;
- (id)playerViewController;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (long long)index;
- (id)context;
- (id)viewModel;
- (void)dealloc;
- (void)viewDidLoad;
- (id)view;
- (id)interactionContext;
- (void)setInteractionContext:(id)arg0;

@end
