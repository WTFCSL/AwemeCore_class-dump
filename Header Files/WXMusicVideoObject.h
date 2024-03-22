//
//     Generated by private class-dump
//

@class NSString, NSData, WXMusicVipInfo;

@interface WXMusicVideoObject : NSObject {
    unsigned int _duration;
    NSString *_musicUrl;
    NSString *_musicDataUrl;
    NSString *_singerName;
    NSString *_songLyric;
    NSData *_hdAlbumThumbData;
    NSString *_albumName;
    NSString *_musicGenre;
    unsigned long long _issueDate;
    NSString *_identification;
    NSString *_musicOperationUrl;
    WXMusicVipInfo *_musicVipInfo;
}

@property (copy, nonatomic) NSString *musicUrl;
@property (copy, nonatomic) NSString *musicDataUrl;
@property (copy, nonatomic) NSString *singerName;
@property (nonatomic) unsigned int duration;
@property (copy, nonatomic) NSString *songLyric;
@property (retain, nonatomic) NSData *hdAlbumThumbData;
@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSString *musicGenre;
@property (nonatomic) unsigned long long issueDate;
@property (copy, nonatomic) NSString *identification;
@property (copy, nonatomic) NSString *musicOperationUrl;
@property (retain, nonatomic) WXMusicVipInfo *musicVipInfo;

+ (id)object;

- (id)musicUrl;
- (void)setMusicUrl:(id)arg0;
- (id)musicDataUrl;
- (void)setMusicDataUrl:(id)arg0;
- (id)songLyric;
- (void)setSongLyric:(id)arg0;
- (id)singerName;
- (void)setSingerName:(id)arg0;
- (id)hdAlbumThumbData;
- (void)setHdAlbumThumbData:(id)arg0;
- (id)musicGenre;
- (void)setMusicGenre:(id)arg0;
- (id)identification;
- (void)setIdentification:(id)arg0;
- (id)musicOperationUrl;
- (void)setMusicOperationUrl:(id)arg0;
- (id)musicVipInfo;
- (void)setMusicVipInfo:(id)arg0;
- (void).cxx_destruct;
- (unsigned int)duration;
- (id)albumName;
- (void)setDuration:(unsigned int)arg0;
- (void)setAlbumName:(id)arg0;
- (unsigned long long)issueDate;
- (void)setIssueDate:(unsigned long long)arg0;

@end