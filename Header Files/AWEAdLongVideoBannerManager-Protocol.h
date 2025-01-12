//
//     Generated by private class-dump
//

@protocol AWEAdLongVideoBannerManager <AWECrotocol>

+ (BOOL)canAdBannerShowInLongVideo:(id)arg0;

@property (copy, nonatomic) id /* block */ receiveAdDataBlock;
@property (copy, nonatomic) id /* block */ bannerUIDidChangeBlock;
@property (copy, nonatomic) id /* block */ bannerDidDisappearBlock;
@property (copy, nonatomic) id /* block */ bannerShowBlock;

- (id /* block */)receiveAdDataBlock;
- (id /* block */)bannerDidDisappearBlock;
- (void)startFetchLongVideoAdBannerData:(id)arg0;
- (void)loadAdBannerWithContainer:(id)arg0 hasPreBanner:(BOOL)arg1;
- (void)setReceiveAdDataBlock:(id /* block */)arg0;
- (id /* block */)bannerUIDidChangeBlock;
- (void)setBannerUIDidChangeBlock:(id /* block */)arg0;
- (void)setBannerDidDisappearBlock:(id /* block */)arg0;
- (id /* block */)bannerShowBlock;
- (void)setBannerShowBlock:(id /* block */)arg0;
- (void)reset;

@end
