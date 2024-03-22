//
//     Generated by private class-dump
//

@class UIView, NSString, UITapGestureRecognizer, UILongPressGestureRecognizer, GXStyle, GXTemplateContext, GXTemplateItem, NSDictionary, NSMutableArray, NSMapTable, GXStretch;

@interface GXNode : NSObject <UIGestureRecognizerDelegate> {
    GXStretch *_stretch;
    GXNode *_rooNode;
    UITapGestureRecognizer *_tap;
    UILongPressGestureRecognizer *_longPress;
    BOOL _dirty;
    BOOL _isTemplateType;
    BOOL _isFlat;
    BOOL _fitContent;
    BOOL _isAppear;
    NSMutableArray *_children;
    UIView *_associatedView;
    GXStyle *_style;
    void *_rustptr;
    GXNode *_parent;
    NSString *_nodeId;
    GXTemplateItem *_templateItem;
    GXTemplateContext *_templateContext;
    NSDictionary *_viewJson;
    NSDictionary *_styleJson;
    NSDictionary *_fullStyleJson;
    id _data;
    id _event;
    id _track;
    NSDictionary *_animation;
    id _virtualData;
    NSDictionary *_virtualExtend;
    long long _index;
    NSMapTable *_flatNodes;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
}

@property (retain, nonatomic) NSString *nodeId;
@property (nonatomic) BOOL isTemplateType;
@property (retain, nonatomic) GXTemplateItem *templateItem;
@property (retain, nonatomic) GXTemplateContext *templateContext;
@property (retain, nonatomic) NSDictionary *viewJson;
@property (retain, nonatomic) NSDictionary *styleJson;
@property (retain, nonatomic) NSDictionary *fullStyleJson;
@property (retain, nonatomic) id data;
@property (retain, nonatomic) id event;
@property (retain, nonatomic) id track;
@property (retain, nonatomic) NSDictionary *animation;
@property (retain, nonatomic) id virtualData;
@property (retain, nonatomic) NSDictionary *virtualExtend;
@property (nonatomic) BOOL isFlat;
@property (nonatomic) BOOL fitContent;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSMapTable *flatNodes;
@property (nonatomic) BOOL isAppear;
@property (retain, nonatomic) NSString *nodeId;
@property (nonatomic) BOOL isTemplateType;
@property (retain, nonatomic) GXTemplateItem *templateItem;
@property (retain, nonatomic) GXTemplateContext *templateContext;
@property (retain, nonatomic) NSDictionary *viewJson;
@property (retain, nonatomic) NSDictionary *styleJson;
@property (retain, nonatomic) NSDictionary *fullStyleJson;
@property (retain, nonatomic) id data;
@property (retain, nonatomic) id event;
@property (retain, nonatomic) id track;
@property (retain, nonatomic) NSDictionary *animation;
@property (retain, nonatomic) id virtualData;
@property (retain, nonatomic) NSDictionary *virtualExtend;
@property (nonatomic) BOOL isFlat;
@property (nonatomic) BOOL fitContent;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSMapTable *flatNodes;
@property (nonatomic) BOOL isAppear;
@property (retain, nonatomic) NSMutableArray *children;
@property (weak, nonatomic) UIView *associatedView;
@property (retain, nonatomic) GXStyle *style;
@property (nonatomic) void *rustptr;
@property (weak, nonatomic) GXNode *parent;
@property (nonatomic) BOOL dirty;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isAppear;
- (void)setIsAppear:(BOOL)arg0;
- (id)superView;
- (void)bindData:(id)arg0;
- (void)setTemplateContext:(id)arg0;
- (id)templateContext;
- (void)configureStyleInfo:(id)arg0;
- (BOOL)shouldBind;
- (void)setIsFlat:(BOOL)arg0;
- (id)templateItem;
- (void)handleExtend:(id)arg0 isCalculate:(BOOL)arg1;
- (void)configureViewInfo:(id)arg0;
- (id)creatView;
- (void)calculateWithData:(id)arg0;
- (id)flatNodes;
- (BOOL)isTemplateType;
- (void)setVirtualExtend:(id)arg0;
- (void)applyData:(id)arg0 type:(unsigned long long)arg1;
- (BOOL)isRootNode;
- (void)setTemplateItem:(id)arg0;
- (id)fullStyleJson;
- (id)computeLayout:(struct { float x0; float x1; })arg0;
- (void *)rustptr;
- (id)queryNodeByNodeId:(id)arg0;
- (id)initWithStyle:(id)arg0 children:(id)arg1;
- (void)replaceChild:(id)arg0 atIndex:(unsigned long long)arg1;
- (void)setRustptr:(void *)arg0;
- (void)setIsTemplateType:(BOOL)arg0;
- (id)viewJson;
- (void)setViewJson:(id)arg0;
- (id)styleJson;
- (void)setStyleJson:(id)arg0;
- (void)setFullStyleJson:(id)arg0;
- (id)virtualExtend;
- (BOOL)fitContent;
- (void)setFitContent:(BOOL)arg0;
- (void)setFlatNodes:(id)arg0;
- (id)applyView;
- (id)mergeExtendWithResult:(id)arg0;
- (void)bindEvent:(id)arg0;
- (void)bindTrack:(id)arg0;
- (void)bindAnimation:(id)arg0;
- (void)manualExposureTrackEvent;
- (void)updateTextNodes:(id)arg0;
- (void)manualClickTrackEvent;
- (void)setEvent:(id)arg0;
- (id)event;
- (id)style;
- (void)setIndex:(long long)arg0;
- (void)setChildren:(id)arg0;
- (void)setParent:(id)arg0;
- (id)data;
- (void)setAssociatedView:(id)arg0;
- (void)setDirty:(BOOL)arg0;
- (void).cxx_destruct;
- (id)animation;
- (void)setAnimation:(id)arg0;
- (id)parent;
- (BOOL)dirty;
- (void)setData:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (long long)index;
- (void)addChild:(id)arg0;
- (id)associatedView;
- (id)children;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)rootNode;
- (void)dealloc;
- (void)setStyle:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)removeChild:(id)arg0;
- (BOOL)isFlat;
- (void)applyLayout:(id)arg0;
- (id)track;
- (id)nodeId;
- (void)markDirty;
- (void)onDisappear;
- (void)renderView:(id)arg0;
- (void)onAppear;
- (void)setNodeId:(id)arg0;
- (void)setTrack:(id)arg0;
- (void)removeChildAtIndex:(unsigned long long)arg0;
- (id)virtualData;
- (void)setVirtualData:(id)arg0;

@end