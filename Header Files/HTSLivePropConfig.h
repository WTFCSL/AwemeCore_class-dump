//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, GPBInt64ObjectDictionary;

@interface HTSLivePropConfig : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt64ObjectDictionary *playValueIcon;
@property (readonly, nonatomic) unsigned long long playValueIcon_Count;
@property (retain, nonatomic) HTSLiveImage *linkmicEffect;
@property (nonatomic) BOOL hasLinkmicEffect;
@property (copy, nonatomic) NSString *beautyEffectId;
@property (retain, nonatomic) HTSLiveImage *staticLinkmicImg;
@property (nonatomic) BOOL hasStaticLinkmicImg;

+ (id)descriptor;

@end