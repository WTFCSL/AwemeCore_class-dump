//
//     Generated by private class-dump
//

@class PrivilegeInfo;

@interface HTSLivePaidLiveTypeModifyData : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (retain, nonatomic) PrivilegeInfo *data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) int operatorType;

+ (id)descriptor;

@end
