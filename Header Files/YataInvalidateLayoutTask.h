//
//     Generated by private class-dump
//

@class NSIndexPath;

@interface YataInvalidateLayoutTask : NSObject {
    BOOL _isLayoutSizing;
    NSIndexPath *_indexPath;
    id /* block */ _invalidateLayoutTask;
}

@property (retain, nonatomic) NSIndexPath *indexPath;
@property (copy, nonatomic) id /* block */ invalidateLayoutTask;
@property (nonatomic) BOOL isLayoutSizing;

- (void)setInvalidateLayoutTask:(id /* block */)arg0;
- (void)setIsLayoutSizing:(BOOL)arg0;
- (BOOL)isLayoutSizing;
- (id /* block */)invalidateLayoutTask;
- (void).cxx_destruct;
- (void)setIndexPath:(id)arg0;
- (id)indexPath;

@end
