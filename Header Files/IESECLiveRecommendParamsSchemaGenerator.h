//
//     Generated by private class-dump
//

@class IESECLiveContext;

@interface IESECLiveRecommendParamsSchemaGenerator : NSObject {
    IESECLiveContext *_liveContext;
}

@property (retain, nonatomic) IESECLiveContext *liveContext;

- (void)setLiveContext:(id)arg0;
- (id)liveContext;
- (id)initWithLiveContext:(id)arg0;
- (id)getRecommendInfo;
- (id)appendRecommendParamsToSchemaIfNeeded:(id)arg0;
- (id)p_appendRecommendToComponentsDic:(id)arg0;
- (void).cxx_destruct;

@end
