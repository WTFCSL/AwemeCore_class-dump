//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSDictionary, UICollectionView, UIViewController;

@interface AWETheaterPageContext : AWEPageContext {
    BOOL _isSpringFestivalTask;
    BOOL _isMute;
    BOOL _isPopupNoviceGuide;
    BOOL _canShowThemeView;
    NSString *_enterFrom;
    NSString *_fromPage;
    NSDictionary *_trackCommonParams;
    UIViewController *_container;
    NSString *_channelId;
    NSString *_previewID;
    long long _themeStyle;
    NSString *_moreFeedSectionTitle;
    UICollectionView *_collectionView;
    long long _firstSectionType;
    NSMutableDictionary *_seekDictionary;
    NSString *_entityId;
}

@property (retain, nonatomic) NSMutableDictionary *seekDictionary;
@property (copy, nonatomic) NSString *entityId;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *fromPage;
@property (copy, nonatomic) NSDictionary *trackCommonParams;
@property (weak, nonatomic) UIViewController *container;
@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSString *previewID;
@property (nonatomic) BOOL isSpringFestivalTask;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL isPopupNoviceGuide;
@property (nonatomic) BOOL canShowThemeView;
@property (nonatomic) long long themeStyle;
@property (copy, nonatomic) NSString *moreFeedSectionTitle;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long firstSectionType;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setFromPage:(id)arg0;
- (void)setThemeStyle:(long long)arg0;
- (void)setIsMute:(BOOL)arg0;
- (void)setTrackCommonParams:(id)arg0;
- (id)trackCommonParams;
- (void)setPreviewID:(id)arg0;
- (id)previewID;
- (BOOL)isSpringFestivalTask;
- (void)setIsSpringFestivalTask:(BOOL)arg0;
- (double)playbackTimeForKey:(id)arg0;
- (void)setPlaybackTime:(double)arg0 key:(id)arg1;
- (long long)firstSectionType;
- (BOOL)canShowThemeView;
- (BOOL)isPopupNoviceGuide;
- (id)moreFeedSectionTitle;
- (id)seekDictionary;
- (void)setIsPopupNoviceGuide:(BOOL)arg0;
- (void)setCanShowThemeView:(BOOL)arg0;
- (void)setMoreFeedSectionTitle:(id)arg0;
- (void)setFirstSectionType:(long long)arg0;
- (void)setSeekDictionary:(id)arg0;
- (id)container;
- (id)init;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setContainer:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)reset;
- (void)setEntityId:(id)arg0;
- (id)entityId;
- (long long)themeStyle;
- (id)channelId;
- (void)setChannelId:(id)arg0;
- (BOOL)isMute;
- (id)fromPage;

@end
