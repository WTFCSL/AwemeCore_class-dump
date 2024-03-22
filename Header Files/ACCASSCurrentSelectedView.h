//
//     Generated by private class-dump
//

@class AVPlayer, UIImageView, UILabel, UIView, UIButton;
@protocol ACCMusicModelProtocol;

@interface ACCASSCurrentSelectedView : UIView {
    BOOL _pausedByBackground;
    id /* block */ _enableClipBlock;
    id /* block */ _didClickClipButton;
    id /* block */ _didClickDeleteButton;
    id /* block */ _didStartPlayMusic;
    UIImageView *_coverImageView;
    UIButton *_playButton;
    UILabel *_titleLabel;
    UIButton *_clipButton;
    UIView *_sepLineView;
    UIButton *_deleteButton;
    id<ACCMusicModelProtocol> _selectedMusic;
    AVPlayer *_internalPlayer;
    struct _HTSAudioRange { double location; double length; } _audioRange;
}

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *clipButton;
@property (retain, nonatomic) UIView *sepLineView;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) id<ACCMusicModelProtocol> selectedMusic;
@property (retain, nonatomic) AVPlayer *internalPlayer;
@property (nonatomic) BOOL pausedByBackground;
@property (copy, nonatomic) id /* block */ enableClipBlock;
@property (copy, nonatomic) id /* block */ didClickClipButton;
@property (copy, nonatomic) id /* block */ didClickDeleteButton;
@property (copy, nonatomic) id /* block */ didStartPlayMusic;
@property (nonatomic) struct _HTSAudioRange { double location; double length; } audioRange;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)p_setupUI;
- (id)initWithMusic:(id)arg0;
- (struct _HTSAudioRange { double x0; double x1; })audioRange;
- (void)setAudioRange:(struct _HTSAudioRange { double x0; double x1; })arg0;
- (void)setSelectedMusic:(id)arg0;
- (void)setEnableClipBlock:(id /* block */)arg0;
- (id)selectedMusic;
- (id /* block */)enableClipBlock;
- (id)internalPlayer;
- (id)clipButton;
- (id)sepLineView;
- (void)p_replayFromRangeLocation;
- (id /* block */)didStartPlayMusic;
- (id /* block */)didClickClipButton;
- (id /* block */)didClickDeleteButton;
- (void)p_didClickPlayButton:(id)arg0;
- (void)p_didClickClipButton:(id)arg0;
- (void)p_didClickDeleteButton:(id)arg0;
- (void)setPausedByBackground:(BOOL)arg0;
- (BOOL)pausedByBackground;
- (void)updateCancelButtonToDistouchableColor;
- (void)hideClipActionBtn;
- (void)setDidClickClipButton:(id /* block */)arg0;
- (void)setDidClickDeleteButton:(id /* block */)arg0;
- (void)setDidStartPlayMusic:(id /* block */)arg0;
- (void)setClipButton:(id)arg0;
- (void)setSepLineView:(id)arg0;
- (void)setInternalPlayer:(id)arg0;
- (void)applicationWillResignActive:(id)arg0;
- (void)setDeleteButton:(id)arg0;
- (void).cxx_destruct;
- (void)stop;
- (id)titleLabel;
- (id)deleteButton;
- (void)applicationDidBecomeActive:(id)arg0;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (id)playButton;
- (void)setPlayButton:(id)arg0;

@end
