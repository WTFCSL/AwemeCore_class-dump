//
//     Generated by private class-dump
//

@class NSString, NSDictionary;
@protocol IESECTabKitPuzzleTabDelegate;

@protocol IESECTabKitPuzzleTabElement <IESECTabKitHybridElement>

@property (weak, nonatomic) id<IESECTabKitPuzzleTabDelegate> puzzleDelegate;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *initialData;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (copy, nonatomic) NSDictionary *customGlobalProps;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } preferredFrame;
@property (nonatomic) unsigned long long containerType;

- (id)initialData;
- (void)setInitialData:(id)arg0;
- (void)setCustomGlobalProps:(id)arg0;
- (id)routerParams;
- (void)setRouterParams:(id)arg0;
- (id)customGlobalProps;
- (id)puzzleDelegate;
- (void)setPuzzleDelegate:(id)arg0;
- (void)preloadWithTabModel:(id)arg0;
- (void)updateQueryItems:(id)arg0;
- (void)loadIfNeeded;
- (void)setUrl:(id)arg0;
- (id)url;
- (unsigned long long)containerType;
- (void)setContainerType:(unsigned long long)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredFrame;
- (void)setPreferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
