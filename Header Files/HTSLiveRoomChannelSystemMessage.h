//
//     Generated by private class-dump
//

@class HTSLiveCommon;

@interface HTSLiveRoomChannelSystemMessage : IESLivePBBaseMessage

@property (nonatomic) BOOL isCreateMessage;
@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;

+ (id)descriptor;

- (void)setIsCreateMessage:(BOOL)arg0;
- (BOOL)isCreateMessage;

@end
