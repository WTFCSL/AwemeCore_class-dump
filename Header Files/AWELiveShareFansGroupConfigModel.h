//
//     Generated by private class-dump
//

@class NSURL;

@interface AWELiveShareFansGroupConfigModel : NSObject {
    NSURL *_firstCoveryUrl;
    NSURL *_secondCoveryUrl;
    NSURL *_resourceCoveryUrl;
    struct CGSize { double width; double height; } _containerSize;
}

@property (retain, nonatomic) NSURL *firstCoveryUrl;
@property (retain, nonatomic) NSURL *secondCoveryUrl;
@property (retain, nonatomic) NSURL *resourceCoveryUrl;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;

- (id)firstCoveryUrl;
- (void)setFirstCoveryUrl:(id)arg0;
- (id)secondCoveryUrl;
- (void)setSecondCoveryUrl:(id)arg0;
- (id)resourceCoveryUrl;
- (void)setResourceCoveryUrl:(id)arg0;
- (void)setContainerSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })containerSize;
- (void).cxx_destruct;

@end
