//
//     Generated by private class-dump
//

@class NSString, UIImage;

@interface AWERepoDualCameraModel : NSObject <AWERepositoryDraftProtocol, NSCopying, ACCRepoRegister, ACCRepositoryDraftContextDeprecated, ACCRepositoryTrackContextDeprecated, ACCRepoDualCameraData> {
    BOOL _isDual;
    BOOL _isReal;
    BOOL _enableDual;
    UIImage *_minorImage;
    NSString *_minorImageRelativePath;
    long long _firstCameraPosition;
    id /* block */ _cameraPositionIsBackBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isDual;
@property (retain, nonatomic) UIImage *minorImage;
@property (copy, nonatomic) NSString *minorImageRelativePath;
@property (nonatomic) BOOL isReal;
@property (nonatomic) long long firstCameraPosition;
@property (readonly, nonatomic) unsigned long long dualCameraMode;
@property (nonatomic) BOOL enableDual;
@property (copy, nonatomic) id /* block */ cameraPositionIsBackBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;

- (BOOL)isDual;
- (void)setIsDual:(BOOL)arg0;
- (BOOL)isReal;
- (void)setIsReal:(BOOL)arg0;
- (long long)firstCameraPosition;
- (void)setFirstCameraPosition:(long long)arg0;
- (id)initWithDraft:(id)arg0;
- (void)saveWithDraft:(id)arg0;
- (id)acc_publishTrackEventParams:(id)arg0;
- (void)draftWillBeSavedWithID:(id)arg0;
- (void)modelDidRetrievedFromDraftWithID:(id)arg0;
- (BOOL)enableDual;
- (id)minorImageRelativePath;
- (id)minorImage;
- (unsigned long long)dualCameraMode;
- (void)setMinorImageRelativePath:(id)arg0;
- (void)setEnableDual:(BOOL)arg0;
- (void)setCameraPositionIsBackBlock:(id /* block */)arg0;
- (void)setMinorImage:(id)arg0;
- (void)saveImageToFile:(id)arg0 needSync:(BOOL)arg1;
- (id /* block */)cameraPositionIsBackBlock;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;

@end
