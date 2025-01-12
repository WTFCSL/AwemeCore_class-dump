//
//     Generated by private class-dump
//

@class IESLiveRevenueInteractTrayQueue, NSString, HTSEventContext, IESLiveComponentContext;
@protocol IESLiveRevenueInteractModule;

@interface IESLiveRevenueInteractTrayPlayer : NSObject {
    BOOL _isLooping;
    NSString *_toUserID;
    IESLiveRevenueInteractTrayQueue *_queue;
    id<IESLiveRevenueInteractModule> _revenueInteractModule;
    IESLiveComponentContext *_componentContext;
    HTSEventContext *_eventContext;
}

@property (nonatomic) BOOL isLooping;
@property (copy, nonatomic) NSString *toUserID;
@property (retain, nonatomic) IESLiveRevenueInteractTrayQueue *queue;
@property (retain, nonatomic) id<IESLiveRevenueInteractModule> revenueInteractModule;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *eventContext;

- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (id)toUserID;
- (void)setToUserID:(id)arg0;
- (void)setEventContext:(id)arg0;
- (id)revenueInteractModule;
- (void)setRevenueInteractModule:(id)arg0;
- (void)loopNext;
- (void)playWithNode:(id)arg0 completion:(id /* block */)arg1;
- (void)trackTrayShow:(id)arg0;
- (id)initWithUserID:(id)arg0 eventContext:(id)arg1 componentContext:(id)arg2;
- (void).cxx_destruct;
- (void)didReceiveMessage:(id)arg0;
- (id)eventContext;
- (BOOL)isLooping;
- (id)queue;
- (void)setQueue:(id)arg0;
- (void)setIsLooping:(BOOL)arg0;

@end
