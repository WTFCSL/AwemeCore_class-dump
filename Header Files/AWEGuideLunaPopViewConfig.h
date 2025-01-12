//
//     Generated by private class-dump
//

@class NSString, NSArray, NSURL, AWEGuideLunaSongInfoModel, NSDictionary;

@interface AWEGuideLunaPopViewConfig : NSObject {
    BOOL _showSkipEntry;
    BOOL _defaultSelected;
    BOOL _canShowEnterMiniElement;
    BOOL _directJump;
    BOOL _isDegrade;
    BOOL _popsongShowConfirmAlert;
    BOOL _coverShowConfirmAlert;
    BOOL _uiElementCanResponseDiversion;
    BOOL _showUserRelationInfo;
    BOOL _showBackgroundColorGradient;
    unsigned long long _style;
    NSString *_mainTitle;
    NSString *_subTitle;
    NSString *_mainButtonTitle;
    NSString *_subButtonTitle;
    NSString *_songTitle;
    NSString *_songAuthor;
    NSString *_songCoverUrlString;
    NSString *_likeCounts;
    NSString *_commentCounts;
    NSString *_shareCounts;
    NSArray *_lrcArray;
    NSArray *_songs;
    NSString *_selectDescription;
    NSString *_sceneName;
    NSString *_lunaSongID;
    AWEGuideLunaSongInfoModel *_infoModel;
    NSString *_confirmAlertDescription;
    NSString *_confirmAlertTitle;
    NSString *_diversionTextInCover;
    NSURL *_bigBrandImageUrl;
    long long _collectedLunaSongCount;
    NSDictionary *_trackParams;
    NSString *_popViewTitle;
    NSString *_songsDescription;
    NSString *_collSongsDescription;
    unsigned long long _songsFromType;
    unsigned long long _songsStrategy;
    NSDictionary *_backgroundColorGradientInfo;
    double _popViewCornerRadius;
    NSString *_avatar;
    NSString *_artistName;
    NSString *_artistDescription;
    unsigned long long _musicianSongsAmount;
    NSArray *_musicianSongs;
    unsigned long long _buttonStyle;
    unsigned long long _miniLunaEntranceStyle;
}

@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *mainButtonTitle;
@property (copy, nonatomic) NSString *subButtonTitle;
@property (copy, nonatomic) NSString *songTitle;
@property (copy, nonatomic) NSString *songAuthor;
@property (copy, nonatomic) NSString *songCoverUrlString;
@property (copy, nonatomic) NSString *likeCounts;
@property (copy, nonatomic) NSString *commentCounts;
@property (copy, nonatomic) NSString *shareCounts;
@property (copy, nonatomic) NSArray *lrcArray;
@property (copy, nonatomic) NSArray *songs;
@property (copy, nonatomic) NSString *selectDescription;
@property (nonatomic) BOOL showSkipEntry;
@property (nonatomic) BOOL defaultSelected;
@property (nonatomic) BOOL canShowEnterMiniElement;
@property (nonatomic) BOOL directJump;
@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *lunaSongID;
@property (retain, nonatomic) AWEGuideLunaSongInfoModel *infoModel;
@property (copy, nonatomic) NSString *confirmAlertDescription;
@property (copy, nonatomic) NSString *confirmAlertTitle;
@property (copy, nonatomic) NSString *diversionTextInCover;
@property (retain, nonatomic) NSURL *bigBrandImageUrl;
@property (nonatomic) long long collectedLunaSongCount;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSString *popViewTitle;
@property (nonatomic) BOOL isDegrade;
@property (copy, nonatomic) NSString *songsDescription;
@property (copy, nonatomic) NSString *collSongsDescription;
@property (nonatomic) unsigned long long songsFromType;
@property (nonatomic) unsigned long long songsStrategy;
@property (nonatomic) BOOL popsongShowConfirmAlert;
@property (nonatomic) BOOL coverShowConfirmAlert;
@property (copy, nonatomic) NSDictionary *backgroundColorGradientInfo;
@property (nonatomic) BOOL uiElementCanResponseDiversion;
@property (nonatomic) BOOL showUserRelationInfo;
@property (nonatomic) BOOL showBackgroundColorGradient;
@property (nonatomic) double popViewCornerRadius;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *artistDescription;
@property (nonatomic) unsigned long long musicianSongsAmount;
@property (retain, nonatomic) NSArray *musicianSongs;
@property (nonatomic) unsigned long long buttonStyle;
@property (nonatomic) unsigned long long miniLunaEntranceStyle;

