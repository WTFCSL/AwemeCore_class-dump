//
//     Generated by private class-dump
//

@class HTSLiveCommon, NSMutableArray;

@interface HTSLiveGroupLiveMemberChangeMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) NSMutableArray *membersArray;
@property (readonly, nonatomic) unsigned long long membersArray_Count;

+ (id)descriptor;

@end
