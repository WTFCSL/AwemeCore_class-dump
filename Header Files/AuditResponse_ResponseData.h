//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface AuditResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) long long curWaitCnt;
@property (nonatomic) long long toWaitTime;
@property (nonatomic) long long totalQueueCnt;
@property (nonatomic) long long auditStatus;
@property (copy, nonatomic) NSString *auditContent;
@property (retain, nonatomic) NSMutableArray *ruleInfoArray;
@property (readonly, nonatomic) unsigned long long ruleInfoArray_Count;

+ (id)descriptor;

@end
