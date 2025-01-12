//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMusicLunaUserInfoModel : MTLModel <MTLJSONSerializing> {
    BOOL _isLunaUser;
    BOOL _isFavorite;
    NSString *_mappingSongId;
}

@property (nonatomic) BOOL isLunaUser;
@property (nonatomic) BOOL isFavorite;
@property (copy, nonatomic) NSString *mappingSongId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isLunaUser;
- (void)setIsLunaUser:(BOOL)arg0;
- (id)mappingSongId;
- (void)setMappingSongId:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isFavorite;
- (void)setIsFavorite:(BOOL)arg0;

@end
