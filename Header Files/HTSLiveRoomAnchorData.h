//
//     Generated by private class-dump
//

@class NSString, HTSLiveGameAnchorInfo;

@interface HTSLiveRoomAnchorData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *finishSchema;
@property (retain, nonatomic) HTSLiveGameAnchorInfo *gameAnchorInfo;
@property (nonatomic) BOOL hasGameAnchorInfo;
@property (copy, nonatomic) NSString *frameScale;

+ (id)descriptor;

@end