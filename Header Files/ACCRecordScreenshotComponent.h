//
//     Generated by private class-dump
//

@protocol ACCRecordPropService;

@interface ACCRecordScreenshotComponent : ACCFeatureComponent {
    id<ACCRecordPropService> _propService;
}

@property (retain, nonatomic) id<ACCRecordPropService> propService;

- (void)componentDidAppear;
- (void)componentDidDisappear;
- (id)propService;
- (void)setPropService:(id)arg0;
- (void)p_onUserDidTakeScreenshot;
- (void).cxx_destruct;

@end