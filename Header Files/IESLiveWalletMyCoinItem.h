//
//     Generated by private class-dump
//

@class NSArray, NSString, NSDate, NSNumber;

@interface IESLiveWalletMyCoinItem : NSObject <IESLiveWalletIGListItem> {
    NSArray *_chargeModels;
    NSArray *_otherCells;
    NSNumber *_diamondCount;
    NSString *_billUrlString;
    NSString *_freezeRemindString;
    NSNumber *_defaultDiamondID;
    NSString *_reasonalRemindText;
    NSString *_coinNameChangeString;
    long long _maxShowTimes;
    double _sectionWidth;
    id /* block */ _itemChangedBlock;
    id /* block */ _updateDataBlock;
    NSDate *_lastShowDate;
}

@property (retain, nonatomic) NSArray *chargeModels;
@property (retain, nonatomic) NSArray *otherCells;
@property (retain, nonatomic) NSNumber *diamondCount;
@property (retain, nonatomic) NSString *billUrlString;
@property (retain, nonatomic) NSString *freezeRemindString;
@property (retain, nonatomic) NSNumber *defaultDiamondID;
@property (copy, nonatomic) id /* block */ itemChangedBlock;
@property (copy, nonatomic) id /* block */ updateDataBlock;
@property (retain, nonatomic) NSString *coinNameChangeString;
@property (nonatomic) long long maxShowTimes;
@property (retain, nonatomic) NSDate *lastShowDate;
@property (readonly, nonatomic) NSString *reasonalRemindText;
@property (nonatomic) double sectionWidth;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (id)lastShowDate;
- (void)setMaxShowTimes:(long long)arg0;
- (long long)maxShowTimes;
- (id)diamondCount;
- (void)setDiamondCount:(id)arg0;
- (double)sectionWidth;
- (id)defaultDiamondID;
- (id)reasonalRemindText;
- (void)setDefaultDiamondID:(id)arg0;
- (id)chargeModels;
- (void)setChargeModels:(id)arg0;
- (void)setSectionWidth:(double)arg0;
- (double)chargeColletionViewTitleHeight;
- (double)chargeCollectionHeight;
- (double)chargeDefaultFunctionHeight;
- (void)updateChargesWithCompletion:(id /* block */)arg0;
- (struct CGSize { double x0; double x1; })chargeItemSize;
- (void)forceUpdateData;
- (void)tapCloseTip;
- (id)freezeRemindString;
- (id)coinNameChangeString;
- (id)initWithMyCoinModel:(id)arg0 itemChangedBlock:(id /* block */)arg1 updateDataBlock:(id /* block */)arg2;
- (id)createSectionControllerWithTrackInfo:(id)arg0;
- (id)billUrlString;
- (id)otherCells;
- (void)fetchCoinNameTipSetting;
- (void)setCoinNameChangeString:(id)arg0;
- (void)setLastShowDate:(id)arg0;
- (id /* block */)itemChangedBlock;
- (id /* block */)updateDataBlock;
- (void)setOtherCells:(id)arg0;
- (void)setBillUrlString:(id)arg0;
- (void)setFreezeRemindString:(id)arg0;
- (void)setItemChangedBlock:(id /* block */)arg0;
- (void)setUpdateDataBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (double)sectionHeight;

@end