//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface TicketPrivilegeInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *skuIdArray;
@property (readonly, nonatomic) unsigned long long skuIdArray_Count;
@property (retain, nonatomic) NSMutableArray *privilegeConfArray;
@property (readonly, nonatomic) unsigned long long privilegeConfArray_Count;
@property (nonatomic) BOOL privilegeHasPaid;

+ (id)descriptor;

@end
