//
//     Generated by private class-dump
//

@class IESECSlidingTabbarView, NSString;
@protocol IESECLiveStoreFilterViewDelegate;

@interface IESECLiveStoreFilterView : UIView <IESECSlidingTabbarDelegate> {
    id<IESECLiveStoreFilterViewDelegate> _delegate;
    IESECSlidingTabbarView *_tabbarView;
}

@property (retain, nonatomic) IESECSlidingTabbarView *tabbarView;
@property (weak, nonatomic) id<IESECLiveStoreFilterViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ indexChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabbarView;
- (void)setTabbarView:(id)arg0;
- (void)tabbarTappedAtIndex:(unsigned long long)arg0;
- (void)reloadWithSortTypeArray:(id)arg0 currentSortType:(long long)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setupViews;

@end
