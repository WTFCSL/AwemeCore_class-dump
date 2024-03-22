//
//     Generated by private class-dump
//

@class NSString;

@interface AWECAKCommonConfigImpl : NSObject <CAKCommonConfigProtocol> {
    BOOL _optimzieNextiCloud;
    long long _coverImageCacheCount;
    BOOL _albumChangedPhassetSyncStrategy;
    BOOL _albumUseNewDataLayer;
    BOOL _useBpeaApiSwitch;
    BOOL _enableBatchPHChange;
    BOOL _showMediaTypeImageView;
    BOOL _enablePreloadDebug;
    BOOL _disablePhotoLibraryChangeObserverForIOS17;
    BOOL _selectCoverImageOpt;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)albumUseNewDataLayer;
- (BOOL)optimzieNextiCloud;
- (long long)coverImageCacheCount;
- (BOOL)showMediaTypeImageView;
- (BOOL)useBpeaApi;
- (BOOL)enableBatchPHChanges;
- (BOOL)albumChangedPhassetSyncStrategy;
- (BOOL)enablePreloadDebug;
- (BOOL)disablePhotoLibraryChangeObserverForIOS17;
- (BOOL)selectCoverImageOpt;
- (id)init;

@end