//
//     Generated by private class-dump
//

@interface IESECGoodsDetailRecommendViewModel : IESECGoodsDetailPageBaseViewModel

- (void)setupViewModel;
- (void)listAdapter:(id)arg0 willDisplaySectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg0 didEndDisplayingSectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (void)trackRecommendProductShow:(id)arg0 index:(long long)arg1 cell:(id)arg2;
- (void)trackRecommendLiveShow:(id)arg0 index:(long long)arg1;
- (void)trackLynxCardShow:(id)arg0 index:(long long)arg1;
- (void)trackRecommendProductShowOver:(id)arg0 index:(long long)arg1;
- (void)trackRecommendLiveShowOver:(id)arg0 index:(long long)arg1;
- (void)bstTrackWithCell:(id)arg0 recommendItem:(id)arg1 index:(long long)arg2 trackParams:(id)arg3 filterList:(id)arg4;

@end