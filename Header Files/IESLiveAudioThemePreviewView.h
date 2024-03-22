//
//     Generated by private class-dump
//

@class BDImageView, AVPlayerItem, AVPlayerLayer, AVPlayer;
@protocol IESLivePhotoPickerAsset;

@interface IESLiveAudioThemePreviewView : UIView {
    id<IESLivePhotoPickerAsset> _asset;
    BDImageView *_imageView;
    AVPlayer *_avPlayer;
    AVPlayerLayer *_playLayer;
    AVPlayerItem *_playerItem;
}

@property (retain, nonatomic) id<IESLivePhotoPickerAsset> asset;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) AVPlayer *avPlayer;
@property (retain, nonatomic) AVPlayerLayer *playLayer;
@property (retain, nonatomic) AVPlayerItem *playerItem;

- (void)handleDidBecomeActiveNotification:(id)arg0;
- (void)setPlayLayer:(id)arg0;
- (id)playLayer;
- (void)moviePlayDidEnd;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 asset:(id)arg1;
- (void).cxx_destruct;
- (id)imageView;
- (void)setup;
- (void)setImageView:(id)arg0;
- (id)asset;
- (void)layoutSubviews;
- (void)setAsset:(id)arg0;
- (void)dealloc;
- (id)playerItem;
- (id)avPlayer;
- (void)setAvPlayer:(id)arg0;
- (void)setPlayerItem:(id)arg0;

@end