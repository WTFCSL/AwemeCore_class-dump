//
//     Generated by private class-dump
//

@class NSString;

@interface AWELiveAnchorActionsImpl : NSObject <HTSLiveAnchorActions, IESLiveAnchorRoomStatusChangeEvents>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopLive;
- (void)startLive;
- (void)startAnchorLiveWithRoom:(id)arg0;
- (void)stopAnchorLive;

@end
