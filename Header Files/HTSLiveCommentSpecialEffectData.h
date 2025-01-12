//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface HTSLiveCommentSpecialEffectData : IESLivePBBaseMessage

@property (nonatomic) int commentSpecialEffectType;
@property (retain, nonatomic) NSMutableArray *effectsDataUrlsArray;
@property (readonly, nonatomic) unsigned long long effectsDataUrlsArray_Count;
@property (retain, nonatomic) NSMutableArray *maskedOffsetListArray;
@property (readonly, nonatomic) unsigned long long maskedOffsetListArray_Count;
@property (nonatomic) long long specialEffectInterval;
@property (copy, nonatomic) NSString *effectTypeSdkKey;
@property (nonatomic) long long maxCommentCountPerEffect;

+ (id)descriptor;

@end
