//
//     Generated by private class-dump
//

@class NSString;

@interface AWETaskSpreadBizDowngradeInteractionDispatcher : AWETaskSpreadDispatcherBase <AWEPlayVideoMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (void)cancelDispatchOnRightContainer;
- (void)_updateFitstFrameDelayTime;
- (id)init;
- (void)execute;

@end
