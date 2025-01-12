//
//     Generated by private class-dump
//

@class NSArray, IESMediaTimeRange, IESSticker;

@interface IESWaterMarkData : NSObject {
    IESSticker *_sticker;
    NSArray *_waterMark;
    long long _refreshInterval;
    IESMediaTimeRange *_showTimeRange;
    struct CGPoint { double x; double y; } _point;
    struct CGSize { double width; double height; } _targetVideoSize;
}

@property (retain, nonatomic) NSArray *waterMark;
@property (nonatomic) struct CGPoint { double x; double y; } point;
@property (nonatomic) struct CGSize { double width; double height; } targetVideoSize;
@property (nonatomic) long long refreshInterval;
@property (retain, nonatomic) IESMediaTimeRange *showTimeRange;

- (id)showTimeRange;
- (struct CGSize { double x0; double x1; })targetVideoSize;
- (void)setTargetVideoSize:(struct CGSize { double x0; double x1; })arg0;
- (id)convertToSticker;
- (void)setShowTimeRange:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })point;
- (id)description;
- (long long)refreshInterval;
- (void)setRefreshInterval:(long long)arg0;
- (void)setPoint:(struct CGPoint { double x0; double x1; })arg0;
- (id)waterMark;
- (void)setWaterMark:(id)arg0;

@end
