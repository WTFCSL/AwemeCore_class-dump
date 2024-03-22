//
//     Generated by private class-dump
//

@class NSArray, AWEGuideLunaPopViewRequestLyricInfo, AWEGuideLunaPopViewRequestSongInfo, AWEGuideLunaPopViewRelationInfo;

@interface AWEGuideLunaSongInfoModel : AWEBaseApiModel {
    NSArray *_songs;
    AWEGuideLunaPopViewRequestSongInfo *_songInfo;
    AWEGuideLunaPopViewRequestLyricInfo *_lyricInfo;
    unsigned long long _songStrategy;
    NSArray *_comments;
    AWEGuideLunaPopViewRelationInfo *_userRelation;
}

@property (retain, nonatomic) NSArray *songs;
@property (retain, nonatomic) AWEGuideLunaPopViewRequestSongInfo *songInfo;
@property (retain, nonatomic) AWEGuideLunaPopViewRequestLyricInfo *lyricInfo;
@property (nonatomic) unsigned long long songStrategy;
@property (retain, nonatomic) NSArray *comments;
@property (retain, nonatomic) AWEGuideLunaPopViewRelationInfo *userRelation;

+ (id)songsJSONTransformer;
+ (id)commentsJSONTransformer;
+ (id)songInfoJSONTransformer;
+ (id)lyricInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setSongStrategy:(unsigned long long)arg0;
- (unsigned long long)songStrategy;
- (id)songInfo;
- (void)setSongInfo:(id)arg0;
- (id)lyricInfo;
- (void)setLyricInfo:(id)arg0;
- (id)userRelation;
- (void)setUserRelation:(id)arg0;
- (void).cxx_destruct;
- (id)comments;
- (void)setComments:(id)arg0;
- (id)songs;
- (void)setSongs:(id)arg0;

@end
