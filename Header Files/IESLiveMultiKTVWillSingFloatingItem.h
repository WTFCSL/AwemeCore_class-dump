//
//     Generated by private class-dump
//

@class IESLiveMultiKTVWillSingCell, IESLiveKtvSongStruct;

@interface IESLiveMultiKTVWillSingFloatingItem : NSObject {
    BOOL isLinked;
    IESLiveKtvSongStruct *model;
    long long _index;
    IESLiveMultiKTVWillSingCell *_cell;
}

@property (retain, nonatomic) IESLiveKtvSongStruct *model;
@property (nonatomic) BOOL isLinked;
@property (nonatomic) long long index;
@property (retain, nonatomic) IESLiveMultiKTVWillSingCell *cell;

- (void)setIsLinked:(BOOL)arg0;
- (void)setModel:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (id)model;
- (long long)index;
- (id)cell;
- (void)setCell:(id)arg0;
- (BOOL)isLinked;

@end