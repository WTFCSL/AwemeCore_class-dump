//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWELiveLocalLifeLotteryModel : MTLModel <MTLJSONSerializing> {
    NSString *_lotteryId;
    NSNumber *_startTime;
    NSNumber *_drawTime;
    NSString *_iconUrl;
}

@property (copy, nonatomic) NSString *lotteryId;
@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSNumber *drawTime;
@property (copy, nonatomic) NSString *iconUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (id)lotteryId;
- (void)setLotteryId:(id)arg0;
- (id)drawTime;
- (void)setDrawTime:(id)arg0;
- (void)setStartTime:(id)arg0;
- (void).cxx_destruct;
- (id)startTime;

@end
