//
//     Generated by private class-dump
//

@class UIStackView, NSString, UIImageView, AWEMusicSongSelectTableViewCellModel, UILabel, UIView, UIButton;
@protocol MusicService, AWEMusicSongSelectTableViewCellDelegate;

@interface AWEMusicSongSelectTableViewCell : UITableViewCell <AWEMusicServiceDelegate> {
    id<AWEMusicSongSelectTableViewCellDelegate> _delegate;
    AWEMusicSongSelectTableViewCellModel *_curModel;
    long long _index;
    unsigned long long _selectedStyle;
    UIImageView *_coverImageView;
    UILabel *_nameLabel;
    UILabel *_authorLabel;
    UIButton *_selectBtn;
    UIButton *_checkBtn;
    UIButton *_playBtn;
    UIStackView *_tagStackView;
    UIView *_previewTagView;
    UILabel *_durationLabel;
    id<MusicService> _musicService;
}

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) UIButton *selectBtn;
@property (retain, nonatomic) UIButton *checkBtn;
@property (retain, nonatomic) UIButton *playBtn;
@property (retain, nonatomic) UIStackView *tagStackView;
@property (retain, nonatomic) UIView *previewTagView;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) AWEMusicSongSelectTableViewCellModel *curModel;
@property (retain, nonatomic) id<MusicService> musicService;
@property (weak, nonatomic) id<AWEMusicSongSelectTableViewCellDelegate> delegate;
@property (nonatomic) long long index;
@property (nonatomic) unsigned long long selectedStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)musicService:(id)arg0 playStatusChanged:(long long)arg1;
- (void)setAuthorLabel:(id)arg0;
- (id)authorLabel;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)setTagStackView:(id)arg0;
- (id)tagStackView;
- (void)configSubviews;
- (void)playOrPause:(BOOL)arg0;
- (id)playBtn;
- (void)setPlayBtn:(id)arg0;
- (id)selectBtn;
- (void)setSelectBtn:(id)arg0;
- (void)removeBtnClicked;
- (id)musicService;
- (void)setMusicService:(id)arg0;
- (void)setSelectedStyle:(unsigned long long)arg0;
- (void)displayWithCellModel:(id)arg0 musicService:(id)arg1;
- (id)previewTagView;
- (id)p_makeTagViewWithTitle:(id)arg0;
- (void)setPreviewTagView:(id)arg0;
- (void)reloadCollectionStatus;
- (id)checkBtn;
- (void)p_updateAccessibility:(BOOL)arg0;
- (unsigned long long)selectedStyle;
- (BOOL)p_isCellDisable;
- (void)selectBtnDoClicked:(id)arg0;
- (void)setCheckBtn:(id)arg0;
- (void)setCurModel:(id)arg0;
- (void)setIndex:(long long)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (long long)index;
- (id)nameLabel;
- (id)initWithCoder:(id)arg0;
- (id)curModel;
- (void)setDelegate:(id)arg0;
- (void)setNameLabel:(id)arg0;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg0;

@end