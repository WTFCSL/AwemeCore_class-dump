//
//     Generated by private class-dump
//

@class IESECWindowFeedViewController, IESECRelationSKUActionHelper, IESECWinFeedEnterParameters, IESECTracker, NSString, IESECRelationFeedCommentViewModel, IESECWinFeedVideoModel;

@interface IESECWindowFeedContentCardViewModel : NSObject <IGListDiffable, IESECFeedContentCardCellModel, IESECFeedContentCardCellDelegate> {
    BOOL _showFullDesc;
    long long _index;
    IESECWinFeedVideoModel *_model;
    IESECWinFeedEnterParameters *_parameters;
    IESECWindowFeedViewController *_viewController;
    IESECRelationSKUActionHelper *_actionHelper;
    IESECTracker *_tracker;
    IESECRelationFeedCommentViewModel *_productCommentsModel;
}

@property (nonatomic) BOOL showFullDesc;
@property (retain, nonatomic) IESECRelationSKUActionHelper *actionHelper;
@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECRelationFeedCommentViewModel *productCommentsModel;
@property (nonatomic) long long index;
@property (retain, nonatomic) IESECWinFeedVideoModel *model;
@property (retain, nonatomic) IESECWinFeedEnterParameters *parameters;
@property (weak, nonatomic) IESECWindowFeedViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (id)playItem;
- (id)videoCover;
- (id)shopName;
- (id)recommendTags;
- (id)buyButtonText;
- (void)tapBuyButton;
- (id)productCommentsModel;
- (id)commentsModel;
- (void)clickComment;
- (void)setProductCommentsModel:(id)arg0;
- (BOOL)isDanmakuEnable;
- (id)danmakuDataSource;
- (BOOL)shouldShowVideoComponent;
- (BOOL)shouldShowGoodsCardComponent;
- (BOOL)shouldShowCommentComponent;
- (BOOL)shouldShowVideoTitleComponent;
- (BOOL)shouldShowDescComponent;
- (BOOL)shouldShowTagComponent;
- (id)descContent;
- (BOOL)shouldShowFullDesc;
- (void)expandContent;
- (void)tapShopingCartButton;
- (void)tapOther;
- (void)tapToOtherApp;
- (long long)buyShareID;
- (void)setShowFullDesc:(BOOL)arg0;
- (void)tapOtherWithBuyButton:(BOOL)arg0;
- (void)jumpToGoodsDetailBySchemaWithGoodsModel:(id)arg0 BtmInfo:(id)arg1;
- (id)getGoodsDetailShowRequestWithProductModel:(id)arg0;
- (BOOL)isReplyVideo;
- (BOOL)showFullDesc;
- (void)setModel:(id)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (id)model;
- (id)content;
- (id)title;
- (long long)index;
- (id)actionHelper;
- (void)setParameters:(id)arg0;
- (id)parameters;
- (void)setActionHelper:(id)arg0;
- (id)product;
- (struct CGSize { double x0; double x1; })videoSize;

@end