//
//     Generated by private class-dump
//

@class HTSLiveTouchPositionMeta, NSMutableDictionary, HTSLiveTreasureDetail;

@interface TaskCenterEntranceResponse_TreasureTouchItem : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveTouchPositionMeta *meta;
@property (nonatomic) BOOL hasMeta;
@property (retain, nonatomic) HTSLiveTreasureDetail *detail;
@property (nonatomic) BOOL hasDetail;
@property (retain, nonatomic) NSMutableDictionary *bizExtra;
@property (readonly, nonatomic) unsigned long long bizExtra_Count;

+ (id)descriptor;

@end
