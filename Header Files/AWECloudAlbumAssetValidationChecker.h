//
//     Generated by private class-dump
//

@interface AWECloudAlbumAssetValidationChecker : NSObject

+ (BOOL)validNewClipsAssetModelForVideo:(double)arg0;
+ (id)checkVideoWithWidth:(double)arg0 height:(double)arg1 duration:(double)arg2;
+ (id)checkPhotoWithWidth:(double)arg0 height:(double)arg1;
+ (BOOL)exceedMaxDurationForAIVideoClip:(double)arg0;
+ (BOOL)validResolutionAssetModelForVideoWidth:(double)arg0 height:(double)arg1;
+ (id)checkAssetValidation:(id)arg0;

@end
