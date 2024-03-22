//
//     Generated by private class-dump
//

@class NSNumber;

@interface AWEGlobalVisionManager : NSObject {
    NSNumber *_firstIndexInHomepageHot;
    NSNumber *_firstIndexInHomepageFollow;
}

@property (retain, nonatomic) NSNumber *firstIndexInHomepageHot;
@property (retain, nonatomic) NSNumber *firstIndexInHomepageFollow;

+ (BOOL)referStringIsReadyForGlobalVision:(id)arg0;
+ (BOOL)enableGlobalVisionGuideOptimize;
+ (double)cellCoverImageHeightWithCellWithSize:(struct CGSize { double x0; double x1; })arg0 cellWidth:(double)arg1;
+ (id)getSelectedLiveModel;
+ (void)setSelectedLiveModel:(id)arg0;
+ (void)setHolderModel:(id)arg0;
+ (id)getHolderModel;
+ (void)recordGlobalVisionShowed;
+ (id)getGlobalVisionTitle:(id)arg0;
+ (BOOL)feedHaveAdsIcon:(id)arg0;
+ (BOOL)isGlobalVisionShowed;
+ (unsigned long long)globalVisionAdType;
+ (id)feedAdsIcon:(id)arg0;
+ (BOOL)isGlobalVisionModel:(id)arg0;
+ (id)sharedInstance;

- (void)setFirstIndexInHomepageHot:(id)arg0;
- (void)setFirstIndexInHomepageFollow:(id)arg0;
- (id)firstIndexInHomepageHot;
- (id)firstIndexInHomepageFollow;
- (void).cxx_destruct;

@end
