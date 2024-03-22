//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIView, UIButton;
@protocol IESLiveWebPPlayer;

@interface IESLiveMultiKTVWillSingCell : IESLiveSongBaseCell {
    BOOL _musicPlaying;
    BOOL _isCloseButtonReplaceToCut;
    UILabel *_orderLabel;
    UIImageView<IESLiveWebPPlayer> *_currentSongView;
    UIButton *_goTopButton;
    UIButton *_playAndPauseButton;
    UIButton *_closeButton;
    UIButton *_mvButton;
    UIView *_songChooserAvatarBackView;
    UIImageView *_songChooserAvatar;
    UILabel *_songChooserNameLabel;
    UIButton *_linkButton;
}

@property (retain, nonatomic) UILabel *orderLabel;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *currentSongView;
@property (retain, nonatomic) UIButton *goTopButton;
@property (retain, nonatomic) UIButton *playAndPauseButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *mvButton;
@property (retain, nonatomic) UIView *songChooserAvatarBackView;
@property (retain, nonatomic) UIImageView *songChooserAvatar;
@property (retain, nonatomic) UILabel *songChooserNameLabel;
@property (retain, nonatomic) UIButton *linkButton;
@property (nonatomic) BOOL musicPlaying;
@property (nonatomic) BOOL isCloseButtonReplaceToCut;
@property (nonatomic) BOOL goTopButtonHidden;
@property (nonatomic) BOOL closeButtonHidden;
@property (nonatomic) BOOL linkButtonHidden;
@property (copy, nonatomic) NSString *orderLabelText;
@property (nonatomic) BOOL playAndPauseHidden;

- (id)mvButton;
- (void)setMvButton:(id)arg0;
- (void)setCloseButtonHidden:(BOOL)arg0;
- (void)setMusicPlaying:(BOOL)arg0;
- (BOOL)musicPlaying;
- (id)orderLabel;
- (void)setOrderLabel:(id)arg0;
- (id)goTopButton;
- (void)setGoTopButton:(id)arg0;
- (void)p_setupUIs;
- (BOOL)isCloseButtonReplaceToCut;
- (void)renderWithItem:(id)arg0 withIndex:(long long)arg1;
- (void)setLinkButtonHidden:(BOOL)arg0;
- (BOOL)linkButtonHidden;
- (void)setGoTopButtonHidden:(BOOL)arg0;
- (void)setIsCloseButtonReplaceToCut:(BOOL)arg0;
- (void)setOrderLabelText:(id)arg0;
- (void)setPlayAndPauseHidden:(BOOL)arg0;
- (BOOL)closeButtonHidden;
- (void)updateMultiChorusButtonHidden:(BOOL)arg0 orderedByCurrentLoginUser:(BOOL)arg1 isKTVController:(BOOL)arg2;
- (id)songChooserAvatarBackView;
- (id)songChooserAvatar;
- (id)songChooserNameLabel;
- (void)setSongChooserNameLabel:(id)arg0;
- (void)setSongChooserAvatar:(id)arg0;
- (void)setSongChooserAvatarBackView:(id)arg0;
- (id)currentSongView;
- (id)playAndPauseButton;
- (void)setCurrentSongView:(id)arg0;
- (void)setPlayAndPauseButton:(id)arg0;
- (void)didClickMVButton;
- (BOOL)goTopButtonHidden;
- (BOOL)playAndPauseHidden;
- (id)orderLabelText;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)linkButton;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)setLinkButton:(id)arg0;

@end
