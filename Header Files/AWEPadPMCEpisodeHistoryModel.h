//
//     Generated by private class-dump
//

@class NSString, NSNumber, AWEPadPMCEpisodeCardModel;

@interface AWEPadPMCEpisodeHistoryModel : MTLModel <MTLJSONSerializing> {
    NSString *_showPackRespJson;
    long long _progress;
    NSString *_coverUrl;
    NSNumber *_playTime;
    NSString *_albumID;
    NSString *_schemeURL;
    NSString *_title;
    NSString *_episodeItemID;
    AWEPadPMCEpisodeCardModel *_episodeModel;
}

@property (copy, nonatomic) NSString *showPackRespJson;
@property (nonatomic) long long progress;
@property (copy, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSNumber *playTime;
@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *schemeURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *episodeItemID;
@property (retain, nonatomic) AWEPadPMCEpisodeCardModel *episodeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setCoverUrl:(id)arg0;
- (id)coverUrl;
- (void)setPlayTime:(id)arg0;
- (void)setAlbumID:(id)arg0;
- (id)schemeURL;
- (void)setSchemeURL:(id)arg0;
- (id)showPackRespJson;
- (void)setShowPackRespJson:(id)arg0;
- (void)setEpisodeModel:(id)arg0;
- (id)episodeModel;
- (id)episodeItemID;
- (void)setEpisodeItemID:(id)arg0;
- (void).cxx_destruct;
- (id)playTime;
- (id)title;
- (long long)progress;
- (void)setProgress:(long long)arg0;
- (void)setTitle:(id)arg0;
- (id)albumID;

@end
