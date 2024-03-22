//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayOrderResponse : CJPayIntergratedBaseResponse {
    NSString *_channelData;
    NSString *_tradeType;
    NSString *_ptCode;
}

@property (copy, nonatomic) NSString *channelData;
@property (copy, nonatomic) NSString *tradeType;
@property (copy, nonatomic) NSString *ptCode;

+ (id)keyMapper;

- (id)tradeType;
- (void)setTradeType:(id)arg0;
- (id)ptCode;
- (id)payDataDict;
- (void)setPtCode:(id)arg0;
- (void).cxx_destruct;
- (id)channelData;
- (void)setChannelData:(id)arg0;

@end