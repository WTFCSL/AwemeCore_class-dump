//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, NSMutableArray;

@interface HTSLiveUser_NobleLevelInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *nobleBackground;
@property (nonatomic) BOOL hasNobleBackground;
@property (nonatomic) long long nobleLevel;
@property (retain, nonatomic) HTSLiveImage *nobleIcon;
@property (nonatomic) BOOL hasNobleIcon;
@property (copy, nonatomic) NSString *nobleName;
@property (nonatomic) long long expireTime;
@property (retain, nonatomic) HTSLiveImage *nobleBigIcon;
@property (nonatomic) BOOL hasNobleBigIcon;
@property (retain, nonatomic) HTSLiveImage *nobleIconWithBack;
@property (nonatomic) BOOL hasNobleIconWithBack;
@property (retain, nonatomic) HTSLiveImage *nobleBoarder;
@property (nonatomic) BOOL hasNobleBoarder;
@property (retain, nonatomic) NSMutableArray *nobleBackgroundColorArray;
@property (readonly, nonatomic) unsigned long long nobleBackgroundColorArray_Count;

+ (id)descriptor;

@end
