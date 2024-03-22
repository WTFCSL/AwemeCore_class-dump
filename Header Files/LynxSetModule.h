//
//     Generated by private class-dump
//

@class NSString, NSDictionary, LynxContext;

@interface LynxSetModule : NSObject <LynxContextModule> {
    LynxContext *context_;
}

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (retain, nonatomic) id extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)methodLookup;
+ (id)name;

- (void)setEnableNewTransformOrigin:(BOOL)arg0;
- (id)initWithLynxContext:(id)arg0;
- (BOOL)getEnableLayoutOnly;
- (void)setAutoResumeAnimation:(BOOL)arg0;
- (BOOL)getAutoResumeAnimation;
- (BOOL)getEnableNewTransformOrigin;
- (void)switchKeyBoardDetect:(BOOL)arg0;
- (id)getLogToSystemStatus;
- (void)switchLogToSystem:(BOOL)arg0;
- (void)switchAutomation:(BOOL)arg0;
- (void)switchEnableLayoutOnly:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)isAutomationEnabled;

@end