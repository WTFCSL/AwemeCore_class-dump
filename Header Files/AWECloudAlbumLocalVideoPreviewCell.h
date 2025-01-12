//
//     Generated by private class-dump
//

@class NSString, UIImageView, UIImage, UIView;

@interface AWECloudAlbumLocalVideoPreviewCell : AWECloudAlbumPreviewCell <UIScrollViewDelegate> {
    UIView *_playerView;
    UIImageView *_coverImageView;
    UIImage *_coverImage;
    UIImageView *_pauseImageView;
}

@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) UIImageView *pauseImageView;
@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCoverImage:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)pauseImageView;
- (void)setPauseImageView:(id)arg0;
- (void)setupZoomScrollView;
- (void)resetCell;
- (void)configWithModel:(id)arg0 playFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)setPlayerLayer:(id)arg0 withPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)removeCoverImageView;
- (id)viewForZoomingInScrollView:(id)arg0;
- (void).cxx_destruct;
- (BOOL)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)handleDoubleTap:(id)arg0;
- (void)scrollViewDidZoom:(id)arg0;
- (void)prepareForReuse;
- (id)playerView;
- (BOOL)play;
- (void)setPlayerView:(id)arg0;
- (BOOL)pause;
- (id)coverImage;

@end
