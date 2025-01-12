//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMusicStreamingImpl.LunaUserBrief : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ nickname;
    void /* unknown type, empty encoding */ mediumAvatarUrl;
    void /* unknown type, empty encoding */ thumbAvatarUrl;
    void /* unknown type, empty encoding */ verificationType;
    void /* unknown type, empty encoding */ artistID;
    void /* unknown type, empty encoding */ signature;
    void /* unknown type, empty encoding */ isSecret;
    void /* unknown type, empty encoding */ testTag;
    void /* unknown type, empty encoding */ secUid;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic, readonly) NSString *idStr;
@property (nonatomic, copy) NSString *nickname;
@property (nonatomic, retain) void /* unknown type, empty encoding */ mediumAvatarUrl;
@property (nonatomic, retain) void /* unknown type, empty encoding */ thumbAvatarUrl;
@property (nonatomic) void /* unknown type, empty encoding */ verificationType;
@property (nonatomic, copy) NSString *artistID;
@property (nonatomic, copy) NSString *signature;
@property (nonatomic) void /* unknown type, empty encoding */ isSecret;
@property (nonatomic) void /* unknown type, empty encoding */ testTag;
@property (nonatomic, copy) NSString *secUid;

+ (id)mediumAvatarUrlJSONTransformer;
+ (id)thumbAvatarUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)secUid;
- (void)setSecUid:(id)arg0;
- (id)mediumAvatarUrl;
- (void)setMediumAvatarUrl:(id)arg0;
- (id)thumbAvatarUrl;
- (void)setThumbAvatarUrl:(id)arg0;
- (BOOL)isSecret;
- (void)setIsSecret:(BOOL)arg0;
- (long long)testTag;
- (void)setTestTag:(long long)arg0;
- (void)setSignature:(id)arg0;
- (id)signature;
- (id)init;
- (id)nickname;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (void)setNickname:(id)arg0;
- (id)id;
- (id)initWithCoder:(id)arg0;
- (void)setId:(id)arg0;
- (long long)verificationType;
- (void)setVerificationType:(long long)arg0;
- (id)artistID;
- (void)setArtistID:(id)arg0;
- (id)idStr;

@end
