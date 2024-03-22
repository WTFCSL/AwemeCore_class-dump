//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, BDALokiProfile, NSMutableDictionary, BDARifleView, BDARifleViewConfiguration, BDALokiModel, BDALokiBaseItem, BDALokiConfiguration;
@protocol BDALokiComponentDelegate;

@interface BDALokiComponent : NSObject <BDARifleViewDelegate, BDALokiBaseItemDelegate> {
    NSMutableDictionary *_anchorObserverIdentifiers;
    BOOL _hasDowngraded;
    BOOL _hasShowOnce;
    BDALokiModel *_lokiModel;
    BDARifleView *_lokiRifleView;
    BDARifleViewConfiguration *_lokiRifleViewConfiguration;
    id<BDALokiComponentDelegate> _delegate;
    BDALokiConfiguration *_lokiConfiguration;
    NSArray *_customLynxBridges;
    NSArray *_customJsBridges;
    NSString *_failReason;
    BDALokiProfile *_lokiProfile;
    NSMutableDictionary *_anchorFrames;
    BDALokiBaseItem *_lokiItem;
    UIView *_container;
}

@property (retain, nonatomic) BDALokiModel *lokiModel;
@property (nonatomic) BOOL hasShowOnce;
@property (retain, nonatomic) NSString *failReason;
@property (retain, nonatomic) BDALokiProfile *lokiProfile;
@property (retain, nonatomic) NSMutableDictionary *anchorFrames;
@property (retain, nonatomic) BDALokiBaseItem *lokiItem;
@property (weak, nonatomic) UIView *container;
@property (retain, nonatomic) BDARifleView *lokiRifleView;
@property (retain, nonatomic) BDARifleViewConfiguration *lokiRifleViewConfiguration;
@property (nonatomic) BOOL hasDowngraded;
@property (weak, nonatomic) id<BDALokiComponentDelegate> delegate;
@property (retain, nonatomic) BDALokiConfiguration *lokiConfiguration;
@property (copy, nonatomic) NSArray *customLynxBridges;
@property (copy, nonatomic) NSArray *customJsBridges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)arg0 params:(id)arg1 callback:(id /* block */)arg2;
- (void)createViewOnly;
- (id)lokiProfile;
- (void)setLokiProfile:(id)arg0;
- (id)lokiComponentJsBridges;
- (void)createLokiItemOnly;
- (void)createLokiRifleViewAndConfig;
- (void)setupLokiItem;
- (void)setLokiRifleView:(id)arg0;
- (id)lokiItem;
- (void)setLokiItem:(id)arg0;
- (id)anchorFrames;
- (id)resourceSourceWithResource:(id)arg0;
- (void)downgrade:(id)arg0 url:(id)arg1 type:(long long)arg2;
- (void)rifleViewDidStartLoading:(id)arg0;
- (void)rifleView:(id)arg0 didStartFetchResourceWithURL:(id)arg1;
- (void)rifleView:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)rifleView:(id)arg0 didLoadFailedWithURL:(id)arg1 error:(id)arg2;
- (void)rifleViewDidConstructJSRuntime:(id)arg0;
- (void)rifleViewvDidFirstScreen:(id)arg0;
- (void)rifleView:(id)arg0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (id)getComponentView;
- (void)setHasDowngraded:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromView:(id)arg0;
- (void)unregistAnchorsChange:(id)arg0;
- (BOOL)hasShowOnce;
- (void)setHasShowOnce:(BOOL)arg0;
- (void)registAnchorsChange:(id)arg0;
- (void)rifleView:(id)arg0 didFetchedResource:(id)arg1 error:(id)arg2;
- (void)rifleView:(id)arg0 didRecieveError:(id)arg1;
- (void)lokiItemDidStartLoading;
- (void)lokiItemDidStartFetchResourceWithURL:(id)arg0;
- (void)lokiItemDidFetchedResource:(id)arg0 error:(id)arg1;
- (void)lokiItemDidFinishLoadWithURL:(id)arg0;
- (void)lokiItemDidLoadFailedWithURL:(id)arg0 error:(id)arg1;
- (void)lokiItemDidConstructJSRuntime;
- (void)lokiItemDidRecieveError:(id)arg0;
- (void)lokiItemDidFirstScreen;
- (void)lokiItemDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg0;
- (void)fetchTemplateDataWithUrl:(id)arg0 completion:(id /* block */)arg1;
- (void)itemLoadImageWithUrl:(id)arg0 imageView:(id)arg1;
- (id)sendMethodWithName:(id)arg0 params:(id)arg1;
- (void)checkHasShowOnce:(id /* block */)arg0;
- (void)setLokiModel:(id)arg0;
- (id)lokiRifleViewConfiguration;
- (void)setLokiRifleViewConfiguration:(id)arg0;
- (id)customJsBridges;
- (void)setAnchorFrames:(id)arg0;
- (id)lokiModel;
- (id)lokiRifleView;
- (BOOL)hasDowngraded;
- (id)lokiConfiguration;
- (void)setLokiConfiguration:(id)arg0;
- (id)customLynxBridges;
- (void)setCustomJsBridges:(id)arg0;
- (void)setCustomLynxBridges:(id)arg0;
- (id)initWithContainer:(id)arg0 lokiModel:(id)arg1;
- (id)lokiRemakeConstraint:(id)arg0;
- (id)container;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (void)close;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)reset;
- (void)render;
- (id)failReason;
- (void)removeObservers;
- (void)setFailReason:(id)arg0;
- (BOOL)updateLayout:(id)arg0;

@end
