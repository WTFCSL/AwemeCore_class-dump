//
//     Generated by private class-dump
//

@interface AWEMusicDetailFeedListUIConfig : NSObject {
    long long _numberOfCellPerRow;
    struct CGSize { double width; double height; } _cellSize;
    struct CGSize { double width; double height; } _lastCellSize;
}

@property (nonatomic) long long numberOfCellPerRow;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) struct CGSize { double width; double height; } lastCellSize;

- (struct CGSize { double x0; double x1; })lastCellSize;
- (void)setLastCellSize:(struct CGSize { double x0; double x1; })arg0;
- (long long)numberOfCellPerRow;
- (void)setNumberOfCellPerRow:(long long)arg0;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)setCellSize:(struct CGSize { double x0; double x1; })arg0;

@end
