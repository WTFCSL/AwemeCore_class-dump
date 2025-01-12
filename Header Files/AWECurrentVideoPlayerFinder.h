//
//     Generated by private class-dump
//

@class NSString;
@protocol IESVideoPlayerProtocol;

@interface AWECurrentVideoPlayerFinder : NSObject <AWEPlayVideoMessage> {
    id<IESVideoPlayerProtocol> _lastPlayer;
}

@property (weak, nonatomic) id<IESVideoPlayerProtocol> lastPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isOnScreenPlayer:(id)arg0;
+ (id)sharedInstance;

- (void)playerDidReadyForDisplay:(id)arg0;
- (void)player:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (id)lastPlayer;
- (void)setLastPlayer:(id)arg0;
- (void)trackPlayerIfNeeded:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
