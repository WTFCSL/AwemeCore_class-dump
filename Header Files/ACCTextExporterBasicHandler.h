//
//     Generated by private class-dump
//

@class AWEVideoPublishViewModel;

@interface ACCTextExporterBasicHandler : NSObject {
    AWEVideoPublishViewModel *_publishModel;
}

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (id)initWithPublishModel:(id)arg0;
- (BOOL)shouldTextExport;
- (long long)countToUpload;
- (id)textsToUpload;
- (void).cxx_destruct;

@end