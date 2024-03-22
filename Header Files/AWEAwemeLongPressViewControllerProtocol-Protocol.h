//
//     Generated by private class-dump
//

@class UICollectionView, NSObject;
@protocol AWEAwemeLongPressViewModelProtocol;

@protocol AWEAwemeLongPressViewControllerProtocol <NSObject>

@property (nonatomic) double longPressMenuHeight;
@property (retain, nonatomic) NSObject<AWEAwemeLongPressViewModelProtocol> *viewModel;
@property (readonly, nonatomic) UICollectionView *baseCollectionView;

- (void)updateWithReasonModels:(id)arg0;
- (void)unfoldDislikeModelWithInsertModels:(id)arg0;
- (void)unfoldDislikeReasonsListWithModels:(id)arg0 aweme:(id)arg1;
- (void)unfoldDislikeReasonsList;
- (void)showSpeedControl;
- (void)configWithReasonModels:(id)arg0 aweme:(id)arg1;
- (void)updateCollectionViewScrollability;
- (void)sendIMIfNeeded;
- (id)baseCollectionView;
- (long long)indexOfDislike;
- (void)configWithReasonModels:(id)arg0;
- (double)longPressMenuHeight;
- (void)setLongPressMenuHeight:(double)arg0;
- (id)initWithContext:(id)arg0;
- (id)init;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (BOOL)isEmpty;

@end