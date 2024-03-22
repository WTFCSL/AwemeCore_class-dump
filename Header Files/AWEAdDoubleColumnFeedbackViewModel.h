//
//     Generated by private class-dump
//

@class NSArray, NSString, AWEAwemeModel;

@interface AWEAdDoubleColumnFeedbackViewModel : NSObject <AWEAdDoubleColumnFeedbackVMProtocol> {
    double _containerWidth;
    double _containerHeight;
    double _panelWidth;
    double _panelHeight;
    double _collectionViewWidth;
    double _collectionViewHeight;
    double _headerHeight;
    double _cellWidth;
    double _cellHeight;
    long long _index;
    AWEAwemeModel *_currentModel;
    id /* block */ _feedbackBlock;
    id /* block */ _afterDismissFeedbackBlock;
    NSArray *_collectionDataSource;
}

@property (copy, nonatomic) NSArray *collectionDataSource;
@property (nonatomic) double containerWidth;
@property (nonatomic) double containerHeight;
@property (nonatomic) double panelWidth;
@property (nonatomic) double panelHeight;
@property (nonatomic) double collectionViewWidth;
@property (nonatomic) double collectionViewHeight;
@property (nonatomic) double headerHeight;
@property (nonatomic) double cellWidth;
@property (nonatomic) double cellHeight;
@property (nonatomic) long long index;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (copy, nonatomic) id /* block */ feedbackBlock;
@property (copy, nonatomic) id /* block */ afterDismissFeedbackBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)referString;
+ (id)enterMethod;
+ (id)logScenePrefix;

- (double)panelHeight;
- (void)setPanelHeight:(double)arg0;
- (id /* block */)feedbackBlock;
- (void)setFeedbackBlock:(id /* block */)arg0;
- (id)getItemTitleForIndexPath:(id)arg0;
- (void)feedbackWithIndexPath:(id)arg0;
- (id)getSectionTitle:(long long)arg0;
- (double)headerHeightForSection:(long long)arg0;
- (double)cellWidthForIndexPath:(id)arg0;
- (double)collectionViewWidth;
- (void)setupUIInfo;
- (void)setCollectionViewWidth:(double)arg0;
- (void)configDataSource:(id)arg0;
- (void)sendDislikeRequest:(id)arg0 extraInfo:(id)arg1;
- (void)sendReportRequestWithItem:(id)arg0;
- (id /* block */)afterDismissFeedbackBlock;
- (void)setAfterDismissFeedbackBlock:(id /* block */)arg0;
- (long long)numberOfItemsInSection:(long long)arg0;
- (void)setIndex:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)index;
- (double)headerHeight;
- (double)cellWidth;
- (void)setHeaderHeight:(double)arg0;
- (double)cellHeight;
- (void)setCellHeight:(double)arg0;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;
- (void)setCollectionViewHeight:(double)arg0;
- (double)collectionViewHeight;
- (void)setCellWidth:(double)arg0;
- (double)panelWidth;
- (void)setPanelWidth:(double)arg0;
- (void)setContainerHeight:(double)arg0;
- (double)containerHeight;
- (void)setContainerWidth:(double)arg0;
- (double)containerWidth;
- (id)collectionDataSource;
- (void)setCollectionDataSource:(id)arg0;

@end
