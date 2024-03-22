//
//     Generated by private class-dump
//

@class NSString;

@interface AWETaskInfoCardModel : MTLModel <MTLJSONSerializing> {
    NSString *_title;
    NSString *_subTitle;
    NSString *_rewardTips;
    NSString *_iconURL;
    NSString *_highestProfit;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *rewardTips;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *highestProfit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)rewardTips;
- (void)setRewardTips:(id)arg0;
- (id)highestProfit;
- (void)setHighestProfit:(id)arg0;
- (void).cxx_destruct;
- (void)setIconURL:(id)arg0;
- (id)iconURL;
- (id)title;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setTitle:(id)arg0;

@end
