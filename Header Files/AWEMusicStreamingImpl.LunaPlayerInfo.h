//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMusicStreamingImpl.LunaPlayerInfo : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* unknown type, empty encoding */ expireTime;
    void /* unknown type, empty encoding */ mediaID;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ videoModel;
    void /* unknown type, empty encoding */ videoModelType;
}

@property (nonatomic) void /* unknown type, empty encoding */ expireTime;
@property (nonatomic, copy) NSString *mediaID;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *videoModel;
@property (nonatomic) void /* unknown type, empty encoding */ videoModelType;

+ (id)JSONKeyPathsByPropertyKey;

- (id)videoModel;
- (void)setVideoModel:(id)arg0;
- (long long)videoModelType;
- (void)setVideoModelType:(long long)arg0;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (BOOL)isPreview;
- (id)initWithCoder:(id)arg0;
- (id)url;
- (long long)expireTime;
- (void)setExpireTime:(long long)arg0;
- (void)setMediaID:(id)arg0;
- (id)mediaID;

@end
