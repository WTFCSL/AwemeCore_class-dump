//
//     Generated by private class-dump
//

@class NSArray, NSIndexPath;

@interface IESGCPEDetailUpdateAction : NSObject {
    BOOL _updateAnimation;
    long long _type;
    NSArray *_indexPaths;
    NSIndexPath *_scrollToIndexPath;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) NSArray *indexPaths;
@property (nonatomic) BOOL updateAnimation;
@property (retain, nonatomic) NSIndexPath *scrollToIndexPath;

- (void)setUpdateAnimation:(BOOL)arg0;
- (id)scrollToIndexPath;
- (void)setScrollToIndexPath:(id)arg0;
- (void).cxx_destruct;
- (id)indexPaths;
- (long long)type;
- (void)setIndexPaths:(id)arg0;
- (void)setType:(long long)arg0;
- (BOOL)updateAnimation;

@end
