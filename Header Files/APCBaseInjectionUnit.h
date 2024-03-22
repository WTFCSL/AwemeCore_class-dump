//
//     Generated by private class-dump
//

@class NSString, AWEVideoPublishViewModel;
@protocol APCParameterizedInjectionUnitManagerPrivate;

@interface APCBaseInjectionUnit : NSObject <APCParameterizedInjectionUnit> {
    AWEVideoPublishViewModel *_repoContainer;
    id<APCParameterizedInjectionUnitManagerPrivate> _weakManager;
}

@property (weak, nonatomic) id<APCParameterizedInjectionUnitManagerPrivate> weakManager;
@property (retain, nonatomic) AWEVideoPublishViewModel *repoContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackPresetService;
- (id)repoContainer;
- (void)setRepoContainer:(id)arg0;
- (void).cxx_destruct;
- (void)setWeakManager:(id)arg0;
- (id)weakManager;

@end