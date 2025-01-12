//
//     Generated by private class-dump
//

@class AWEHotSearchInnerBottomView, AWEHotSpotInnerBottomBarContext, NSString;

@interface AWEHotSpotInnerBottomBarController : NSObject <AWEAwemeDetailBottomBarController> {
    AWEHotSearchInnerBottomView *_innerBottomView;
    AWEHotSpotInnerBottomBarContext *_context;
}

@property (retain, nonatomic) AWEHotSearchInnerBottomView *innerBottomView;
@property (retain, nonatomic) AWEHotSpotInnerBottomBarContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)arg0 updateTiming:(long long)arg1;
- (BOOL)canShowBottomBarForAweme:(id)arg0;
- (void)bottomBarAddedToContainer:(id)arg0;
- (id)innerBottomView;
- (void)setInnerBottomView:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (Class)contextClass;
- (id)bottomBarView;

@end
