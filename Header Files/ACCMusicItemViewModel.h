//
//     Generated by private class-dump
//

@class NSString, NSArray;
@protocol ACCMusicModelProtocol;

@interface ACCMusicItemViewModel : NSObject {
    BOOL _selected;
    BOOL _loading;
    BOOL _clipAvailable;
    BOOL _favorite;
    BOOL _favoriteEnabled;
    BOOL _longPressEnabled;
    id<ACCMusicModelProtocol> _musicModel;
    NSString *_title;
    NSString *_recommendTag;
    NSString *_authorName;
    NSString *_durationText;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *recommendTag;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *durationText;
@property (retain, nonatomic) id<ACCMusicModelProtocol> musicModel;
@property (nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly, copy, nonatomic) NSArray *coverURLs;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic, getter=isClipAvailable) BOOL clipAvailable;
@property (nonatomic, getter=isFavoriteEnabled) BOOL favoriteEnabled;
@property (nonatomic) BOOL longPressEnabled;

- (id)musicModel;
- (void)setMusicModel:(id)arg0;
- (id)coverURLs;
- (id)initWithMusicModel:(id)arg0;
- (id)recommendTag;
- (void)setRecommendTag:(id)arg0;
- (id)durationText;
- (BOOL)isClipAvailable;
- (BOOL)isFavoriteEnabled;
- (void)setDurationText:(id)arg0;
- (void)setClipAvailable:(BOOL)arg0;
- (void)setFavoriteEnabled:(BOOL)arg0;
- (BOOL)isLoading;
- (void)setLoading:(BOOL)arg0;
- (void)setFavorite:(BOOL)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setSelected:(BOOL)arg0;
- (BOOL)isFavorite;
- (BOOL)isSelected;
- (void)setTitle:(id)arg0;
- (id)authorName;
- (BOOL)longPressEnabled;
- (void)setAuthorName:(id)arg0;
- (void)setLongPressEnabled:(BOOL)arg0;

@end
