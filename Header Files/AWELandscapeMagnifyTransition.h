//
//     Generated by private class-dump
//

@class NSString;
@protocol IESVideoPlayerProtocol;

@interface AWELandscapeMagnifyTransition : NSObject <AWETransitionContextProvider> {
    id<IESVideoPlayerProtocol> _playController;
}

@property (retain, nonatomic) id<IESVideoPlayerProtocol> playController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startDefaultAnimationWithFromVC:(id)arg0 toVC:(id)arg1 fromContextProvider:(id)arg2 toContextProvider:(id)arg3 containerView:(id)arg4 context:(id)arg5 interactionType:(unsigned long long)arg6 completionHandler:(id /* block */)arg7;
- (void)setPlayController:(id)arg0;
- (id)playController;
- (id)init;
- (unsigned long long)interactionType;
- (void).cxx_destruct;
- (void)dealloc;

@end
