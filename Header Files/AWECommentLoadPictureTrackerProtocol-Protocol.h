//
//     Generated by private class-dump
//

@class NSString, NSArray;

@protocol AWECommentLoadPictureTrackerProtocol <NSObject>

@property (nonatomic) unsigned long long loadResult;
@property (nonatomic) unsigned long long loadSize;
@property (nonatomic, copy) NSString *loadResolution;
@property (nonatomic, copy) NSArray *loadURL;
@property (nonatomic) long long loadErrorCode;
@property (nonatomic, copy) NSString *coverType;
@property (nonatomic) BOOL loadHitCache;
@property (nonatomic) double startTimeStamp;
@property (nonatomic) BOOL isLivePhotoPlayInFull;

- (double)currentLoadDuration;
- (void)setIsLivePhotoPlayInFull:(BOOL)arg0;
- (void)setLoadResult:(unsigned long long)arg0;
- (void)setStartTimeStamp:(double)arg0;
- (void)setCoverType:(id)arg0;
- (void)updateParams:(unsigned long long)arg0 duration:(double)arg1 size:(unsigned long long)arg2 resolution:(id)arg3;
- (void)setLoadErrorCode:(long long)arg0;
- (void)setLoadHitCache:(BOOL)arg0;
- (void)setLoadSize:(unsigned long long)arg0;
- (void)setLoadResolution:(id)arg0;
- (unsigned long long)loadResult;
- (double)getLoadDuration;
- (unsigned long long)loadSize;
- (id)loadResolution;
- (long long)loadErrorCode;
- (id)coverType;
- (BOOL)loadHitCache;
- (BOOL)isLivePhotoPlayInFull;
- (void)setLoadURL:(id)arg0;
- (id)loadURL;
- (double)startTimeStamp;

@end
