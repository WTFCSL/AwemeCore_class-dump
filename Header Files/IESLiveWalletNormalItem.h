//
//     Generated by private class-dump
//

@class NSArray;

@interface IESLiveWalletNormalItem : NSObject <IESLiveWalletIGListItem> {
    BOOL _isInMyCoinView;
    NSArray *_cellModels;
    double _sectionWidth;
    long long _numOfItemInRow;
}

@property (readonly, nonatomic) NSArray *cellModels;
@property (readonly, nonatomic) BOOL isAvailable;
@property (nonatomic) double sectionWidth;
@property (nonatomic) long long numOfItemInRow;
@property (nonatomic) BOOL isInMyCoinView;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (id)cellModels;
- (double)sectionWidth;
- (void)setSectionWidth:(double)arg0;
- (id)initWithMyCoinModel:(id)arg0 itemChangedBlock:(id /* block */)arg1 updateDataBlock:(id /* block */)arg2;
- (id)createSectionControllerWithTrackInfo:(id)arg0;
- (void)setIsInMyCoinView:(BOOL)arg0;
- (long long)numOfItemInRow;
- (void)setNumOfItemInRow:(long long)arg0;
- (BOOL)isInMyCoinView;
- (void).cxx_destruct;
- (BOOL)isAvailable;

@end
