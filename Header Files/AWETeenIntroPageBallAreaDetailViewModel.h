//
//     Generated by private class-dump
//

@class AWETeenIntroPageBallAreaDetailPageDataController, NSString, AWETeenIntroPageCollectionFlowSectionViewModel;

@interface AWETeenIntroPageBallAreaDetailViewModel : AWEBaseListViewModel {
    NSString *_resourceID;
    AWETeenIntroPageBallAreaDetailPageDataController *_dataController;
    NSString *_title;
    AWETeenIntroPageCollectionFlowSectionViewModel *_collectionFlowViewModel;
}

@property (retain, nonatomic) AWETeenIntroPageBallAreaDetailPageDataController *dataController;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) AWETeenIntroPageCollectionFlowSectionViewModel *collectionFlowViewModel;
@property (retain, nonatomic) NSString *resourceID;

- (void)loadMoreListData;
- (void)setDataController:(id)arg0;
- (void)updateResourceID:(id)arg0;
- (void)setupSectionViewModel;
- (void)initfetchListData;
- (void)setCollectionFlowViewModel:(id)arg0;
- (id)collectionFlowViewModel;
- (void)setResourceID:(id)arg0;
- (void).cxx_destruct;
- (id)resourceID;
- (id)title;
- (void)setTitle:(id)arg0;
- (id)dataController;

@end