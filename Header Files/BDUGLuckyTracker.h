//
//     Generated by private class-dump
//

@class NSDictionary, NSMutableArray;

@interface BDUGLuckyTracker : NSObject {
    NSMutableArray *_paramsBlock;
    NSDictionary *_samplingSettings;
}

@property (retain, nonatomic) NSMutableArray *paramsBlock;
@property (copy, nonatomic) NSDictionary *samplingSettings;

+ (void)event:(id)arg0 params:(id)arg1;
+ (void)event:(id)arg0 params:(id)arg1 needLuckyTeaKey:(BOOL)arg2;
+ (BOOL)__shouldUploadEvent:(id)arg0;
+ (id)sharedInstance;

- (void)addCommonParamsBlock:(id /* block */)arg0;
- (void)updateSamplingSettings:(id)arg0;
- (id)paramsBlock;
- (void)setParamsBlock:(id)arg0;
- (id)samplingSettings;
- (void)setSamplingSettings:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
