//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCRecordPropService, ACCCameraService;

@protocol ACCScanService <NSObject>

@property (readonly, nonatomic) BOOL bachPropScanIsRunning;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (copy, nonatomic) NSString *scanReferString;

- (void)releaseImageDetector;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (id)propService;
- (void)setPropService:(id)arg0;
- (BOOL)bachPropScanIsRunning;
- (void)cancelBachPropScan;
- (id)scanByImageDetector:(id)arg0;
- (void)prefetchBachPropResource;
- (void)scanByBachProp:(id /* block */)arg0;
- (id)scanReferString;
- (void)setScanReferString:(id)arg0;

@end
