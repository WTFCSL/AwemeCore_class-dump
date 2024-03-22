//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon, NSMutableArray;

@interface HTSLiveDrumMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int drumResult;
@property (nonatomic) int dumpMsgType;
@property (nonatomic) long long drumCount;
@property (nonatomic) long long reportTimeGap;
@property (nonatomic) long long pushId;
@property (copy, nonatomic) NSString *pushIdStr;
@property (retain, nonatomic) NSMutableArray *usersArray;
@property (readonly, nonatomic) unsigned long long usersArray_Count;

+ (id)descriptor;

@end
