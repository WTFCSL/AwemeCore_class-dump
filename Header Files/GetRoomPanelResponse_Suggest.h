//
//     Generated by private class-dump
//

@class NSString, HTSLiveText;

@interface GetRoomPanelResponse_Suggest : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveText *leftText;
@property (nonatomic) BOOL hasLeftText;
@property (copy, nonatomic) NSString *rightText;
@property (copy, nonatomic) NSString *URL;
@property (nonatomic) long long suggestType;

+ (id)descriptor;

@end