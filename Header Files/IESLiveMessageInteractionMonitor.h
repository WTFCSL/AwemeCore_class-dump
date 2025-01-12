//
//     Generated by private class-dump
//

@protocol IESLiveRoomServiceAdapter, IESLiveMonitor, IESLiveUserServiceAdapter;

@interface IESLiveMessageInteractionMonitor : NSObject {
    id<IESLiveMonitor> _traceMonitor;
    id<IESLiveRoomServiceAdapter> _room;
    id<IESLiveUserServiceAdapter> _userService;
}

@property (retain, nonatomic) id<IESLiveMonitor> traceMonitor;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> room;
@property (retain, nonatomic) id<IESLiveUserServiceAdapter> userService;

+ (id)attachingDIContext;
+ (void)monitorAndCheckWithEventName:(id)arg0 preEvent:(id /* block */)arg1 useTrace:(BOOL)arg2 moduleKey:(id)arg3;
+ (void)monitorCommentWithEventName:(id)arg0 preEvent:(id /* block */)arg1 useTrace:(BOOL)arg2;
+ (void)monitorWithEvent:(id)arg0 preEvent:(id /* block */)arg1 useTrace:(BOOL)arg2;
+ (void)monitorPublicScreenWithEventName:(id)arg0 preEvent:(id /* block */)arg1 useTrace:(BOOL)arg2;

- (id)logTag;
- (id)userService;
- (void)setUserService:(id)arg0;
- (id)allowEventListForTrace;
- (void)monitorWithServiceName:(id)arg0 extra:(id)arg1;
- (id)traceMonitor;
- (void)setTraceMonitor:(id)arg0;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;

@end
