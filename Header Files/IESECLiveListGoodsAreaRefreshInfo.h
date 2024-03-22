//
//     Generated by private class-dump
//

@class NSArray, NSDictionary;

@interface IESECLiveListGoodsAreaRefreshInfo : NSObject {
    long long _anchorType;
    long long _updateType;
    NSArray *_indexPaths;
    NSDictionary *_extraInfo;
    struct CGPoint { double x; double y; } _anchorOffset;
}

@property (nonatomic) long long anchorType;
@property (nonatomic) long long updateType;
@property (retain, nonatomic) NSArray *indexPaths;
@property (nonatomic) struct CGPoint { double x; double y; } anchorOffset;
@property (retain, nonatomic) NSDictionary *extraInfo;

- (void)setExtraInfo:(id)arg0;
- (long long)anchorType;
- (void).cxx_destruct;
- (id)indexPaths;
- (void)setIndexPaths:(id)arg0;
- (long long)updateType;
- (void)setUpdateType:(long long)arg0;
- (struct CGPoint { double x0; double x1; })anchorOffset;
- (void)setAnchorOffset:(struct CGPoint { double x0; double x1; })arg0;
- (id)extraInfo;
- (void)setAnchorType:(long long)arg0;

@end