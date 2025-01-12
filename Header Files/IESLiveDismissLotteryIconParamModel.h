//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface IESLiveDismissLotteryIconParamModel : IESLiveBridgeModel {
    NSString *_source;
    NSString *_lotteryId;
    NSNumber *_lotteryType;
}

@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *lotteryId;
@property (retain, nonatomic) NSNumber *lotteryType;

+ (id)modelCustomPropertyMapper;

- (id)lotteryId;
- (void)setLotteryId:(id)arg0;
- (id)lotteryType;
- (void)setLotteryType:(id)arg0;
- (id)source;
- (void).cxx_destruct;
- (void)setSource:(id)arg0;

@end
