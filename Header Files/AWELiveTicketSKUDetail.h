//
//     Generated by private class-dump
//

@class NSString, AWELivePriceInfo;

@interface AWELiveTicketSKUDetail : AWEBaseApiModel {
    BOOL _hasPriceInfo;
    BOOL _hasDouPriceInfo;
    long long _ticketType;
    NSString *_ticketName;
    long long _startSellTime;
    long long _closingSellTime;
    long long _sellStatus;
    AWELivePriceInfo *_priceInfo;
    AWELivePriceInfo *_douPriceInfo;
}

@property (nonatomic) long long ticketType;
@property (copy, nonatomic) NSString *ticketName;
@property (nonatomic) long long startSellTime;
@property (nonatomic) long long closingSellTime;
@property (nonatomic) long long sellStatus;
@property (retain, nonatomic) AWELivePriceInfo *priceInfo;
@property (nonatomic) BOOL hasPriceInfo;
@property (retain, nonatomic) AWELivePriceInfo *douPriceInfo;
@property (nonatomic) BOOL hasDouPriceInfo;

- (long long)ticketType;
- (id)priceInfo;
- (void)setPriceInfo:(id)arg0;
- (BOOL)hasPriceInfo;
- (void)setTicketType:(long long)arg0;
- (id)ticketName;
- (void)setTicketName:(id)arg0;
- (long long)startSellTime;
- (void)setStartSellTime:(long long)arg0;
- (long long)closingSellTime;
- (void)setClosingSellTime:(long long)arg0;
- (long long)sellStatus;
- (void)setSellStatus:(long long)arg0;
- (void)setHasPriceInfo:(BOOL)arg0;
- (id)douPriceInfo;
- (void)setDouPriceInfo:(id)arg0;
- (BOOL)hasDouPriceInfo;
- (void)setHasDouPriceInfo:(BOOL)arg0;
- (void).cxx_destruct;

@end