//
//     Generated by private class-dump
//

@class NSDictionary, NSString, IESECFeedResourceCardModel, IESECTracker, UIView, NSData, IESECGoodsDetailParameters;
@protocol IESHYContainerProtocol;

@interface IESECGoodsFeedResourceCardLynxViewController : UIViewController <IESHYHybridViewLifecycleProtocol> {
    IESECFeedResourceCardModel *_resourceCardModel;
    NSString *_url;
    NSString *_lynxData;
    NSData *_lynxTemplate;
    IESECGoodsDetailParameters *_goodsDetailParameter;
    NSDictionary *_trackerData;
    UIView<IESHYContainerProtocol> *_hybridContainer;
    IESECTracker *_tracker;
    NSString *_currentLynxUrl;
}

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) NSString *currentLynxUrl;
@property (readonly, nonatomic) IESECFeedResourceCardModel *resourceCardModel;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *lynxData;
@property (retain, nonatomic) NSData *lynxTemplate;
@property (retain, nonatomic) IESECGoodsDetailParameters *goodsDetailParameter;
@property (retain, nonatomic) NSDictionary *trackerData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)lynxData;
- (id)hybridContainer;
- (void)setLynxData:(id)arg0;
- (void)setHybridContainer:(id)arg0;
- (void)setTrackerData:(id)arg0;
- (id)trackerData;
- (id)lynxTemplate;
- (id)currentLynxUrl;
- (void)setCurrentLynxUrl:(id)arg0;
- (void)setLynxTemplate:(id)arg0;
- (id)resourceCardModel;
- (id)goodsDetailParameter;
- (void)setGoodsDetailParameter:(id)arg0;
- (void)loadLynxCardView;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (id)url;

@end
