//
//     Generated by private class-dump
//

@protocol ACCSequenceEditServiceProtocol;

@interface AWEPostPageSlidesPreviewUtil : AWEPostPagePreviewUtilHandler {
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
}

@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;

- (void)bindServices:(id)arg0;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (void)configCoverImage;
- (id)configPreviewControllerWithImage:(id)arg0 index:(double)arg1 editService:(id)arg2;
- (void).cxx_destruct;

@end
