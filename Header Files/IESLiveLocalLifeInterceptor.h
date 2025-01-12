//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESLiveLocalLifeInterceptor : NSObject <IESLiveTrackerDelegate> {
    NSArray *_interceptList;
}

@property (retain, nonatomic) NSArray *interceptList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)rebuildLifeExtraInfoParams:(id)arg0;
- (void)willCommitTrackEvent:(id)arg0 params:(id)arg1;
- (id)interceptList;
- (void)setInterceptList:(id)arg0;
- (BOOL)isInLifeCartList:(id)arg0;
- (BOOL)isInEnvList:(id)arg0;
- (id)lifeCartInterceptList;
- (id)envInterceptList;
- (void).cxx_destruct;

@end
