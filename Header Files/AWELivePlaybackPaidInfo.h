//
//     Generated by private class-dump
//

@class AWELivePlaybackTicketSession;

@interface AWELivePlaybackPaidInfo : AWEBaseApiModel {
    BOOL _delivery;
    long long _paidType;
    long long _viewRight;
    double _maxTrialDuration;
    AWELivePlaybackTicketSession *_ticketSession;
}

@property (nonatomic) long long paidType;
@property (nonatomic) long long viewRight;
@property (nonatomic) double maxTrialDuration;
@property (retain, nonatomic) AWELivePlaybackTicketSession *ticketSession;
@property (nonatomic) BOOL delivery;

+ (id)ticketSessionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)paidType;
- (void)setPaidType:(long long)arg0;
- (long long)viewRight;
- (void)setViewRight:(long long)arg0;
- (id)ticketSession;
- (void)setMaxTrialDuration:(double)arg0;
- (double)maxTrialDuration;
- (void)setTicketSession:(id)arg0;
- (void).cxx_destruct;
- (BOOL)delivery;
- (void)setDelivery:(BOOL)arg0;

@end
