//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface AWELongPressShareOutsideViewModel : AWELongPressPanelBaseViewModel {
    NSMutableArray *_items;
}

@property (retain, nonatomic) NSMutableArray *items;

+ (id)longPressPanelViewModel;

- (BOOL)needShow;
- (id /* block */)shareConfigurationHandler;
- (void)configVM;
- (BOOL)needShowForScene:(unsigned long long)arg0;
- (void)shareOutside;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;

@end
