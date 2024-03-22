//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, HTSLiveUser;

@interface AnchorEffect_EffectInfo : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (nonatomic) int source;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HTSLiveImage *barIcon;
@property (nonatomic) BOOL hasBarIcon;
@property (retain, nonatomic) HTSLiveImage *barMinIcon;
@property (nonatomic) BOOL hasBarMinIcon;
@property (retain, nonatomic) HTSLiveImage *barAuraURL;
@property (nonatomic) BOOL hasBarAuraURL;
@property (retain, nonatomic) HTSLiveUser *sender;
@property (nonatomic) BOOL hasSender;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) long long insertTime;

+ (id)descriptor;

@end
