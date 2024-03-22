//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSMutableArray;

@interface MLSDKInferenceEngine : NSObject <IInferenceEngine> {
    NSMutableDictionary *_params;
    NSMutableArray *_paramsPre;
    NSString *_url;
}

@property (retain, nonatomic) NSMutableDictionary *params;
@property (retain, nonatomic) NSMutableArray *paramsPre;
@property (copy, nonatomic) NSString *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)predictWithParam:(id)arg0 engineCallback:(id /* block */)arg1;
- (id)getPlayTimeMLModel;
- (id)changeInputParamFormat:(id)arg0;
- (id)paramsPre;
- (void)setParamsPre:(id)arg0;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (void)prepare;
- (id)params;
- (id)url;
- (void)setParams:(id)arg0;
- (id)initWithUrl:(id)arg0;

@end