//
//     Generated by private class-dump
//

@class IESLiveBanUser;

@interface HTSLiveLinkerCloseContent : IESLivePBBaseMessage

@property (nonatomic) int source;
@property (retain, nonatomic) IESLiveBanUser *banAnchorInfo;
@property (nonatomic) BOOL hasBanAnchorInfo;
@property (nonatomic) int reason;

+ (id)descriptor;

@end
