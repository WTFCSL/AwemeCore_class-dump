//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface AWEPublishCommonParamProvider : NSObject <AWEPublishTrackParamProvider> {
    NSDictionary *_params;
}

@property (retain, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)paramsForPublish:(id)arg0 publishModel:(id)arg1;
- (id)paramsForPublishFinish:(id)arg0 publishModel:(id)arg1;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:(id)arg0;

@end
