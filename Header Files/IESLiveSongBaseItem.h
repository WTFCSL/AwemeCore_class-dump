//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveSongBaseItem : IESLiveListViewItem {
    BOOL _faviorteHidden;
    BOOL _multiChorusEnable;
    BOOL _shouldShowMVButton;
    NSString *_wantListenText;
    NSString *_addSongText;
    long long _index;
}

@property (copy, nonatomic) NSString *wantListenText;
@property (nonatomic) BOOL faviorteHidden;
@property (copy, nonatomic) NSString *addSongText;
@property (nonatomic) long long index;
@property (nonatomic) BOOL multiChorusEnable;
@property (nonatomic) BOOL shouldShowMVButton;

- (BOOL)multiChorusEnable;
- (void)setFaviorteHidden:(BOOL)arg0;
- (void)setWantListenText:(id)arg0;
- (Class)classForItem;
- (id)wantListenText;
- (void)setMultiChorusEnable:(BOOL)arg0;
- (void)setShouldShowMVButton:(BOOL)arg0;
- (BOOL)faviorteHidden;
- (BOOL)shouldShowMVButton;
- (id)addSongText;
- (void)setAddSongText:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (long long)index;

@end