- (id)trackParams;
- (id)infoModel;
- (void)setCollectedLunaSongCount:(long long)arg0;
- (id)lunaSongID;
- (void)setTrackParams:(id)arg0;
- (void)setInfoModel:(id)arg0;
- (id)mainButtonTitle;
- (void)setMainButtonTitle:(id)arg0;
- (id)subButtonTitle;
- (void)setSubButtonTitle:(id)arg0;
- (id)songAuthor;
- (void)setSongAuthor:(id)arg0;
- (id)songCoverUrlString;
- (void)setSongCoverUrlString:(id)arg0;
- (id)likeCounts;
- (void)setLikeCounts:(id)arg0;
- (id)commentCounts;
- (void)setCommentCounts:(id)arg0;
- (void)setShareCounts:(id)arg0;
- (id)lrcArray;
- (void)setLrcArray:(id)arg0;
- (id)selectDescription;
- (void)setSelectDescription:(id)arg0;
- (BOOL)showSkipEntry;
- (void)setShowSkipEntry:(BOOL)arg0;
- (BOOL)canShowEnterMiniElement;
- (void)setCanShowEnterMiniElement:(BOOL)arg0;
- (BOOL)directJump;
- (void)setDirectJump:(BOOL)arg0;
- (void)setLunaSongID:(id)arg0;
- (id)confirmAlertDescription;
- (void)setConfirmAlertDescription:(id)arg0;
- (id)confirmAlertTitle;
- (void)setConfirmAlertTitle:(id)arg0;
- (id)diversionTextInCover;
- (void)setDiversionTextInCover:(id)arg0;
- (id)bigBrandImageUrl;
- (void)setBigBrandImageUrl:(id)arg0;
- (long long)collectedLunaSongCount;
- (id)popViewTitle;
- (void)setPopViewTitle:(id)arg0;
- (BOOL)isDegrade;
- (void)setIsDegrade:(BOOL)arg0;
- (id)songsDescription;
- (void)setSongsDescription:(id)arg0;
- (id)collSongsDescription;
- (void)setCollSongsDescription:(id)arg0;
- (unsigned long long)songsFromType;
- (void)setSongsFromType:(unsigned long long)arg0;
- (unsigned long long)songsStrategy;
- (void)setSongsStrategy:(unsigned long long)arg0;
- (BOOL)popsongShowConfirmAlert;
- (void)setPopsongShowConfirmAlert:(BOOL)arg0;
- (BOOL)coverShowConfirmAlert;
- (void)setCoverShowConfirmAlert:(BOOL)arg0;
- (id)backgroundColorGradientInfo;
- (void)setBackgroundColorGradientInfo:(id)arg0;
- (BOOL)uiElementCanResponseDiversion;
- (void)setUiElementCanResponseDiversion:(BOOL)arg0;
- (BOOL)showUserRelationInfo;
- (void)setShowUserRelationInfo:(BOOL)arg0;
- (BOOL)showBackgroundColorGradient;
- (void)setShowBackgroundColorGradient:(BOOL)arg0;
- (double)popViewCornerRadius;
- (void)setPopViewCornerRadius:(double)arg0;
- (id)artistDescription;
- (void)setArtistDescription:(id)arg0;
- (unsigned long long)musicianSongsAmount;
- (void)setMusicianSongsAmount:(unsigned long long)arg0;
- (id)musicianSongs;
- (void)setMusicianSongs:(id)arg0;
- (unsigned long long)miniLunaEntranceStyle;
- (void)setMiniLunaEntranceStyle:(unsigned long long)arg0;
- (unsigned long long)style;
- (id)artistName;
- (unsigned long long)buttonStyle;
- (void).cxx_destruct;
- (void)setArtistName:(id)arg0;
- (void)setSubTitle:(id)arg0;
- (id)sceneName;
- (id)subTitle;
- (void)setStyle:(unsigned long long)arg0;
- (void)setButtonStyle:(unsigned long long)arg0;
- (id)avatar;
- (void)setAvatar:(id)arg0;
- (id)songTitle;
- (void)setSongTitle:(id)arg0;
- (id)mainTitle;
- (void)setMainTitle:(id)arg0;
- (void)setSceneName:(id)arg0;
- (id)songs;
- (void)setSongs:(id)arg0;
- (id)shareCounts;
- (BOOL)defaultSelected;
- (void)setDefaultSelected:(BOOL)arg0;

@end
