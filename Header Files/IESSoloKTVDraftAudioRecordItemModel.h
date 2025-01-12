//
//     Generated by private class-dump
//

@class NSString;

@interface IESSoloKTVDraftAudioRecordItemModel : NSObject {
    BOOL _isDeleted;
    int _index;
    NSString *_audioPath;
    double _start;
    double _duration;
    double _baseStart;
}

@property (retain, nonatomic) NSString *audioPath;
@property (nonatomic) double start;
@property (nonatomic) double duration;
@property (nonatomic) int index;
@property (nonatomic) BOOL isDeleted;
@property (nonatomic) double baseStart;

- (void)setAudioPath:(id)arg0;
- (id)audioPath;
- (double)baseStart;
- (void)setBaseStart:(double)arg0;
- (void)setIndex:(int)arg0;
- (id)init;
- (void)setStart:(double)arg0;
- (void).cxx_destruct;
- (double)duration;
- (int)index;
- (void)setIsDeleted:(BOOL)arg0;
- (BOOL)isDeleted;
- (double)start;
- (id)deepCopy;
- (void)setDuration:(double)arg0;

@end
