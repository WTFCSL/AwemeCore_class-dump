//
//     Generated by private class-dump
//

@class NSString, PuzzleHybridContainer;

@interface IESLiveResourcePreloadFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESHYHybridViewLifecycleProtocol> {
    PuzzleHybridContainer *_lynxView;
}

@property (retain, nonatomic) PuzzleHybridContainer *lynxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (id)lynxView;
- (void)setLynxView:(id)arg0;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)createLynxViewWithMessage:(id)arg0;
- (void).cxx_destruct;
- (void)messageReceived:(id)arg0;

@end