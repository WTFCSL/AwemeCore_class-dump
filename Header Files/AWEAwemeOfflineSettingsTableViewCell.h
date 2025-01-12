//
//     Generated by private class-dump
//

@class AWEAwemeOfflineSettingsModel, UILabel, DUXRadioBox, UIButton;
@protocol AWEAwemeOfflineTableViewCellDelegate;

@interface AWEAwemeOfflineSettingsTableViewCell : UITableViewCell {
    BOOL _checked;
    BOOL _radioSelected;
    id<AWEAwemeOfflineTableViewCellDelegate> _delegate;
    UIButton *_downloadedSignal;
    UIButton *_downloadButton;
    UILabel *_videoCountLabel;
    UILabel *_spaceCountLabel;
    UILabel *_playTimeCountLabel;
    DUXRadioBox *_downloadRadioBox;
    AWEAwemeOfflineSettingsModel *_model;
}

@property (retain, nonatomic) UIButton *downloadedSignal;
@property (retain, nonatomic) UIButton *downloadButton;
@property (retain, nonatomic) UILabel *videoCountLabel;
@property (retain, nonatomic) UILabel *spaceCountLabel;
@property (retain, nonatomic) UILabel *playTimeCountLabel;
@property (retain, nonatomic) DUXRadioBox *downloadRadioBox;
@property (retain, nonatomic) AWEAwemeOfflineSettingsModel *model;
@property (nonatomic) BOOL checked;
@property (nonatomic) BOOL radioSelected;
@property (weak, nonatomic) id<AWEAwemeOfflineTableViewCellDelegate> delegate;

- (void)setRadioSelected:(BOOL)arg0;
- (id)videoCountLabel;
- (id)spaceCountLabel;
- (id)playTimeCountLabel;
- (id)downloadedSignal;
- (id)downloadRadioBox;
- (void)onDownloadButtonClick;
- (BOOL)radioSelected;
- (void)configWithModel:(id)arg0 Index:(long long)arg1;
- (void)setDownloadedSignal:(id)arg0;
- (void)setVideoCountLabel:(id)arg0;
- (void)setSpaceCountLabel:(id)arg0;
- (void)setPlayTimeCountLabel:(id)arg0;
- (void)setDownloadRadioBox:(id)arg0;
- (void)setModel:(id)arg0;
- (BOOL)checked;
- (void).cxx_destruct;
- (id)model;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setChecked:(BOOL)arg0;
- (void)setupUI;
- (void)updateUI;
- (id)downloadButton;
- (void)setDownloadButton:(id)arg0;

@end
