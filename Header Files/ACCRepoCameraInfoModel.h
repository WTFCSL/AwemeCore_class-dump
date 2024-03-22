//
//     Generated by private class-dump
//

@class NSString;

@interface ACCRepoCameraInfoModel : NSObject <NSCopying, ACCRepoRegister, ACCRepoCameraInfoData> {
    long long _initialCameraDevicePosition;
    unsigned long long _initialCameraFlashMode;
}

@property (nonatomic) long long initialCameraDevicePosition;
@property (nonatomic) unsigned long long initialCameraFlashMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;
+ (long long)repo_scope;

- (long long)initialCameraDevicePosition;
- (unsigned long long)initialCameraFlashMode;
- (void)setInitialCameraFlashMode:(unsigned long long)arg0;
- (void)setInitialCameraDevicePosition:(long long)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;

@end
