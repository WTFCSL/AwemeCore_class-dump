//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveEffectAdServiceImpl : NSObject <IESLiveEffectAdService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackLiveEffectAdEvent:(id)arg0 extra:(id)arg1;
- (void)trackLiveEffectAdBizEvent:(id)arg0 extra:(id)arg1;
- (void)__trackLiveAdWithLabel:(id)arg0 extra:(id)arg1;
- (void)__trackLiveBizEvent:(id)arg0 params:(id)arg1;

@end