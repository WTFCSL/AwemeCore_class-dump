//
//     Generated by private class-dump
//

@class NSString, NSObject;
@protocol AWELeftSideBarItemAbility, AWELeftSideBarEntranceViewAbility, AWELeftSideBarItemContext, AWEHPListKitItemControllerContext;

@interface AWELeftSideBarBasePresenter : NSObject <AWELeftSideBarBaseProtocol, AWEHPListKitItemControllerProtocol> {
    id<AWELeftSideBarItemContext> _context;
    NSObject<AWEHPListKitItemControllerContext> *_hpListKitItemContext;
    id<AWELeftSideBarEntranceViewAbility> _leftSideBarEntranceViewProxy;
    id<AWELeftSideBarItemAbility> _leftSideBarProxy;
}

@property (retain, nonatomic) id<AWELeftSideBarItemContext> context;
@property (retain, nonatomic) NSObject<AWEHPListKitItemControllerContext> *hpListKitItemContext;
@property (retain, nonatomic) id<AWELeftSideBarEntranceViewAbility> leftSideBarEntranceViewProxy;
@property (retain, nonatomic) id<AWELeftSideBarItemAbility> leftSideBarProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)leftSideBarProxy;
- (void)leftSideBarPresenterOnReload:(id)arg0;
- (void)setHpListKitItemContext:(id)arg0;
- (void)setLeftSideBarEntranceViewProxy:(id)arg0;
- (void)setLeftSideBarProxy:(id)arg0;
- (id)bussinessTrackInfo;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (void)leftSideBarThemeDidChange:(long long)arg0;
- (id)leftSideBarEntranceViewProxy;
- (id)initWithContext:(id)arg0 extraData:(id)arg1;
- (BOOL)canReloadWithContext:(id)arg0 extraData:(id)arg1;
- (void)reloadWithContext:(id)arg0 extraData:(id)arg1;
- (id)hpListKitItemContext;
- (BOOL)needLoadHPController;
- (void)setUpLeftSideBarEntranceViewProxy:(id)arg0 leftSideBarProxy:(id)arg1;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end
