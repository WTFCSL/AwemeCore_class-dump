//
//     Generated by private class-dump
//

@class NSString, UIViewController;
@protocol AWEAwemeBizPlayVideoProtocol, AWEPlayVideoViewControllerProtocol, AWEAwemePlayVideoViewControllerProtocol, IESVideoPlayerProtocol;

@interface AWERelatedVideoPlayModel : NSObject {
    BOOL _isPlaying;
    NSString *_itemID;
    double _currentPlaybackTime;
    id<IESVideoPlayerProtocol> _playerController;
    UIViewController<AWEAwemePlayVideoViewControllerProtocol, AWEAwemeBizPlayVideoProtocol, AWEPlayVideoViewControllerProtocol> *_insertPlayVideoViewController;
}

@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) double currentPlaybackTime;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol, AWEAwemeBizPlayVideoProtocol, AWEPlayVideoViewControllerProtocol> *insertPlayVideoViewController;

- (id)insertPlayVideoViewController;
- (void)setInsertPlayVideoViewController:(id)arg0;
- (double)currentPlaybackTime;
- (void).cxx_destruct;
- (id)playerController;
- (id)itemID;
- (void)setPlayerController:(id)arg0;
- (void)setItemID:(id)arg0;
- (BOOL)isPlaying;
- (void)setCurrentPlaybackTime:(double)arg0;
- (void)setIsPlaying:(BOOL)arg0;

@end
