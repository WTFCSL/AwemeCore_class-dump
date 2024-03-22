//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface IESLiveGuideAnchorPaidLiveModel : NSObject {
    BOOL _isReplay;
    long long _ticketID;
    NSString *_paidLiveImageURL;
    NSString *_paidLiveCoverUri;
    NSString *_paidLiveTitle;
    NSString *_paidLiveTime;
    NSString *_action;
    NSString *_ownerID;
    NSNumber *_soldCount;
    NSString *_enterWithPaidLiveInfo;
    NSString *_liveScene;
    NSString *_uploadTime;
    NSString *_toastContent;
    NSString *_paidLiveStatus;
    NSString *_paidTicketFrom;
    NSNumber *_ticketVisibilityRange;
    unsigned long long _paidLiveAuditStatus;
    long long _sellTicketID;
}

@property (nonatomic) long long ticketID;
@property (retain, nonatomic) NSString *paidLiveImageURL;
@property (retain, nonatomic) NSString *paidLiveCoverUri;
@property (retain, nonatomic) NSString *paidLiveTitle;
@property (retain, nonatomic) NSString *paidLiveTime;
@property (retain, nonatomic) NSString *action;
@property (retain, nonatomic) NSString *ownerID;
@property (retain, nonatomic) NSNumber *soldCount;
@property (nonatomic) BOOL isReplay;
@property (retain, nonatomic) NSString *enterWithPaidLiveInfo;
@property (retain, nonatomic) NSString *liveScene;
@property (retain, nonatomic) NSString *uploadTime;
@property (retain, nonatomic) NSString *toastContent;
@property (retain, nonatomic) NSString *paidLiveStatus;
@property (retain, nonatomic) NSString *paidTicketFrom;
@property (retain, nonatomic) NSNumber *ticketVisibilityRange;
@property (nonatomic) unsigned long long paidLiveAuditStatus;
@property (nonatomic) long long sellTicketID;

- (id)soldCount;
- (void)setSoldCount:(id)arg0;
- (id)toastContent;
- (void)setToastContent:(id)arg0;
- (long long)ticketID;
- (void)setTicketID:(long long)arg0;
- (id)liveScene;
- (id)paidLiveTitle;
- (id)paidLiveCoverUri;
- (long long)sellTicketID;
- (unsigned long long)paidLiveAuditStatus;
- (void)setPaidLiveTitle:(id)arg0;
- (id)paidLiveImageURL;
- (id)paidTicketFrom;
- (void)setLiveScene:(id)arg0;
- (void)setPaidLiveImageURL:(id)arg0;
- (void)setPaidLiveCoverUri:(id)arg0;
- (id)paidLiveTime;
- (void)setPaidLiveTime:(id)arg0;
- (id)enterWithPaidLiveInfo;
- (void)setEnterWithPaidLiveInfo:(id)arg0;
- (id)paidLiveStatus;
- (void)setPaidLiveStatus:(id)arg0;
- (void)setPaidTicketFrom:(id)arg0;
- (id)ticketVisibilityRange;
- (void)setTicketVisibilityRange:(id)arg0;
- (void)setPaidLiveAuditStatus:(unsigned long long)arg0;
- (void)setSellTicketID:(long long)arg0;
- (BOOL)isReplay;
- (void)setIsReplay:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setAction:(id)arg0;
- (id)action;
- (void)setUploadTime:(id)arg0;
- (id)uploadTime;
- (id)ownerID;
- (void)setOwnerID:(id)arg0;

@end