//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon, HTSLiveRoomTicketMessage_ToolBar;

@interface HTSLiveRoomTicketMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int actionType;
@property (nonatomic) int lastDuration;
@property (nonatomic) long long ticketId;
@property (copy, nonatomic) NSString *ticketExplanationCardJumpURL;
@property (copy, nonatomic) NSString *ticketPanelJumpURL;
@property (copy, nonatomic) NSString *ticketPanel6JumpURL;
@property (copy, nonatomic) NSString *ticketPanel9JumpURL;
@property (nonatomic) long long ownerId;
@property (retain, nonatomic) HTSLiveRoomTicketMessage_ToolBar *productListToolBar;
@property (nonatomic) BOOL hasProductListToolBar;
@property (nonatomic) int bringProductSwitchStatus;

+ (id)descriptor;

@end
