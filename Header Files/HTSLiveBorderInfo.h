//
//     Generated by private class-dump
//

@class HTSLiveStaticBorderInfo, HTSLiveDynamicBorderInfo;

@interface HTSLiveBorderInfo : IESLivePBBaseMessage

@property (nonatomic) long long borderType;
@property (retain, nonatomic) HTSLiveStaticBorderInfo *staticBorder;
@property (nonatomic) BOOL hasStaticBorder;
@property (retain, nonatomic) HTSLiveDynamicBorderInfo *dynamicBorder;
@property (nonatomic) BOOL hasDynamicBorder;
@property (nonatomic) long long duration;

+ (id)descriptor;

@end