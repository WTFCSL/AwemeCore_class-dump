//
//     Generated by private class-dump
//

@class AWEVideoPublishViewModel;
@protocol ACCSequenceEditServiceProtocol;

@interface ACCCreationToolDataExporter : NSObject {
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    AWEVideoPublishViewModel *_repoContainer;
}

@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) AWEVideoPublishViewModel *repoContainer;

- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (id)repoContainer;
- (void)setRepoContainer:(id)arg0;
- (id)initWithRepoContainer:(id)arg0;
- (void)cancelWithToken:(id)arg0;
- (void).cxx_destruct;

@end