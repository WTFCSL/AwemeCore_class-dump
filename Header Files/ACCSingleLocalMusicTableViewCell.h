//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, UIButton;
@protocol ACCMusicModelProtocol;

@interface ACCSingleLocalMusicTableViewCell : UITableViewCell {
    BOOL _disableClipButton;
    id<ACCMusicModelProtocol> _musicModel;
    id /* block */ _confirmAction;
    id /* block */ _clipAction;
    id /* block */ _renameAction;
    id /* block */ _deleteAction;
    UIImageView *_backMusicView;
    UIImageView *_playStateView;
    UILabel *_musicTitle;
    UILabel *_authorNameLabel;
    UILabel *_durationLabel;
    UIView *_featureContainView;
    UIButton *_clipButton;
    UIButton *_confirmButton;
    UIButton *_deleteButton;
    UIButton *_renameButton;
    unsigned long long _playerStatus;
    unsigned long long _featureStatus;
}

@property (retain, nonatomic) UIImageView *backMusicView;
@property (retain, nonatomic) UIImageView *playStateView;
@property (retain, nonatomic) UILabel *musicTitle;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIView *featureContainView;
@property (retain, nonatomic) UIButton *clipButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIButton *renameButton;
@property (nonatomic) unsigned long long playerStatus;
@property (nonatomic) unsigned long long featureStatus;
@property (retain, nonatomic) id<ACCMusicModelProtocol> musicModel;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ clipAction;
@property (copy, nonatomic) id /* block */ renameAction;
@property (copy, nonatomic) id /* block */ deleteAction;
@property (nonatomic) BOOL disableClipButton;

+ (double)sectionHeight;

- (id)musicModel;
- (void)setMusicModel:(id)arg0;
- (void)setAuthorNameLabel:(id)arg0;
- (id)authorNameLabel;
- (id)musicTitle;
- (void)setMusicTitle:(id)arg0;
- (void)configWithPlayerStatus:(unsigned long long)arg0;
- (void)setUI;
- (void)configWithPlayerStatus:(unsigned long long)arg0 animated:(BOOL)arg1;
- (void)confirmButtonClick;
- (void)deleteButtonClick;
- (id)clipButton;
- (void)setClipButton:(id)arg0;
- (void)configWithEditStatus:(BOOL)arg0;
- (void)p_configDurationLabel:(id)arg0;
- (id)renameButton;
- (id)backMusicView;
- (void)remakeMusicInfoArea;
- (void)transformToStatus:(unsigned long long)arg0 animated:(BOOL)arg1;
- (void)p_stopLoadingAnimation;
- (void)p_prepareConfigWithPlayerStatus:(unsigned long long)arg0 animated:(BOOL)arg1;
- (void)p_startloadingStateAnimation;
- (id)playStateView;
- (double)p_maxTitleLength;
- (id)featureContainView;
- (void)p_MusicControlAnimate;
- (BOOL)disableClipButton;
- (id /* block */)renameAction;
- (void)clipButtonClick;
- (void)renameButtonClick;
- (void)bindMusicModel:(id)arg0;
- (void)setDisableClipButton:(BOOL)arg0;
- (void)setRenameAction:(id /* block */)arg0;
- (void)setBackMusicView:(id)arg0;
- (void)setPlayStateView:(id)arg0;
- (void)setFeatureContainView:(id)arg0;
- (void)setRenameButton:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)setDeleteButton:(id)arg0;
- (void).cxx_destruct;
- (id /* block */)deleteAction;
- (id)deleteButton;
- (id /* block */)confirmAction;
- (void)setConfirmAction:(id /* block */)arg0;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (id /* block */)clipAction;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg0;
- (void)setClipAction:(id /* block */)arg0;
- (void)setDeleteAction:(id /* block */)arg0;
- (unsigned long long)playerStatus;
- (void)setPlayerStatus:(unsigned long long)arg0;
- (unsigned long long)featureStatus;
- (void)setFeatureStatus:(unsigned long long)arg0;

@end