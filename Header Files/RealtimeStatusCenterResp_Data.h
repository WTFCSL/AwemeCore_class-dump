//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface RealtimeStatusCenterResp_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *tabListArray;
@property (readonly, nonatomic) unsigned long long tabListArray_Count;
@property (retain, nonatomic) NSMutableArray *suggestListArray;
@property (readonly, nonatomic) unsigned long long suggestListArray_Count;

+ (id)descriptor;

@end