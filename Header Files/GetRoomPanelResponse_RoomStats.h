//
//     Generated by private class-dump
//

@class NSString, HTSLiveText;

@interface GetRoomPanelResponse_RoomStats : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *statsTitle;
@property (copy, nonatomic) NSString *statsValue;
@property (retain, nonatomic) HTSLiveText *text;
@property (nonatomic) BOOL hasText;

+ (id)descriptor;

@end
