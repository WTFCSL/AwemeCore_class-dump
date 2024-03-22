//
//     Generated by private class-dump
//

@class NSArray;

@interface IESLivePKComponentGiftList : IESLiveRevenueInteractPlayComponent {
    BOOL _shouldResetGiftListWhenFinished;
    BOOL _hasSyncGiftList;
    NSArray *_syncGiftListTimeArray;
}

@property (copy, nonatomic) NSArray *syncGiftListTimeArray;
@property (nonatomic) BOOL shouldResetGiftListWhenFinished;
@property (nonatomic) BOOL hasSyncGiftList;

- (void)componentDidLoad;
- (void)componentPunishing;
- (void)componentFinished;
- (void)setSyncGiftListTimeArray:(id)arg0;
- (void)setShouldResetGiftListWhenFinished:(BOOL)arg0;
- (id)syncGiftListTimeArray;
- (id)pkFeatures;
- (void)setHasSyncGiftList:(BOOL)arg0;
- (void)resetGiftListIfNeed;
- (BOOL)shouldResetGiftListWhenFinished;
- (BOOL)hasSyncGiftList;
- (void).cxx_destruct;
- (void)clean;

@end
