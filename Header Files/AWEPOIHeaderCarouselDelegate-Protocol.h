//
//     Generated by private class-dump
//

@protocol AWEPOIHeaderCarouselDelegate <NSObject>

- (void)poiHeaderCarousel:(id)arg0 didSelectedAtIndex:(long long)arg1;

@optional

- (void)poiHeaderCarousel:(id)arg0 willDisplayCell:(id)arg1 index:(long long)arg2;
- (void)poiHeaderCarousel:(id)arg0 didStartScrollAtIndex:(long long)arg1 indexPathRow:(long long)arg2;
- (void)poiHeaderCarouselLoadMore:(id)arg0;
- (void)poiHeaderCarousel:(id)arg0 didEndScrollAtIndex:(long long)arg1 indexPathRow:(long long)arg2;

@end