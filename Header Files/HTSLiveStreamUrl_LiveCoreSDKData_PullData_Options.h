//
//     Generated by private class-dump
//

@class HTSLiveStreamUrl_LiveCoreSDKData_PullData_Options_Quality, NSMutableArray;

@interface HTSLiveStreamUrl_LiveCoreSDKData_PullData_Options : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveStreamUrl_LiveCoreSDKData_PullData_Options_Quality *defaultQuality;
@property (nonatomic) BOOL hasDefaultQuality;
@property (retain, nonatomic) NSMutableArray *qualitiesArray;
@property (readonly, nonatomic) unsigned long long qualitiesArray_Count;
@property (nonatomic) BOOL vpassDefault;

+ (id)descriptor;

- (id)aweLiveOptions;

@end
