//
//     Generated by private class-dump
//

@class NSString, LunaMedia;

@interface AWEMusicDspMusicItemModel : NSObject {
    NSString *_musicId;
    NSString *_itemId;
    NSString *_songId;
    LunaMedia *_lunaMedia;
}

@property (retain, nonatomic) NSString *musicId;
@property (retain, nonatomic) NSString *itemId;
@property (retain, nonatomic) NSString *songId;
@property (retain, nonatomic) LunaMedia *lunaMedia;

- (void)setMusicId:(id)arg0;
- (id)musicId;
- (id)songId;
- (id)lunaMedia;
- (void)setLunaMedia:(id)arg0;
- (void)setSongId:(id)arg0;
- (id)initWithMusicId:(id)arg0 videoId:(id)arg1;
- (id)initWithMusicId:(id)arg0 videoId:(id)arg1 songId:(id)arg2;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)itemId;
- (void)setItemId:(id)arg0;

@end
