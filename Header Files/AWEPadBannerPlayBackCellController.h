//
//     Generated by private class-dump
//

@class AWEPadPolymericChannelBannerReplayCellView;

@interface AWEPadBannerPlayBackCellController : AWEPLVConfigurationTriptychBannerCellController {
    BOOL _isShowing;
    AWEPadPolymericChannelBannerReplayCellView *_replayCellView;
}

@property (retain, nonatomic) AWEPadPolymericChannelBannerReplayCellView *replayCellView;
@property (nonatomic) BOOL isShowing;

- (void)setIsShowing:(BOOL)arg0;
- (void)enableAutoCarousel;
- (void)configView:(id)arg0;
- (void)viewDidDisplay;
- (void)viewDidEndDisplay;
- (void)addCoverImage;
- (void)removeCoverImage;
- (id)replayCellView;
- (void)setReplayCellView:(id)arg0;
- (void).cxx_destruct;
- (Class)viewClass;
- (BOOL)isShowing;
- (void)dealloc;
- (void)didSelectItemAtIndex:(long long)arg0;

@end
