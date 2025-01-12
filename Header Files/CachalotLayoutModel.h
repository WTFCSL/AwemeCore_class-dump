//
//     Generated by private class-dump
//

@class NSString, NSDictionary, CachalotContext, NSArray, NSIndexPath, CachalotLayoutUIInfoModel;
@protocol CachalotLayout;

@interface CachalotLayoutModel : NSObject <AWESearcDynamicResourceNodeProtocol, CachalotRenderPipelineComponentViewModel> {
    BOOL _reLayoutFlag;
    BOOL _reRenderFlag;
    BOOL _isSticky;
    BOOL _forceSticky;
    BOOL _upThanHeader;
    BOOL _isPreRendering;
    BOOL _isPreCreating;
    BOOL _isFromPreRender;
    BOOL _isFromPreCreate;
    BOOL _isReusing;
    BOOL _isOnFirstScreen;
    BOOL _firstLoad;
    NSString *_nodeId;
    NSArray *_children;
    CachalotLayoutModel *_parent;
    id<CachalotLayout> _nodeLayout;
    CachalotLayoutUIInfoModel *_nodeUIInfo;
    double _preferLayoutWidth;
    id _businessModel;
    id _renderModel;
    id _attachmentModel;
    NSDictionary *_logData;
    CachalotContext *_comContext;
    unsigned long long _renderType;
    unsigned long long _dataType;
    NSString *_dataId;
    NSString *_renderId;
    NSIndexPath *_indexPath;
    double _topStickyThreshold;
    NSString *_preRenderIdentifier;
    CachalotLayoutModel *_forwarding;
    struct CGPoint { double x; double y; } _layoutOrigin;
    struct CGSize { double width; double height; } _layoutSize;
    struct CGPoint { double x; double y; } _stickyOrigin;
}

@property (copy, nonatomic) NSString *searchdynamic_cardKey;
@property (retain, nonatomic) NSDictionary *searchdynamic_searchLynxCardShowParams;
@property (nonatomic) BOOL searchdynamic_hasTemplateResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGPoint { double x0; double x1; } layoutOrigin;
@property (nonatomic) struct CGSize { double x0; double x1; } layoutSize;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) BOOL isOnFirstScreen;
@property (nonatomic) BOOL firstLoad;
@property (nonatomic) BOOL isFromPreCreate;
@property (nonatomic) BOOL isPreCreating;
@property (nonatomic) BOOL isReusing;
@property (readonly, nonatomic) id componentDataModel;
@property (readonly, nonatomic) id componentRenderModel;
@property (readonly, nonatomic) id componentAttachmentModel;
@property (readonly, nonatomic) CachalotContext *componentContext;
@property (readonly, copy, nonatomic) NSDictionary *componentLogData;
@property (readonly, copy, nonatomic) NSString *viewModelId;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } layoutRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } stickyRect;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) BOOL isOnFirstScreen;
@property (readonly, nonatomic) BOOL isPreRendering;
@property (readonly, nonatomic) BOOL isFromPreRender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CachalotLayoutModel *forwarding;
@property (readonly, nonatomic) BOOL isForwardingNode;
@property (readonly, nonatomic) BOOL isRealNode;
@property (copy, nonatomic) NSString *preRenderIdentifier;
@property (nonatomic) BOOL isPreRendering;
@property (nonatomic) BOOL isFromPreRender;
@property (nonatomic) BOOL isSticky;
@property (nonatomic) BOOL forceSticky;
@property (nonatomic) double topStickyThreshold;
@property (nonatomic) BOOL upThanHeader;
@property (nonatomic) struct CGPoint { double x0; double x1; } stickyOrigin;
@property (copy, nonatomic) NSArray *children;
@property (weak, nonatomic) CachalotLayoutModel *parent;
@property (retain, nonatomic) id<CachalotLayout> nodeLayout;
@property (retain, nonatomic) CachalotLayoutUIInfoModel *nodeUIInfo;
@property (nonatomic) double preferLayoutWidth;
@property (copy, nonatomic) NSString *nodeId;
@property (nonatomic) BOOL reLayoutFlag;
@property (nonatomic) BOOL reRenderFlag;
@property (retain, nonatomic) id businessModel;
@property (retain, nonatomic) id renderModel;
@property (retain, nonatomic) id attachmentModel;
@property (copy, nonatomic) NSDictionary *logData;
@property (retain, nonatomic) CachalotContext *comContext;
@property (nonatomic) long long renderType;
@property (nonatomic) long long dataType;
@property (copy, nonatomic) NSString *dataId;
@property (copy, nonatomic) NSString *renderId;
@property (copy, nonatomic) NSArray *children;
@property (weak, nonatomic) CachalotLayoutModel *parent;
@property (retain, nonatomic) id<CachalotLayout> nodeLayout;
@property (retain, nonatomic) CachalotLayoutUIInfoModel *nodeUIInfo;
@property (nonatomic) double preferLayoutWidth;
@property (nonatomic) BOOL reLayoutFlag;
@property (nonatomic) BOOL reRenderFlag;
@property (copy, nonatomic) NSString *nodeId;
@property (retain, nonatomic) id businessModel;
@property (retain, nonatomic) id renderModel;
@property (retain, nonatomic) id attachmentModel;
@property (copy, nonatomic) NSDictionary *logData;
@property (retain, nonatomic) CachalotContext *comContext;
@property (nonatomic) unsigned long long renderType;
@property (nonatomic) unsigned long long dataType;
@property (copy, nonatomic) NSString *dataId;
@property (copy, nonatomic) NSString *renderId;
@property (nonatomic) struct CGPoint { double x; double y; } layoutOrigin;
@property (nonatomic) struct CGSize { double width; double height; } layoutSize;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) BOOL isSticky;
@property (nonatomic) BOOL forceSticky;
@property (nonatomic) double topStickyThreshold;
@property (nonatomic) BOOL upThanHeader;
@property (nonatomic) struct CGPoint { double x; double y; } stickyOrigin;
@property (copy, nonatomic) NSString *preRenderIdentifier;
@property (nonatomic) BOOL isPreRendering;
@property (nonatomic) BOOL isPreCreating;
@property (nonatomic) BOOL isFromPreRender;
@property (nonatomic) BOOL isFromPreCreate;
@property (nonatomic) BOOL isReusing;
@property (retain, nonatomic) CachalotLayoutModel *forwarding;
@property (nonatomic) BOOL isOnFirstScreen;
@property (nonatomic) BOOL firstLoad;

