//
//     Generated by private class-dump
//

@class NSString, NSArray, _TtC21AWEMusicStreamingImpl18LunaPlayExtraModel;

@interface AWEMusicStreamingImpl.VideoInfo : MTLModel {
    void /* unknown type, empty encoding */ video;
    void /* unknown type, empty encoding */ songID;
    void /* unknown type, empty encoding */ fetchDay;
    void /* unknown type, empty encoding */ $__lazy_storage_$_extraModel;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ video;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *artistsName;
@property (nonatomic, readonly) NSArray *usersIdArr;
@property (nonatomic, readonly) NSArray *artistsIdArr;
@property (nonatomic, readonly) NSString *totalArtistsID;
@property (nonatomic, readonly) NSString *totalUsersID;
@property (nonatomic, copy) NSArray *artists;
@property (nonatomic) BOOL isCollected;
@property (nonatomic, readonly) BOOL isPlayableForCopyright;
@property (nonatomic, copy) NSString *songID;
@property (nonatomic, copy) NSString *fetchDay;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl18LunaPlayExtraModel *extraModel;

+ (id)encodingBehaviorsByPropertyKey;

- (id)extraModel;
- (BOOL)isCollected;
- (void)setIsCollected:(BOOL)arg0;
- (id)usersIdArr;
- (id)artistsIdArr;
- (id)totalArtistsID;
- (id)totalUsersID;
- (BOOL)isPlayableForCopyright;
- (id)fetchDay;
- (void)setFetchDay:(id)arg0;
- (void)setExtraModel:(id)arg0;
- (id)artistsName;
- (void)setSongID:(id)arg0;
- (id)originalMedia;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (void)setVideo:(id)arg0;
- (id)title;
- (id)initWithCoder:(id)arg0;
- (id)media;
- (id)video;
- (id)songID;
- (id)artists;
- (void)setArtists:(id)arg0;

@end
