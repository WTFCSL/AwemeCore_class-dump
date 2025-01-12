//
//     Generated by private class-dump
//

@class NSString, AWEHPTabJumpModelContext;

@interface AWEHPMallTabJumpModel : NSObject <AWEHPTabJumpModelProtocol> {
    AWEHPTabJumpModelContext *_context;
}

@property (retain, nonatomic) AWEHPTabJumpModelContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEHPMallTabJumpModelDOUYINLiteAdapterClass;

- (void)tabJumpGuideShowWithModel:(id)arg0 withComponent:(id)arg1 withTrackParams:(id)arg2;
- (BOOL)shouldLoadTabJumpGuide;
- (id)handleJumpInfoModelIfNeedWithModel:(id)arg0;
- (id)landingUrlWithModel:(id)arg0 withUrlString:(id)arg1 withComponent:(id)arg2;
- (void)landingUrlCompletion:(BOOL)arg0;
- (id)aAWEHPMallTabJumpModelDOUYINLiteAdapter;
- (id)createJumpToMallTrackParamsWithMethod:(id)arg0 withModel:(id)arg1;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end
