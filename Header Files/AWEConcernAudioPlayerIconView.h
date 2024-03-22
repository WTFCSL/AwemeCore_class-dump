//
//     Generated by private class-dump
//

@class UIImageView;

@interface AWEConcernAudioPlayerIconView : UIView {
    BOOL _hasAvatar;
    BOOL _isPlaying;
    UIImageView *_iconView;
    UIImageView *_backgroundView;
}

@property (nonatomic) BOOL hasAvatar;
@property (nonatomic) BOOL isPlaying;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *backgroundView;

- (void)updateAvatarWithURLs:(id)arg0;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg0;
- (void)setBackgroundView:(id)arg0;
- (id)iconColor;
- (void)setupUI;
- (void)setHasAvatar:(BOOL)arg0;
- (BOOL)hasAvatar;

@end
