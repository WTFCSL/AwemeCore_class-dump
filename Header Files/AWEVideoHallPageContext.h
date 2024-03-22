//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, UICollectionView, UIViewController;

@interface AWEVideoHallPageContext : AWELVideoBasePageContext <AWEVideoHallFeedContextProtocol> {
    BOOL _isMute;
    BOOL _canShowThemeView;
    BOOL _canShowSearchBar;
    NSString *_channelId;
    NSString *_pageId;
    NSString *_entityId;
    long long _themeStyle;
    UICollectionView *_collectionView;
    long long _firstBlockStyle;
    NSMutableDictionary *_seekDictionary;
}

@property (retain, nonatomic) NSMutableDictionary *seekDictionary;
@property (copy, nonatomic) NSString *entityId;
@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSString *pageId;
@property (readonly, nonatomic) long long pageType;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL canShowThemeView;
@property (nonatomic) BOOL canShowSearchBar;
@property (nonatomic) long long themeStyle;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long firstBlockStyle;
@property (weak, nonatomic) UIViewController *container;
@property (nonatomic) BOOL isOnFeedSharePanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setThemeStyle:(long long)arg0;
- (void)setIsMute:(BOOL)arg0;
- (double)playbackTimeForKey:(id)arg0;
- (void)setPlaybackTime:(double)arg0 key:(id)arg1;
- (BOOL)canShowThemeView;
- (id)seekDictionary;
- (void)setCanShowThemeView:(BOOL)arg0;
- (void)setSeekDictionary:(id)arg0;
- (long long)firstBlockStyle;
- (BOOL)canShowSearchBar;
- (void)setCanShowSearchBar:(BOOL)arg0;
- (void)setFirstBlockStyle:(long long)arg0;
- (long long)pageType;
- (id)init;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setPageId:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (id)pageId;
- (void)reset;
- (void)setEntityId:(id)arg0;
- (id)entityId;
- (long long)themeStyle;
- (id)channelId;
- (void)setChannelId:(id)arg0;
- (BOOL)isMute;

@end
