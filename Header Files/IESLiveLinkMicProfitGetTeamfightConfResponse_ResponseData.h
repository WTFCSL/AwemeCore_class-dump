//
//     Generated by private class-dump
//

@class HTSLiveTeamfightCustomTeamConfig, GPBInt64Array, NSMutableArray, GPBEnumArray;

@interface IESLiveLinkMicProfitGetTeamfightConfResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt64Array *durationListArray;
@property (readonly, nonatomic) unsigned long long durationListArray_Count;
@property (nonatomic) long long finishFallbackDelaySec;
@property (retain, nonatomic) GPBEnumArray *scoreTypeListArray;
@property (readonly, nonatomic) unsigned long long scoreTypeListArray_Count;
@property (retain, nonatomic) NSMutableArray *scoreTypeInfoListArray;
@property (readonly, nonatomic) unsigned long long scoreTypeInfoListArray_Count;
@property (retain, nonatomic) NSMutableArray *roomBattleThemeListArray;
@property (readonly, nonatomic) unsigned long long roomBattleThemeListArray_Count;
@property (retain, nonatomic) HTSLiveTeamfightCustomTeamConfig *customTeamConfig;
@property (nonatomic) BOOL hasCustomTeamConfig;

+ (id)descriptor;

@end