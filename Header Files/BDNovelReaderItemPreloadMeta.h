//
//     Generated by private class-dump
//

@class BDNovelReaderChapter;

@interface BDNovelReaderItemPreloadMeta : NSObject {
    BDNovelReaderChapter *_detail;
    double _timeStamp;
    double _downloadCost;
}

@property (retain, nonatomic) BDNovelReaderChapter *detail;
@property (nonatomic) double timeStamp;
@property (nonatomic) double downloadCost;

- (void)setDownloadCost:(double)arg0;
- (double)downloadCost;
- (void)setDetail:(id)arg0;
- (void).cxx_destruct;
- (double)timeStamp;
- (BOOL)isValid;
- (id)detail;
- (void)setTimeStamp:(double)arg0;

@end
