//
//     Generated by private class-dump
//

@class BDNovelReaderNavBarView, NSString, BDNovelReaderCoverPlugin, BDNovelBaseShareObject;

@interface BDNovelReaderNavPlugin : BDNovelReaderBasePlugin <BDNovelReaderNavBarDelegate> {
    BOOL _isToolShow;
    BOOL _isFromXtab2;
    BDNovelReaderNavBarView *_navBarView;
    BDNovelBaseShareObject *_shareObject;
}

@property (retain, nonatomic) BDNovelBaseShareObject *shareObject;
@property (readonly, nonatomic) BDNovelReaderCoverPlugin *coverPlugin;
@property (nonatomic) BOOL isToolShow;
@property (nonatomic) BOOL isFromXtab2;
@property (retain, nonatomic) BDNovelReaderNavBarView *navBarView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)managerDidFirstStart;

- (id)pluginRequestReaderUI:(id)arg0;
- (void)setIsToolShow:(BOOL)arg0;
- (BOOL)isToolShow;
- (id)shareObject;
- (void)setShareObject:(id)arg0;
- (void)pluginReaderBookInfoDidReady;
- (void)pluginReaderToolViewStateChange:(BOOL)arg0;
- (void)pluginReaderBookShelfStateDidChanged;
- (void)setNavBarView:(id)arg0;
- (id)navBarView;
- (void)p_updateShowState;
- (void)p_routeNovelDetail;
- (id)coverPlugin;
- (void)onBackBtnClick:(id)arg0;
- (void)onSendGifClick:(id)arg0;
- (void)onBookShelfClick:(id)arg0 inShelf:(BOOL)arg1;
- (void)onMoreClick:(id)arg0;
- (void)praiseInit;
- (BOOL)isFromXtab2;
- (void)setIsFromXtab2:(BOOL)arg0;
- (void).cxx_destruct;

@end