//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDDlnaPlayerItem : NSObject {
    BOOL _loopPlay;
    BOOL _bullet;
    float _speed;
    NSString *_localPath;
    NSString *_mediaURLString;
    unsigned long long _mediaType;
    NSString *_mediaName;
    NSString *_publisher;
    long long _startPosition;
    NSString *_uuid;
    NSDictionary *_customDlnaXmlElementDictionary;
    NSString *_refererHeader;
    NSString *_aesKey;
    NSString *_aesIv;
    NSString *_mediaArtist;
    NSString *_mediaAlbum;
    NSString *_mediaAlbumUrl;
    NSString *_extra;
}

@property (copy, nonatomic) NSString *localPath;
@property (copy, nonatomic) NSString *mediaURLString;
@property (nonatomic) unsigned long long mediaType;
@property (copy, nonatomic) NSString *mediaName;
@property (copy, nonatomic) NSString *publisher;
@property (nonatomic) long long startPosition;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSDictionary *customDlnaXmlElementDictionary;
@property (copy, nonatomic) NSString *refererHeader;
@property (nonatomic) BOOL loopPlay;
@property (copy, nonatomic) NSString *aesKey;
@property (copy, nonatomic) NSString *aesIv;
@property (copy, nonatomic) NSString *mediaArtist;
@property (copy, nonatomic) NSString *mediaAlbum;
@property (copy, nonatomic) NSString *mediaAlbumUrl;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL bullet;
@property (nonatomic) float speed;

- (void)setExtra:(id)arg0;
- (id)aesKey;
- (void)setAesKey:(id)arg0;
- (BOOL)loopPlay;
- (void)setLoopPlay:(BOOL)arg0;
- (void)setCustomDlnaXmlElementDictionary:(id)arg0;
- (id)mediaAlbumUrl;
- (id)aesIv;
- (id)refererHeader;
- (void)setMediaAlbumUrl:(id)arg0;
- (void)setAesIv:(id)arg0;
- (void)setRefererHeader:(id)arg0;
- (id)customDlnaXmlElementDictionary;
- (id)playParam;
- (id)publisher;
- (id)init;
- (void)setMediaType:(unsigned long long)arg0;
- (void)setPublisher:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)mediaType;
- (id)extra;
- (void)setSpeed:(float)arg0;
- (id)uuid;
- (float)speed;
- (long long)startPosition;
- (void)setStartPosition:(long long)arg0;
- (id)mediaName;
- (void)setMediaName:(id)arg0;
- (id)localPath;
- (id)mediaURLString;
- (void)setMediaURLString:(id)arg0;
- (id)mediaAlbum;
- (void)setMediaAlbum:(id)arg0;
- (id)mediaArtist;
- (void)setMediaArtist:(id)arg0;
- (void)setBullet:(BOOL)arg0;
- (BOOL)bullet;
- (void)setLocalPath:(id)arg0;

@end
