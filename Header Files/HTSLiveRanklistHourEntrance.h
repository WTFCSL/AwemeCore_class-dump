//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface HTSLiveRanklistHourEntrance : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *globalInfosArray;
@property (readonly, nonatomic) unsigned long long globalInfosArray_Count;
@property (retain, nonatomic) NSMutableArray *defaultGlobalInfosArray;
@property (readonly, nonatomic) unsigned long long defaultGlobalInfosArray_Count;
@property (retain, nonatomic) NSMutableArray *verticalInfosArray;
@property (readonly, nonatomic) unsigned long long verticalInfosArray_Count;
@property (retain, nonatomic) NSMutableArray *defaultVerticalInfosArray;
@property (readonly, nonatomic) unsigned long long defaultVerticalInfosArray_Count;

+ (id)descriptor;

@end
