//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface CJPayAIEnginePluginImpl : NSObject <CJPayAIEnginePlugin> {
    NSMutableDictionary *_outputs;
}

@property (retain, nonatomic) NSMutableDictionary *outputs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)shareInstance;

- (id)getOutputForBusiness:(id)arg0;
- (void).cxx_destruct;
- (id)outputs;
- (void)setup;
- (void)setOutputs:(id)arg0;

@end
