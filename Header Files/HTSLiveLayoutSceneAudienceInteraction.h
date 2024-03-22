//
//     Generated by private class-dump
//

@class NSString, NSMapTable, UIView;
@protocol HTSLiveUserEnterAction, HTSLiveSmallGiftAction, HTSLiveViewHierarchyProvider;

@interface HTSLiveLayoutSceneAudienceInteraction : NSObject <HTSLiveLayoutSceneProtocol> {
    BOOL _isAnchorl;
    NSMapTable *_viewTable;
    UIView *_containerView;
    unsigned long long _bannerStyle;
    id<HTSLiveViewHierarchyProvider> _viewProvider;
    id<HTSLiveSmallGiftAction> _smallGiftDispatcher;
    id<HTSLiveUserEnterAction> _userEnterDispatcher;
}

@property (nonatomic) unsigned long long bannerStyle;
@property (retain, nonatomic) id<HTSLiveViewHierarchyProvider> viewProvider;
@property (retain, nonatomic) id<HTSLiveSmallGiftAction> smallGiftDispatcher;
@property (retain, nonatomic) id<HTSLiveUserEnterAction> userEnterDispatcher;
@property (weak, nonatomic) NSMapTable *viewTable;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsAnchor:(BOOL)arg0;
- (id)viewTable;
- (void)setViewTable:(id)arg0;
- (void)layoutPluginIfNeed;
- (id)viewOfType:(id)arg0;
- (void)supportInfoForScene:(id)arg0 container:(id)arg1 isAnchor:(BOOL)arg2;
- (id)smallGiftDispatcher;
- (void)setSmallGiftDispatcher:(id)arg0;
- (id)userEnterDispatcher;
- (void)setUserEnterDispatcher:(id)arg0;
- (void)setBannerStyle:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setViewProvider:(id)arg0;
- (BOOL)isAnchor;
- (unsigned long long)bannerStyle;
- (unsigned long long)currentScene;
- (void)setContainerView:(id)arg0;
- (id)viewProvider;
- (id)containerView;

@end