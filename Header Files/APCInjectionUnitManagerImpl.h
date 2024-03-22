//
//     Generated by private class-dump
//

@class NSString, APCCommonInjectionUnit, AWEVideoPublishViewModel;
@protocol APCParameterizedTrackService;

@interface APCInjectionUnitManagerImpl : NSObject <APCParameterizedInjectionUnitManagerPrivate> {
    AWEVideoPublishViewModel *_repoContainer;
    id<APCParameterizedTrackService> _trackPresetService;
    APCCommonInjectionUnit *_commonUnit;
}

@property (retain, nonatomic) APCCommonInjectionUnit *commonUnit;
@property (retain, nonatomic) AWEVideoPublishViewModel *repoContainer;
@property (retain, nonatomic) id<APCParameterizedTrackService> trackPresetService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackPresetService;
- (id)repoContainer;
- (void)setRepoContainer:(id)arg0;
- (id)commonUnit;
- (void)setTrackPresetService:(id)arg0;
- (void)setCommonUnit:(id)arg0;
- (void).cxx_destruct;

@end