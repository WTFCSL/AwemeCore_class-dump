//
//     Generated by private class-dump
//

@class LunaRecommendDataSource, NSArray, NSString, _TtC21AWEMusicStreamingImpl15LunaTrackLyrics, NSURL, _TtC21AWEMusicStreamingImpl15LunaTrackChorus, AWEMusicHSVModel, NSObject, AWEMediaModel, AWEMusicFeedETModel, AWEMusicDiversionInfo, _TtC21AWEMusicStreamingImpl9LunaMedia;
@protocol NSCoding;

@interface AWEMusicFeedViewModel : AWEMusicPlayerModel {
    BOOL _shareEnable;
    BOOL _collectEnable;
    BOOL _playlistAvailable;
    BOOL _isFullSong;
    BOOL _canDeleteInQueue;
    BOOL _isLunaTrackReco;
    BOOL _downloadEnable;
    BOOL _showLunaTag;
    BOOL _isBatchSelected;
    BOOL _havePlayRight;
    BOOL _isInPlaylist;
    BOOL _isPlayable;
    BOOL _isFromCache;
    BOOL _isMockedCollect;
    BOOL _luna_addVipObserverFlag;
    BOOL _luna_needReportFeed;
    BOOL _showCommentOnce;
    long long _dataType;
    NSString *_videoId;
    NSString *_videoAuthor;
    NSURL *_coverURL;
    NSArray *_imageSet;
    double _duration;
    long long _mediaType;
    long long _copyright;
    NSString *_songAuthor;
    NSString *_displayTitle;
    NSString *_displayAuthor;
    AWEMusicHSVModel *_coverColorHsv;
    unsigned long long _lyricType;
    NSString *_lyricUrl;
    AWEMediaModel *_netModel;
    AWEMusicFeedETModel *_etModel;
    long long _imageLayoutType;
    double _previewStartTime;
    double _previewEndTime;
    NSString *_recExtra;
    NSString *_sectionTypeName;
    long long _dspStatus;
    NSString *_songIdForLuna;
    AWEMusicDiversionInfo *_lunaDiversionInfo;
    id _weakRelationModel;
    NSString *_insertSongCoverAnchorType;
    NSArray *_commentInsertIDS;
}

