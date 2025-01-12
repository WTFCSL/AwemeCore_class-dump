//
//     Generated by private class-dump
//

@class NSString, IESECWinHeaderAuthorModel, IESECTracker, IESECWinHeaderOtherInfoModel;

@interface IESECWinAuthorObject : NSObject <IGListDiffable, IESECWinFeedFlowLayoutProtocol> {
    BOOL _isLiving;
    BOOL _shouldSticky;
    BOOL _hasSetStickyHeight;
    IESECTracker *_tracker;
    NSString *_userID;
    NSString *_passThroughAPI;
    IESECWinHeaderAuthorModel *_author;
    IESECWinHeaderOtherInfoModel *_otherInfo;
    unsigned long long _splitConfigType;
    double _stickyHeight;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _edge;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cardRect;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edge;
@property (retain, nonatomic) IESECTracker *tracker;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *passThroughAPI;
@property (retain, nonatomic) IESECWinHeaderAuthorModel *author;
@property (retain, nonatomic) IESECWinHeaderOtherInfoModel *otherInfo;
@property (nonatomic) BOOL isLiving;
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
- (BOOL)isLiving;
- (void)setIsLiving:(BOOL)arg0;
- (void)setOtherInfo:(id)arg0;
- (BOOL)shouldSticky;
- (id)passThroughAPI;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeForObject;
- (void)setPassThroughAPI:(id)arg0;
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
- (id)userID;
- (id)tracker;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edge;
- (void)setTracker:(id)arg0;
- (void)setEdge:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (id)author;
- (void)setAuthor:(id)arg0;
- (long long)zIndex;
- (id)otherInfo;

@end
