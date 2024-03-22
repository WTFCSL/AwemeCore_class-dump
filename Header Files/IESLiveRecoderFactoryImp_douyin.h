//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveRecoderFactoryImp_douyin : NSObject <IESLiveRecoderFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createIESLiveRecoderForFastStartLive;
- (id)createIESLiveRecoderWithVERecorderProtocol:(id)arg0;
- (id)recoderWithPreview:(id)arg0 config:(struct { struct CGSize { double x0; double x1; } x0; unsigned long long x1; long long x2; })arg1 source:(long long)arg2;
- (long long)currentCaptureOrientation;

@end