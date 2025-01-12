//
//     Generated by private class-dump
//

@class NSNumber, NSString, IESLivePublicScreenScrollView, UIView, IESLivePublicScreenInfoModel, NSMutableArray;
@protocol IESLiveMessageListLayoutService, IESLivePublicScreenCollectionViewDelegate;

@interface IESLivePublicScreenCollectionView : UIView <UIScrollViewDelegate, IESLivePublicScreenService, IESLivePublicScreenViewDelegate, IESLiveChatScreenService, IESLivePluginLayoutViewAdapter, IESLivePublicScreenLayoutSubscriber> {
    BOOL _enableScroll;
    BOOL _enableCustomLayout;
    id<IESLiveMessageListLayoutService> _layoutService;
    NSMutableArray *_modelArray;
    IESLivePublicScreenInfoModel *_currentInfoModel;
    id<IESLivePublicScreenCollectionViewDelegate> _delegate;
    long long _bindMultiTab;
    IESLivePublicScreenScrollView *_scrollView;
    NSMutableArray *_publicScreenArray;
    IESLivePublicScreenInfoModel *_lastInfoModel;
    NSNumber *_currentPublicScreenID;
    double _publicScreenSetWidth;
    double _publicScreenRealWidth;
    double _normalPublicScreenHeight;
    double _messageChannelScreenHeight;
    double _publicScreenCollectionViewHeight;
    UIView *_anonymousView;
    struct CGSize { double width; double height; } _lastContentSize;
}

