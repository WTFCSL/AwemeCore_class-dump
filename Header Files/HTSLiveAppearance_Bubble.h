//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, HTSLiveImage;

@interface HTSLiveAppearance_Bubble : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *rollTipsArray;
@property (readonly, nonatomic) unsigned long long rollTipsArray_Count;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) int rollAfterMs;
@property (nonatomic) long long couponMateId;
@property (copy, nonatomic) NSString *etType;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
