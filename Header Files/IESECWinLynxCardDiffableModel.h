//
//     Generated by private class-dump
//

@class IESECWinHeaderSectionStyle, IESECWinTabListModel, NSString, IESECWinContext, IESECWinLynxCardResponse, IESECLynxCardModel, IESECServiceProxy, IESECLynxCard;
@protocol IESECWinLynxCardService, IESECWinGoodsService, IESECWinTabLayoutService;

@interface IESECWinLynxCardDiffableModel : NSObject <IGListDiffable, IESECWinFeedFlowLayoutProtocol> {
    BOOL _isHeadCard;
    BOOL _shouldSticky;
    BOOL _hasSetStickyHeight;
    BOOL _isFirstLoadUpdateType;
    BOOL _isFinishFirstLoad;
    BOOL _stickyOrigin;
    IESECWinLynxCardResponse *_lynxModel;
    IESECWinContext *_context;
    IESECLynxCardModel *_cellViewModel;
    IESECLynxCard *_cellView;
    unsigned long long _itemType;
    IESECWinTabListModel *_tab;
    IESECWinHeaderSectionStyle *_sectionStyle;
    unsigned long long _splitConfigType;
    double _stickyHeight;
    long long _itemIndex;
    IESECServiceProxy<IESECWinGoodsService> *_goodsService;
    IESECServiceProxy<IESECWinLynxCardService> *_lynxCardService;
    IESECServiceProxy<IESECWinTabLayoutService> *_tabLayoutService;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cardRect;
}

@property (retain, nonatomic) IESECServiceProxy<IESECWinGoodsService> *goodsService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLynxCardService> *lynxCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabLayoutService> *tabLayoutService;
@property (nonatomic) BOOL stickyOrigin;
@property (readonly, nonatomic) IESECWinLynxCardResponse *lynxModel;
@property (readonly, weak, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) IESECLynxCardModel *cellViewModel;
@property (weak, nonatomic) IESECLynxCard *cellView;
@property (nonatomic) unsigned long long itemType;
@property (weak, nonatomic) IESECWinTabListModel *tab;
@property (nonatomic) BOOL isHeadCard;
@property (retain, nonatomic) IESECWinHeaderSectionStyle *sectionStyle;
@property (nonatomic) unsigned long long splitConfigType;
@property (nonatomic) double stickyHeight;
@property (nonatomic) BOOL shouldSticky;
@property (nonatomic) BOOL hasSetStickyHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cardRect;
@property (nonatomic) long long itemIndex;
@property (nonatomic) BOOL isFirstLoadUpdateType;
@property (nonatomic) BOOL isFinishFirstLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)windowEnableLynxCalHeight;
+ (BOOL)windowEnableLynxMutiThread;
+ (void)initialize;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (id)lynxModel;
- (BOOL)stickyOrigin;
- (void)setStickyOrigin:(BOOL)arg0;
- (void)setTab:(id)arg0;
- (void)setCellViewModel:(id)arg0;
- (id)cellViewModel;
- (void)setCellView:(id)arg0;
- (void)setSectionStyle:(id)arg0;
- (BOOL)shouldSticky;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeForObject;
- (unsigned long long)splitConfigType;
- (double)stickyHeight;
- (void)configStickyHeight:(double)arg0;
- (void)configCardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)stickyOrigin:(BOOL)arg0;
- (BOOL)getStickyOrigin;
- (BOOL)showInSplit;
- (BOOL)moveInSplit;
- (BOOL)getShouldSticky;
- (void)setShouldSticky:(BOOL)arg0;
- (BOOL)getHasSetStickyHeight;
- (void)sethasSetStickyHeight:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getcardRect;
- (void)setCardRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isFollowLastCardSet;
- (void)setSplitConfigType:(unsigned long long)arg0;
- (void)setStickyHeight:(double)arg0;
- (BOOL)hasSetStickyHeight;
- (void)setHasSetStickyHeight:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cardRect;
- (id)lynxCardService;
- (void)setLynxCardService:(id)arg0;
- (id)tabLayoutService;
- (void)setTabLayoutService:(id)arg0;
- (BOOL)isHeadCard;
- (id)initWithLynxModel:(id)arg0 winContext:(id)arg1 itemType:(unsigned long long)arg2;
- (void)setIsHeadCard:(BOOL)arg0;
- (void)appendExtra:(id)arg0;
- (id)goodsService;
- (void)setGoodsService:(id)arg0;
- (unsigned long long)getSpan;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getEdge;
- (unsigned long long)calculateWithString:(id)arg0;
- (void)updateLayoutAndWidth;
- (BOOL)isFirstLoadUpdateType;
- (void)setIsFirstLoadUpdateType:(BOOL)arg0;
- (BOOL)isFinishFirstLoad;
- (void)setIsFinishFirstLoad:(BOOL)arg0;
- (unsigned long long)itemType;
- (void)setItemType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)context;
- (long long)itemIndex;
- (void)setItemIndex:(long long)arg0;
- (id)cellView;
- (id)tab;
- (id)sectionStyle;

@end