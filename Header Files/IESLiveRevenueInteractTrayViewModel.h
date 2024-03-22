//
//     Generated by private class-dump
//

@class HTSEventContext, NSMutableDictionary, NSString, IESLiveComponentContext;
@protocol IESLiveRoomServiceAdapter, IESLiveRevenueInteractModule;

@interface IESLiveRevenueInteractTrayViewModel : NSObject <HTSLiveMessageSubscriber> {
    HTSEventContext *_eventContext;
    IESLiveComponentContext *_componentContext;
    NSMutableDictionary *_playerMapping;
    id<IESLiveRevenueInteractModule> _revenueInteractModule;
    id<IESLiveRoomServiceAdapter> _room;
}

@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) NSMutableDictionary *playerMapping;
@property (retain, nonatomic) id<IESLiveRevenueInteractModule> revenueInteractModule;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (void)setEventContext:(id)arg0;
- (void)endRevenueInteractWithScene:(unsigned long long)arg0;
- (id)revenueInteractModule;
- (void)setRevenueInteractModule:(id)arg0;
- (id)initWithRoom:(id)arg0 eventContext:(id)arg1 componentContext:(id)arg2;
- (id)playerMapping;
- (void)setPlayerMapping:(id)arg0;
- (void).cxx_destruct;
- (id)eventContext;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)messageReceived:(id)arg0;

@end
