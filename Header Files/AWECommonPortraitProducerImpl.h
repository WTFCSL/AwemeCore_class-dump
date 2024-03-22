//
//     Generated by private class-dump
//

@class NSDictionary;

@interface AWECommonPortraitProducerImpl : IESMutablePortraitProducer {
    NSDictionary *_portraitHandlerMap;
}

@property (retain, nonatomic) NSDictionary *portraitHandlerMap;

+ (id)sharedInstance;

- (id)getPortrait:(id)arg0;
- (id)getPortraits;
- (void)doSetup;
- (void)configKeys;
- (void)setPortraitHandlerMap:(id)arg0;
- (id)portraitHandlerMap;
- (id)buildCustomKeysAndConfigs;
- (BOOL)containsKey:(id)arg0;
- (void).cxx_destruct;

@end
