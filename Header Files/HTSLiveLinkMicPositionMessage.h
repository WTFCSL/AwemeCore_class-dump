//
//     Generated by private class-dump
//

@class HTSLiveLinkMicPositionVerifyContent, HTSLiveCommon, HTSLiveLinkMicPositionListChangeContent;

@interface HTSLiveLinkMicPositionMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int messageType;
@property (readonly, nonatomic) int contentOneOfCase;
@property (retain, nonatomic) HTSLiveLinkMicPositionListChangeContent *listChangeContent;
@property (retain, nonatomic) HTSLiveLinkMicPositionVerifyContent *verifyContent;

+ (id)descriptor;

@end
