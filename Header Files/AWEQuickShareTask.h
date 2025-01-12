//
//     Generated by private class-dump
//

@class ACCEditorSilentPublisher, AWEVideoPublishViewModel;
@protocol AWEQuickShareTaskDelegate, AWEShareToStoryModelProtocol;

@interface AWEQuickShareTask : NSObject {
    id<AWEQuickShareTaskDelegate> _delegate;
    AWEVideoPublishViewModel *_publishModel;
    id<AWEShareToStoryModelProtocol> _storyModel;
    ACCEditorSilentPublisher *_silentPublisher;
}

@property (weak, nonatomic) id<AWEQuickShareTaskDelegate> delegate;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<AWEShareToStoryModelProtocol> storyModel;
@property (retain, nonatomic) ACCEditorSilentPublisher *silentPublisher;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (void)setSilentPublisher:(id)arg0;
- (void)doPublish;
- (id)silentPublisher;
- (id)initWithStoryModel:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)cancel;
- (BOOL)isEqual:(id)arg0;
- (void)start;
- (void)setDelegate:(id)arg0;
- (void)setStoryModel:(id)arg0;
- (id)storyModel;

@end
