//
//     Generated by private class-dump
//

@protocol AWEGCPAutoPlayCardProtocol <NSObject>

@property (nonatomic) BOOL isActive;

- (id)fromContextProvider;
- (void)didEndShowing;
- (void)didBecomeActiveWithForceNotMute:(BOOL)arg0;
- (void)setIsActive:(BOOL)arg0;
- (void)didResignActive;
- (BOOL)isActive;
- (void)setMute:(BOOL)arg0;
- (id)videoView;

@optional

- (BOOL)shouldNotActive;
- (void)resetLivePlayer;
- (BOOL)hasVideo;
- (id)livePlayer;

@end
