//
//     Generated by private class-dump
//

@class ACCGrootStickerModel;

@interface ACCRecognitionGrootModel : NSObject {
    BOOL _didRecover;
    ACCGrootStickerModel *_stickerModel;
    double _scale;
    long long _index;
}

@property (retain, nonatomic) ACCGrootStickerModel *stickerModel;
@property (nonatomic) double scale;
@property (nonatomic) long long index;
@property (nonatomic) BOOL didRecover;

- (void)setStickerModel:(id)arg0;
- (id)stickerModel;
- (BOOL)didRecover;
- (void)setDidRecover:(BOOL)arg0;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (double)scale;
- (long long)index;
- (void)setScale:(double)arg0;

@end
