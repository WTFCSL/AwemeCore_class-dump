//
//     Generated by private class-dump
//

@class NSString;

@interface AWESelectEpisodeButtonModel : MTLModel <MTLJSONSerializing> {
    NSString *_awemeID;
    NSString *_title;
    NSString *_titlePrefix;
    long long _type;
    NSString *_albumID;
    NSString *_episodeID;
    NSString *_extra;
}

@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titlePrefix;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (void)setAwemeID:(id)arg0;
- (id)awemeID;
- (void)setAlbumID:(id)arg0;
- (void)setEpisodeID:(id)arg0;
- (void).cxx_destruct;
- (long long)type;
- (id)extra;
- (id)title;
- (void)setType:(long long)arg0;
- (void)setTitle:(id)arg0;
- (id)albumID;
- (void)setTitlePrefix:(id)arg0;
- (id)titlePrefix;
- (id)episodeID;

@end
