//
//     Generated by private class-dump
//

@class NSString;

@interface AWEImageTemplatePublishParamProvider : NSObject <AWEPublishTrackParamProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)p_trackParamsForPublishModel:(id)arg0;
- (id)paramsForPublish:(id)arg0 publishModel:(id)arg1;
- (id)paramsForPublishFinish:(id)arg0 publishModel:(id)arg1;

@end