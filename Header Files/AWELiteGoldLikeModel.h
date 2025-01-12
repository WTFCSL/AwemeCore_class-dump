//
//     Generated by private class-dump
//

@class NSString;

@interface AWELiteGoldLikeModel : MTLModel <MTLJSONSerializing> {
    BOOL _userDigged;
    long long _entranceType;
    long long _tabType;
    long long _giftType;
    long long _diggNum;
    long long _userDiggNum;
    long long _userDiggAmount;
    long long _onceDiggAmount;
    NSString *_itemToken;
}

@property (nonatomic) long long entranceType;
@property (nonatomic) long long tabType;
@property (nonatomic) long long giftType;
@property (nonatomic) long long diggNum;
@property (nonatomic) BOOL userDigged;
@property (nonatomic) long long userDiggNum;
@property (nonatomic) long long userDiggAmount;
@property (nonatomic) long long onceDiggAmount;
@property (copy, nonatomic) NSString *itemToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)tabType;
- (BOOL)userDigged;
- (void)setUserDigged:(BOOL)arg0;
- (long long)diggNum;
- (long long)entranceType;
- (void)setEntranceType:(long long)arg0;
- (void)setTabType:(long long)arg0;
- (void)setGiftType:(long long)arg0;
- (void)setDiggNum:(long long)arg0;
- (long long)userDiggNum;
- (void)setUserDiggNum:(long long)arg0;
- (long long)userDiggAmount;
- (void)setUserDiggAmount:(long long)arg0;
- (long long)onceDiggAmount;
- (void)setOnceDiggAmount:(long long)arg0;
- (id)itemToken;
- (void)setItemToken:(id)arg0;
- (void).cxx_destruct;
- (long long)giftType;

@end
