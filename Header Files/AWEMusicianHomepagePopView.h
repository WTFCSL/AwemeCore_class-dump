//
//     Generated by private class-dump
//

@class UIButton, CAGradientLayer, UIImageView, NSString, UILabel, UIView, UITableView;

@interface AWEMusicianHomepagePopView : AWELunaUgPopView <UITableViewDelegate, UITableViewDataSource> {
    UILabel *_musicianNameLabel;
    UILabel *_musicianDescriptionLabel;
    UIImageView *_avatarImageView;
    UITableView *_songsTableView;
    UIView *_blockerView;
    UIButton *_blockerArrowView;
    CAGradientLayer *_blockerGradientLayer;
    UILabel *_blockerLabel;
    UIImageView *_songsEmptyImageView;
}

@property (retain, nonatomic) UILabel *musicianNameLabel;
@property (retain, nonatomic) UILabel *musicianDescriptionLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UITableView *songsTableView;
@property (retain, nonatomic) UIView *blockerView;
@property (retain, nonatomic) UIButton *blockerArrowView;
@property (retain, nonatomic) CAGradientLayer *blockerGradientLayer;
@property (retain, nonatomic) UILabel *blockerLabel;
@property (retain, nonatomic) UIImageView *songsEmptyImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showInView:(id)arg0 duration:(double)arg1;
- (void)p_didClickCover;
- (id)musicianNameLabel;
- (id)musicianDescriptionLabel;
- (id)songsTableView;
- (id)blockerView;
- (id)songsEmptyImageView;
- (id)blockerArrowView;
- (double)p_getSongsTableViewHeight;
- (id)blockerLabel;
- (id)p_settingsConfig;
- (void)p_didClickListSongInfo;
- (void)p_didClickNameLabel;
- (void)p_didClickDescription;
- (id)blockerGradientLayer;
- (void)p_gotoLunaByClickArrow;
- (void)setBlockerArrowView:(id)arg0;
- (void)p_updateBlockerLabel;
- (void)setMusicianNameLabel:(id)arg0;
- (void)setMusicianDescriptionLabel:(id)arg0;
- (void)setSongsTableView:(id)arg0;
- (void)setBlockerView:(id)arg0;
- (void)setBlockerGradientLayer:(id)arg0;
- (void)setBlockerLabel:(id)arg0;
- (void)setSongsEmptyImageView:(id)arg0;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)show;
- (void)updateWithConfig:(id)arg0;
- (id)initWithConfig:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)layoutSubviews;
- (void)showInView:(id)arg0;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (void)setUpUI;
- (unsigned long long)p_cellCount;

@end