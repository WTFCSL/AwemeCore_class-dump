//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESECAddressServiceAddressNotifyDialogConfig : MTLModel <MTLJSONSerializing> {
    BOOL _disableCheck;
    long long _statPeriod;
    long long _maxTimes;
    long long _checkDistance;
    NSArray *_itemList;
}

@property (nonatomic) long long statPeriod;
@property (nonatomic) long long maxTimes;
@property (nonatomic) long long checkDistance;
@property (nonatomic) BOOL disableCheck;
@property (copy, nonatomic) NSArray *itemList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)maxTimes;
- (void)setMaxTimes:(long long)arg0;
- (long long)checkDistance;
- (long long)statPeriod;
- (void)setStatPeriod:(long long)arg0;
- (void)setCheckDistance:(long long)arg0;
- (BOOL)disableCheck;
- (void)setDisableCheck:(BOOL)arg0;
- (void).cxx_destruct;
- (id)itemList;
- (void)setItemList:(id)arg0;

@end