- (id)searchdynamic_cardKey;
- (id)searchdynamic_searchLynxCardShowParams;
- (BOOL)searchdynamic_hasTemplateResource;
- (void)setSearchdynamic_cardKey:(id)arg0;
- (void)setSearchdynamic_searchLynxCardShowParams:(id)arg0;
- (void)setSearchdynamic_hasTemplateResource:(BOOL)arg0;
- (id)searchdynamic_lynxSchema;
- (id)componentContext;
- (unsigned long long)renderType;
- (id)viewModelId;
- (void)setIsSticky:(BOOL)arg0;
- (void)setForwarding:(id)arg0;
- (void)setIsReusing:(BOOL)arg0;
- (void)setIsPreCreating:(BOOL)arg0;
- (void)setIsFromPreCreate:(BOOL)arg0;
- (void)setIsPreRendering:(BOOL)arg0;
- (void)setIsFromPreRender:(BOOL)arg0;
- (BOOL)isFromPreCreate;
- (id)preRenderIdentifier;
- (id)componentDataModel;
- (void)handleStickyCalculationIfNeeded:(struct CGPoint { double x0; double x1; })arg0 lastStickyLayout:(id)arg1 lastLayoutUpdateBlock:(id /* block */)arg2;
- (struct CGPoint { double x0; double x1; })stickyOrigin;
- (BOOL)isForwardingNode;
- (BOOL)isRealNode;
- (void)setComContext:(id)arg0;
- (void)setPreferLayoutWidth:(double)arg0;
- (double)preferLayoutWidth;
- (id)comContext;
- (void)setIsOnFirstScreen:(BOOL)arg0;
- (BOOL)reLayoutFlag;
- (BOOL)reRenderFlag;
- (void)setUpThanHeader:(BOOL)arg0;
- (void)setReLayoutFlag:(BOOL)arg0;
- (id)renderModel;
- (void)setReRenderFlag:(BOOL)arg0;
- (void)setComponentDataModel:(id)arg0;
- (id)componentRenderModel;
- (void)setComponentAttachmentModel:(id)arg0;
- (id)componentAttachmentModel;
- (id)componentLogData;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stickyRect;
- (id)fetchParent;
- (id)fetchChildren;
- (void)setNewParent:(id)arg0;
- (void)setNewChildren:(id)arg0;
- (id)findRoot;
- (void)setStickyOrigin:(struct CGPoint { double x0; double x1; })arg0;
- (void)setPreRenderIdentifier:(id)arg0;
- (BOOL)isPreRendering;
- (BOOL)isPreCreating;
- (BOOL)isFromPreRender;
- (BOOL)isReusing;
- (BOOL)isOnFirstScreen;
- (void)setBusinessModel:(id)arg0;
- (void)setRenderModel:(id)arg0;
- (void)setNodeUIInfo:(id)arg0;
- (void)setNodeLayout:(id)arg0;
- (id)businessModel;
- (id)nodeUIInfo;
- (BOOL)forceSticky;
- (void)setForceSticky:(BOOL)arg0;
- (double)topStickyThreshold;
- (void)setTopStickyThreshold:(double)arg0;
- (BOOL)upThanHeader;
- (void)setDataType:(unsigned long long)arg0;
- (id)init;
- (void)setChildren:(id)arg0;
- (void)setParent:(id)arg0;
- (void).cxx_destruct;
- (void)setLayoutSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })layoutSize;
- (id)parent;
- (void)setIndexPath:(id)arg0;
- (id)logData;
- (unsigned long long)dataType;
- (id)indexPath;
- (void)setLogData:(id)arg0;
- (id)debugDescription;
- (id)children;
- (void)setRenderType:(unsigned long long)arg0;
- (id)forwarding;
- (id)renderId;
- (void)setRenderId:(id)arg0;
- (BOOL)isSticky;
- (id)nodeId;
- (void)setFirstLoad:(BOOL)arg0;
- (BOOL)firstLoad;
- (struct CGPoint { double x0; double x1; })layoutOrigin;
- (void)setLayoutOrigin:(struct CGPoint { double x0; double x1; })arg0;
- (id)attachmentModel;
- (void)setAttachmentModel:(id)arg0;
- (void)setNodeId:(id)arg0;
- (id)nodeLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutRect;
- (id)dataId;
- (void)setDataId:(id)arg0;

@end
