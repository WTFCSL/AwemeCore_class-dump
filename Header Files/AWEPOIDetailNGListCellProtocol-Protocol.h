//
//     Generated by private class-dump
//

@protocol AWEPOIDetailNGListCellProtocol <AWEPOIDetailNGListCellFlagBitProtocol>

@property (nonatomic) long long cellIndex;
@property (nonatomic) BOOL isFirst;
@property (nonatomic) BOOL isLast;
@property (nonatomic) long long modelIndex;
@property (nonatomic) long long awemeIndex;

- (void)setIsFirst:(BOOL)arg0;
- (void)setIsLast:(BOOL)arg0;
- (BOOL)isFirst;
- (BOOL)isLast;
- (long long)cellIndex;
- (void)setCellIndex:(long long)arg0;

@optional

- (id)rateId;
- (long long)awemeIndex;
- (void)setAwemeIndex:(long long)arg0;
- (BOOL)hasAweme;
- (BOOL)canValidShow;
- (BOOL)hasModel;
- (long long)modelIndex;
- (void)setModelIndex:(long long)arg0;

@end
