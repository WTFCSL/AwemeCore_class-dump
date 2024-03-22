//
//     Generated by private class-dump
//

@class ACCVoiceEffectCategoryDataSource, ACCVoiceEffectCollectionPage;

@interface ACCVoiceEffectSelectPageContainer : UIViewController {
    unsigned long long _tabIndex;
    ACCVoiceEffectCategoryDataSource *_dataSource;
    ACCVoiceEffectCollectionPage *_collectionPage;
}

@property (retain, nonatomic) ACCVoiceEffectCollectionPage *collectionPage;
@property (nonatomic) unsigned long long tabIndex;
@property (retain, nonatomic) ACCVoiceEffectCategoryDataSource *dataSource;

- (void)injectDataSource:(id)arg0;
- (id)collectionPage;
- (void)setCollectionPage:(id)arg0;
- (BOOL)pageContainerReadyToShow;
- (void)injectCollectionPage:(id)arg0;
- (void)pageContainerWillShow;
- (void)pageContainerDidDismiss;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (unsigned long long)tabIndex;
- (void)setTabIndex:(unsigned long long)arg0;

@end