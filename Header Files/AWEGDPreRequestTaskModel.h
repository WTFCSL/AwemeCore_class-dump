//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface AWEGDPreRequestTaskModel : NSObject {
    NSDictionary *_params;
    NSString *_bizCode;
    NSString *_cacheFrom;
    id /* block */ _completion;
}

@property (retain, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *bizCode;
@property (copy, nonatomic) NSString *cacheFrom;
@property (copy, nonatomic) id /* block */ completion;

- (id)bizCode;
- (void)setBizCode:(id)arg0;
- (id)cacheFrom;
- (void)setCacheFrom:(id)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (id)params;
- (void)setParams:(id)arg0;

@end
