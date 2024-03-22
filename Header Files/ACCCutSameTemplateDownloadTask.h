//
//     Generated by private class-dump
//

@class NSMutableArray;
@protocol ACCMVTemplateModelProtocol;

@interface ACCCutSameTemplateDownloadTask : ACCFileDownloadTask {
    id<ACCMVTemplateModelProtocol> _templateModel;
    NSMutableArray *_completionBlocks;
}

@property (retain, nonatomic) id<ACCMVTemplateModelProtocol> templateModel;
@property (retain, nonatomic) NSMutableArray *completionBlocks;

- (void).cxx_destruct;
- (void)setCompletionBlocks:(id)arg0;
- (id)completionBlocks;
- (id)templateModel;
- (void)setTemplateModel:(id)arg0;

@end