@property (retain, nonatomic) IESLivePublicScreenScrollView *scrollView;
@property (retain, nonatomic) NSMutableArray *publicScreenArray;
@property (retain, nonatomic) NSMutableArray *modelArray;
@property (retain, nonatomic) IESLivePublicScreenInfoModel *currentInfoModel;
@property (retain, nonatomic) IESLivePublicScreenInfoModel *lastInfoModel;
@property (retain, nonatomic) NSNumber *currentPublicScreenID;
@property (nonatomic) struct CGSize { double width; double height; } lastContentSize;
@property (nonatomic) double publicScreenSetWidth;
@property (nonatomic) double publicScreenRealWidth;
@property (nonatomic) double normalPublicScreenHeight;
@property (nonatomic) double messageChannelScreenHeight;
@property (nonatomic) double publicScreenCollectionViewHeight;
@property (retain, nonatomic) UIView *anonymousView;
@property (weak, nonatomic) id<IESLiveMessageListLayoutService> layoutService;
@property (weak, nonatomic) id<IESLivePublicScreenCollectionViewDelegate> delegate;
@property (nonatomic) BOOL enableScroll;
@property (nonatomic) BOOL enableCustomLayout;
@property (nonatomic) long long bindMultiTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)modelArray;
- (void)setModelArray:(id)arg0;
- (void)setEnableScroll:(BOOL)arg0;
- (void)scrollViewDidEndScroll:(id)arg0;
- (BOOL)enableScroll;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (id)queryViewByType:(id)arg0;
- (id)layoutService;
- (void)setLayoutService:(id)arg0;
- (void)publicScreenLayoutChanged:(id)arg0 forType:(unsigned long long)arg1;
- (double)currentPublicScreenTopContainerHeight;
- (void)removePublicScreenWithPublicScreenID:(id)arg0;
- (void)addPublicScreenComponent:(id)arg0;
- (void)addPublicScreenComponent:(id)arg0 isRealInsert:(BOOL)arg1;
- (void)addPublicScreenRawView:(id)arg0 targetContainer:(long long)arg1 viewType:(id)arg2 size:(struct CGSize { double x0; double x1; })arg3;
- (void)addPublicScreenComponent:(id)arg0 finished:(id /* block */)arg1;
- (void)removePublicScreenComponentWithType:(id)arg0 finished:(id /* block */)arg1;
- (void)removePublicScreenComponentWithType:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })queryConvertedMessageListRect;
- (void)setBlankPublicScreenComponentWithHeight:(double)arg0 viewType:(id)arg1;
- (void)setTopMaskHeight:(double)arg0;
- (void)addPublicScreenComponent:(id)arg0 withPublicScreenID:(id)arg1;
- (void)addPublicScreenComponent:(id)arg0 isRealInsert:(BOOL)arg1 withPublicScreenID:(id)arg2;
- (void)addPublicScreenRawView:(id)arg0 targetContainer:(long long)arg1 viewType:(id)arg2 size:(struct CGSize { double x0; double x1; })arg3 withPublicScreenID:(id)arg4;
- (void)addPublicScreenComponent:(id)arg0 finished:(id /* block */)arg1 withPublicScreenID:(id)arg2;
- (void)removePublicScreenComponentWithType:(id)arg0 finished:(id /* block */)arg1 withPublicScreenID:(id)arg2;
- (void)removePublicScreenComponentWithType:(id)arg0 withPublicScreenID:(id)arg1;
- (id)queryViewByType:(id)arg0 withPublicScreenID:(id)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })queryConvertedMessageListRectWithPublicScreenID:(id)arg0;
- (void)addPublicScreenComponentWithConfigModel:(id)arg0;
- (void)updatePublicScreenComponentWithConfigModel:(id)arg0;
- (void)removePublicScreenComponentWithConfigModel:(id)arg0;
- (long long)bindMultiTab;
- (void)onOrientationTransitionEnd;
- (id)currentInfoModel;
- (void)adjustCurrentScrollContent;
- (void)setCurrentInfoModel:(id)arg0;
- (void)addPublicScreen:(id)arg0 withInfoModel:(id)arg1 shouldFocus:(BOOL)arg2;
- (void)scrollToPublicScreenWithID:(id)arg0 animated:(BOOL)arg1;
- (void)adjustCurrentScrollContentImmediately;
- (id)containPublicScreenID:(id)arg0;
- (void)setEnableCustomLayout:(BOOL)arg0;
- (void)setBindMultiTab:(long long)arg0;
- (void)willUnMount;
- (void)addPublicScreenViewBack;
- (void)scrollToPublicScreenWithType:(unsigned long long)arg0 animated:(BOOL)arg1;
- (double)publicScreenSetWidth;
- (void)setPublicScreenSetWidth:(double)arg0;
- (void)componentViewProduced:(id)arg0;
- (id)anonymousView;
- (double)publicScreenRealWidth;
- (void)setPublicScreenRealWidth:(double)arg0;
- (void)layoutPublicScreenHeightWithLayoutData:(id)arg0 type:(unsigned long long)arg1;
- (double)messageChannelScreenHeight;
- (void)setMessageChannelScreenHeight:(double)arg0;
- (double)normalPublicScreenHeight;
- (void)setNormalPublicScreenHeight:(double)arg0;
- (id)publicScreenArray;
- (double)publicScreenCollectionViewHeight;
- (void)setPublicScreenCollectionViewHeight:(double)arg0;
- (void)updateAllConstrains;
- (void)addSinglePublicScreen:(id)arg0 withInfoModel:(id)arg1 shouldFocus:(BOOL)arg2;
- (void)addObserverToPublicScreen:(id)arg0;
- (id)currentPublicScreenID;
- (unsigned long long)lookForIndexWithPublicScreenID:(id)arg0;
- (void)adjustPositionForPublicScreen:(id)arg0 infoModel:(id)arg1;
- (void)triggerSelectedInfoModelForAddOperation:(id)arg0 lastSelectedIndex:(unsigned long long)arg1 shouldFocus:(BOOL)arg2;
- (id)lookForInfoModelWithScreenID:(id)arg0;
- (void)setCurrentPublicScreenID:(id)arg0;
- (void)triggerSelectedInfoModelForRemoveOperation:(id)arg0;
- (id)lookForPublicScreenWithPublicScreenID:(id)arg0;
- (id)containPublicScreenType:(unsigned long long)arg0;
- (id)lookForInfoModelWithIndex:(unsigned long long)arg0;
- (void)setLastInfoModel:(id)arg0;
- (void)handlePublicScreenDidChangeFrom:(id)arg0 to:(id)arg1;
- (id)lastInfoModel;
- (BOOL)enableCustomLayout;
- (id)commonPublicScreen;
- (void)addPublicScreenArray:(id)arg0 completion:(id /* block */)arg1;
- (id)commonPublicScreenID;
- (void)setPublicScreenArray:(id)arg0;
- (void)setAnonymousView:(id)arg0;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)viewType;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (id)scrollView;
- (void)orientationChanged:(long long)arg0;
- (void)setupUI;
- (void)scrollToIndex:(unsigned long long)arg0 animated:(BOOL)arg1;
- (struct CGSize { double x0; double x1; })lastContentSize;
- (void)setLastContentSize:(struct CGSize { double x0; double x1; })arg0;

@end
