//
//     Generated by private class-dump
//

@class NSString, AWEStableDetailPageBottomView, AWEAwemeModel, AWEAwemeDetailBottomBarCommonContext;

@interface AWEStableDetailPageBottomBarController : NSObject <AWEAwemeDetailBottomBarController> {
    AWEAwemeDetailBottomBarCommonContext *_context;
    AWEAwemeModel *_awemeModel;
    AWEStableDetailPageBottomView *_bottomView;
    long long _currentIndex;
}

@property (retain, nonatomic) AWEAwemeDetailBottomBarCommonContext *context;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEStableDetailPageBottomView *bottomView;
@property (nonatomic) long long currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (void)updateBottomBarWithAweme:(id)arg0 updateTiming:(long long)arg1;
- (BOOL)canShowBottomBarForAweme:(id)arg0;
- (void)updateCurrentIndexPath:(long long)arg0;
- (void)clickBottomView;
- (void).cxx_destruct;
- (long long)currentIndex;
- (void)setContext:(id)arg0;
- (void)setCurrentIndex:(long long)arg0;
- (id)context;
- (id)bottomView;
- (void)setBottomView:(id)arg0;
- (Class)contextClass;
- (id)bottomBarView;

@end