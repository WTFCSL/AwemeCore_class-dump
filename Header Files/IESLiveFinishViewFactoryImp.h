//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveFinishViewFactoryImp : NSObject <IESLiveFinishViewFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)anchorControllerWithRoom:(id)arg0 forbiddenUrl:(id)arg1 title:(id)arg2 violationReason:(id)arg3 displayText:(id)arg4 anchorPerfTracker:(id)arg5 trackContext:(id)arg6;
- (id)newAudienceFinishControllerWithRoom:(id)arg0 trackContext:(id)arg1 params:(id)arg2 closeBlock:(id /* block */)arg3 isHTSNotInLive:(BOOL)arg4;
- (id)roomFromModel:(id)arg0;
- (id)functionTypeWithContext:(id)arg0;

@end