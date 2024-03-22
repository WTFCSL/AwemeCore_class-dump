//
//     Generated by private class-dump
//

@class NSString, UIImageView, UIView, HTSLiveRoom;
@protocol IESLivePlayerProtocol;

@interface IESLiveSlideUserFeedbackPlayerView : UIView <IESLivePlayerControllerDelegate> {
    BOOL _hadRenderFirstFrame;
    id<IESLivePlayerProtocol> _player;
    UIView *_playerBackgroudView;
    UIImageView *_coverImage;
    HTSLiveRoom *_room;
}

@property (retain, nonatomic) id<IESLivePlayerProtocol> player;
@property (retain, nonatomic) UIView *playerBackgroudView;
@property (retain, nonatomic) UIImageView *coverImage;
@property (retain, nonatomic) HTSLiveRoom *room;
@property (nonatomic) BOOL hadRenderFirstFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)arg0 loadStateDidChange:(unsigned long long)arg1;
- (void)player:(id)arg0 didReceiveError:(id)arg1;
- (void)player:(id)arg0 playbackStateDidChange:(unsigned long long)arg1;
- (void)setCoverImage:(id)arg0;
- (void)clearPlayer;
- (id)playerBackgroudView;
- (BOOL)shouldShowPlayer;
- (void)setHadRenderFirstFrame:(BOOL)arg0;
- (BOOL)hadRenderFirstFrame;
- (void)refreshWithRoom:(id)arg0;
- (void)setPlayerBackgroudView:(id)arg0;
- (void).cxx_destruct;
- (void)setPlayer:(id)arg0;
- (id)player;
- (void)setupUI;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)coverImage;

@end
