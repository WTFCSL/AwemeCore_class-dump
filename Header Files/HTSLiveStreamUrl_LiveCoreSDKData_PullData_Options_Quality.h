//
//     Generated by private class-dump
//

@class NSString;

@interface HTSLiveStreamUrl_LiveCoreSDKData_PullData_Options_Quality : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *sdkKey;
@property (copy, nonatomic) NSString *vCodec;
@property (copy, nonatomic) NSString *resolution;
@property (nonatomic) int level;
@property (nonatomic) int vBitRate;
@property (copy, nonatomic) NSString *additionalContent;
@property (nonatomic) int fps;
@property (nonatomic) int disable;

+ (id)descriptor;

- (id)aweLiveQuality;

@end
