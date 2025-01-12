//
//     Generated by private class-dump
//

@interface AWEAssetValidChecker : NSObject

+ (long long)videoSelectableMinSeconds;
+ (long long)videoSelectableMaxSeconds;
+ (double)minVideoRatio;
+ (double)maxVideoRatio;
+ (long long)minAssetsSelectionCount;
+ (long long)maxAssetsSelectionCount;
+ (BOOL)validAssetModelForPhoto:(id)arg0;
+ (double)minPhotoRatio;
+ (double)maxPhotoRatio;
+ (BOOL)validResolutionAssetModelForVideo:(id)arg0;
+ (BOOL)validNewClipsAssetModelForVideo:(id)arg0;
+ (BOOL)validAIClipsAssetModelForVideo:(id)arg0;
+ (long long)videoResolution;

@end
