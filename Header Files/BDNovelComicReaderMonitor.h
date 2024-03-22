//
//     Generated by private class-dump
//

@class BDNovelComicManager, BDNovelComicOpenModel;

@interface BDNovelComicReaderMonitor : NSObject {
    BOOL _isFirstScreen;
    BDNovelComicOpenModel *_readerModel;
    BDNovelComicManager *_readerManager;
    double _beginStamp;
}

@property (nonatomic) BOOL isFirstScreen;
@property (nonatomic) double beginStamp;
@property (weak, nonatomic) BDNovelComicOpenModel *readerModel;
@property (weak, nonatomic) BDNovelComicManager *readerManager;

- (void)beginMonitor;
- (id)readerModel;
- (void)setReaderModel:(id)arg0;
- (id)readerManager;
- (void)reportFirstScreen:(unsigned long long)arg0;
- (void)setReaderManager:(id)arg0;
- (void)reportBookInfoLoad:(id)arg0;
- (void)reportItemInfoLoad:(id)arg0 error:(id)arg1 time:(double)arg2;
- (void)reportImageContent:(id)arg0 time:(double)arg1 imageInfo:(id)arg2 imageSize:(double)arg3;
- (void)setBeginStamp:(double)arg0;
- (BOOL)isFirstScreen;
- (void)setIsFirstScreen:(BOOL)arg0;
- (double)beginStamp;
- (id)init;
- (void).cxx_destruct;

@end