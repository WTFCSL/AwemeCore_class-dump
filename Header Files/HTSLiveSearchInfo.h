//
//     Generated by private class-dump
//

@class NSString, GPBInt64Array, NSMutableArray;

@interface HTSLiveSearchInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *seasonAssistInfo;
@property (copy, nonatomic) NSString *searchBackgroundColor;
@property (retain, nonatomic) GPBInt64Array *albumListEpisodeIdsArray;
@property (readonly, nonatomic) unsigned long long albumListEpisodeIdsArray_Count;
@property (retain, nonatomic) NSMutableArray *relationSeasonInfoArray;
@property (readonly, nonatomic) unsigned long long relationSeasonInfoArray_Count;
@property (nonatomic) long long albumListShowTitle;
@property (copy, nonatomic) NSString *actorsInfo;

+ (id)descriptor;

@end
