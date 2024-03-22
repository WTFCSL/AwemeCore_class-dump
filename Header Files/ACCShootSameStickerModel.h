//
//     Generated by private class-dump
//

@class NSString, AWEInteractionStickerLocationModel, NSDictionary;

@interface ACCShootSameStickerModel : MTLModel <MTLJSONSerializing> {
    BOOL _deleted;
    NSString *_uuid;
    long long _stickerType;
    AWEInteractionStickerLocationModel *_locationModel;
    AWEInteractionStickerLocationModel *_tempLocationModel;
    NSString *_stickerModelStr;
    NSDictionary *_referExtraParams;
}

@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) long long stickerType;
@property (retain, nonatomic) AWEInteractionStickerLocationModel *locationModel;
@property (retain, nonatomic) AWEInteractionStickerLocationModel *tempLocationModel;
@property (copy, nonatomic) NSString *stickerModelStr;
@property (nonatomic, getter=isDeleted) BOOL deleted;
@property (copy, nonatomic) NSDictionary *referExtraParams;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)locationModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setStickerType:(long long)arg0;
- (void)setLocationModel:(id)arg0;
- (id)locationModel;
- (void)setStickerModelStr:(id)arg0;
- (void)setReferExtraParams:(id)arg0;
- (id)tempLocationModel;
- (void)setTempLocationModel:(id)arg0;
- (id)stickerModelStr;
- (id)referExtraParams;
- (void).cxx_destruct;
- (void)setUuid:(id)arg0;
- (void)setDeleted:(BOOL)arg0;
- (id)uuid;
- (BOOL)isDeleted;
- (long long)stickerType;

@end