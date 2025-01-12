//
//     Generated by private class-dump
//

@class NSString, IESECWinHeaderFollowBuyModel;

@interface IESECWinFollowBuyObject : NSObject <IGListDiffable, IESECWinFeedFlowLayoutProtocol> {
    BOOL _shouldSticky;
    BOOL _hasSetStickyHeight;
    IESECWinHeaderFollowBuyModel *_followBuy;
    unsigned long long _splitConfigType;
    double _stickyHeight;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _edge;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cardRect;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edge;
@property (retain, nonatomic) IESECWinHeaderFollowBuyModel *followBuy;
@property (nonatomic) unsigned long long splitConfigType;
@property (nonatomic) double stickyHeight;
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
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeForObject;
- (unsigned long long)splitConfigType;
- (double)stickyHeight;
- (void)configStickyHeight:(double)arg0;
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
- (void)setStickyHeight:(double)arg0;
- (BOOL)hasSetStickyHeight;
- (void)setHasSetStickyHeight:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cardRect;
- (id)followBuy;
- (void)setFollowBuy:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edge;
- (void)setEdge:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void).cxx_destruct;

@end
