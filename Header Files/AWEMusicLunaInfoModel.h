//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMusicLunaInfoModel : AWEBaseDataModel {
    BOOL _isLunaUser;
    BOOL _isFavorite;
    BOOL _hasCopyright;
    long long _mappingSongIdNum;
    NSString *_mappingSongId;
}

@property (nonatomic) BOOL isLunaUser;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic) BOOL hasCopyright;
@property (nonatomic) long long mappingSongIdNum;
@property (copy, nonatomic) NSString *mappingSongId;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isLunaUser;
- (void)setIsLunaUser:(BOOL)arg0;
- (id)mappingSongId;
- (void)setMappingSongId:(id)arg0;
- (void)setHasCopyright:(BOOL)arg0;
- (long long)mappingSongIdNum;
- (void)setMappingSongIdNum:(long long)arg0;
- (void).cxx_destruct;
- (BOOL)isFavorite;
- (void)setIsFavorite:(BOOL)arg0;
- (BOOL)hasCopyright;

@end
