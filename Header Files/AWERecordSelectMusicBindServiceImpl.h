//
//     Generated by private class-dump
//

@class NSString, ACCRecordSelectMusicServiceImpl, AWEVideoPublishViewModel;
@protocol IESServiceProvider;

@interface AWERecordSelectMusicBindServiceImpl : NSObject <ACCRecordSelectMusicBindService> {
    AWEVideoPublishViewModel *_repository;
    id<IESServiceProvider> _serviceProvider;
    ACCRecordSelectMusicServiceImpl *_selectMusicViewModel;
}

@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) ACCRecordSelectMusicServiceImpl *selectMusicViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRepository:(id)arg0 serviceProvider:(id)arg1;
- (void)bindSelectMusicViewModel:(id)arg0;
- (void)bindAllService;
- (void)bindResourceLoadedService;
- (void)bindPropService;
- (void)bindMVSelectService;
- (void)setSelectMusicViewModel:(id)arg0;
- (void)addMusicShootSameMusicResourceApplyTrackNode;
- (id)selectMusicViewModel;
- (void)trackMusicShootSameMusicDidApplyIfNeed;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (void)setRepository:(id)arg0;
- (id)serviceProvider;
- (id)repository;

@end
