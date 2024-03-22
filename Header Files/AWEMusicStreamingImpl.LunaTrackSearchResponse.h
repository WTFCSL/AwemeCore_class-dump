//
//     Generated by private class-dump
//

@class NSArray, NSString, _TtC21AWEMusicStreamingImpl15LunaSearchGroup;

@interface AWEMusicStreamingImpl.LunaTrackSearchResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* unknown type, empty encoding */ resultGroups;
    void /* unknown type, empty encoding */ trackLyricInfos;
}

@property (nonatomic, copy) NSArray *resultGroups;
@property (nonatomic, readonly) BOOL hasMore;
@property (nonatomic, readonly) NSString *cursor;
@property (nonatomic, readonly) _TtC21AWEMusicStreamingImpl15LunaSearchGroup *group;
@property (nonatomic, copy) NSArray *trackLyricInfos;
@property (nonatomic, readonly) NSArray *trackItems;

+ (id)resultGroupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)trackLyricInfos;
- (void)setTrackLyricInfos:(id)arg0;
- (id)trackItems;
- (id)cursor;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)group;
- (BOOL)hasMore;
- (id)initWithCoder:(id)arg0;
- (id)resultGroups;
- (void)setResultGroups:(id)arg0;

@end
