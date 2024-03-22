//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AWELiveClientAI : NSObject <AWEFeedFeatureProviderProtocol> {
    NSMutableDictionary *_liveFeatureDict;
}

@property (retain, nonatomic) NSMutableDictionary *liveFeatureDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)provideCustomFeatureForModel:(id)arg0 inFeedScene:(id)arg1;
- (id)provideFeatureForModel:(id)arg0 inFeedScene:(id)arg1;
- (id)liveFeatureDict;
- (void)setLiveFeatureDict:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
