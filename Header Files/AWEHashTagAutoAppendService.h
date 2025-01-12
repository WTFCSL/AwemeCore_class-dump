//
//     Generated by private class-dump
//

@class NSString, AWEVideoPublishViewModel;
@protocol ACCVideoConfigProtocol;

@interface AWEHashTagAutoAppendService : NSObject <ACCHashTagAppendService> {
    NSString *_defaultTitleFromVideoRouter;
    AWEVideoPublishViewModel *_publishModel;
    id<ACCVideoConfigProtocol> _config;
}

@property (retain, nonatomic) id<ACCVideoConfigProtocol> config;
@property (retain, nonatomic) NSString *defaultTitleFromVideoRouter;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (void)updatePublishTitleIfShouldMentionUserAutomatically:(id)arg0;
- (void)updatePublishTitleWithHashTagArray:(id)arg0 appendingPublishTitle:(id)arg1;
- (id)defaultTitleFromVideoRouter;
- (void)appendHashTagIfNeededWithAppendPublishTitle:(id)arg0;
- (id)appendingPublishTitle;
- (id)appendingPublishTitleForSelectMusic;
- (void)saveHashTagToTitleExtraInfo;
- (id)generatepublishTitleWithChallengeNames:(id)arg0 publishTItle:(id)arg1;
- (void)setDefaultTitleFromVideoRouter:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;

@end
