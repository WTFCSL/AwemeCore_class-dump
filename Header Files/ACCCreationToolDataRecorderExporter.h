//
//     Generated by private class-dump
//

@class ACCCreationToolDataVideoExporter;

@interface ACCCreationToolDataRecorderExporter : ACCCreationToolDataExporter {
    ACCCreationToolDataVideoExporter *_videoExporter;
}

@property (retain, nonatomic) ACCCreationToolDataVideoExporter *videoExporter;

- (id)mergeImagePathWithTaskID:(id)arg0 uuid:(id)arg1;
- (id)exportItemOnCompletion:(id /* block */)arg0;
- (void)cancelWithToken:(id)arg0;
- (id)videoExporter;
- (void)setVideoExporter:(id)arg0;
- (void).cxx_destruct;

@end