@property (nonatomic) BOOL luna_isCollected;
@property (nonatomic) long long luna_collectCount;
@property (nonatomic) long long luna_shareCount;
@property (nonatomic) long long luna_commentCount;
@property (readonly, nonatomic) NSArray *luna_artistsIdArr;
@property (readonly, nonatomic) NSString *luna_totalUserId;
@property (readonly, nonatomic) _TtC21AWEMusicStreamingImpl9LunaMedia *luna_media;
@property (readonly, nonatomic) _TtC21AWEMusicStreamingImpl9LunaMedia *luna_cancelCollectMedia;
@property (readonly, nonatomic) _TtC21AWEMusicStreamingImpl15LunaTrackLyrics *luna_Lyric;
@property (readonly, nonatomic) NSString *luna_user_cacheKey;
@property (readonly, nonatomic) NSObject<NSCoding> *luna_cacheModel;
@property (retain, nonatomic) NSString *luna_fetchDay;
@property (readonly, nonatomic) _TtC21AWEMusicStreamingImpl15LunaTrackChorus *luna_chorus;
@property (readonly, nonatomic) double luna_chorusStartTime;
@property (readonly, nonatomic) BOOL luna_isPlayableForCopyright;
@property (readonly, nonatomic) BOOL luna_isPreview;
@property (readonly, nonatomic) BOOL luna_onlyVipPlayable;
@property (readonly, copy, nonatomic) NSString *luna_groupPaymentLevel;
@property (readonly, copy, nonatomic) NSString *luna_groupPlayableLevel;
@property (readonly, copy, nonatomic) NSString *luna_groupDownloadLevel;
@property (readonly, copy, nonatomic) NSString *luna_lyricType;
@property (readonly, copy, nonatomic) NSString *luna_withTranslation;
@property (weak, nonatomic) LunaRecommendDataSource *luna_recommendDataSource;
@property (nonatomic) double previewStartTime;
@property (nonatomic) double previewEndTime;
@property (nonatomic) long long dataType;
@property (copy, nonatomic) NSString *videoId;
@property (nonatomic) unsigned long long collectionType;
@property (readonly, nonatomic) unsigned long long reverseCollectionType;
@property (copy, nonatomic) NSString *videoAuthor;
@property (retain, nonatomic) NSURL *coverURL;
@property (copy, nonatomic) NSArray *imageSet;
@property (nonatomic) double duration;
@property (nonatomic) long long mediaType;
@property (nonatomic) long long copyright;
@property (retain, nonatomic) NSString *songAuthor;
@property (retain, nonatomic) NSString *displayTitle;
@property (retain, nonatomic) NSString *displayAuthor;
@property (retain, nonatomic) AWEMusicHSVModel *coverColorHsv;
@property (nonatomic) unsigned long long lyricType;
@property (copy, nonatomic) NSString *lyricUrl;
@property (retain, nonatomic) AWEMediaModel *netModel;
@property (retain, nonatomic) AWEMusicFeedETModel *etModel;
@property (readonly, copy, nonatomic) NSString *collectionId;
@property (nonatomic) long long imageLayoutType;
@property (readonly, copy, nonatomic) NSString *itemIdentifier;
@property (copy, nonatomic) NSString *recExtra;
@property (nonatomic) BOOL shareEnable;
@property (nonatomic) BOOL collectEnable;
@property (nonatomic) BOOL playlistAvailable;
@property (nonatomic) BOOL isFullSong;
@property (nonatomic) BOOL canDeleteInQueue;
@property (copy, nonatomic) NSString *sectionTypeName;
@property (readonly, nonatomic) BOOL isRecommend;
@property (nonatomic) BOOL isLunaTrackReco;
@property (nonatomic) BOOL downloadEnable;
@property (nonatomic) long long dspStatus;
@property (nonatomic) BOOL showLunaTag;
@property (retain, nonatomic) NSString *songIdForLuna;
@property (retain, nonatomic) AWEMusicDiversionInfo *lunaDiversionInfo;
@property (nonatomic) BOOL isBatchSelected;
@property (weak, nonatomic) id weakRelationModel;
@property (nonatomic) BOOL havePlayRight;
@property (nonatomic) BOOL isInPlaylist;
@property (nonatomic) BOOL isPlayable;
@property (nonatomic) BOOL isFromCache;
@property (nonatomic) BOOL isMockedCollect;
@property (nonatomic) BOOL luna_addVipObserverFlag;
@property (copy, nonatomic) NSString *insertSongCoverAnchorType;
@property (nonatomic) BOOL luna_needReportFeed;
@property (retain, nonatomic) NSArray *commentInsertIDS;
@property (nonatomic) BOOL showCommentOnce;

+ (id)myMusicMediaModel:(id)arg0 queueName:(id)arg1;

