//
//     Generated by private class-dump
//

@class HTSLiveCommon, NSMutableArray;

@interface HTSLiveTaskMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) NSMutableArray *taskRecordsArray;
@property (readonly, nonatomic) unsigned long long taskRecordsArray_Count;
@property (nonatomic) int action;

+ (id)descriptor;

@end
