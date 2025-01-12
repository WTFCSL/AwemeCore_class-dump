//
//     Generated by private class-dump
//

@class NSString, AWEListenFeedInteractionContext, UIView, UIViewController;
@protocol AWEListenFeedInteractionContainerProtocol, AWEListenFeedInteractionViewControllerProtocol;

@interface AWEListenFeedInteractionBaseElement : NSObject <AWEListenFeedInteractionDispatcherProtocol> {
    UIViewController<AWEListenFeedInteractionContainerProtocol, AWEListenFeedInteractionViewControllerProtocol> *_container;
    AWEListenFeedInteractionContext *_interactionContext;
    UIView *_view;
}

@property (weak, nonatomic) UIViewController<AWEListenFeedInteractionContainerProtocol, AWEListenFeedInteractionViewControllerProtocol> *container;
@property (retain, nonatomic) AWEListenFeedInteractionContext *interactionContext;
@property (retain, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (id)container;
- (id)playerViewController;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (void)setView:(id)arg0;
- (long long)index;
- (id)context;
- (id)viewModel;
- (void)dealloc;
- (void)viewDidLoad;
- (id)view;
- (id)interactionContext;
- (void)setInteractionContext:(id)arg0;

@end