- (long long)imageLayoutType;
- (void)setImageLayoutType:(long long)arg0;
- (id)authenticationInfo;
- (id)getCookieInfoForUrls:(id)arg0;
- (id)getTokenInfo;
- (void)setEtModel:(id)arg0;
- (void)setHavePlayRight:(BOOL)arg0;
- (void)setShareEnable:(BOOL)arg0;
- (void)setCollectEnable:(BOOL)arg0;
- (id)etModel;
- (void)luna_addVipServiceObserver;
- (void)setDisplayAuthor:(id)arg0;
- (unsigned long long)lyricType;
- (void)setLyricType:(unsigned long long)arg0;
- (id)initWithMediaModel:(id)arg0 queueName:(id)arg1;
- (void)updateTrackParams:(id)arg0;
- (BOOL)isRecommend;
- (double)previewStartTime;
- (void)setPreviewStartTime:(double)arg0;
- (BOOL)canAddedToQueue;
- (id)songAuthor;
- (void)setSongAuthor:(id)arg0;
- (id)recExtra;
- (void)setRecExtra:(id)arg0;
- (BOOL)shareEnable;
- (BOOL)collectEnable;
- (BOOL)downloadEnable;
- (void)setDownloadEnable:(BOOL)arg0;
- (BOOL)playlistAvailable;
- (void)setPlaylistAvailable:(BOOL)arg0;
- (BOOL)havePlayRight;
- (id)lyricUrl;
- (void)setLyricUrl:(id)arg0;
- (double)previewEndTime;
- (void)setPreviewEndTime:(double)arg0;
- (id)coverColorHsv;
- (void)setCoverColorHsv:(id)arg0;
- (id)lunaDiversionInfo;
- (void)setLunaDiversionInfo:(id)arg0;
- (id)getCookieStringForUrls:(id)arg0;
- (BOOL)shouldAdaptShowWithVideo:(id)arg0;
- (id)netModel;
- (void)setIsInPlaylist:(BOOL)arg0;
- (id)weakRelationModel;
- (unsigned long long)reverseCollectionType;
- (id)displayAuthor;
- (id)music_convertToSongCellConfig;
- (BOOL)isFullSong;
- (id)luna_media;
- (BOOL)luna_playlistAvailableInPlaylistCategory:(unsigned long long)arg0;
- (long long)luna_commentCount;
- (id)videoAuthor;
- (BOOL)showLunaTag;
- (id)songIdForLuna;
- (BOOL)isMockedCollect;
- (id)luna_chorus;
- (id)luna_etModel;
- (BOOL)luna_onlyVipPlayable;
- (BOOL)luna_addVipObserverFlag;
- (void)setLuna_addVipObserverFlag:(BOOL)arg0;
- (BOOL)luna_isResourceVipStatusNotMatch;
- (void)luna_cleanPlayerInfo;
- (BOOL)luna_isCollected;
- (void)setLuna_isCollected:(BOOL)arg0;
- (id)luna_Lyric;
- (void)setLuna_Lyric:(id)arg0;
- (long long)luna_collectCount;
- (void)setLuna_commentCount:(long long)arg0;
- (void)setLuna_collectCount:(long long)arg0;
- (long long)luna_shareCount;
- (void)setLuna_shareCount:(long long)arg0;
- (id)luna_artistsIdArr;
- (id)luna_totalUserId;
- (id)luna_cancelCollectMedia;
- (id)luna_user_cacheKey;
- (id)luna_cacheModel;
- (id)luna_fetchDay;
- (void)setLuna_fetchDay:(id)arg0;
- (double)luna_chorusStartTime;
- (BOOL)luna_isPlayableForCopyright;
- (BOOL)luna_isPreview;
- (id)luna_groupPaymentLevel;
- (id)luna_groupPlayableLevel;
- (id)luna_groupDownloadLevel;
- (id)luna_lyricType;
- (id)luna_withTranslation;
- (void)luna_updateTrackOrVideo:(id)arg0;
- (void)luna_updateEtModelFromLunaData;
- (void)luna_updateEtModel2LunaData;
- (void)luna_onUserVipStatusChanged:(unsigned long long)arg0;
- (void)setLuna_recommendDataSource:(id)arg0;
- (id)luna_recommendDataSource;
- (void)setCanDeleteInQueue:(BOOL)arg0;
- (void)setSectionTypeName:(id)arg0;
- (void)setShowLunaTag:(BOOL)arg0;
- (void)setVideoAuthor:(id)arg0;
- (void)setIsBatchSelected:(BOOL)arg0;
- (BOOL)isBatchSelected;
- (BOOL)canDeleteInQueue;
- (id)sectionTypeName;
- (void)setIsLunaTrackReco:(BOOL)arg0;
- (BOOL)isLunaTrackReco;
- (BOOL)isInPlaylist;
- (void)setWeakRelationModel:(id)arg0;
- (id)insertSongCoverAnchorType;
- (void)setIsMockedCollect:(BOOL)arg0;
- (BOOL)luna_needReportFeed;
- (BOOL)showCommentOnce;
- (void)setShowCommentOnce:(BOOL)arg0;
- (id)commentInsertIDS;
- (void)setInsertSongCoverAnchorType:(id)arg0;
- (void)setLuna_needReportFeed:(BOOL)arg0;
- (void)setCommentInsertIDS:(id)arg0;
- (void)setNetModel:(id)arg0;
- (void)setIsFullSong:(BOOL)arg0;
- (long long)scaleModeForVideo:(id)arg0;
- (void)setSongIdForLuna:(id)arg0;
- (id)itemIdentifier;
- (BOOL)isPlayable;
- (void)setDataType:(long long)arg0;
- (unsigned long long)collectionType;
- (id)displayTitle;
- (void)setMediaType:(long long)arg0;
- (void)setVideoId:(id)arg0;
- (void)setCollectionType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setIsPlayable:(BOOL)arg0;
- (long long)mediaType;
- (long long)dataType;
- (BOOL)isFromCache;
- (double)duration;
- (id)videoId;
- (void)setIsFromCache:(BOOL)arg0;
- (void)setDuration:(double)arg0;
- (id)collectionId;
- (void)setDisplayTitle:(id)arg0;
- (void)setCopyright:(long long)arg0;
- (long long)copyright;
- (long long)dspStatus;
- (void)setDspStatus:(long long)arg0;
- (id)imageSet;
- (void)setImageSet:(id)arg0;
- (id)coverURL;
- (void)setCoverURL:(id)arg0;

@end
