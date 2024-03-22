//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;
@protocol AWEVideoPublishMusicSelectViewUserCollectedMusicDelegate;

@interface AWEAIVideoClipFavoriteMusicSelectView : AWEAIVideoClipMusicSelectView <UIScrollViewDelegate> {
    BOOL _isFetchingMore;
    BOOL _isLoading;
    id<AWEVideoPublishMusicSelectViewUserCollectedMusicDelegate> _delegate;
}

@property (retain, nonatomic) NSMutableArray *musicList;
@property (nonatomic) BOOL isFetchingMore;
@property (nonatomic) BOOL isLoading;
@property (weak, nonatomic) id<AWEVideoPublishMusicSelectViewUserCollectedMusicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateMusicList:(id)arg0;
- (void)updateCollectionViewState;
- (void)setIsFetchingMore:(BOOL)arg0;
- (id)newCollectionView;
- (BOOL)isFetchingMore;
- (void)updateLoading:(BOOL)arg0;
- (BOOL)isLoading;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setIsLoading:(BOOL)arg0;
- (void)updateContentInset;

@end
