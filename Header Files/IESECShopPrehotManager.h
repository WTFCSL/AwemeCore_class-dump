//
//     Generated by private class-dump
//

@class IESECShopTabModel, IESECStoreWebTabViewController;

@interface IESECShopPrehotManager : NSObject {
    IESECStoreWebTabViewController *_webVc;
    IESECShopTabModel *_tabModel;
}

@property (retain, nonatomic) IESECStoreWebTabViewController *webVc;
@property (retain, nonatomic) IESECShopTabModel *tabModel;

+ (id)tabModelWithPreloadInfo:(id)arg0;
+ (id)sharedInstance;

- (void)destory;
- (void)preloadISVContainerWithModel:(id)arg0;
- (void)setTabModel:(id)arg0;
- (id)tabModel;
- (void)setWebVc:(id)arg0;
- (id)webVc;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
