//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon, NSMutableArray;

@interface HTSLiveRoomChannelKickOutMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *toast;
@property (retain, nonatomic) NSMutableArray *onlineChannelListArray;
@property (readonly, nonatomic) unsigned long long onlineChannelListArray_Count;

+ (id)descriptor;

@end