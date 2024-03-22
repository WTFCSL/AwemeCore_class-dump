//
//     Generated by private class-dump
//

@class UrlStructV2, NSString, ShareStructV2, NSMutableArray, CommerceStickerStructV2;

@interface NewFaceStickerStructV2 : GPBMessage

@property (copy, nonatomic) NSString *id_p;
@property (nonatomic) BOOL hasId_p;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (retain, nonatomic) NSMutableArray *childrenArray;
@property (readonly, nonatomic) unsigned long long childrenArray_Count;
@property (retain, nonatomic) UrlStructV2 *iconURL;
@property (nonatomic) BOOL hasIconURL;
@property (copy, nonatomic) NSString *ownerId;
@property (nonatomic) BOOL hasOwnerId;
@property (copy, nonatomic) NSString *ownerNickname;
@property (nonatomic) BOOL hasOwnerNickname;
@property (nonatomic) int userCount;
@property (nonatomic) BOOL hasUserCount;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL hasDesc;
@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) BOOL hasEffectId;
@property (retain, nonatomic) ShareStructV2 *shareInfo;
@property (nonatomic) BOOL hasShareInfo;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic) BOOL hasIsFavorite;
@property (retain, nonatomic) CommerceStickerStructV2 *commerceSticker;
@property (nonatomic) BOOL hasCommerceSticker;
@property (retain, nonatomic) NSMutableArray *tagsArray;
@property (readonly, nonatomic) unsigned long long tagsArray_Count;
@property (retain, nonatomic) UrlStructV2 *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (retain, nonatomic) UrlStructV2 *avatarMedium;
@property (nonatomic) BOOL hasAvatarMedium;
@property (retain, nonatomic) UrlStructV2 *avatarLarge;
@property (nonatomic) BOOL hasAvatarLarge;
@property (nonatomic) long long vvCount;
@property (nonatomic) BOOL hasVvCount;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;
@property (copy, nonatomic) NSString *secUid;
@property (nonatomic) BOOL hasSecUid;

+ (id)descriptor;

@end
