//
//     Generated by private class-dump
//

@class UIImageView, NSString, AWEAwemeModel;
@protocol AWELiveStreamPlayer, AWELivePreviewStreamViewDelegate;

@interface AWELivePreviewStreamCardView : UIView <IESLivePlayerControllerDelegate, AWELivePreviewStreamViewProtocol> {
    id<AWELiveStreamPlayer> _playerControllerForPreview;
    AWEAwemeModel *_awemeModel;
    id<AWELivePreviewStreamViewDelegate> _delegate;
    UIImageView *_coverImageView;
}

@property (retain, nonatomic) id<AWELiveStreamPlayer> playerControllerForPreview;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) id<AWELivePreviewStreamViewDelegate> delegate;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (id)currentRoomID;
- (void)setAwemeModel:(id)arg0;
- (void)player:(id)arg0 loadStateDidChange:(unsigned long long)arg1;
- (void)player:(id)arg0 mediaSizeDidChange:(struct CGSize { double x0; double x1; })arg1;
- (void)startPlay;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)stopPlay;
- (void)updateWithAwemeModel:(id)arg0 withImmediatePlay:(BOOL)arg1;
- (void)removeFromAttachedView;
- (void)setupPlayerDelegate:(id)arg0;
- (id)initWithTrackConfig:(id)arg0;
- (void)playerReloadStreamWithAwemeModel:(id)arg0;
- (void)initializePlayer:(id)arg0;
- (void)setPlayerControllerForPreview:(id)arg0;
- (id)playerControllerForPreview;
- (void)setupCoverBlurImageView;
- (void)setupAttachedView:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setMute:(BOOL)arg0;

@end
