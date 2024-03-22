//
//     Generated by private class-dump
//

@class NSString;

@interface IESECWinTabContainerObject : NSObject <IGListDiffable, IESECWinFeedFlowLayoutProtocol> {
    BOOL _shouldSticky;
    BOOL _hasSetStickyHeight;
    unsigned long long _splitConfigType;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cardRect;
}

@property (nonatomic) unsigned long long splitConfigType;
@property (nonatomic) BOOL shouldSticky;
@property (nonatomic) BOOL hasSetStickyHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cardRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (BOOL)shouldSticky;
- (unsigned long long)splitConfigType;
- (void)configCardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)showInSplit;
- (BOOL)moveInSplit;
- (BOOL)getShouldSticky;
- (void)setShouldSticky:(BOOL)arg0;
- (BOOL)getHasSetStickyHeight;
- (void)sethasSetStickyHeight:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getcardRect;
- (void)setCardRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setSplitConfigType:(unsigned long long)arg0;
- (BOOL)hasSetStickyHeight;
- (void)setHasSetStickyHeight:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cardRect;

@end