//
//     Generated by private class-dump
//

@class NSString, PaidLiveTicketRecommendResponse_RecommendTicketDetail_User, PaidLiveTicketRecommendResponse_RecommendTicketDetail_PriceInfo;

@interface PaidLiveTicketRecommendResponse_RecommendTicketDetail : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *ticketId;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) PaidLiveTicketRecommendResponse_RecommendTicketDetail_PriceInfo *priceInfo;
@property (nonatomic) BOOL hasPriceInfo;
@property (copy, nonatomic) NSString *coverURL;
@property (nonatomic) long long showStartTime;
@property (retain, nonatomic) PaidLiveTicketRecommendResponse_RecommendTicketDetail_User *anchor;
@property (nonatomic) BOOL hasAnchor;
@property (copy, nonatomic) NSString *detailSchema;
@property (nonatomic) long long isReplay;
@property (nonatomic) long long isLiving;

+ (id)descriptor;

@end
