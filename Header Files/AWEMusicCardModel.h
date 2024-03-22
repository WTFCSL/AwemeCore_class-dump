//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEMusicCardShareInfo, NSNumber;

@interface AWEMusicCardModel : AWEBaseApiModel {
    NSString *_songId;
    AWEMusicCardShareInfo *_shareInfo;
    NSString *_artistNames;
    NSArray *_lunaColor;
    NSString *_lyricId;
    NSString *_labelText;
    NSString *_sortLabelKey;
    NSNumber *_offset;
    NSNumber *_tiggerDigg;
    NSString *_extra;
    NSString *_fe_data;
}

@property (retain, nonatomic) NSString *songId;
@property (retain, nonatomic) AWEMusicCardShareInfo *shareInfo;
@property (retain, nonatomic) NSString *artistNames;
@property (retain, nonatomic) NSArray *lunaColor;
@property (retain, nonatomic) NSString *lyricId;
@property (retain, nonatomic) NSString *labelText;
@property (retain, nonatomic) NSString *sortLabelKey;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) NSNumber *tiggerDigg;
@property (retain, nonatomic) NSString *extra;
@property (retain, nonatomic) NSString *fe_data;

+ (id)lunaColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (id)tiggerDigg;
- (void)setTiggerDigg:(id)arg0;
- (id)songId;
- (id)artistNames;
- (id)lunaColor;
- (id)lyricId;
- (void)setLyricId:(id)arg0;
- (id)fe_data;
- (void)setSongId:(id)arg0;
- (void)setArtistNames:(id)arg0;
- (void)setLunaColor:(id)arg0;
- (id)sortLabelKey;
- (void)setSortLabelKey:(id)arg0;
- (void)setFe_data:(id)arg0;
- (void)setLabelText:(id)arg0;
- (void).cxx_destruct;
- (void)setOffset:(id)arg0;
- (id)labelText;
- (id)extra;
- (id)shareInfo;
- (id)offset;
- (void)setShareInfo:(id)arg0;

@end