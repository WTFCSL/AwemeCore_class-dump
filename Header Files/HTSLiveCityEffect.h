//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, GPBInt64Array;

@interface HTSLiveCityEffect : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *effectResource;
@property (nonatomic) BOOL hasEffectResource;
@property (copy, nonatomic) NSString *city;
@property (retain, nonatomic) GPBInt64Array *showEffectUserIdListArray;
@property (readonly, nonatomic) unsigned long long showEffectUserIdListArray_Count;

+ (id)descriptor;

@end
