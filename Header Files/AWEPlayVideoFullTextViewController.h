//
//     Generated by private class-dump
//

@class NSString, NSArray, UICollectionView, NSDictionary, AWEPlayVideoAbstractBottomComponent, NSMutableArray, AWEPlayAiToTextComplianceNoticeView;

@interface AWEPlayVideoFullTextViewController : AWEPlayVideoTextViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEPlayVideoAbstractBottomComponentDelegate> {
    UICollectionView *_collectionView;
    NSArray *_dataArray;
    NSMutableArray *_dataStrArray;
    long long _selecteIndex;
    NSDictionary *_trackParams;
    double _lastPlayTime;
    AWEPlayVideoAbstractBottomComponent *_bottomView;
    AWEPlayAiToTextComplianceNoticeView *_complianceNoticeView;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *dataArray;
@property (retain, nonatomic) NSMutableArray *dataStrArray;
@property (nonatomic) long long selecteIndex;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) double lastPlayTime;
@property (retain, nonatomic) AWEPlayVideoAbstractBottomComponent *bottomView;
@property (retain, nonatomic) AWEPlayAiToTextComplianceNoticeView *complianceNoticeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)lastPlayTime;
- (void)setLastPlayTime:(double)arg0;
- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (long long)selecteIndex;
- (void)setSelecteIndex:(long long)arg0;
- (void)trackVideoTitleWithAwemeType:(id)arg0 actionType:(id)arg1;
- (void)updateSectionStatusWithTime:(double)arg0;
- (id)complianceNoticeView;
- (void)setComplianceNoticeView:(id)arg0;
- (void)abstractBottomComponentDidClick;
- (void)setDataStrArray:(id)arg0;
- (id)dataStrArray;
- (id)getCellContentWithModel:(id)arg0;
- (double)cellHeightWithModel:(id)arg0 attributedString:(id)arg1 indexPath:(id)arg2;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(long long)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void)viewDidAppear:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setCollectionView:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)scrollView;
- (id)dataArray;
- (id)bottomView;
- (void)setBottomView:(id)arg0;
- (void)setDataArray:(id)arg0;
- (void)updateWithModel:(id)arg0;

@end