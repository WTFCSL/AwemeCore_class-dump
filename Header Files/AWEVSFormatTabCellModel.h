//
//     Generated by private class-dump
//

@class NSString, AWEVSFormatTabListModel, AWEVSFormatTabStreamingModel;

@interface AWEVSFormatTabCellModel : NSObject {
    unsigned long long _cellType;
    NSString *_seasonID;
    NSString *_seasonTag;
    double _height;
    AWEVSFormatTabListModel *_videoModel;
    AWEVSFormatTabStreamingModel *_streamModel;
}

@property (nonatomic) unsigned long long cellType;
@property (retain, nonatomic) NSString *seasonID;
@property (retain, nonatomic) NSString *seasonTag;
@property (nonatomic) double height;
@property (retain, nonatomic) AWEVSFormatTabListModel *videoModel;
@property (retain, nonatomic) AWEVSFormatTabStreamingModel *streamModel;

- (id)videoModel;
- (void)setVideoModel:(id)arg0;
- (void)setSeasonID:(id)arg0;
- (id)seasonID;
- (void)setSeasonTag:(id)arg0;
- (id)seasonTag;
- (id)streamModel;
- (void)setStreamModel:(id)arg0;
- (void).cxx_destruct;
- (double)height;
- (void)setCellType:(unsigned long long)arg0;
- (void)setHeight:(double)arg0;
- (unsigned long long)cellType;

@end
