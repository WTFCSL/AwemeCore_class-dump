//
//     Generated by private class-dump
//

@class UIColor, NSString;

@interface IESLiveGameOpenPlatformRevenueRankListCellModel : NSObject {
    unsigned long long _rank;
    UIColor *_rankColor;
    NSString *_name;
    NSString *_avatarImageUrl;
    NSString *_revenueStringValue;
}

@property (nonatomic) unsigned long long rank;
@property (retain, nonatomic) UIColor *rankColor;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *avatarImageUrl;
@property (copy, nonatomic) NSString *revenueStringValue;

- (id)avatarImageUrl;
- (void)setAvatarImageUrl:(id)arg0;
- (id)revenueStringValue;
- (id)rankColor;
- (id)rankColorWithRank:(long long)arg0;
- (id)revenueStringValueWithDiamonds:(long long)arg0;
- (id)initWithRankInfo:(id)arg0 rank:(long long)arg1;
- (void)setRankColor:(id)arg0;
- (void)setRevenueStringValue:(id)arg0;
- (void)setRank:(unsigned long long)arg0;
- (unsigned long long)rank;
- (void).cxx_destruct;
- (void)setName:(id)arg0;
- (id)name;

@end