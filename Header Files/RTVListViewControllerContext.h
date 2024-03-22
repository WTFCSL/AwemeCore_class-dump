//
//     Generated by private class-dump
//

@class NSArray, NSNumber;

@interface RTVListViewControllerContext : RTVCollectionViewControllerContext {
    BOOL _needSearch;
    NSArray *_plugins;
    NSNumber *_minimumLineSpacing;
    long long _bounceDisable;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _sectionInset;
}

@property (readonly, nonatomic) BOOL needSearch;
@property (readonly, copy, nonatomic) NSArray *plugins;
@property (retain, nonatomic) NSNumber *minimumLineSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (nonatomic) long long bounceDisable;

- (id)initWithPlugins:(id)arg0 needSearch:(BOOL)arg1;
- (void)setBounceDisable:(long long)arg0;
- (BOOL)needSearch;
- (long long)bounceDisable;
- (void).cxx_destruct;
- (id)plugins;
- (void)setMinimumLineSpacing:(id)arg0;
- (void)setSectionInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)minimumLineSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInset;

@end