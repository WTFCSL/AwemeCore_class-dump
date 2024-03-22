//
//     Generated by private class-dump
//

@class UIButton, NSString, TTTAttributedLabel, UIImageView, AWEUILoadingView, UIView, UILabel;
@protocol IESVideoPlayerProtocol;

@interface AFDBirthdayPopup : UIView <IESVideoPlayerDelegate> {
    UIView *_videoView;
    AWEUILoadingView *_loadingView;
    UIView *_maskView;
    TTTAttributedLabel *_nameLabel;
    UILabel *_detailLabel;
    UIButton *_actionButton;
    UIImageView *_closeButton;
    id<IESVideoPlayerProtocol> _playerController;
    id /* block */ _actionBlock;
}

@property (retain, nonatomic) UIView *videoView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) TTTAttributedLabel *nameLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIImageView *closeButton;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 model:(id)arg1;
- (void)onActionTapped:(id)arg0;
- (void).cxx_destruct;
- (id)playerController;
- (id)maskView;
- (void)setPlayerController:(id)arg0;
- (id)nameLabel;
- (id /* block */)actionBlock;
- (void)setVideoView:(id)arg0;
- (void)setMaskView:(id)arg0;
- (id)videoView;
- (void)setNameLabel:(id)arg0;
- (id)actionButton;
- (void)setActionButton:(id)arg0;
- (void)setActionBlock:(id /* block */)arg0;
- (id)detailLabel;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)setDetailLabel:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
