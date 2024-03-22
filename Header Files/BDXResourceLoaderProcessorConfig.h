//
//     Generated by private class-dump
//

@class NSArray;

@interface BDXResourceLoaderProcessorConfig : NSObject {
    BOOL _disableDefaultProcessors;
    NSArray *_highProcessorProviderArray;
    NSArray *_lowProcessorProviderArray;
    NSArray *_defaultProcessorsSequence;
}

@property (copy, nonatomic) NSArray *highProcessorProviderArray;
@property (copy, nonatomic) NSArray *lowProcessorProviderArray;
@property (nonatomic) BOOL disableDefaultProcessors;
@property (copy, nonatomic) NSArray *defaultProcessorsSequence;

- (void)setDefaultProcessorsSequence:(id)arg0;
- (id)highProcessorProviderArray;
- (BOOL)disableDefaultProcessors;
- (id)lowProcessorProviderArray;
- (void)setHighProcessorProviderArray:(id)arg0;
- (void)setLowProcessorProviderArray:(id)arg0;
- (void)setDisableDefaultProcessors:(BOOL)arg0;
- (id)defaultProcessorsSequence;
- (void).cxx_destruct;

@end
