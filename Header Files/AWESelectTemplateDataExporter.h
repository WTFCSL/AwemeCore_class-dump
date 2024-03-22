//
//     Generated by private class-dump
//

@class AWECutSameDataExporter, LVExporterManager;

@interface AWESelectTemplateDataExporter : NSObject {
    BOOL _cancelByUser;
    LVExporterManager *_exporter;
    AWECutSameDataExporter *_cutSameExporter;
}

@property (retain, nonatomic) LVExporterManager *exporter;
@property (retain, nonatomic) AWECutSameDataExporter *cutSameExporter;
@property (nonatomic) BOOL cancelByUser;

- (void)dataExportCancel;
- (void)dataExportWithPublishModel:(id)arg0 inputModel:(id)arg1 needReplaceMusic:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)quickSaveInOneClickFilmingPublishModel:(id)arg0 inputModel:(id)arg1;
- (id)cutSameExporter;
- (void)dataExportForOneClickFilmingWithPublishModel:(id)arg0 inputModel:(id)arg1 needReplaceMusic:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setCancelByUser:(BOOL)arg0;
- (void)p_addEditedTextsForAudit:(id)arg0 inputModel:(id)arg1;
- (void)setCutSameExporter:(id)arg0;
- (BOOL)cancelByUser;
- (void).cxx_destruct;
- (id)exporter;
- (void)setExporter:(id)arg0;

@end
