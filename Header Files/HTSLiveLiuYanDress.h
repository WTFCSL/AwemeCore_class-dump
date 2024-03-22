//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, HTSLiveTicketSimpleInfo;

@interface HTSLiveLiuYanDress : IESLivePBBaseMessage

@property (nonatomic) long long dressId;
@property (nonatomic) long long entityId;
@property (nonatomic) int dressType;
@property (nonatomic) int paidType;
@property (copy, nonatomic) NSString *dressName;
@property (retain, nonatomic) HTSLiveImage *dressImage;
@property (nonatomic) BOOL hasDressImage;
@property (retain, nonatomic) HTSLiveImage *badgeMiniIcon;
@property (nonatomic) BOOL hasBadgeMiniIcon;
@property (copy, nonatomic) NSString *dressColor;
@property (nonatomic) int hasPaid;
@property (copy, nonatomic) NSString *badgeDetailInfo;
@property (retain, nonatomic) HTSLiveTicketSimpleInfo *ticketInfo;
@property (nonatomic) BOOL hasTicketInfo;

+ (id)descriptor;

@end
