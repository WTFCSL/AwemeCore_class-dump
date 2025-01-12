//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSPointerArray, AWEListenFeedInteractionContext, NSString, NSMutableArray, UIViewController;
@protocol AWEListenFeedInteractionContainerProtocol, AWEListenFeedInteractionViewControllerProtocol;

@interface AWEListenFeedInteractionDispatcherManager : NSObject <AWEListenFeedInteractionDispatcherProtocol> {
    AWEListenFeedInteractionContext *_interactionContext;
    UIViewController<AWEListenFeedInteractionContainerProtocol, AWEListenFeedInteractionViewControllerProtocol> *_container;
    NSPointerArray *_elementArray;
    NSMutableArray *_controllerArray;
    NSMutableDictionary *_cacheDict;
}

@property (retain, nonatomic) NSPointerArray *elementArray;
@property (retain, nonatomic) NSMutableArray *controllerArray;
@property (retain, nonatomic) NSMutableDictionary *cacheDict;
@property (retain, nonatomic) AWEListenFeedInteractionContext *interactionContext;
@property (weak, nonatomic) UIViewController<AWEListenFeedInteractionContainerProtocol, AWEListenFeedInteractionViewControllerProtocol> *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCacheDict:(id)arg0;
- (id)controllerArray;
- (id)controllerArrayBySelector:(SEL)arg0;
- (id)elementArray;
- (void)setElementArray:(id)arg0;
- (void)setControllerArray:(id)arg0;
- (id)aimControllerArray;
- (id)elementArrayBySelector:(SEL)arg0;
- (id)arrayForSelectorUsingCache:(SEL)arg0;
- (void)registerController;
- (id)container;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;
- (void)setContainer:(id)arg0;
- (void)removeElement:(id)arg0;
- (id)interactionContext;
- (void)setInteractionContext:(id)arg0;
- (id)cacheDict;
- (void)registerElement:(id)arg0;

@end
